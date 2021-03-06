#pragma once
#include <string>
//Daniel Blakeman
//CIS 2207 502
//03-28-2022
//Write a program that maintains a database containing data, Name and Birthday of your friends and relatives.  
//You will be able to enter, remove, modify or search this data.  Initially, you can assume that the names are unique.  
//The program will be able to save and load the data in a file for use later.
using namespace std;

template<class ItemType>
class Person
{
private:
	string name;
	string birthday;
public:
	Person();
	Person(string personName, string personBirthday);
	string getName();
	void setName(string personName);
	string getBirthday();
	void setBirthday(string personBirthday);
};

