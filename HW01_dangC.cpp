
#include <bits/stdc++.h>
using namespace std;
int main () {
	//bai 26
/	int N;
	cin >> N;
	int x; cin >> x;
	long tong = x;
	int min = x, max = x;
	for (int i =1; i<=N-1; i++) {
		cin >> x;
		tong += x;
		if(x>= max) {
			max =x;
		}
		if (x <= min) {
			min = x;
		}
	}
	float ave = (float)tong/N;
	cout << "Mean: " << ave << endl;
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	*/
	
	
	// bai 29
/	int N; cin >> N;
	for (int i=1; i<=N; i++) {
		for (int j=1; j<=i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	*/
	
	//bai 30
	
/	int N; cin >> N;
	for (int i=1; i<=N; i++) {
		for (int j=N; j>=i; j--) {
			cout << "*";
		}
		cout << endl;
	}
	*/
	
/	//bai 27
	int N; cin >> N;
	while ( N != -1) {
		if (N<0 || N%5 != 0) {
			cout << -1 << endl;
				}
		else {
		
		cout << N/5 << endl;
	}
		cin >> N;
	}
	cout << "Bye";
	*/
	
	//Bai 28
	for (int i=0; i<24; i++) {
		if (i==0) {
			cout << "12 midnight" << endl;
		}
		else {
		if (i>=1 & i <= 11) {
			cout << i <<"am" << endl;
		}
		if (i == 12) {
			cout << "12 noon" << endl;
		} 
		if (i>12 & i<=23) {
			cout << i <<"pm" << endl;
		}
	}
}
	return 0;
}


