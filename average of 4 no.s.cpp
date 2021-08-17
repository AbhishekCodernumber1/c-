#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3,num4,average;
    cout<<"Enter the 1st no.";
    cin>>num1;
    cout<<"Enter the 2nd no.";
    cin>>num2;
    cout<<"Enter the 3rd no.";
    cin>>num3;
    cout<<"Enter the 4th no.";
    cin>>num4;
    int sum;
    sum=num1+num2+num3+num4;
     average=sum/4;
     cout<<"here is the average of 4 no.s";
     cout<<average;
    return 0;
}