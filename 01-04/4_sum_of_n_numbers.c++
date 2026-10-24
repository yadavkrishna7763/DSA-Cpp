#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter num";
    cin >> num;
    int result = 0;
    for (int i = 1; i <= num; i++)
    {
        result = result + i;
    }
    cout << "Sum of 1 to " <<num<< " is = "<< result << endl;
    return 0;
}