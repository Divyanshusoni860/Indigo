#include<iostream>
using namespace std;

int square(int a,int b){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            cout<<"_";
        }
        cout<<endl;
    }
    return 0;
}

int main(){
    printf("Enter a");
    int a;
    cin>>a;
    printf("Enter b");
    int b;
    cin>>b;
    int pattern ;
    cout<<"Enter Pattern :"<<pattern;
    cin>>pattern;
    if(pattern==2){
        return square(a,b);
    }
    return 0;
}