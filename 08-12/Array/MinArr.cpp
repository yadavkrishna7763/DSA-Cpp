#include <iostream>
using namespace std;
int min(int arr[], int n)
{

    int mini = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }

    return mini;
}

int main()
{
    int arr[4] = {-8, -2, -15, -4};
    cout << min(arr, 4);

    return 0;
}