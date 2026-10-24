#include <iostream>
using namespace std;
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"enter the no of element of array"<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter the element of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int n = sizeof(arr) / sizeof(arr[0]);
    cout << "original Array=" << endl;
    for (int i = 0; i < n; i++)

    {
        cout << arr[i] << " " << endl;
    }
    bubble_sort(arr, n);
    cout << "Sorted Array=" << endl;
    for (int i = 0; i < n; i++)

    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}
