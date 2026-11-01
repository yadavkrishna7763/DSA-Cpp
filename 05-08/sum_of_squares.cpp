#include <iostream>
using namespace std;
int sumofSquares(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        int square = digit * digit;
        sum = sum + square;
        num = num / 10;
    }
    return sum;
}
int main()
{
    int num;
    cin >> num;

   int result =sumofSquares(num);
   cout<< result << endl;

    return 0;
}