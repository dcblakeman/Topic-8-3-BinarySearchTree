//Daniel Blakeman
//CIS 2207 502
//03-28-2022
//Write a program that maintains a database containing data, Name and Birthday of your friends and relatives.  
//You will be able to enter, remove, modify or search this data.  Initially, you can assume that the names are unique.  
//The program will be able to save and load the data in a file for use later.
#include"BinaryNodeTree.h"
#include<iostream>


template<class ItemType>
inline BinaryNodeTree<ItemType>::BinaryNodeTree()
{
	root = nullptr;
}

template<class ItemType>
BinaryNodeTree<ItemType>::BinaryNodeTree(BinaryNode<ItemType>* rootNode)
{
	root = rootNode;
}

template<class ItemType>
BinaryNode<ItemType> search(BinaryNode<ItemType>* node, int key)
{
	// Base Cases: root is null or key is present at root
	if (root == NULL || root->key == key)
		return root;

	// Key is greater than root's key
	if (root->key < key)
		return search(root->right, key);

	// Key is smaller than root's key
	return search(root->left, key);
}






