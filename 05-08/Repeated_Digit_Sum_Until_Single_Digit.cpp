#include <iostream>
using namespace std;
void repeated_sum(int num)
{

    while (num >= 10)
    {
        int sum = 0;
        while (num > 0)
        {

            int digit = num % 10;

            sum += digit;
            num = num / 10;
        }
        cout << sum << endl;
        num = sum;
    }
}
int main()
{
    int num;
    cin >> num;
    repeated_sum(num);

    return 0;
}