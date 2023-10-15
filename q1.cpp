#include<iostream>
#include <cstring>
using namespace std;
/*
Q1 Vedant Agarwal 
Swapping using Bubble Sort
*/
void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

void bubblesort(char arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    const int maxsize = 100; 
    char chararray[maxsize];

    cout << "Enter string=> ";
    cin.getline(chararray, maxsize);

    int size = strlen(chararray);

    bubblesort(chararray, size);

    cout << "Sorted string=> " << chararray << endl;

    return 0;
}
