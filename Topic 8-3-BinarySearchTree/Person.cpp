//Daniel Blakeman
//CIS 2207 502
//03-28-2022
//Write a program that maintains a database containing data, Name and Birthday of your friends and relatives.  
//You will be able to enter, remove, modify or search this data.  Initially, you can assume that the names are unique.  
//The program will be able to save and load the data in a file for use later.
#include "Person.h"

template<class ItemType>
Person<ItemType>::Person()
{
	name = "";
	birthday = "";
}

template<class ItemType>
Person<ItemType>::Person(string personName, string personBirthday)
{
	name = personName;
	birthday = personBirthday;
}

template<class ItemType>
inline string Person<ItemType>::getName()
{
	return name;
}

template<class ItemType>
void Person<ItemType>::setName(string personName)
{
	name = personName;
}

template<class ItemType>
string Person<ItemType>::getBirthday()
{
	return birthday;
}

template<class ItemType>
void Person<ItemType>::setBirthday(string personBirthday)
{
	birthday = personBirthday;
}

