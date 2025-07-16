#include<iostream>
#include<vector>
using namespace std;

void input (vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        int element;
        cout<<"Enter "<<i+1<<" element: ";
        cin>>element;
        arr.push_back(element);
    }
}

void output (vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}

void insertion (vector<int>&arr){
    cout<<"Sorted Array"<<endl;
    for(int i=1;i<arr.size();i++){
        int curr_ele = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>curr_ele){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr_ele;
    }
}

int main(){
    int n;
    cout<<"Enter the number of element in array: ";
    cin>>n;
    vector<int>arr;
    input(arr,n);
    output(arr);
    insertion(arr);
    output(arr);
    return 0;
}