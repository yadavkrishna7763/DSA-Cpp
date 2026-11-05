#include <iostream>
using namespace std;
int sum(int num)
{
    int sum = 0;

    while (num > 0)
    {
        int digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    return sum;
}
int main()
{
    int num;
    cin >> num;
    int sumOf = sum(num);
    cout << "sum of given digit is = "<<sumOf << endl;
    if (num % sumOf ==0){
        cout<<"yes it is a  HASARD Number"<< endl;

    }
    else{

        cout<< "no"<< endl;
    }
    return 0;
}