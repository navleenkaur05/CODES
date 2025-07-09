#include<iostream>
using namespace std;
int  main(){
    char ch;
    cin>>ch;
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) cout<<"aplhabet";
    else if(ch>='0' && ch<'0') cout<<"digit";
    else cout<<"special character";
}