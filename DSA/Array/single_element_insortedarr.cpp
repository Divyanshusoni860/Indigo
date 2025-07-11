#include<iostream>
using namespace std;

void input(int arr[],int n){
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr[i]=element;
    }
}

int single(int arr[],int n){
    if(n==1) return 0;
    int start = 0;
    int end = n-1;

    while(start<=end){
        int mid = start+((end-start)/2);

        if(mid == 0 && arr[mid]!=arr[mid+1]) return mid;
        if(mid == n-1 && arr[mid]!=arr[mid-1]) return mid;

        if((arr[mid]!=arr[mid+1])&&(arr[mid]!=arr[mid-1])) return mid;

        if(mid%2==0){
            if(arr[mid]!=arr[mid-1]){
                start = mid+1;
            }
            else{
                end=mid-1;
            }
        }
        else{
            if(arr[mid]==arr[mid-1]){
                start = mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the number of elements(max 20):";
    cin>>n;
    int arr[20];
    input(arr,n);
    int ans = single(arr,n);
    if(ans!=-1){
        cout<<"single element index is:"<<ans;
    }
    else{
        cout<<"all elemets are in pair";
    }
    return 0;
}