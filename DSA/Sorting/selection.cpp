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

void selection(vector<int>&arr){
    cout<<"Sorted Array"<<endl;
    for(int i=0;i<arr.size();i++){
        int smallest_index = i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[smallest_index]){
                smallest_index=j;
            }
        }
        swap(arr[i],arr[smallest_index]);
    }
}

int main(){
    int n;
    cout<<"Enter the number of element in array: ";
    cin>>n;
    vector<int>arr;
    input(arr,n);
    output(arr);
    selection(arr);
    output(arr);
    return 0;
}