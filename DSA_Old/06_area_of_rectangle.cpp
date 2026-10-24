#include <iostream>
using namespace std;
void myfun(string country = "india")
{
    cout << country << endl;
}
int main()
{
    float length, breadth;
    cout << "enter the length=";
    cin >> length;
    cout << "enter the breadth=";
    cin >> breadth;
    float area = length * breadth;
    cout << "the area of rectangle=" << area << endl;
    // or we can write it as
    // cout<<"the area of rectangle="<<length*breadth<<endl;
    myfun();
    return 0;
}