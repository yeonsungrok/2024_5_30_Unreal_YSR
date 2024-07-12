#pragma once

#include <iostream>

using namespace std;


// 이진 탐색트리

struct Node
{
	Node() {}
	Node(int key): key(key) {	}


	Node* left = nullptr;
	Node* right = nullptr;

	Node* parent = nullptr;

	int key = -1;
	int data = 0;   // 50, 30 이런것들이 데이터가 아님 // 예 : Player, Player ID
};

class BinarySearchTree
{
public:
	BinarySearchTree(){}
	~BinarySearchTree();

	void Insert(int key);
	void PrintTree(Node* node);

	Node* Search(Node* node, int key);
	Node* Min(Node* node);
	Node* Max(Node* node);

	void Delete(Node* node);

	Node* Previous(Node* node);
	Node* Next(Node* node);
	void Replace(Node* node1, Node* node2);

	Node* _root = nullptr;
private:
};



