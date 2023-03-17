#include "foodcart.h"
using namespace std;

//Molina Nhoung CS162
//Program 5
//The purpose of this program is to keep track of favorite foods from
//different food carts added by the user. Each information will have
//the name of the cart, favorite food from there, cost, decription
//of flavors, and a disliked food from the cart. The information
//will be displayed to the user after.

foodcarts::foodcarts()
{
	head = nullptr;
}

foodcarts::~foodcarts()
{
}

void foodcarts::read()
{
	node * hold = head;
	head = new node;
	char temp[NAME];
	cout << "\nWhat's the name of the food cart?: ";
	cin.get(temp, NAME, '\n');
	cin.ignore(100, '\n');

	head->data.name = new char [strlen(temp) + 1];
	strcpy(head->data.name, temp);

	char temp1[SIZE];
	cout << "\nWhat's your favorite food from the cart?: ";
	cin.get(temp1, SIZE, '\n');
	cin.ignore(100, '\n');

	head->data.fave = new char [strlen(temp1) + 1];
	strcpy(head->data.fave, temp1);

	cout << "\nHow much does the food cost?: ";
	cin >> head->data.cost;
	cin.ignore(100, '\n');

	char temp2[SIZE];
	cout << "\nGive a description of flavors and what you like about the food: ";
	cin.get(temp2, SIZE, '\n');
	cin.ignore(100, '\n');

	head->data.flavor = new char [strlen(temp2) + 1];
	strcpy(head->data.flavor, temp2);

	cout << "\nWhat would you rate the food cart? (1-10): ";
	cin >> head->data.rate;
	cin.ignore(100, '\n');

	cout << head->data.name << " " << head->data.fave << " " << head->data.cost << " " << head->data.flavor << " " << head->data.rate << endl;
	head->next = temp;
}

/*void foodcarts::insert()
{	
	node * temp = head;
	temp->data.name;
	head->next = nullptr;
}*/
