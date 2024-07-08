#include <iostream>
using namespace std;

class MasukUniversitas {
    private: 
     int temp;
     int uangPendaftaran, uangSemesterPertama, uangBangunan, totalBiaya;
    public:
      void setuangPendaftaran(int nilai) {   
        this->uangPendaftaran = nilai;}
      void setuangSemesterPertama(int nilai) {   
        this->uangSemesterPertama = nilai;}
      void setuangBangunan(int nilai) {   
        this->uangBangunan = nilai;}
      void settotalBiaya(int nilai) {   
        this->totalBiaya = nilai;}

     int getuangPendaftaran() {     
        return uangPendaftaran;
     }
     int getuangSemesterPertama() {     
        return uangSemesterPertama;
     }
      int getuangBangunan() {     
        return uangBangunan;
     }
     int gettotalBiaya() {     
        return totalBiaya;
     }
       virtual void namaJalurMasuk() = 0;  
       virtual void hitungTotalBiaya() = 0;
       virtual void tampilkanTotalBiaya() = 0;
       virtual void input() = 0;
};

class SNBT : public MasukUniversitas {
    public:
        void namaJalurMasuk() {
            cout << "Jalur SNBT" << endl;
            cout << "------------------" << endl;
        }

         void input() {  
        cout << "nilai uangPendaftaran = ";
        cin >> temp;
        setuangPendaftaran(temp);

        cout << "nilai uangSemesterPertama = ";
        cin >> temp;
        setuangSemesterPertama(temp);

         cout << "nilai uangBangunan = ";
        cin >> temp;
        setuangBangunan(temp);
        }

        int MasukUniversitas() { 
        return getuangPendaftaran() + getuangSemesterPertama() + getuangBangunan();

        void display() {   
        cout << "=================================" << endl;
        cout << "Tampilkan Total Biaya = " << this->MasukUniversitas() << endl;
        cout << "=================================" << endl;
        }
    }

    class SNBP : public MasukUniversitas {
    public:
        void namaJalurMasuk() {
            cout << "Jalur SNBP" << endl;
            cout << "------------------" << endl;
        }

         void input() {  // Polymorphy function input
        cout << "nilai uangPendaftaran = ";
        cin >> temp;
        setuangPendaftaran(temp);

        cout << "nilai uangSemesterPertama = ";
        cin >> temp;
        setuangSemesterPertama(temp);
        }

         int MasukUniversitas() { 
        return getuangPendaftaran() + getuangSemesterPertama();
         }
        void display() {   
        cout << "=================================" << endl;
        cout << "Tampilkan Total Biaya = " << this->MasukUniversitas() << endl;
        cout << "=================================" << endl;
        }
};

int main() {
    MasukUniversitas = new SNBT;
    MasukUniversitas->input();
    MasukUniversitas->display();

    MasukUniversitas = new SNBP;
    MasukUniversitas->input();
    MasukUniversitas->display();

    return 0;
}