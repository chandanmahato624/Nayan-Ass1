#include<iostream>
using namespace std;
int main(){
    int n,months,days;
    cout<<"Enter the number of days : ";
    cin>>n;
    months = n/30;
    days = n%30;
    cout<<"Months = "<<months<<endl;
    cout<<"Days = "<<days;
}