#include <iostream>
#include <algorithm>
using namespace std;

void printCombination(int arr[], int n) {
    int i = n - 1;
    while (i > 0 && arr[i - 1] >= arr[i]) {
        i--;
    }
    if (i == 0) {
        cout << "No previous combination exists." << endl;
        return;
    }
    int j = n - 1;
    while (arr[j] <= arr[i - 1]) {
        j--;
    }
    swap(arr[i - 1], arr[j]);
    reverse(arr + i, arr + n);
    cout << "Previous combination: ";
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    printCombination(arr, n);
    return 0;
}
