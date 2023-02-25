#include <bits/stdc++.h> 
using namespace std;
int main ()
{
	//bai 13 Tinh khoang cach diem (x,y) toi goc toa do
	int x, y ;
	cin >> x >> y;
	float  d = sqrt( x*x + y*y ) ;
	cout << fixed << setprecision(2) << d;
*/

	//bai 16 _ Kiem tra ba so bang nhau
	int x , y , z;
	cin >> x >> y >> z;
	if (x==y && y ==z) {
		cout << "true";
	}
	else cout << "false" ;
*/
	// bai 15_FibonacciWord
	
	string a1 = "a", a2 = "b";
	cout << a1 << endl << a2 << endl;
	for (int i = 2; i < 11; i++) {
		string a = a2+a1;
		cout << a << endl;
		a1 = a2; a2 = a;
	}
*/

	// bai 17 Nam nhuan
	int y ; cin >> y;
	if (y%400 == 0 || (y%4==0 && y%100 != 0)) {
		cout << "true";
	}
	else cout << "false";
	
	*/
	
	// bai 18 Eculid Distance
	
	float x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	float d = sqrt( pow(x1-x2,2) + pow(y1-y2,2)) ;
	cout << fixed << setprecision(2) << d;
	
*/
	//bai 19 Ordered
	int x , y, z ;
	cin >> x >> y >> z;
	bool b = false;
	if ( (x < y && y < z) || (x > y && y > z) ) {
		b = true;
	}
	cout << b;
	*/
	
	//bai 20
	int x, y;
	cin >> x >> y;
	if (x%7==0 && y%7==0) cout << "true";
	else cout << "false";
	*/
	// bai 21
	double a, b, c;
	cin >> a >> b >> c;
	double s = (a+b+c)/2;
	cout << sqrt(s*(s-a)*(s-b)*(s-c));
	*/
	
	// bai 22
	double height, weight;
	cin >> height >> weight;
	cout << "BMI: " << weight/(height*height);
*/
	
//	bài 23
	int a, b;
	cin >> a >> b;
	if ((abs(a)-abs(b)>0 && a+b > 0) || (abs(a)-abs(b)<0 && a+b < 0))
		cout << a;
	else cout << b;
	*/
	
	// bai 24
	int day, month, year;
	cin >> day >> month >> year;
	int n = ((day + month*2 + 3*(month+1))/5 + year * year/4)%7;
	cout << n;
	switch (n) {
	case 0: { cout << "Sunday";
		break;
	}
	case 1: {
		cout << "Monday";
		break;
	}
	case 2: {
		cout << "Tuesday";
		break;
	}
	case 3: {
		cout << "Wednesday";
		break;
	}
	case 4: {
		cout << "Thursday";
		break;
	}
	case 5: {
		cout << "Friday";
		break;
	}
	default: { cout << "Saturday";
		break;
	}
}

	return 0;
}
