#include <iostream>
#include <string>
using namespace std;

int main (){

    unsigned long long n;
    cout<<"enter decimal number: ";
    cin>>n;

    string b ="";
    
    while(n>0){
        int r = n%2;
        n = n/2;
        b = to_string(r)+b;

    }
    cout<<b;
    return 0;
}