#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* left,*right;
	Node(int data) {
		this->data = data;
		left = right = NULL;
	}
};

class BST {
private:
	Node* root;
	void inOrderHelper(Node* node) {
		if(node == NULL)return;
		inOrderHelper(node->left);
		cout<<node->data<<", ";
		inOrderHelper(node->right);
	}
	void preOrderHelper(Node* node) {
		if(node == NULL)return;
		cout<<node->data<<", ";
		preOrderHelper(node->left);
		preOrderHelper(node->right);
	}
	void postOrderHelper(Node* node) {
		if(node == NULL)return;
		postOrderHelper(node->left);
		postOrderHelper(node->right);
		cout<<node->data<<", ";
	}

	int getSumOfAllNodesHelper(Node* node) {
		if(node == NULL) return 0;
		return (node->data + getSumOfAllNodesHelper(node->left) + getSumOfAllNodesHelper(node->right));
	}

	void printFullNodeHelper(Node* node) {
		if(node == NULL)return;
		if(node->left != NULL && node->right != NULL) {
			cout<<node->data<<", ";
		}
		printFullNodeHelper(node->left);
		printFullNodeHelper(node->right);
	}
public:
	BST() {
		root = NULL;
	}
	void insertNode(int data) {
		Node* newNode = new Node(data);
		Node* itr = root;
		if(itr == NULL) {
			root = newNode;
			return;
		}
		while(true) {
			if(data < (itr->data)) {
				if(itr->left == NULL) {
					itr->left = newNode;
					break;
				}
				else {
					itr = itr->left;
				}
				
			}
			else {
				if(itr->right == NULL) {
					itr->right = newNode;
					break;	
				}
				else {
					itr = itr->right;
				}
			}
		}
		return;
	}


	void inOrder() {
		inOrderHelper(root);
		cout<<"\n";
	}

	void preOrder() {
		preOrderHelper(root);
		cout<<"\n";
	}

	void postOrder() {
		postOrderHelper(root);
		cout<<"\n";
	}

	//https://www.geeksforgeeks.org/sum-nodes-binary-tree/
	int getSumOfAllNodes() {
		return getSumOfAllNodesHelper(root);
	}

	// https://www.geeksforgeeks.org/print-full-nodes-binary-tree/
	void printFullNode() {
		printFullNodeHelper(root);
	}	
};


int main() {
	BST bst;
	bst.insertNode(10);
	bst.insertNode(5);
	bst.insertNode(15);
	bst.insertNode(4);
	bst.insertNode(7);
	bst.inOrder();
	bst.preOrder();
	bst.postOrder();
}