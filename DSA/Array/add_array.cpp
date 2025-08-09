#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

void input (int n,vector<int>&arr){
    for(int i=0; i<n;i++){
        cout<<"Enter: ";
        int element;
        cin>>element;
        arr.push_back(element);
    }
}

void output(vector<int>&arr){
    for(int i = 0; i<arr.size()-1;i++){
        cout<<arr[i];
    }
}

void add_arr(vector<int>& arr1, vector<int>& arr2, vector<int>& ans) {
    int n1 = arr1.size();
    int n2 = arr2.size();
    int carry = 0;
    int i = n1 - 1, j = n2 - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += arr1[i--];
        if (j >= 0) sum += arr2[j--];

        ans.push_back(sum % 10);  // store the digit
        carry = sum / 10;         // calculate carry
    }

    reverse(ans.begin(), ans.end()); // reverse result
}


int main (){
    int n;
    cout<<"enter Size or arrays: ";
    cin>>n;
    vector<int>arr1;
    cout<<"Enter elemets of array 1:"<<endl;
    input(n,arr1);
    cout<<"Enter elemets of array 2:"<<endl;
    vector<int>arr2;
    input(n,arr2);
    vector<int>ans;
    add_arr(arr1,arr2,ans);
    output(ans);
    return 0;

}