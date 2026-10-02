#ifndef COMPLEX_H
#define COMPLEX_H

 //constructors
 class Complex{

   private:
   double real, imag;

   public:
   Complex(double r=0.0, double i=0.0);
 
    //operator overloads
    Complex operator+(const Complex& rhs) const;
    Complex operator-(const Complex& rhs) const;
    Complex operator*(const Complex& rhs) const;

    //other methods
    double amplitude() const;
    void display() const;

    //menu driven clculator
    static void runCalculator();
 };

    #endif