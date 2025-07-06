#include<iostream>
#include<vector>
using namespace std;

void input(int n, vector<int>&arr) {
    for (int i = 0; i < n; i++) {
        cout << "Enter: ";
        cin >> arr[i];
    }
}

vector<int> bruteforce(vector<int>&arr){
    int iterations = arr.size();
    // Prefix
    vector<int> prefix(iterations,1);
    for(int i=1; i<iterations; i++){
        prefix[i]=arr[i-1]*prefix[i-1];
    }
    // Suffix
    vector<int> suffix(iterations,1);
    for(int i=iterations-2; i>=0; i--){
        suffix[i]=arr[i+1]*suffix[i+1];
    }
    vector<int>ans(iterations);
    for(int i = 0; i<iterations; i++){
        ans[i]=prefix[i]*suffix[i];
    }
    return ans;
}

vector<int> optimal(vector<int>&arr){
    int iterations = arr.size();
    vector<int>ans(iterations,1);
    //prefix
    for(int i=1; i<iterations; i++){
        ans[i]=arr[i-1]*ans[i-1];
    }
    // Suffix
    int suffix = 1;
    for(int i=iterations-2; i>=0; i--){
        suffix*=arr[i+1];
        ans[i]*=suffix;
    }
    return ans;
}

int main (){
    int n;
    cout << "Enter number of elements (max 20): ";
    cin >> n;
    vector<int>arr(n);
    input(n, arr);
    vector<int>ans1 = bruteforce(arr);
    for(int i = 0; i < n ; i++){
        cout<<ans1[i]<<endl;
    }
    vector<int>ans2 = optimal(arr);
    for(int i = 0; i < n ; i++){
        cout<<ans2[i]<<endl;
    }
    return 0;
}