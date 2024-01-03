#include <iostream>
using namespace std;

bool isAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false; // If any element is greater than its successor, it's not in ascending order
        }
    }
    return true; // All elements are in ascending order
}

int main() {
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int arr[size];

    cout << "Enter elements of the array : ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    if (isAscending(arr, size)) {
        cout << "The array is in ascending order." << endl;
    } else {
        cout << "The array is not in ascending order." << endl;
    }

    return 0;
}
