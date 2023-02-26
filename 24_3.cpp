// calculate x raised to the power y.
#include <iostream>

using namespace std;
int power (int a,int b);
int power(int a, int b){
    int r=1;
    while(b--){
       r=r*a;
    }
    return r;
}
int main()
{
 
    int x,y ;
    cout<<"enter number and power :";
    cin>>x>>y;
    cout<<x<<" raised to the power "<< y<<" is :"<<power(x,y);
    return 0;
}