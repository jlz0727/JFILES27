#include <iostream>

void printRocketPart(int height, int width, int i, int j) {
    if (i == 0 && j == width / 2) {
        std::cout << '*';
    } else if (i == 1 && (j == width / 2 - 1 || j == width / 2 + 1)) {
        std::cout << '*';
    } else if (i == 2 && (j == width / 2 - 2 || j == width / 2 + 2)) {
        std::cout << '*';
    } else if (i >= 3 && i <= 12) {
        if (j == width / 2 - 3 || j == width / 2 + 3) {
            std::cout << '*';
        } else if ((i == 5 || i == 7 || i == 9 || i == 11) && (j >= width / 2 - 2 && j <= width / 2 + 2)) {
            std::cout << '-';
        } else {
            std::cout << ' ';
        }
    } else if (i == 13) {
        if (j >= width / 2 - 3 && j <= width / 2 + 3) {
            std::cout << '*';
        } else {
            std::cout << ' ';
        }
    } else if (i == 14 && (j == width / 2 - 4 || j == width / 2 + 4)) {
        std::cout << '*';
    } else if (i >= 15 && i <= 19 && (j == width / 2 - 5 || j == width / 2 + 5)) {
        std::cout << '*';
    } else {
        std::cout << ' ';
    }
}

int main() {
    const int height = 20;
    const int width = 13;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            printRocketPart(height, width, i, j);
        }
        std::cout << std::endl;
    }

    return 0;
}
