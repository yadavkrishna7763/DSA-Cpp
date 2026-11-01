#include <iostream>
using namespace std;
void sumatDifferent(int num)
{

    int odd_sum = 0;
    int even_sum = 0;
    int position = 1;
    while (num > 0)
    {

        int digit = num % 10;
        if (position % 2 == 1)
        {
            odd_sum = odd_sum + digit;
        }
        else
        {
            even_sum = even_sum + digit;
        }

        num = num / 10;
        position++;
    }
    cout << odd_sum << endl;
    cout << even_sum << endl;
}
int main()
{
    int num;
    cin >> num;
    sumatDifferent(num);

    return 0;
}