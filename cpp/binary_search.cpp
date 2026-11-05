#include <iostream>
using namespace std;

int binarySearch(int numbers[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (numbers[middle] == target) return middle;
        if (numbers[middle] < target) left = middle + 1;
        else right = middle - 1;
    }
    return -1;
}

int main() {
    int numbers[7] = {3, 8, 14, 21, 29, 35, 42};
    int target;

    cout << "Enter a number to search: ";
    cin >> target;

    int index = binarySearch(numbers, 7, target);
    if (index == -1) cout << "Number not found." << endl;
    else cout << "Number found at index: " << index << endl;
    return 0;
}
