
#include <iostream>
using namespace std;


int add(int num)
{
    int result = 0;

    while (num > 0)
    {
        int digit = num % 10;
        result = result + digit;
        num = num / 10;
    }

    return result;
}

int main()
{
    int num;
    cout << "Enter Num: ";
    cin >> num;

    cout << add(num);

    return 0;
}
