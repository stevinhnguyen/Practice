//Write a program that, given two positive integers, will calculate and print the greatest common divisor of the two.

#include <iostream>
using namespace std;

unsigned int GCD(unsigned int A, unsigned int B)
{
    return B == 0 ? A : GCD(B, A % B);
}

int main()
{
    unsigned int X;
    unsigned int Y;
    cout << "Enter 2 numbers and I will find the greatest common divisor" << endl;
    cout << "Enter 1st number: ";
    cin >> X;
    cout << "Enter 2nd number: ";
    cin >> Y;
    unsigned int Big = GCD(X, Y);
    cout << "Greatest common divisor is " << Big << endl;
}