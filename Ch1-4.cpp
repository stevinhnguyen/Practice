//Write a program that computes and prints the largest prime number that is smaller than a number provided by the user, which must be a positive integer

#include <iostream>
using namespace std;

int LargePrime(int Value)
{
    while (Value >= 2)
    {
        if (Value == 2 || Value == 3)
        {
            return Value;
        }
        if (Value % 2 == 0)
        {
            Value--;
            continue;
        }
        else
        {
            bool NotPrime = false;
            int Half = Value / 2;
            if (Half % 2 == 0)
            {
                Half++;
            }
            for (int i = Half; i > 3; i -= 2)
            {
                if (Value % i == 0)
                {
                    NotPrime = true;
                    break;
                }
            }
            if (NotPrime)
            {
                Value--;
                continue;
            }
            else
            {
                return Value;
            }
        }
    }
    return -1;
}

int main()
{
    cout << "I will find the largest prime number smaller than the inputed number." << endl;
    cout << "Input value: ";
    int Value;
    cin >> Value;
    cout << LargePrime(Value) << endl;
}