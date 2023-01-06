#include<iostream>
#include <cstdio>
using namespace std;

int max_of_three(int a,int b,int c){
    return max(max(a,b),max(b,c));
}

int main(){
    int a,b,c;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Enter third number:";
    cin>>c;
    int ans = max_of_three(a, b, c);
    cout<<ans;

    return 0;
}