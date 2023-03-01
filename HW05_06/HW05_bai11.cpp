#include <iostream>
#include <vector>

using namespace std;

void Doiso(long N) {
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

int Doiso_2to10(long x) {


}
