/*6. Write a C++ program to calculate an average of 3 numbers.*/
#include"iostream"
using namespace std;
int main()
{
    float a,b,c,av;
    cout<<"Enter three digit ";
    cin>>a>>b>>c;
    av=a+b+c;
    av=av/3;
    cout<<"Average of three digit number is = "<<av;
    cout <<endl;
    return 0;
}