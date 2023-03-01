#include <iostream>

using namespace std;
int GCD(int a, int b) {
    while (b>0) {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main ()
{
    int a, b;
    cin >> a >> b;
    if (GCD(a,b) !=1) cout << a << " va " << b << " khong nguyen to cung nhau" ;
    else cout << a << " va " << b << " nguyen to cung nhau" ;
    return 0;
}
