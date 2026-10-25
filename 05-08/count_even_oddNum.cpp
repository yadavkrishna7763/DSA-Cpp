#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Num : ";
    cin >> num;
    int even = 0;
    int odd = 0;
    int sumE=0;
    int sumO=0;
    while (num > 0)
    {
        int digit = num % 10;// yeha hame last digit mila
        if (digit % 2 == 0)
        {
            even++;
            sumE+=digit;
            
        }
        else
        {
            odd++;
            sumO+=digit;

        }
        num=num/10;
        
    }
    cout << "Nuber of even=" << even << endl
             << "Number of odd=" << odd << endl
             <<"sum of even num = "<< sumE<<endl
             <<"sum of odd num = "<< sumO<<endl;
             

    return 0;
}