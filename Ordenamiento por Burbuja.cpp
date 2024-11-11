#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n, int &swaps) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swaps++;
            }
        }
    }
}

int main() {
    int arr[] = {125, 90, 150, 105, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    int swaps = 0;

    bubbleSort(arr, n, swaps);

    cout << "Tiempos de respuesta ordenados de menor a mayor: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "Número total de intercambios: " << swaps << endl;

    return 0;
}

