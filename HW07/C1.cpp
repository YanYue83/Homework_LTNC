#include <iostream>
#include <time.h>

using namespace std;

int Doxucxac()
{
    srand(time(0));
    int kq = rand()%6+1;
    return kq;
}

int main()
{
    //Cach A
    int *p1, *p2;
    int a = 0, b =0;
    p1 = &a; p2 = &b;

    *p1 = Doxucxac();
    cout << "Xuc xac nguoi choi 1: " << *p1 << "       Tong nguoi choi 1: " << *p1 << endl;
    *p2 = Doxucxac();
    cout << "Xuc xac nguoi choi 2: " << *p2 << "       Tong nguoi choi 1: " << *p2 << endl;
    while ((*p1) <=100 || (*p2) <= 100) {

        int x = Doxucxac();
        cout << "Xuc xac nguoi choi 1: " << x << "       ";
        *p1 +=x;
        cout << "Tong nguoi choi 1 : " << *p1 << endl;
        int y = Doxucxac();
        cout << "Xuc xac nguoi choi 2: " << y << "       ";
        *p2 += y;
        cout << "Tong nguoi choi 2 : " << *p2 << endl;

        if(*p1 >= 100) {
            cout << "Nguoi 1 thang" << endl;
            break;}
        if(*p2 >= 100) {
            cout << "Nguoi 2 thang " << endl; break;
    }
    }
    return 0;
}
