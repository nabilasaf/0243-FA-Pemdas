#include <iostream>
using namespace std;
class MasukUniversitas {
 int uangPendaftaran;
 int uangSemesterPertama, uangBangunan, tampilkanTotalBiaya, hitungkanTotalBiaya;
public:
 MasukUniversitas() {
 uangPendaftaran = 0;
 uangSemesterPertama = 0;
 uangBangunan = 0;
 }
 virtual void namaJalurMasuk() { 
    cout << "Jalur Masuk" << endl;
    cout << "------------------" << endl;
    return; }
 // isi disini dengan fungsi virtual yang dibutuhkan
 void setUangPendaftaran(int nilai) {
 this->uangPendaftaran = nilai;
 }
 float getUangPendaftaran() {
 return uangPendaftaran;
 }
 // isi setter dan getter variable yang dibutuhkan di bawah ini
 void setuangSemesterPertama(int nilai) {
 this->uangPendaftaran = nilai;
 }
 float getuangSemesterPertama() {
 return uangPendaftaran;
 }

  void setuangBangunan(int nilai) {
 this->uangPendaftaran = nilai;
 }
 float getuangBangunan() {
 return uangPendaftaran;
 }
};
class SNBT : public MasukUniversitas {
 public:
        void namaJalurMasuk() {
            cout << "Jalur SNBT" << endl;
            cout << "------------------" << endl;
        }

         

        int MasukUniversitas() { 
        return getUangPendaftaran() + getuangSemesterPertama() + getuangBangunan();
        }

        void display(){
        cout << "=================================" << endl;
        cout << "Tampilkan Total Biaya = " << this->MasukUniversitas() << endl;
        cout << "=================================" << endl;
        } 
};
class SNBP : public MasukUniversitas {
 public:
        void namaJalurMasuk() {
            cout << "Jalur SNBP" << endl;
            cout << "------------------" << endl;
        }

         

        int MasukUniversitas() { 
        return getUangPendaftaran() + getuangSemesterPertama();

        void display() {   
        cout << "=================================" << endl;
        cout << "Tampilkan Total Biaya = " << this->MasukUniversitas() << endl;
        cout << "=================================" << endl;
        }
    }
};
int main() {
 MasukUniversitas* hitungTotalBiaya;
    SNBT a;
    SNBP b;

    hitungTotalBiaya = &a;
    hitungTotalBiaya->tampilkanTotalBiaya();
    hitungTotalBiaya = &b;
    hitungTotalBiaya->tampilkanTotalBiaya();
   
    return 0;
}