//Molina Nhoung CS162
//Program 5
//The purpose of this program is to keep track of favorite foods from
//different food carts added by the user. Each information will have
//the name of the cart, favorite food from there, cost, decription
//of flavors, and a disliked food from the cart. The information
//will be displayed to the user after.

#include <iostream>
#include <cctype>
#include <cstring>

//Constants
int const NAME {50};
int const SIZE {200};

//Structures
struct foodcart
{
	char * name;
	char * fave;
	float cost;
	char * flavor;
	int rate;
};

struct node
{
	foodcart  data;
	node * next;
};

//Classes
class foodcarts
{
	public:
		foodcarts();
		~foodcarts();
		void read();
		//void insert();
	private:
		node * head;

};

//Prototypes
//void read(foodcart & to_read);

