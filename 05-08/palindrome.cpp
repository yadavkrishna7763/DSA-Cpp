#include <iostream>
using namespace std;
void reve(int num)
{
    int original = num;
    long long rev = 0;
    while (num > 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;

        num = num / 10;
    }

    if (rev == original)
    {
        cout << "Number is palindrome";
    }
    else
    {
        cout << "Number is not a palindrome";
    }
}
int main()
{
    int num;
    cin >> num;
    reve(num);
    return 0;
}