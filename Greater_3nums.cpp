#include<iostream>
#include <cstdio>
using namespace std;

int max_of_three(int a,int b,int c){
    if(a>b){
        if(a>c){
            cout<<a;
        }
        else{
            cout<<c;
        }
    }
    if(b>a){
        if(b>c){
            cout<<b;
        }
        else{
            cout<<c;
        }
    }
    
    return 0;
}

int main(){
    int a,b,c;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Enter third number:";
    cin>>c;
    max_of_three(a,b,c);

    return 0;
}