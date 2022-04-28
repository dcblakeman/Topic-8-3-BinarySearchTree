//Daniel Blakeman
//CIS 2207 502
//03-28-2022
//Write a program that maintains a database containing data, Name and Birthday of your friends and relatives.  
//You will be able to enter, remove, modify or search this data.  Initially, you can assume that the names are unique.  
//The program will be able to save and load the data in a file for use later.
#include"BinaryNode.h"

template<class ItemType>
inline BinaryNode<ItemType>::BinaryNode()
{
	item = NULL;
	leftChildPtr = nullptr;
	rightChildPtr = nullptr;
}


template<class ItemType>
BinaryNode<ItemType>::BinaryNode(const ItemType& anItem)
{
	item = anItem;
	leftChildPtr = nullptr;
	rightChildPtr = nullptr;
}


template<class ItemType>
BinaryNode<ItemType>::BinaryNode(const ItemType& anItem, BinaryNode<ItemType>* leftPtr, BinaryNode<ItemType>* rightPtr)
{
	item = anItem;
	leftChildPtr = &leftPtr;
	rightChildPtr = &rightPtr;
}

template<class ItemType>
void BinaryNode<ItemType>::setItem(const ItemType& anItem)
{
	item = anItem;
}

template<class ItemType>
ItemType BinaryNode<ItemType>::getItem() const
{
	return ItemType(item);
}

template<class ItemType>
bool BinaryNode<ItemType>::isLeaf() const // A node with no children
{
	if (getLeftChildPtr == nullptr && getRightChildPtr == nullptr)
		return true;
	else
		return false;
}

template<class ItemType>
auto BinaryNode<ItemType>::getLeftChildPtr() const
{
	return leftChildPtr;
}

template<class ItemType>
auto BinaryNode<ItemType>::getRightChildPtr() const
{
	return rightChildPtr;
}

template<class ItemType>
void BinaryNode<ItemType>::setLeftChildPtr(BinaryNode<ItemType>* leftPtr)
{
	leftChildPtr = leftPtr;
}

template<class ItemType>
void BinaryNode<ItemType>::setRightChildPtr(BinaryNode<ItemType>* rightPtr)
{
	rightChildPtr = rightPtr;
}



