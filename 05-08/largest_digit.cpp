#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Num ";
    cin >> num;
    int Lnum=9;
    while (num > 0)
    {

       int digit = num % 10;
        if (digit <= Lnum)
        {
            Lnum=digit;
        }
        num =num/10;
    }
    cout << Lnum;

    return 0;
}
/*Largest digit: int Lnum = 0; aur if (digit > Lnum)



Smallest digit: int Snum = 9; aur if (digit < Snum)*/