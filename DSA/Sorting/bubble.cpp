#include<iostream>
#include<vector>
using namespace std;

void bubble(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++) { 
        bool flag = false; 
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if(!flag){
            break;
        }
    }
}

void input(int n, vector<int>& arr) {
    for (int i = 0; i < n; i++) {
        int element;
        cout << "Enter element at index " << i << ": ";
        cin >> element;
        arr.push_back(element);
    }
}

void output(const vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr;

    input(n, arr);
    bubble(arr, n);
    cout << "Sorted array (ascending): ";
    output(arr, n);

    return 0;
}