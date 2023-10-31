// Write a program that will, given two or more positive integers, calculate and print the least common multiple of them all.

#include <iostream>
#include <vector>
using namespace std;

int LCM(vector<int> List, int Large, int Round)
{
    int Count = 0;
    while (Count != List.size())
    {
        Count = 0;
        for (int i = 0; i < List.size(); i++)
        {
            if (List[i] == 0)
            {
                return 0;
            }
            if ((Large * Round) % List[i] == 0)
            {
                Count++;
            }
            else
            {
                Round++;
                break;
            }
        }
    }
    return Large * Round;
}

int main()
{
    int Size;
    do
    {
        cout << "I will find the LCM for the list of numbers provided. Enter 0 to quit." << endl;
        cout << "Enter total number in list: ";
        cin >> Size;
        cout << "Now enter the numbers line by line:" << endl;
        vector<int> List;
        int Val;
        int Large = -1;
        for (int i = 0; i < Size; i++)
        {
            cin >> Val;
            if (Val > Large)
            {
                Large = Val;
            }
            List.push_back(Val);
        }
        int Multiple = LCM(List, Large, 1);
        cout << "LCM: " << Multiple << endl;
    } while (Size != 0);
}