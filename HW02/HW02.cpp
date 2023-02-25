#include <iostream>
using namespace std;

int main ()
{
	// Bai 1
	int n;
	cin >> n;
	bool kt = true;
	if (n<=1) {
		kt = false;
	}
	else {
		for (int i = 2; i< n; i++) {
			if (n%i==0) {
				kt = false; break;
			} 
		}
	}
	if(kt) cout << "yes";
	else cout << "no";
	

	
	//Bai 2
	
	int N; cin >> N;
	for (int i= N; i>0; i--) {
		for (int j = 0; j<N-i; j++) {
			cout << " ";
		}
		for (int k = N; k>N-i; k--) {
			cout <<"*";
		}
		cout << endl;
	}

	
	//Bai 3
	int N; cin >> N;
	
	for (int i = 0; i<N; i++) {
		
		for (int k = 1; k<N-i; k++) {
			cout << " ";
		}
		for (int j = -i; j<=i; j++) {
			cout << "*";
		}	
		cout << endl;
	}
	
	//Bai 4	
	int N; cin >> N;
	for (int i =N-1; i>=0; i--) {
		
		for (int k =1; k<N-i; k++) {
			cout << " ";
		}
		
		for (int j = -i; j<=i; j++) {
			cout << "*";
 	}
		cout << endl;
	}

	//bai 6
	int N; cin >> N;
	for (int i =0; i<N; i++) {
		for (int j =0; j<N; j++) {
			cout << ( i+j)%N + 1 << " ";
		}
		cout << endl;
	}


	// bai 7(*)
	int n; cin >> n;
	while (n>0) {
		int m = n;
		cin >> n;
		if (n!=m) cout << m << " ";
	}
	cout << n;
	
	return 0;
}
