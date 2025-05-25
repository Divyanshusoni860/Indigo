#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& arr) {
    int s = 0;
    int e = arr.size() - 1;
    while (s < e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}


int main (){
    int n;
    cout<<"Enter the number of Elements(max 100): ";
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    reverse(arr);
    for(int i:arr){
        cout<<i<<endl;
    }

    return 0;

}