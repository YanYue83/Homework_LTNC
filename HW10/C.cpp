#include <iostream>
#include <string>
using namespace std;

struct String
{
    char *str;
    int n;
    String (const char* s) {
        int i =0, dem = 0;
        while (*(s+i) != '\0') {
        dem ++;
        i++;
    }
        n = dem;
        str= new char[n];

        for (int i =0; i<n; i++) {
            *(str+i) = *(s+i);
        }
    }

    ~String() {
        delete [] str;
    }

    void print() {
       cout <<str;
    }

    void append(const char* a) {
         int i =0, dem_a = 0;
        while (*(a+i) != '\0') {
        dem_a ++;
        i++;
    }
        int n_temp =n+dem_a;

        char* temp = new char[n_temp];

        for (int j =0;j<n; j++) {
            *(temp+j) = *(str+j);
        }
        for (int k = n_temp-n; k< n_temp; k++) {
            *(temp+k) = *(a+(n_temp-k));
        }
        str = temp;
    }
};
int main()
{
    String s("Hello");
    s.print();
    cout << endl;
    s.append(" there");
    s.print();

}
