

#include "Complex.h"
#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;


    //constructors
Complex::Complex(double r, double i) : real(r), imag(i){}

    //operator overloads
    Complex Complex::operator+(const Complex& rhs) const{   
        return Complex(real + rhs.real, imag + rhs.imag);    //for complex addition, its just the real +real, and imaginary + imaginary
    }
    Complex Complex::operator-(const Complex& rhs) const{
        return Complex(real - rhs.real, imag - rhs.imag);  //complex subtratction is just the same stuff as addition
    }
    Complex Complex::operator*(const Complex& rhs) const{
        return Complex(real * rhs.real - imag * rhs.imag, real *rhs.imag + imag * rhs.real); //distributive property for complex numbers
    }

    //other methods
    double Complex::amplitude() const{
        return sqrt(real * real + imag * imag);     //amplitude fomrula that was provided in lab manual
    }
    void Complex::display() const{
        cout << real;

        if (imag >= 0)
            {cout << "+" << imag <<"i";}            //template that was specified in lab manual
            else
            {cout << "-" << -imag << "i";}         //makes sure that there are no negatives. the minus is added artificially 
            cout << endl;
    }

    

    //menu driven clculator
    void Complex::runCalculator(){          
        Complex c1, c2, r;          //r is result
    double r1, i1, r2, i2;       //these are the componentes of c1 and c2
    int op;
    while(1){                       //infinite loop
    cout << "Enter first complex number (real imag): ";     //user inteface
    cin >> r1 >> i1;
    cout << "Enter second complex number (real imag): ";        //more user interface
    cin >> r2 >> i2;
    c1 = Complex(r1, i1);       //assigns user created imaginary numbers to the complex variable we declared
    c2 = Complex(r2, i2);
    cout << "Choose operation (1 for +, 2 for -, 3 for *, 4 for amplitude, 5 for exit): ";    //user interface
    cin >> op;
    switch(op)                  //swritch statement
    {
    case 1:
        r = c1 + c2;
        r.display();                //displays r
        break;
    case 2:
        r = c1 - c2;
        r.display();
        break;
    case 3:
        r = c1 * c2;
        r.display();
        break;
    case 4:
        {int choice;
        cout << "type 1 for complex number 1 or 2 complex number 2";
        cin >> choice;

        if (choice == 1) {cout << c1.amplitude();}          //user can choose which imaginary number they want the amplitufe of:)
        else {cout << c2.amplitude();}
        break;}
    case 5:
        return;
    }

        
        

    }
}  


