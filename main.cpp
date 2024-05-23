#include <iostream>
#include "Array.h"

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int option = 0;

    do {
        menu();
        std::cout << "Choose an option: ";
        std::cin >> option;

        switch (option) {
            case 0:
                break;
            case 1:
                enterValue(array);
                break;
            case 2:
                showArray(array);
                break;
            case 3:
                std::cout << "Maximum value = " << findMaxValue(array) << std::endl;
                break;
            case 4:
                std::cout << "Minimum value = " << findMinValue(array) << std::endl;
                break;
            case 5:
                std::cout << "Average value = " << averageValue(array) << std::endl;
                break;
            case 6:
                fileEnter(array);
                break;
            case 7:
                fileReading(array);
                break;
            default:
                std::cout << "Wrong option, choose the right one" << std::endl;
        }
    } while (option != 0);

    std::cout << "END" << std::endl;
    return 0;
}