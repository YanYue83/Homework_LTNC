#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
    Point(int _x, int _y) {
        x = _x;
        y = _y;
    }
};
//Cach 1
/*
void Print(Point a) {
    cout << "(" << a.x << "," << a.y << ")";
}
*/
// cach 2: truyen tham bien

void Print (const Point &a) {
    cout << "(" << a.x << "," << a.y << ")";
}

//A3
Point mid_point(const Point& A, const Point& B)
{
    Point mid((A.x + B.x)/2, (A.y + B.y)/2);

    return mid;
}

int main ()
{
    int x, y;
    cin >> x >> y;
    //cach 1
    // Print(Point(x,y));

    //Cach 2
        Point a = Point(x,y);
        Print(a);
    cout << "\n" << &a.x << "\n" << &a.y << endl << &a;
    //Nhan xet
    /*
  A4  Truong x cua Point co dia chi giong dia chi Point
    Truong y cua Point co dia chi cach Point 8 byte (= kich thuoc cua 1 bien kieu double)

    */
}
