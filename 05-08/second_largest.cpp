#include <iostream>
using namespace std;
void second_largest(int num)
{
    int largest = 0;
    int second = 0;
    while (num > 0)
    {
        int digit = num % 10;
        if (digit > largest)
        {
            second = largest;
            largest = digit;
        }
        else
        {
            if (digit < largest && digit > second)
            {
                second = digit;
            }
        }
        num = num / 10;
    }
    cout << largest << endl;
    cout << second << endl;
}
int main()
{
    int num;
    cin>>num;
    second_largest(num);
    return 0;
}