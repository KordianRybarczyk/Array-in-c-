#include <iostream>
#include <fstream>
#include "Array.h"


void enterValue(int *array) {
    std::cout << "Enter values to array" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "array " << i << "=";
        std::cin >> *(array + i);
    }
}

void showArray(int *array) {
    for (int i = 0; i < SIZE; i++) {
        std::cout << "array  " << i << " = " << *(array + i) << std::endl;
    }
}

int findMaxValue(int *array) {
    int max = array[0];
    for (int i = 1; i < SIZE; ++i) {
        if (*(array + i) > max) {
            max = *(array + i);
        }
    }
    return max;
}

int findMinValue(int *array) {
    int min = array[0];
    for (int i = 1; i < SIZE; ++i) {
        if (*(array + i) < min) {
            min = *(array + i);
        }
    }
    return min;
}

float averageValue(int *array) {
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum = sum + *(array + i);
    }
    float avg = static_cast<float>(sum) / SIZE;
    return avg;
}

void fileEnter(int array[]) {
    std::ofstream file("text.txt");
    if (!file.is_open()) {
        std::cerr << "Error opening file for writing." << std::endl;
        return;
    }
    for (int x = 0; x < SIZE; ++x) {
        file << array[x] << std::endl;
    }
    file.close();
}

void fileReading(int array[]) {
    std::ifstream file("text.txt");
    if (!file.is_open()) {
        std::cerr << "Error opening file for reading." << std::endl;
        return;
    }
    std::cout << "Content of file" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        file >> array[i];
        std::cout << array[i] << std::endl;
    }
    std::cout << std::endl;
    file.close();
}

void menu() {
    std::cout << "Choose one of the below options:\n";
    std::cout << "1 - Input Values into the array\n";
    std::cout << "2 - Show the content of the array\n";
    std::cout << "3 - Find the Maximum value of the array\n";
    std::cout << "4 - Find the Minimum value of the array\n";
    std::cout << "5 - Find the Average value of the array\n";
    std::cout << "6. Enter to file\n";
    std::cout << "7. Read the file\n";
    std::cout << "0 - EXIT\n";
}

