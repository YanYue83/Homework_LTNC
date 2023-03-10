#include <iostream>

using namespace std;
//bai 4, tim kiem nhi phan, truy nhap mang bang con tro
int BinarySearch(int key, int *p, int l, int r)
{
    if (l>r) return -1;
    int mid = (r-l)/2;
    if(*(p+mid) == key ) return mid;
    else {
        if(*(p+mid) > key) return BinarySearch(key, p, mid+1, r);
        else return BinarySearch(key, p, l, mid);
    }
}
int main ()
{
    int key, *p, n;
    cin >> key >> n;
    for (int i =0; i<n; i++) {
        cin >> *(p+i);
    }
    int a = BinarySearch(key, p, 0, n);
    cout << a+1 << endl;
    system("pause");
    return 0;
}
