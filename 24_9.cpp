
#include <iostream>
int max(int ,int);
float max (float, float);

int max(int a ,int b){
    
    if(a>b){
        return a;
    }
    else {
        return b;
    }
}
float max (float x, float y){
if(x>y){
        return x;
    }
    else {
        return y;
    }}
using namespace std;

int main()
{
    int x,y;
    float n1,n2;
    cout<<"enter two integer :";
    cin>>x>>y;
    cout<<"max number between  two integer number: "<<max(x,y);
    cout <<"\n enter two real number :";
    cin>>n1>>n2;
    
    cout<<"max number between  two real number: "<<max(n1,n2);
    

    return 0;
}
