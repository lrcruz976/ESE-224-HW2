#include <iostream>
using namespace std;

int main() {
    //infinite loop
    int n;
    long a;
    long b;
    for(;;) {
        // step 2: display menu
        cout << "1. Add, 2. Subtract, 3. Multiply, 4. Divide, and 5. Exit";
        // step 3: read choice
        cin >> n;

        //step 4: use switch
        switch (n) {
            case 1:

            cout << "enter a number";
            cin >> a;
            cout << "enter another number";
            cin >> b;

            cout << a+b; 


                break;
            case 2:

            cout << "enter a number";
            cin >> a;
            cout << "enter another number";
            cin >> b;

            cout << a-b; 

                break;
            case 3:

            cout << "enter a number";
            cin >> a;
            cout << "enter another number";
            cin >> b;

            cout << a*b; 

                break;
            case 4:

            cout << "enter a number";
            cin >> a;
            cout << "enter another number";
            cin >> b;

            cout << a/b; 
                
                break;
            case 5:

                return 0;
            
        }

    }
    return 0;

}