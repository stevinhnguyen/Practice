//Write a program that calculates and prints the sum of all the natural numbers divisible by either 3 or 5, up to a given limit entered by the user.


#include <iostream>
using namespace std;

int main()
{
    cout << "I will find the sum of all numbers that are divisible by 3 or 5 up to you desired limit." << endl;
    cout << "Please enter your number limit:";
    int Limit;
    cin >> Limit;
    int total = 0;
    int count = 0;
    for (int i = 5; i <= Limit; i += 5)
    {
        count += i / 5;
    }
    total += count * 5;
    count = 0;
    for (int i = 3; i <= Limit; i += 3)
    {
        if (i % 5 != 0)
        {
            count += i / 3;
        }
    }
    total += count * 3;
    cout << "The sum is " << total << "." << endl;
}