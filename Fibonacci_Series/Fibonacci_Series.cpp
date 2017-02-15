#include <iostream>
using namespace std;

int main(){

    int a=0, b=1, c=0, len;
    cout<<"Enter the length of Fibonacci Series : ";
    cin>>len;
    len=len-2;  /*since we are printing first two elements outside the loop.*/
    cout<<a<<" "<<b<<" ";
    while(len){
    c=a+b;
    a=b;
    b=c;
    cout<<c<<" ";
    len--;
    }
return 0;
}
