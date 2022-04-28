#pragma once
//Daniel Blakeman
//CIS 2207 502
//03-28-2022
//Write a program that maintains a database containing data, Name and Birthday of your friends and relatives.  
//You will be able to enter, remove, modify or search this data.  Initially, you can assume that the names are unique.  
//The program will be able to save and load the data in a file for use later.#pragma once
#include <memory>
#include"Person.h"
template<class ItemType>
class BinaryNode
{
private:
	ItemType item; //Data Portion
	BinaryNode<ItemType>* leftChildPtr; //Pointer to left child
	BinaryNode<ItemType>* rightChildPtr; //Pointer to right child

public:
	BinaryNode();
	BinaryNode(const ItemType& anItem);
	BinaryNode(const ItemType& anItem, BinaryNode<ItemType>* leftPtr, BinaryNode<ItemType>* rightPtr);
	void setItem(const ItemType& anItem);
	ItemType getItem() const;
	bool isLeaf() const;
	auto getLeftChildPtr() const;
	auto getRightChildPtr() const;
	void setLeftChildPtr(BinaryNode<ItemType>* leftPtr);
	void setRightChildPtr(BinaryNode<ItemType>* rightPtr);

};