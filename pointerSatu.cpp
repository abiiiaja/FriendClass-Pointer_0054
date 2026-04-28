#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "No Induk = " << nim << endl;
    }
};

int main(){
    mahasiswa Mhs{1};
    Mhs.showNim();

    mahasiswa &refmhs = Mhs;
    refmhs.nim = 2;
    Mhs.showNim();

    mahasiswa *pmhs = &Mhs;
    pmhs->nim = 3;
    pmhs->showNim();
    return 0;
}