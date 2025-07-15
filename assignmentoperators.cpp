#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c=a;
    c+=b;
    cout<<"+=: "<<c<<endl;
    c=a;
    c-=b;
    cout<<"-=: "<<c<<endl;
    c=a;
    c*=b;
    cout<<"*=: "<<c<<endl;
    c=a;
    c/=b;
    cout<<"/=: "<<c<<endl;
    c=a;
    c%=b;
    cout<<"%=: "<<c<<endl;
}