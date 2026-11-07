#include <iostream>
using namespace std;
int sum(int arr[], int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum = sum +arr[i];
        
    }
    return sum;
}
int main(){
    int arr[4];
    for (int i=0;i<4;i++){
        cin>>arr[i];
    }

    cout<<sum(arr,4);
    return 0;
}