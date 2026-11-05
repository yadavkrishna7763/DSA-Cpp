#include <iostream>
using namespace std;
void increasing(int num)

{

    while (num > 0)
    {
        int digit = num % 10;
        int left_digit=0;
        int right_digit= digit;


        if (digit > right_digit)
        {
            cout << "False";
        }
        else
        {
            left_digit=right_digit;
        }
        num = num / 10;
    }
    cout<< "increasing";
}
int main()
{
    int num;
    increasing(num);
    return 0;
}