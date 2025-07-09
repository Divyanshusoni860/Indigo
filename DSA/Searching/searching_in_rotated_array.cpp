#include<iostream>
#include<vector>
using namespace std;

// Input function to fill the vector
void input(int n, vector<int>& arr) {
    for (int i = 0; i < n; i++) {
        int element;
        cout << "Enter element in index " << i << " in rotated ascending: ";
        cin >> element;
        arr.push_back(element);
    }
}

int binary(vector<int>arr, int target){
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        int mid = start+((end-start)/2);
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[start]<=arr[mid]){
            if(arr[start]<target && target<arr[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        else{
            if(arr[mid]>target && target>arr[end]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int n, t;
    cout << "Enter number of Elements: ";
    cin >> n;

    vector<int> arr;  // don't initialize with size n if using push_back

    input(n, arr);

    cout << "Enter the target: ";
    cin >> t;

    int index = binary(arr, t);
    if (index != -1) {
        cout << "The element found at index: " << index << endl;
    } else {
        cout << "Element not present in array" << endl;
    }
    return 0;
}