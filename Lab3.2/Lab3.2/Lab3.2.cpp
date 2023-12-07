#include <iostream>

int main()
{
    srand(time(NULL));
    
    int n, m;

    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "Enter m: ";
    std::cin >> m;

    if (n % 2 == 0 || m % 2 == 0)
    {
        std::cout << "n and m must be odd";
        return 1;
    }

    int** matrixA = new int*[n];

    for (int i = 0; i < n; i++)
    {
        matrixA[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrixA[i][j] = rand() % 100;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << matrixA[i][j] << " ";
        }

        std::cout << std::endl;
    }

    int** matrixB = new int* [n];

    for (int i = 0; i < n; i++)
    {
        matrixB[i] = new int[m];
    }

    std::cout << std::endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int maxValue = 0;

            for (int k = 0; k < n; k++)
            {
                for (int l = 0; l < m; l++)
                {
                    if (i == k || j == l)
                    {
                        if (matrixA[k][l] > maxValue)
                        {
                            maxValue = matrixA[k][l];
                        }
                    }
                }
            }

            matrixB[i][j] = maxValue;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << matrixB[i][j] << " ";
        }

        std::cout << std::endl;
    }
}

