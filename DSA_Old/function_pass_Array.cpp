#include<iostream>
using namespace std;
void myarry(int arr[5])
{
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
   int  arry[]={1,3,5,6,3};
   myarry(arry);

    return 0;
}