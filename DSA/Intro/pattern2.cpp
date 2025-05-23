#include <iostream>
using namespace std;

int square(int a){
    for(int i=0;i<=a;i++){
        int j = 1;
        for(j;j<=a;j++){
            cout<<j;
            
        }
        j++;
        cout<<endl;
    }
    return 0;
}

int main(){
    int a;
    cout<<"Enter a: ";
    cin>>a;
    cout<<square(a);
    return 0;
}
