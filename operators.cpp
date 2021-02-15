//Arithemetic operators
#include<iostream>
using namespace std;

int main()
{
    int a,b,sum, mul, div,sub,rem;
    cout<<"Enter two number:"<<endl;
    cin>>a>>b;
    sum=a+b;
    cout<<a<<" + "<<b<<" = "<<sum<<endl;
    sub=a-b;
    cout<<a<<" - "<<b<<" = "<<sub<<endl;
    mul=a*b;
    cout<<a<<" * "<<b<<" = "<<mul<<endl;
    div=a/b;
    cout<<a<<" / "<<b<<" = "<<div<<endl;
    rem=a%b;
    cout<<a<<" % "<<b<<" = "<<rem;
}