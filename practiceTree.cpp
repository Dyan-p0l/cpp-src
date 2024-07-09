#include <iostream>

using namespace std;

struct Node{
	
	int data;
	Node* left;
	Node* right;
	
};

Node* createNode(int data){

	Node* newNode = new Node();
	newNode->data  = data;
	newNode->left = newNode->right = nullptr; 	
	return newNode;
	
}

void preOrder(Node* root){
	if(root == nullptr){
		return;
	}
	
	cout<< root->data<< " ";
	preOrder(root->left); 
	preOrder(root->right);
}

void inOrder(Node* root){
	if(root == nullptr){
		return;
	}
	
	inOrder(root->left);
	cout<< root->data<< " ";
	inOrder(root->right);
}

void postOrder(Node* root){
	if(root == nullptr){
		return;
	}
	
	postOrder(root->left);
	postOrder(root->right);
	cout<< root->data<< " ";
}
int main(){
	
	Node* root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->left->right = createNode(5);
	root->right->left = createNode(6);
	root->right->right = createNode(7);
	
	cout<< "Pre-Order Traversal: ";
	preOrder(root);
	cout<< endl;
	
	cout<< "In-Order Traversal: ";
	inOrder(root);
	cout<< endl;
	
	cout<< "Post-Order Traversal: ";
	postOrder(root);
	cout<< endl;
	return 0;
}