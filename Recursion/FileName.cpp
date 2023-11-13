#include <iostream>
#include <cstdlib>
#include <ctime>

// рекурсия (факториал)

int factorial(int num) {
	if (num <= 0)
		return 1;
	return factorial(num - 1) * num;
}
// Фибоначчи
int fibonacci(int num) {
	if (num <= 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	std::cout << "Введите число-> ";
	std::cin >> n;
	std::cout << n << "! =" << factorial(n) << std::endl;

	// числа Фибоначчи
	std::cout << "Введите номер числа Фибоначчи-> ";
	std::cin >> n;
	std::cout << "Число Фибоначчи № " << n << " = " << fibonacci(n) << std::endl;

	return 0;
}

