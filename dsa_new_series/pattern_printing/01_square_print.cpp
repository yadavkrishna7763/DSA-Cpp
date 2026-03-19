#include <iostream>
using namespace std;
void print1(int n)
{
    for(int i=0;i<n;i+=1)
    {
        {
            for(int j=0; j<n; j+=1)
            {
                cout<<"*";
            
            }
            cout << endl;
        }
    }

}
int main()
{
    int n;
    cout<<"Enter the size of square: ";
    cin>> n;
    print1(n);
    
    return 0;

}