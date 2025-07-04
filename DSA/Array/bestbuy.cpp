#include <iostream>
using namespace std;

void input(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int bestbuy(int arr[], int n) {
    int bb = arr[0];
    int profit = 0;
    for (int i = 1; i < n; i++) {
        profit = max(profit, arr[i] - bb);
        bb = min(bb, arr[i]);
    }
    return profit;
}

int main() {
    int n;
    cout << "Enter number of elements (max 20) : ";
    cin >> n;
    if (n > 20 || n <= 0) {
        cout << "Invalid number of elements." << endl;
        return 1;
    }

    int arr[20];
    input(n, arr);

    int result = bestbuy(arr, n);
    cout << "Maximum profit: " << result << endl;

    return 0;
}
