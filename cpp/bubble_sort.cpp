#include <iostream>
using namespace std;

void bubbleSort(int numbers[], int size) {
    for (int pass = 0; pass < size - 1; pass++) {
        for (int i = 0; i < size - pass - 1; i++) {
            if (numbers[i] > numbers[i + 1]) {
                int temporary = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temporary;
            }
        }
    }
}

int main() {
    int numbers[6] = {64, 25, 12, 22, 11, 5};
    bubbleSort(numbers, 6);

    cout << "Sorted array: ";
    for (int i = 0; i < 6; i++) cout << numbers[i] << " ";
    cout << endl;
    return 0;
}
