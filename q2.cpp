# include <iostream>
using namespace std;

int main() {

    int n;
    cout << "enter a non negative integer: ";
    cin >> n;

    //validate input
    // if n < 0, print error and exit
    if(n<0){cout << " error "; exit;}
    else {
        long long fact = 1;

        //step 4 loop from 1 to n
        for (int i= 1; i <=n; i++){
            fact = fact * i;
        }
        cout << n << "! = " << fact << endl;
    }
    return 0;

}