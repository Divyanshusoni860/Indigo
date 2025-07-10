#include<iostream>
#include<vector>
using namespace std;

void input(int n, vector<int>&arr){
    for(int i=0;i<=n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
}

int peak(vector<int>&arr){
    int start = 1;
    int end = arr.size()-2;
    while(start<=end){
        int mid = start+((end-start)/2);
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid-1]<arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    vector<int> arr;
    input(n,arr);
    int ans = peak(arr);
    if(ans!=-1){
        cout<<"The peak index is "<<ans;
    }
    else{
        cout<<"No peak Index found";
    }
    return 0;

}