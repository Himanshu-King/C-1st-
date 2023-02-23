// Write a C++ program to find size of basic data types.

#include<iostream>
using namespace std;
int main()
{
    char a;
    short b;
    int c;
    long d;
    long long e;
    float f;
    double g;
    long double h;
    bool i;

    cout<<"The sizeof(char): "<<sizeof(a)<<" bytes"<<endl;
    cout<<"The sizeof(short): "<<sizeof(b)<<" bytes"<<endl;
    cout<<"The sizeof(int): "<<sizeof(c)<<" bytes"<<endl;
    cout<<"The sizeof(long): "<<sizeof(d)<<" bytes"<<endl;
    cout<<"The sizeof(long long): "<<sizeof(e)<<" bytes"<<endl;
    cout<<"The sizeof(float): "<<sizeof(f)<<" bytes"<<endl;
    cout<<"The sizeof(double): "<<sizeof(g)<<" bytes"<<endl;
    cout<<"The sizeof(long double): "<<sizeof(h)<<" bytes"<<endl;
    cout<<"The sizeof(bool): "<<sizeof(i)<<" bytes"<<endl;
}