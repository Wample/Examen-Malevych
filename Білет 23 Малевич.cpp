#include<iostream> 

void Way(int(*mas)[5], int n)
{
    int i = 0, j = 0;
    std::cout << mas[i][j] << "\n";
    while (i < n - 1 || j < n - 1)
    {
        i++;
        std::cout << mas[i][j] << "\n";
        j++;
        std::cout << mas[i][j] << "\n";
    }
}

int main()
{
    int n, p, l;
    n = 5;

    int array[5][5];

    int id = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            array[i][j] = id;
            id++;
        }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout << array[i][j] << "\t";
        std::cout << "\n";
    }

    Way(array, n);

    return 0;
}
