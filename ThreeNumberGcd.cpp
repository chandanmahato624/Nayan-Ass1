#include<iostream>
using namespace std;
int gcd(int x, int y)
{
    while (x %= y)
    {
        int t = x;
        x = y;
        y = t;
    }
    return y;
}
int main()
{
    int x,y,z;
    cout<<"Enter 1st Number : ";
    cin>>x;
    cout<<"Enter 2nd Number : ";
    cin>>y;
    cout<<"Enter 3rd Number : ";
    cin>>z;
    int ans = gcd(gcd(x, y), z);
    cout<<"GCD of three number is = "<<ans;
    return 0;
}