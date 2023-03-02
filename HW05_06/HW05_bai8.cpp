#include <iostream>

using namespace std;

//khong dung ham ceil/floor
int Lamtron(double x) {
    int a = x*10;
    int temp = a%10;
    if (temp >=5)
         return (a/10)+1;
    else return a/10;
}
int main ()
{
    double X;
    cin >> X;
    cout << Lamtron(X);
    return 0;
}
