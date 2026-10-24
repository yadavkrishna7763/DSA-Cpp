#include <iostream>
using namespace std;
void myfun(string country = "india")
{
    cout << country << endl;
}
int main()
{
    myfun("japan");
    myfun();
    myfun("Norway");
    return 0;
}