#pragma once

#include <iostream>
typedef int datatype;


struct Node {
	datatype key;
	Node* parent;
	Node* left;
	Node* right;
};

Node* CreateTree(Node*& pNode, int c);
void ShowTree(Node* pNode, int l);
void PrefixOrder(Node* pNode);
void PostfixOrder(Node* pNode);
void InfixOrder(Node* pNode);