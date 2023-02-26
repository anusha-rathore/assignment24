/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int fibbo(int);
int fibbo(int n){
    int a=1 ,b=1,c;
    if(n<=2)
    {
        return 1;
    }
    for (int i=3; i<=n; i++)
{
    c=a+b;
    a=b;
    b=c;
    return b;
}}


int main()
{
    
    int number ,value ,i, flag=0; 
    cout<<"enter number :";
    cin>>number;
    
    for (i=0;  ; i++)
    {
        value=fibbo(i);
        if (number==value)
        {
            flag=1;
            break;
        }
        if (value>number)
        {
            break;
        }
    }
        if(flag==1){
            cout<<"number is fibbonaci";
        }
        else
        {
            cout<<"not";
        }
        return 0;

}