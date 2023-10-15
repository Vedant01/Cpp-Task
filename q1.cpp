#include<iostream>

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

void bubbleSort(char arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    const int maxSize = 100;  // Adjust the size as needed
    char charArray[maxSize];

    std::cout << "Enter a string: ";
    std::cin.getline(charArray, maxSize);

    int size = strlen(charArray);

    bubbleSort(charArray, size);

    std::cout << "Sorted string: " << charArray << std::endl;

    return 0;
}
