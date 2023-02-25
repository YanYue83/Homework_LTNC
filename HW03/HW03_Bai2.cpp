#include <iostream>
#include <string>

using namespace std;

int main ()
{

   //Bai 2_ Xau doi xung
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


    return 0;
}
