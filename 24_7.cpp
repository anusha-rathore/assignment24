// 7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include <iostream>

using namespace std;
void add (int ,int ,int);
void add (int a,int b,int c=0){
    int sum= a+b+c;
    cout<<"sum: "<< sum;
}

int main()
{
 
    int x,y,z ;
    cout<<"enter numbers :";
    cin>>x>>y>>z;
    cout<<"default argument that is able to add 2 number ";
    add(x,y);
    
    cout<<"\ndefault argument that is able to add 3 number ";
    add(x,y,z);
    return 0;
}