#include <iostream>
using namespace std;
void traversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int arr[2] = {2, 4};

    traversal(arr, 2);

    return 0;
}