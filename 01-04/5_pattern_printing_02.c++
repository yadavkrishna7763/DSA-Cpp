#include <iostream>
using namespace std;
int main()
{
    // Pattern 1
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    // pattern 2
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // pattern 3
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    // pattern 4
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 5-i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // pattern 3
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <=5-i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}