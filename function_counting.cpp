// #include<iostream>
// using namespace std;
// void counting(int n)
// {
//     if(n>0)
//     {
//         cout<<n<<" ";
//         counting(n-1);
//     }
// }
// int main()
// {
//     counting(20);
// }
#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n>0)
    {
        return n*factorial(n-1);

    }
    else 
    {
        return 1;
    }    
}
int main()
{
    int n;
    cout <<"Enter the number which factoral you want="<<endl;
    cin>>n;
    cout<<"factorail of "<<n<<" is "<<factorial(n)<<endl;
    return 0;
}