#include <iostream>
#include <cmath>

using namespace std;

int C(int k, int n) {
 if (k == 0 || k == n) return 1;
 if (k == 1) return n;
 return C(k - 1, n - 1) + C(k, n - 1);
}

int kiemTra(int k, int n) {
    if (0<= k && k<= n && n >= 1 && n <=20)
    return 1;
    else return 0;
}

int main () {
    int n, k;
    cin >> n >> k;
    while (k!=-1 && n!= -1) {
        cout << C(k, n) << endl;
        cin >> n >> k;
    }
    return 0;
}
