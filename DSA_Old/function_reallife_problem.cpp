#include<iostream>
using namespace std;
float tocelcious(float faharenheit)
{
    return (5.0/9.0)*(faharenheit-32.0);
}
int main()
{
    float temprature;
    cout<<"Enter the temperature in faharenheit="<<endl;
    cin>>temprature;
    float result = tocelcious(temprature);
    cout<<"farahenheit: " <<temprature<<endl;
    cout<<"convert fahrenheit to celcius: "<<result<<endl;
    return 0;


}