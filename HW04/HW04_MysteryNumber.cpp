#include <iostream>

using namespace std;

int main ()
{
    int N; cin >> N;
    int A[N], B[N+1];
    int sumA = 0, sumB = 0;
    for (int i =0; i< N; i++) {
        cin >> A[i];
        sumA += A[i];
    }
    for (int j =0; j<= N; j++) {
        cin >> B[j];
        sumB += B[j];
    }
    cout << sumB-sumA;
    return 0;
}
