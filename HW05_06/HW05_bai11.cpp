#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


void Doiso_10to2(int N) {
    N = abs(N);
    vector<int> A;
    while (N>0) {
        int r = N%2;
        A.push_back(r);
        N/=2;
    }
   int s = A.size();
   for (int i =s-1; i>=0; i--) {
       cout << A[i];
   }
}

void Doiso_2to10(long x) {
    vector<int> A;
    int sum = 0;
    while (x>0) {
        int temp = x%10;
        A.push_back(temp);
        x/= 10;
    }
    int len = A.size();
    for (int i =0; i<len; i++) {
        sum+= A[i]*pow(2,i);
    }
    cout <<  sum;
}

int main () {
    int N; cin >> N;
    Doiso_2to10(N);
    Doiso_10to2(N);
return 0;
}
