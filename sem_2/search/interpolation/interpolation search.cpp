#include <iostream>

using namespace std;

int interpolationSearch(int* arr, int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high && target >= arr[low] && target <= arr[high]) {
        if (low == high) {
            return (arr[low] == target) ? low : -1;
        }

        int pos = low + ((target - arr[low]) * (high - low)) / (arr[high] - arr[low]);

        if (pos < low || pos > high) return -1;

        if (arr[pos] == target) {
            return pos;
        }

        if (arr[pos] < target) {
            low = pos + 1;
        }
        else {
            high = pos - 1;
        }
    }

    return -1;
}

int main()
{
    const int size = 10;
    int numbers[size] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

    cout << interpolationSearch(numbers, size, 20);

    return 0;
}