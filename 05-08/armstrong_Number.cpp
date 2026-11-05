#include <iostream>
using namespace std;
int count_digit(int num)
{
    int count = 0;
    while (num > 0)
    {

        count++;
        num = num / 10;
    }

    return count;
}

int sum_of_powers(int num, int counting)
{
    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
       

        for (int i = 0; i < counting; i++)
        {
            int multiply= digit *digit;
            sum= sum+ multiply;
        
        }

        num = num / 10;
        
    }
    return sum;
}
int main()
{
    int num;
    cin >> num;
    int counting = count_digit(num);
    cout << counting << endl;
    cout << sum_of_powers(num, counting);
    return 0;
}