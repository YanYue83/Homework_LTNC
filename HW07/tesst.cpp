#include <iostream>
#include <time.h>

using namespace std;

int main()
{
srand(time(0));
    int kq = rand()%6+1;
    cout << kq;
}
