#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a aplhabet: ";
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ) cout<<"vowels";
    else cout<<"consonant";
}
