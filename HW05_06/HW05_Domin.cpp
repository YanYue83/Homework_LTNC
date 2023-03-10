#include <iostream>
#include <time.h>

using namespace std;
void Map(int m, int n, int K)
{
    srand((int)time(0));
    int A[m][n];
    for (int i = 0; i< m; i++) {
        for (int j =0; j< n; j++)
            A[i][j] = 0;
    }
    while (K>=0) {
        int x = rand()%(n+1);
        int y = rand()%(m+1);
        if(A[x][y]!=1) {
            A[x][y]++;
            K--; }
    }
  /*  for (int i =0; i< m; i++) {
        for (int j =0; j< n; j++)
        cout << A[i][j] << " ";
        cout << endl;
    }
    */
}
/*
void CheckMin(int x, int y)
{

    int dem = 0;
    if(A[x][y] == 1) {
    cout << "YOU'RE DEAD!";
    for (int i =0; i <m; i++) {
        for (int j =0; j< n; j++)
            cout << A[i][j] << " ";
        cout << endl; }
        }
    else {
        cout << A[x][y] << endl;
        cout << dem;
    }
}
*/
int main ()
{
int  m, n, K; cin >> m >> n >> K;
Map(m, n, K);
}
