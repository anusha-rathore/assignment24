// to find the highest value digit in a given number.
#include <iostream>

using namespace std;
int max(int n);
int max(int n){
    int max=-1;
    while(n){
        int r= n%10;
        if (r>max){
            max=r;
        }
        n=n/10;
    }
    return max;
}
int main()
{
 
    int digit ;
    cout<<"enter digit :";
    cin>>digit;
    cout<<"highest value in digit :"<<max(digit);
    return 0;
}