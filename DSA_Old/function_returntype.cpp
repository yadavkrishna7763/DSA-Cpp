#include<iostream>
using namespace std;
int myfun(int x,int y)
{
    return x+y;
}
int main()
{
    cout<< myfun(11,31)<<'\n';

   int b= myfun(13,11);
   cout << b;

    return 0;
}