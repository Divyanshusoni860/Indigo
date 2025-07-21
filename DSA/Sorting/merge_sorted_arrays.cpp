#include<iostream>
#include<vector>
using namespace std;

void input(vector<int>&arr,int n){
    for(int i=0; i<n; i++){
        int element;
        cout<<"enter the "<<i+1<<" element: ";
        cin>>element;
        arr.push_back(element);
    }
}

void fill_host(vector<int>&arr,int n){
    for(int i=0; i<n; i++){
        arr.push_back(0);
    }
}

void output(vector<int>&arr){
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}

void merge_funct(vector<int>&host,int n,vector<int>&merged){
    int idx = host.size()-1;
    int i= n-1;
    int j = merged.size()-1;
    while(j>=0&&i>=0){
        if(host[i]>merged[j]){
            host[idx]=host[i];
            idx--;
            i--;
        }
        else{
            host[idx]=merged[j];
            j--;
            idx--;
        }
    }
    while(j>=0){
        host[idx]=merged[j];
        idx--;
        j--;
    }
}

int main(){
    int m,n,size;
    cout<<"Enter the size of Host aray :";
    cin>>size;
    cout<<"Enter the number of elements in host array :";
    cin>>n;
    cout<<"Enther the elements for Host array: ";
    vector<int>host;
    input(host,n);
    fill_host(host,(size-n));
    cout<<"Enter the elements for Merged array "<<endl;
    vector<int>merged;
    m=size-n;
    input(merged,m);
    output(host);
    output(merged);
    cout<<"Merged Array is"<<endl;
    merge_funct(host,n,merged);
    output(host); 

    return 0;
}