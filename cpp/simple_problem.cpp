
// Build the Code:
// Press Cmd + Shift + B to build the project (this will compile the C++ code using the task you configured).
// Run the Program:
// Press F5 to run and debug the program (this will execute the compiled program simple_problem in the terminal).
// Compile the code using g++:



// g++ simple_problem.cpp -o simple_problem

// Run the compiled executable:

// ./simple_problem


#include <iostream>

using namespace std;

int findMax(int* arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size = 6;  // Size of the array

    // Dynamically allocate an array
    int* arr = new int[size];

    // Fill the array with values
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    arr[5] = 6;

    // Find the max and print it
    int max_value = findMax(arr, size);
    printf("Max value is: %d\n", max_value);

    // Clean up dynamic memory
    delete[] arr;

    return 0;
}
