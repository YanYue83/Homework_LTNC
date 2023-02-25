#include <iostream>
#include <string>

using namespace std;

int main ()
{

   //Bai 2
    bool kt = true;
    string A;
    getline(cin, A);
    int len = A.length();
    for (int i=0; i<= len/2; i++) {
      if (A[i] != A[len-i-1])
        kt = false ; break;
    }
    if (kt) cout << "Yes" ;
    else cout << "No";

    //bai 4
    int m, n;
    cin >> m >> n;
    char Map[m][n];
    for (int i = 0; i < m ; i++) {
        for (int j = 0; j < n; j++) {
            cin >> Map[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i< m; i++) {
        for (int j =0 ; j < n; j++) {
            if (Map[i][j] == '*')
                cout << Map[i][j] << " ";
            else {
                int dem = 0;
                if (Map[i-1][j-1] == '*') dem ++;
                if (Map[i-1][j] == '*')  dem++;
                if (Map[i-1][j+1] == '*') dem ++;
                if (Map[i][j-1] == '*') dem ++;
                if (Map[i][j+1] == '*') dem ++;
                if (Map[i+1][j-1] == '*') dem ++;
                if (Map[i+1][j] == '*') dem ++;
                if (Map[i+1][j+1] == '*') dem ++;
                cout << dem << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
