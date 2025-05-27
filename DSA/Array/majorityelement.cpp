// majority element by Moore's Voting Algo
#include <iostream>
#include <vector>
using namespace std;

void input (int n,vector<int>&arr){
    for(int i=0; i<n;i++){
        cout<<"Enter: ";
        cin>>arr[i];
    }
}

void print(vector<int>&arr,int n){
    cout<<"The Elements Entered in array are:"<<endl;
     for(int i:arr){
        cout<<i<<endl;
    }
}

int bf (vector<int>&arr,int n){
    int freq=0;
    for(int i:arr){
        for(int j:arr){
            if(i==j){
                freq++;
            }
        }
        if(freq>(n/2)){
            return freq,i;
        }
    }
    return freq;
}

int moore (vector<int>&arr,int n){
    int freq=0,cv=0;
    for(int n:arr){
        if(freq==0){
            cv=n;
        }
        if(n==cv){
            freq++;
        }
        else{
            freq--;
        }
    }
    return cv;
}

int op(vector<int>&arr,int n){
    int freq=0;
    int p=1;
    for(int i:arr){
        if(i==arr[p]){
            freq++;
        }
        else if(i!=arr[p]){
            freq=0;
        }
        if(freq>n/2){
            return i;
        }
    }
    return freq;
}

int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    vector<int>arr(n);
    input(n,arr);
    print(arr,n);
    cout<<"By Brut Force: "<<bf(arr,n)<<endl;
    cout<<"By Optimal: "<<op(arr,n)<<endl;
    cout<<"By Moore's Voting: "<<moore(arr,n);
    return 0;

}