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
		cout << "1.�����������  ��������  ���������  ��������  ������" << endl;
		cout << "2.����������� �������� ����������� ������" << endl;
		cout << "3.����������� �������� ������ ������ � ������� �������" << endl;
		cout << "4.����������� �������� ������ ������ � �����������������" << endl;
		cout << "5.�����������  �������� ������  ������  � ����������� �������" << endl;
		cout << "6.����� " << endl;
		cout << "������ ��� ���� - ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << endl;
			cout << "�������� ������� ����� - ";
			cin >> c;
			root = CreateTree(root, c);
			ShowTree(root, 0);
			break;
		case 2:
			if (root) {
				ShowTree(root, 0);
			}
			else {
				cout << "�� �� �������� ������ ������";
			}
			break;
		case 3:
			if (root) {
				PrefixOrder(root);
			}
			else {
				cout << "�� �� �������� ������ ������";
			}
			break;
		case 4:
			if (root) {
				PostfixOrder(root);
			}
			else {
				cout << "�� �� �������� ������ ������";
			}
			break;
		case 5:
			if (root) {
				InfixOrder(root);
			}
			else {
			cout << "�� �� �������� ������ ������";
			}
			break;
		}
	}
	while (choice != 6);
}