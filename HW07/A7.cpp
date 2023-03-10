#include <iostream>
#include <string.h>

using namespace std;

int Xuli_xau(string str1, string str2)
{   int dem = 0;
    char *p1 = &str1[0], *p2 = &str2[0];
    int len1 = str1.length(), len2 = str2.length();

    if(len1 == len2) {
        return strcmp(p1, p2)+1;
    }
    else {
        if(len1 > len2) return 0;
        else {
            int a = strcmp(p1,p2);
            if(a>0) {
            return 0;
            }
        else {

            while(len1<=len2) {
            int i = str2.find(str1);
            if(i>=0) {
                    dem++;
            str2.erase(i,len1);
            len2 -=len1;
        }
        else {
            return dem; break;}
        }
        return dem;
        }
    }
}
}
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    int a = Xuli_xau(str1, str2);
    cout << a << endl;
    system("pause");
    return 0;
}
