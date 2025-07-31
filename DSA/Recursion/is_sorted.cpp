#include<iostream>
#include<vector>
using namespace std;

void input(vector<int>&arr,int n){
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
}

bool is_sorted(vector<int>&arr,int n){
    if(n==0 || n==1){
        return true;
    }
    return arr[n-1]>=arr[n-2] && is_sorted(arr,n-1);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int>arr;
    input(arr,n);
    bool ans = is_sorted(arr,n);
    cout<<ans;
    return 0;
}