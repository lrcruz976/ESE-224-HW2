#include <iostream>
using namespace std;

int main() {
    //get number of termss
    int terms;
    cout <<"enter number of terms: ";
    cin >> terms;

    //initialize first two values
    long long a = 0, b = 1;

    cout << a << endl;
    cout << b << endl;
    int temp;

    
    for (int i = 0; i< terms -2; i++){
        int c = a+b;
        a = b;
        b = c;
        cout << c << endl;
    }
}