// Write a C++ program to swap two numbers with the help of a third variable.

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of 1st number: \n";
    cin>>a;//10
    cout<<"Enter the value of 2nd number: \n";
    cin>>b;//20
    c=a;//c=10
    a=b;//a=20
    b=c;//b=10
    cout<<"Value of 1st number is: "<<a<<endl;//20
    cout<<"Value of 2nd number is: "<<b<<endl;//10
}