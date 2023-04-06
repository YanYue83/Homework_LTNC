#include <iostream>

using namespace std;

int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl; //lenh in cerr khong chay
return 0;
}
//Lenh in cerr cuoi cung khong chay do con tro c da bi xoa, ma gia tri truyen vao con tro a lay tu c nen chuong trinh khong xac dinh duoc a va in ra a


