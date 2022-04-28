//Daniel Blakeman
//CIS 2207 502
//03-28-2022
//Write a program that maintains a database containing data, Name and Birthday of your friends and relatives.  
//You will be able to enter, remove, modify or search this data.  Initially, you can assume that the names are unique.  
//The program will be able to save and load the data in a file for use later.
#include"BinaryNodeTree.cpp"
#include"Person.cpp"
#include"BinaryNode.cpp"
#include<string>
#include<iostream>
using namespace std;

int main()
{

	//Empty Tree
	BinaryNodeTree<BinaryNode<Person<string>>> emptyTree{};
	emptyTree.Print();

	//Objects and pointers
	Person<string> Person1("Dan", "1985");
	Person<string> Person2("Kyle", "1986");
	Person<string> Person3("John", "1987");
	shared_ptr<BinaryNode<Person<string>>> leftTreePtr = nullptr;
	shared_ptr<BinaryNode<Person<string>>> rightTreePtr = nullptr;
	//shared_ptr<BinaryNode<BinaryNode<Person<string>>>> rootPtr;

	//Make Nodes
	BinaryNode<Person<string>> root = BinaryNode<Person<string>>(Person1);
	BinaryNode<Person<string>> leftChild = BinaryNode<Person<string>>(Person2);
	BinaryNode<Person<string>> rightChild = BinaryNode<Person<string>>(Person3);

	//Connect Nodes
	root.setLeftChildPtr(&leftChild);
	root.setRightChildPtr(&rightChild);
	cout << root.getItem().getName();
	cout << root.getLeftChildPtr()->getItem().getName();
	cout << root.getRightChildPtr()->getItem().getName();

	//Make and Print the tree
	//cout << "Root Name: " << root.getItem().getName() << endl;
	//cout << "Root Birthday: " << root.getItem().getBirthday() << endl;
	//cout << "Left Child Name: " << root.getLeftChildPtr()->getItem().getName() << endl;
	//cout << "Left Child Birthday: " << root.getLeftChildPtr()->getItem().getBirthday() << endl;
	//cout << "Right Child Name: " << root.getRightChildPtr()->getItem().getName() << endl;
	//cout << "Right Child Birthday: " << root.getRightChildPtr()->getItem().getBirthday() << endl;
	
	/*BinaryNodeTree<BinaryNode<Person<string>>> myTree;
	myTree.Print();*/


	//BinaryNodeTree<BinaryNode<Person<string>>> newTree;

	////Variable
	//int option = 0;
	//string name;
	//string birthday; 
	//string month;

	//do 
	//{
	//	//Menu Output
	//	cout << "Menu: " << endl;
	//	cout << "1. Enter -- Add a new person to your list." << endl;
	//	cout << "2. Modify -- Change the name or birthday of a person." << endl;
	//	cout << "3. Remove -- Remove a person from your list." << endl;
	//	cout << "4. Search -- Display the information about a given person (unique name)." << endl;
	//	cout << "5. Query -- Run a query that displays the people by asking the user to enter a month." << endl;
	//	cout << "6. Print -- List everyone in the database." << endl;
	//	cout << "7. Exit" << endl;
	//	cout << "Please enter your selection: ";
	//	cin >> option;

	//	//Menu Switch Statement
	//	switch (option)
	//	{
	//	case 1:
	//		cout << "Add a new person to your list: " << endl;

	//		cout << "What is this person's name?: ";
	//		cin >> name;
	//		newPerson.setName(name);

	//		cout << "What is this person's birthday?: ";
	//		cin >> birthday;
	//		newPerson.setBirthday(birthday);

	//		//tree1->add(newPerson);
	//		cout << endl;
	//		break;

	//	case 2:
	//		cout << "Change the name or birthday of a person: " << endl;
	//		cout << endl;
	//		break;

	//	case 3:
	//		cout << "Remove a person from your list: " << endl;
	//		cout << endl;
	//		break;

	//	case 4:
	//		cout << "Please enter a person's name: ";
	//		cin >> name;
	//		//tree1->getEntry(newPerson);
	//		cout << endl;
	//		break;

	//	case 5:
	//		cout << "Run a query that displays the people by asking the user to enter a month: " << endl;
	//		cout << endl;
	//		break;

	//	case 6:
	//		cout << "List everyone in the database" << endl;

	//		break;

	//	case 7:
	//		exit(3);
	//		break;

	//	default:
	//		cout << "Please choose another option" << endl;
	//		cout << endl;
	//		break;
	//	}
	//} while (option != 7);
	
	return 0;
}