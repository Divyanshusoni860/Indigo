#include <iostream>
using namespace std;
int main (){
    long a;
    long b;
    cout<<"Enter Base: ";
    cin>>a;
    cout<<"Enter Power: ";
    cin>>b;
    if(b<0){
        b=-b;
        a=1/a;
    }
    long ans = 1;
    while(b>0){
        if(b%2==1){
            ans*=a;
        }
        a*=a;
        b/=2;
    }
    cout<<ans;
}
//problem in handling negative 