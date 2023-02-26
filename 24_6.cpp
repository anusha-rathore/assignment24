
#include <iostream>

using namespace std;
void swaqp (int &a,int &b);
void swap (int &a, int &b){
    a=a+b;
    b=a-b;
    a=a-b;
    
}
int main()
{
 
    int a,b ;
    cout<<"enter numbers :";
    cin>>a>>b;
    cout<<"a= "<<a <<"\nb= "<<b;
    cout<<"\n after swapping :";
    swap(a,b);
    cout<<"\na= "<<a <<"\nb= "<<b;
    return 0;
}