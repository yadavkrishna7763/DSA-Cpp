#include <iostream>
using namespace std;

void countNum(long long num)
{
    if (num == 0)
    {
        cout << 1;
        return;
    }

    int count = 0;

    while (num > 0)
    {
        num = num / 10;
        count++;
    }

    cout << count;
}

int main()
{
    long long num;

    cout << "Enter Num: ";
    cin >> num;

    countNum(num);

    return 0;
}