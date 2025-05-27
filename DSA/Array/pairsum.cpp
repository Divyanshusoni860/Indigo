//used chatgpt for time measurment but its 0 nanoseconds both

#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

void input(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << "Enter: ";
        cin >> arr[i];
    }
}

void print(int arr[], int n) {
    cout << "The Elements Entered in array are:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

vector<int> brutforce(int arr[], int n, int target) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                return ans;
            }
        }
    }
    cout << "No Pair found for Target Sum " << target << endl;
    return ans; // Make sure to return even if not found
}

vector<int> optimal(int arr[], int n, int target) {
    vector<int> ans;
    int i = 0, j = n - 1;

    while (j > i) {
        int ps = arr[i] + arr[j];
        if (ps > target) {
            j--;
        } else if (ps < target) {
            i++;
        } else {
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            return ans;
        }
    }
    cout << "No Pair Found for Target " << target << endl;
    return ans; // Same here: return even if empty
}

int main() {
    int arr[20], n, target;
    cout << "Enter number of elements (max 20): ";
    cin >> n;
    cout << "Enter Target Sum: ";
    cin >> target;

    input(n, arr);
    print(arr, n);

    // Measure brute force time
    auto start_bf = high_resolution_clock::now();
    vector<int> ans1 = brutforce(arr, n, target);
    auto end_bf = high_resolution_clock::now();
    auto duration_bf = duration_cast<nanoseconds>(end_bf - start_bf);

    // Measure optimal time
    auto start_opt = high_resolution_clock::now();
    vector<int> ans2 = optimal(arr, n, target);
    auto end_opt = high_resolution_clock::now();
    auto duration_opt = duration_cast<nanoseconds>(end_opt - start_opt);

    // Display results
    if (!ans1.empty())
        cout << "The Pair (Brute Force) are: " << ans1[0] << " and " << ans1[1] << endl;
    cout << "Time taken by Brute Force: " << duration_bf.count() << " nanoseconds" << endl;

    if (!ans2.empty())
        cout << "The Pair (Optimal) are: " << ans2[0] << " and " << ans2[1] << endl;
    cout << "Time taken by Optimal: " << duration_opt.count() << " nanoseconds" << endl;

    return 0;
}
