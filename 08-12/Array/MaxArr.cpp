#include <iostream>
using namespace std;
int max(int arr[], int n)
{

    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    return maxi;
}

int main()
{
    int arr[4] = {-8, -2, -15, -4};
    cout << max(arr, 4);

    return 0;
}