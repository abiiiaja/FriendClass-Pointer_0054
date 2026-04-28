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
}