#include<iostream>
using namespace std;

int Fib(int n, int a, int b){
    for(int i=2;i<=n;i++){
        int c=a+b;
        cout<<c<<"\n";
        a=b;
        b=c;
    }
}

int main(){
    int n,a,b;
    a=0,b=1;
    cout<<"Enter range: ";
    cin>>n;
    cout<<a<<"\n"<<b<<"\n";
    Fib(n,a,b);
    return 0;
}