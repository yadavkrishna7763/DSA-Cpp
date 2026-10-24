#include <iostream>
using namespace std;
void changeval(int &num)
{
    num=30;
}
int main()
{
    int value=20;
    changeval(value);
    cout<<value;
    return 0;
}