#include<bits/stdc++.h>
using namespace std;

int findFirstOccurrence(vector<int>& arr, int k) {
    int n = arr.size();
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k) {
            result = mid;
            high = mid - 1;
        } else if (arr[mid] < k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int findLastOccurrence(vector<int>& arr, int k) {
    int n = arr.size();
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k) {
            result = mid;
            low = mid + 1;
        } else if (arr[mid] < k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int first = findFirstOccurrence(arr, k);
    int last = findLastOccurrence(arr, k);

    if (first != -1 && last != -1 && first != last) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
