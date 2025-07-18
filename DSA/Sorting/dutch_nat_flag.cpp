// To sort 3 entities; Here 0, 1 and 2.

#include<iostream>
#include<vector>
using namespace std;

void input (vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        int element;
        cout<<"Enter "<<i+1<<" element(0,1 or 2): ";
        cin>>element;
        arr.push_back(element);
    }
}

void output (vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}

void dnf(vector<int>&arr){
    cout<<"Sorted Array"<<endl;
    int low = 0;
    int mid = 0;
    int high = arr.size()-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number of element in array: ";
    cin>>n;
    vector<int>arr;
    input(arr,n);
    output(arr);
    dnf(arr);
    output(arr);
    return 0;
}