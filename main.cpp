#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int rows, cols;
    std::cout << "Enter array size (rows and columns):";
    std::cin >> rows >> cols;
    int** array = new int*[rows];
    for (int i = 0; i < rows; ++i)
    {
        array[i] = new int[cols];
    }
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand();
        }
    }
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
