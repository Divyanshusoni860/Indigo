#include<iostream>
#include<vector>
using namespace std;

// Input function to fill the vector
void input(int n, vector<int>& arr) {
    for (int i = 0; i < n; i++) {
        int element;
        cout << "Enter element in index " << i << " in ascending order: ";
        cin >> element;
        arr.push_back(element);
    }
}

// Binary search function (fixed logic)
int binary(vector<int>& arr, int target) {
    int left_ptr = 0;
    int right_ptr = arr.size() - 1;  // should be size - 1 for valid index

    while (left_ptr <= right_ptr) {  // condition should be <=
        int mid = (left_ptr + right_ptr) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            right_ptr = mid - 1;  // should update right
        } else {
            left_ptr = mid + 1;  // should update left
        }
    }

    return -1;  // Not found
}

int binary_using_recursion(vector<int>& arr, int target, int left_ptr, int right_ptr) {
    if (left_ptr <= right_ptr) {
        int mid = (left_ptr + right_ptr) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            // Search right half
            return binary_using_recursion(arr, target, mid + 1, right_ptr);
        } else {
            // Search left half
            return binary_using_recursion(arr, target, left_ptr, mid - 1);
        }
    }

    return -1;  // Not found
}


int main(){
    int n, t;
    cout << "Enter number of Elements: ";
    cin >> n;

    vector<int> arr;  // don't initialize with size n if using push_back

    input(n, arr);

    cout << "Enter the target: ";
    cin >> t;

    // Size in bytes of vector object, not useful for elements
    cout << "sizeof(arr): " << sizeof(arr) << endl;
    cout << "Number of elements in vector: " << arr.size() << endl;

    int index = binary(arr, t);
    if (index != -1) {
        cout << "The element found at index: " << index << endl;
    } else {
        cout << "Element not present in array" << endl;
    }
    cout<<"======USING=RECURSION========="<<endl;
    int left_ptr = 0;
    int right_ptr = arr.size() - 1;
    index = binary_using_recursion(arr,t,left_ptr,right_ptr);
    if (index != -1) {
        cout << "The element found at index: " << index << endl;
    } else {
        cout << "Element not present in array" << endl;
    }


    return 0;
}
