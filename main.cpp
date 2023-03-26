#include "List.h"

int main()
{
	SetConsoleOutputCP(1251);

	string str;
	cout << "Введите выражение: ";
	getline(cin, str);
	if (isCorrect(str))
	{
		cout << "Скобки расставлены корректно\n\n";
		system("pause");
		return 0;
	}
	else
	{
		cout << "Скобки расставлены не корректно!\n\n";
		system("pause");
		return 0;
	}
}