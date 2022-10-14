#include "Header.h"
using namespace std;

Node* CreateTree(Node*& pNode, int c) {
	datatype value;
	if (c == 0) {
		pNode = NULL;
	}
	else if (c > 0) {
		cout << "Напишіть значення для вузла: ";
		cin >> value;
		pNode = new Node;
		pNode->key = value;
		pNode->left = pNode->right = NULL;


		int c_left = (c / 2);
		CreateTree(pNode->left, c_left);

		int c_right = (c - c_left - 1);
		CreateTree(pNode->right, c_right);
	}
};


void ShowTree(Node* pNode, int l) {
	if (pNode != NULL) {
		ShowTree(pNode->right, l + 1);
		for (int i = 0; i < l; i++)
			cout << "\t";
		cout << pNode->key << endl;
		ShowTree(pNode->left, l + 1);
	}
};


void PrefixOrder(Node* pNode) {
	if (pNode != NULL) {
		cout << endl;
		cout << pNode->key;
		PrefixOrder(pNode->left);
		PrefixOrder(pNode->right);
	}
};


void PostfixOrder(Node* pNode) {

	if (pNode != NULL) {
		PostfixOrder(pNode->left);
		PostfixOrder(pNode->right);
		cout << pNode->key << endl;
	}
};


void InfixOrder(Node* pNode) {
	if (pNode != NULL) {
		InfixOrder(pNode->left);
		cout << pNode->key << endl;
		InfixOrder(pNode->right);
	}
};
