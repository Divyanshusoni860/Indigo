#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void input(int n, vector<int>& arr) {
    for (int i = 0; i < n; i++) {
        int element;
        cout << "Enter position of stable " << i + 1 << " : ";
        cin >> element;
        arr.push_back(element);
    }
}

bool is_valid(const vector<int>& arr, int n, int mid, int c) {
    int cow = 1;
    int last_pos = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] - last_pos >= mid) {
            cow++;
            last_pos = arr[i];
        }
    }
    return cow >= c;
}

int ans(vector<int>& arr, int n, int c) {
    sort(arr.begin(), arr.end());
    int start = 1;
    int end = arr[n - 1] - arr[0];
    int result = 0;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (is_valid(arr, n, mid, c)) {
            result = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}

int main() {
    int n, c;
    cout << "Enter the number of stables: ";
    cin >> n;
    vector<int> stabels;
    input(n, stabels);
    cout << "Enter the number of cows: ";
    cin >> c;

    int result = ans(stabels, n, c);
    cout << "The largest minimum distance is: " << result << endl;

    return 0;
}