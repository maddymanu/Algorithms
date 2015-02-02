#include <iostream>
#include <stdio.h>
#include "base.cpp"

using namespace std;

int main() {
	cout << "Algos.coo" << endl;
	struct node *root = newNode(45);
	root->left = newNode(20);
	cout << root->data << endl;
	return 0;
}

//Starting again. 