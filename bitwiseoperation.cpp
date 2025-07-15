#include<iostream>
#include<bitset>
using namespace std;
int main(){
    int n;
    cin>>n;
    bitset<4>binary(n);
    cout<<binary<<endl;
    int b;
    cin>>b;
    cout<<"Bitwise AND : "<<(n&b)<<endl;
    cout<<"Bitwise OR : "<<(n|b)<<endl;
    cout<<"Bitwise XOR : "<<(n^b)<<endl;
    cout<<"left shit of first number : "<<(n<<1)<<endl;
    cout<<"left shift of second number : "<<(b<<1)<<endl;
    cout<<"right shift of first number : "<<(n>>1)<<endl;
    cout<<"right shift of second number : "<<(b>>1)<<endl;
    cout<<"Bitwise NOT for first element : "<<(~n)<<endl;
    cout<<"Bitwise NOT for second element : "<<(~b)<<endl;


}