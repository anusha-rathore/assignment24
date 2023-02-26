#include <iostream>

using namespace std;
float add( int , float);
float add(int a,float b){
    return a+b;
}
int main()
{
    int x=4;
    float y=5;
    cout<<"sum :"<< add(x,y);
    
    return 0;
}