#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int input(vector<int>&arr,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        int element;
        cout<<"Enter length of "<<i+1<<" Panel: ";
        cin>>element;
        sum+=element;
        arr.push_back(element);
    }
    return sum;
}

bool is_valid(vector<int>arr,int n,int m,int mid){
    int painter = 1;
    int length = 0;
    for(int i=0;i<n;i++){
        if(mid>=length+arr[i]){
            length+=arr[i];
        }
        else{
            length=arr[i];
            painter++;
        }
    }
    if(painter<=m){
        return true;
    }
    else{
        return false;
    }
}

int partition(vector<int>arr,int n,int m,int sum){
    int start = *max_element(arr.begin(),arr.end());
    int end = sum;
    int ans = sum;
    while(start<=end){
        int mid = start+((end-start)/2);
        if(is_valid(arr,n,m,mid)){
            end = mid-1;
            cout<<"is valid"<<mid<<endl;
            ans=min(mid,ans);
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}



int main(){
    int n,m;
    cout<<"Enter the number of Panels: ";
    cin>>n;
    vector<int>panel;
    int sum = input(panel,n);
    cout<<"Enter number of painters: ";
    cin>>m;
    if (m > n) {
        cout << "Number of painters cannot be more than number of panels." << endl;
        return -1;
    }
    int ans = partition(panel,n,m,sum);
    cout<<ans;
    return 0;
}