#include<iostream>
using namespace std;

void spiralTraversal(int arr[][4], int rows, int cols) {
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        // Traverse from left to right
        for (int i = left; i <= right; ++i) {
            cout << arr[top][i] << " ";
        }
        top++;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; ++i) {
            cout << arr[i][right] << " ";
        }
        right--;

        // Traverse from right to left
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        // Traverse from bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
     int rows = 3;
     int cols = 4;

    int arr[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    cout << "Spiral Traversal: ";
    spiralTraversal(arr, rows, cols);

    return 0;
}
