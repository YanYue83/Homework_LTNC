#include <iostream>

using namespace std;

int main()
{
     int* p = new int;
     int* p2 = p;
     *p = 10;
     delete p; // Loi khi p va p2 cung duoc cap phat cung mot vung nho, lenh nay xoa mat vung nho ma p2 duoc cap phat
     *p2 = 100; // Loi khi gan gia tri vao vung nho khong con hop le
     cout << *p2; //Loi in ra gia tri tai vung nho khong con hop le
     delete p2;

}
