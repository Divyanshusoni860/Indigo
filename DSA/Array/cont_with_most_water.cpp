#include<iostream>
#include<algorithm>
using namespace std;

void input(int n, int arr[]){
    for(int i = 0; i<n; i++){
        int element;
        cin>>element;
        arr[i]=element;
    }
}

int maxvolume_by_bt(int n,int arr[]){
    int volume = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int vol = (min(arr[i],arr[j]))*(j-i);
            volume = max(volume,vol);
        }
    }
    return volume;
}

int optimal(int n,int arr[]){
    int volume =0;
    int i=0,j=n-1;
    while(i<j){
        int vol = (min(arr[i],arr[j]))*(j-i);
        volume = max(volume,vol);
        if(arr[i]>arr[j]){
            j--;
        }
        else{
            i++;
        }
    }
    return volume;
}

int main (){
    int n,arr[20];
    cout<<"Enter number of elements (max 20) : ";
    cin>>n;
    input(n,arr);

    int solution1 = maxvolume_by_bt(n,arr);
    int solution2 = optimal(n,arr);
    cout<<"The container with maximum capacity by bt and optimal are : "<<solution1<<" and "<<solution2;
    return 0;
}