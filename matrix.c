#include <iostream>

int** createMatrix(int r, int c) {
    int** matrix = new int*[r];
    for (int i = 0; i < r; ++i) matrix[i] = new int[c]{0};
    return matrix;
}

void freeMatrix(int** matrix, int r) {
    for (int i = 0; i < r; ++i) delete[] matrix[i];
    delete[] matrix;
}

int main() {
    int** mat = createMatrix(3, 3);
    std::cout << "Matrix created safely.\n";
    freeMatrix(mat, 3);
    return 0;
}
