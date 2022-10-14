#include <iostream>
#include <Windows.h>
#include "Header.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "ukr");
	datatype choice = 0, c = 0;
	Node* root = NULL;

	do {
		cout << endl;
		cout << "1.Рекурсивний  алгоритм  створення  бінарного  дерева" << endl;
		cout << "2.Рекурсивний алгоритм відображення дерева" << endl;
		cout << "3.Рекурсивний алгоритм обходу дерева у прямому порядку" << endl;
		cout << "4.Рекурсивний алгоритм обходу дерева у зворотномупорядку" << endl;
		cout << "5.Рекурсивний  алгоритм обходу  дерева  у внутрішньому порядку" << endl;
		cout << "6.Вихід " << endl;
		cout << "Введіть ваш вибір - ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << endl;
			cout << "Напишіть кількість вузлів - ";
			cin >> c;
			root = CreateTree(root, c);
			ShowTree(root, 0);
			break;
		case 2:
			if (root) {
				ShowTree(root, 0);
			}
			else {
				cout << "Ви не створили бінарне дерево";
			}
			break;
		case 3:
			if (root) {
				PrefixOrder(root);
			}
			else {
				cout << "Ви не створили бінарне дерево";
			}
			break;
		case 4:
			if (root) {
				PostfixOrder(root);
			}
			else {
				cout << "Ви не створили бінарне дерево";
			}
			break;
		case 5:
			if (root) {
				InfixOrder(root);
			}
			else {
			cout << "Ви не створили бінарне дерево";
			}
			break;
		}
	}
	while (choice != 6);
}