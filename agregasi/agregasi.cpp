#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main()
{
    ibu* varIbu = new ibu("dini");
    ibu* varIbu2 = new ibu("novi");
    anak* varAnak1 = new anak("tono");
    anak* varAnak2 = new anak("rini");
    anak* varAnak3 = new anak("dewi");

    varIbu->tambahAnak(varAnak1);       //harus diisi varAnak1 (argumen) karena methodenya memiliki parameter, akan error ketika kosong
    varIbu->tambahAnak(varAnak2);
    varIbu2->tambahAnak(varAnak3);
    varIbu2->tambahAnak(varAnak1);

    varIbu->cetakAnak();        //cetakAnak tidak perlu diisi karena tidak ada parameter
    varIbu2->cetakAnak();

    delete varIbu;
    delete varIbu2;
    return 0;
}
