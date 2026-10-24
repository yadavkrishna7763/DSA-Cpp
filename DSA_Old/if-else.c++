#include <iostream>
using namespace std;
bool evenOdd(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cin >> n;
    int c = evenOdd(n);
    cout << c << endl;
    return 0;
}