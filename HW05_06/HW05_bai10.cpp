#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;
void BosoRand(int N)
{
    int A[N];
    srand((int)time(0));
    for (int i = 0; i<N; i++)
    {
        A[i] = rand()%50;
    }
    for (int i =0; i< N; i++) {
        for (int j =0; j<i; i++) {
            for (int k =0; k< j; k++) {
                if( (A[k]+ A[j]+ A[i])%25 ==0 && j!=i && i!=k ) {
                    cout << A[i] << " " << A[j] << " " << A[k] << endl;
                }
            }
        }
    }
}

int main ()
{
    int N; cin >> N;
    BosoRand(N);
    system("pause");
}
