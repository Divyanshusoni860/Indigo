//max sub array problem
#include<iostream>
#include <climits>

using namespace std;

void input (int n,int arr[]){
    for(int i=0; i<n;i++){
        cout<<"Enter: ";
        cin>>arr[i];
    }
}

void print(int arr[],int n){
    cout<<"The Elements Entered in array are:"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int brutforce(int arr[],int n){
    int maxsum = INT_MIN;
    for(int start=0;start<n;start++){
        int currsum=0;
        for(int end=start;end<n;end++){
            currsum+=arr[end];
            maxsum=max(currsum,maxsum);
        }        
    }
    return maxsum;
}

int linearcomp(int arr[],int n){
    int currsum=0, maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        maxsum=max(maxsum,currsum);
        if(currsum<0){
            currsum=0;
        }
    }
    return maxsum;
}

int main (){
    int arr[20];
    int n;
    cout<<"Enter no. of elements in array (max 20): ";
    cin>>n;
    input(n,arr);
    print(arr,n);
    cout<<"The Max sum subarray by Brut Force is :"<<brutforce(arr,n)<<endl;
    cout<<"The Max sum subarray by kadan's algo is :"<<linearcomp(arr,n);
    return 0;
}