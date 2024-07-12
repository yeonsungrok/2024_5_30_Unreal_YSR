

#include "BinarySearchTree.h"

BinarySearchTree::~BinarySearchTree()
{
}

void BinarySearchTree::Insert(int key)
{
	Node* newNode = new Node(key);

	if(_root == nullptr)
	{
		_root = newNode;
		return;
	}

	Node* node = _root;
	Node* parent = nullptr;
	
	// 자리찾기, 부모찾기
	while (true)
	{
		if (node == nullptr)
			break;

		parent = node;
		if (key < node->key)
		{
			node = node->left;
		}
		else
		{
			node = node->right;
		}
	}

	newNode->parent = parent;
	if (key < parent->key)
	{
		parent->left = newNode;
	}
	else
	{
		parent->right = newNode;
	}
}

void BinarySearchTree::PrintTree(Node* node)
{
	if (node == nullptr)
		return;

	// Tree의 전위순회 : 부모 - 왼쪽 자식들(부모나오고 왼쪽 자식들...) - 오른쪽 자식들
	// Tree의 중위순회 : 왼쪽 자식들 - 부모 - 오른쪽 자식들..(아래 순서에따라 달라짐)
	// Tree의 후위순회 : 왼쪽 자식들 - 오른쪽 자식들 - 부모..(아래 순서에따라 달라짐)
	cout << node->key << endl;
	PrintTree(node->left);
	PrintTree(node->right);

}


Node* BinarySearchTree::Search(Node* node, int key)
{
	if (node == nullptr)
		return nullptr;

	if (key == node->key)
		return node;

	if (key < node->key)
		return Search(node->left, key);
	else
		return Search(node->right, key);

	return nullptr;
}

Node* BinarySearchTree::Min(Node* node)
{
	//재귀호출 or 반복문으로 2가지 방법으로 구성가능

	if (node == nullptr)
		return nullptr;

	if (node->left != nullptr)
		return Min(node->left);

	return node;
}

Node* BinarySearchTree::Max(Node* node)
{
	if (node == nullptr)
		return nullptr;

	if (node->right != nullptr)
		return Max(node->right);

	return node;
}

Node* BinarySearchTree::Previous(Node* node)
{
	// 이전 노드(중위 순회에서의 전 노드)를 반환
	if (node == nullptr)
		return nullptr;

	if (node->left == nullptr)
		return node;
		
	return Max(node->left);
}

Node* BinarySearchTree::Next(Node* node)
{
	if (node == nullptr)
		return nullptr;

	if (node->right == nullptr)
		return node;

	return Min(node->right);
}

void BinarySearchTree::Delete(Node* node)
{
	if (node == nullptr) // 형식적 예외처리
		return;

	if (node->left == nullptr)
	{
		Replace(node, node->right);
	}
	else if (node->right == nullptr)
	{
		Replace(node, node->left);
	}
	else
	{
		Node* prev = Previous(node);
		node->key = prev->key;
		node->data = prev->data;

		Delete(prev);
	}

}

void BinarySearchTree::Replace(Node* node1, Node* node2)
{
	if (node1->parent == nullptr)
		_root = node2;
	
	else if (node1 == node1->parent->left)
	{
		node1->parent->left = node2;
	}
	else
	{
		node1->parent->right = node2;
	}

	if (node2 != nullptr)
		node2->parent = node1->parent;

	delete node1;
}












