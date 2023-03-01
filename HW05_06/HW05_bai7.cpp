#include <bits/stdc++.h>
using namespace std;

 void printRow(int m, int n)
{
    for (int i =0; i< m; i++)
    cout << " ";
    for (int j =0; j<n; j++)
    cout << "*";
}
int main ()
{
    int n; cin >> n;
    for (int i =n-1; i>= 0; i--) {
        printRow(i, (n-i)*2-1);
        cout << endl;
    }

}
