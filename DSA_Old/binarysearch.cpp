#include<iostream>
using namespace std;
int main()
{

    int array[]={1,3,5,6,34,23,45,67,34};
    int size=sizeof(array)/sizeof(array[0]);
    int key=23;
    for (int i=0;i<size;i++)
    {
        
        if(array[i]==key)
        {
            cout<<"element found at "<<i<<" "<<key;
        }
        else
        {
            cout<<"element not found.";
        }
    }
    
    return 0;
}
// #include<iostream>
// using namespace std;
// int main()
// {
//     int array[]={1,3,5,6,34,23,45,67,34};
//     int size=sizeof(array)/sizeof(array[0]);
//     int key=100; // Moved key outside the loop
//     bool found = false; // Flag to check if the element is found

//     for (int i=0;i<size;i++)
//     {
//         if(array[i]==key)
//         {
//             cout << "Element found at index " << i << endl;
//             found = true;
//             // If you only need to find the first occurrence, you can use `break;` here.
//             // break;
//         }
//     }
    
//     if (!found) {
//         cout << "Element not found." << endl;
//     }

//     return 0;
// }