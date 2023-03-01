#include <iostream>
#include <cmath>

using namespace std;
//bai 5
bool prime(int x) {
    bool kt = true;
    if (x<=1) { kt = false; }
    else {
    for (int i =2; i<= sqrt(x) ; i++) {
        if (x%i==0) {kt = false; break; }
    }
    }
    return kt;
}
int main ()
{
    int n ; cin >> n;
    int dem = 0;
    for (int i = 1; i<n; i++) {
        bool t = prime(i);
        if (t) cout << i << " ";
    }
    return 0;
}
