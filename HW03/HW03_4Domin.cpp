#include <iostream>
using namespace std;
int main ()
{

   //bai 4_ Do min
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
