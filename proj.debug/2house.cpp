#include <iostream>

int main() {
    const int height = 13;
    const int width = 20;

    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            if (i == 0 && (j >= 8 && j <= 12))
            {
                std::cout << '*';
            } else if (i == 1 && (j >= 7 && j <= 12))
            {
                std::cout << '*'; 
            } else if (i == 2 && (j >= 6 && j <= 13))
            {
                std::cout << '*'; 
            } else if (i == 3 && (j >= 5 && j <= 17))
            {
                std::cout << '*';
            } else if (i == 4 || i == height - 1)
            {
                std::cout << '*';
            } else if (j == 0 || j == width - 1)
            {
                std::cout << '*';
            } else if (i == 5 || i == 6 || i == 7)
            {
                if (j == 4 || j == 8 || j == 12 || j == 16)
                {
                    std::cout << '*';
                } else
                {
                    std::cout << ' '; 
                }
            } else if (i == 8 || i == 9)
            {
                if (j == 6 || j == 8 || j == 10 || j == 12 || j == 14)
                {
                    std::cout << '*'; 
                } else if (i == 9 && (j == 10 || j == 11))
                {
                    std::cout << ' ';
                } else
                {
                    std::cout << ' ';
                }
            } else
            {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
