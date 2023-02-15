// Calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Программа Калькулятор\n";
	bool tf1; tf1 = true;
	bool tf2; tf2 = true;
	double first;
	char oper[1];
	double second;
	double result;
	result = 0;
	cout << "Введите первое число\n";
	cin >> first;
	while (tf1)
	{
		cout << "Введите арифметическую операцию из списка (+, – , * , / ,C , Q )\n";
		cin >> oper[0];
		if (oper[0] == 'Q')
		{
			tf1 = false;
		}
		else
		{
			while (tf2)
			{
				switch (oper[0])
				{
				case '+': tf2 = false; break;
				case '-': tf2 = false; break;
				case '*': tf2 = false; break;
				case '/': tf2 = false; break;
				case 'C': tf2 = false; break;
				case 'Q': tf2 = false; break;
				default:
					cin >> oper[0];
					break;
				}
			}
			if (oper[0] == 'Q')
			{
				tf1 = false; continue;
			}
			if (oper[0] == 'C')
			{
				result = 0;
				cout << "Введите первое число\n";
				cin >> first;
			}
			else
			{
				cout << "Введите второе число\n";
				cin >> second;
				switch (oper[0])
				{
				case '+': result = first + second; break;
				case '-': result = first - second; break;
				case '*': result = first * second; break;
				case '/':
				{
					if (second == 0)
					{
						cout << "Деление на ноль невозможно\n";
						result = first;
					}
					else result = first / second;
				}
				}
				cout << "Результат = " << result << "\n";
				first = result;
				tf2 = true;
			}
		}
	}
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
