#include<iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

//Password

int main()
{
    int n; cin >> n;
    vector<string> arr(n);
    for (int i =0; i<n; i++) {
        cin >> arr[i];
    }
    for (int i =0; i< n; i++) {
        reverse(arr[i].begin(), arr[i].end());
        for (int j =0; j<n; j++) {
            if (arr[j] == arr[i] && i!= j) {
                int len = arr[j].size();
                cout << len << " " << arr[j][len/2] << "\n";
                break;
            }
        }

    }
    system ("pause");

    return 0;
}
