#include <iostream>

int main()
{
	int n, m;
	std::cout << "Enter n: ";
	std::cin >> n;
	std::cout << "Enter m: ";
	std::cin >> m;

	long long int* arr = new long long int[100000];

	long long int number = pow(n, m);
	int counter;

	for(counter = 0; number > 0; counter++)
	{
		arr[counter] = number % 10;
		number /= 10;
	}

	long long int result = 0;

	for (int i = 0; i < counter; i++)
	{
		result += arr[i] * pow(10, i);
	}

	std::cout << result;
}