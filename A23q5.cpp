/*5. Write a C++ program to calculate the volume of a cuboid.*/
#include"iostream"
using namespace std;
int main()
{
    int l,w,h,v;
    cout<<"Enter lenghth widght height of cuboid ";
    cin>>l>>w>>h;
    v=l*w*h;
    cout<<"Volume of cuboid is ="<<v;
    cout<<endl;
    return 0;
}