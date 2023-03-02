#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int RAND(int N) {
    srand((int)time(0));
    int x = rand()%N;
    return x;
}
int main ()
{
    int a; cin >> a;
    cout << RAND(a);
}
