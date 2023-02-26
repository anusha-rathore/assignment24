#include <iostream>

using namespace std;
void primenum(int n);
void primenum(int n){
    int t=0;
    for(int i=2; i<n/2; i++)
    {
        if(n%i==0)
        {
         t=1;
         break;
        }
    }
if(t==0)
{
    cout<<"prime";
    
}
else {
    cout<<"not prime";
}
    
}
int main()
{
    int num ;
    cout<<"enter number:";
    cin>>num;
    primenum(num);
    return 0;
}