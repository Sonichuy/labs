#include <iostream>

int main()
{
    const int n = 10000;

    bool arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = true;
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i])
        {
            for (int j = i * i; j < n; j+= i)
            {
                arr[j] = false;
            }
        }
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i])
        {
            std::cout << i;
            return 0;
        }
    }
}