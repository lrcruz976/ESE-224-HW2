#include <iostream>
using namespace std;

int main() {
    //get user input
int n;
cout << "Enter positive integer";           //user interface
cin >> n;

//initialize sum
int sum = 0;

//for loop now
for (int i = 1; i <= n; i++) {
    if(i % 2 == 0){sum = i + sum;}
    else continue;
    
}
 cout << "sum = " << sum << endl;

 return 0;
}