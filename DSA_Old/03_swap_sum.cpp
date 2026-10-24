#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "enter no 1" << endl;
    cin >> num1;
    int num2;
    cout << "enter no 2" << endl;
    cin >> num2;
    int sum = num1 + num2;
    cout << "the sum of two given number is=" << sum << endl;
    // now we are going to swap the numbers
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << num1 << endl;
    cout << num2 << endl;
    return 0;
}