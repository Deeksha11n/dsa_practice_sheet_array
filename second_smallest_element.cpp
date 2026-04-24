#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 5, 2, 20, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }

    if (second_smallest == INT_MAX) {
        cout << "No second smallest element\n";
    } else {
        cout << "Second smallest: " << second_smallest;
    }

    return 0;
}
