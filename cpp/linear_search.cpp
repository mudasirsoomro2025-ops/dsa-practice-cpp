#include <iostream>
using namespace std;

int linearSearch(int numbers[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) return i;
    }
    return -1;
}

int main() {
    int numbers[6] = {12, 7, 25, 9, 18, 4};
    int target;

    cout << "Enter a number to search: ";
    cin >> target;

    int index = linearSearch(numbers, 6, target);
    if (index == -1) {
        cout << "Number not found." << endl;
    } else {
        cout << "Number found at index: " << index << endl;
    }
    return 0;
}
