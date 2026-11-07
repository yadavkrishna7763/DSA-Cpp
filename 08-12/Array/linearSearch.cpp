#include <iostream>
using namespace std;
int LinearSearch(int arr[], int n,int key)
{
    
    for (int i = 0; i <n; i++)
    {
        if(arr[i]==key){
            return i;
        }
       
        
    }
    return -1;
}
int main(){
    int arr[4];
    for (int i=0;i<4;i++){
        cin>>arr[i];
    }

    cout<<"Index of Key is "<<LinearSearch(arr,4,9);
    return 0;
}