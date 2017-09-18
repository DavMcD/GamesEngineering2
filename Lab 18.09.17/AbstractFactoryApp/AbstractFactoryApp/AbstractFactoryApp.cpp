// AbstractFactoryApp.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <vector>
using namespace std;

class Product 
{
public:
	Product() {}
	virtual ~Product() {}
	virtual void print() = 0;
};

class Whiskey : public Product 
{
public:
	void print()
	{
		std::cout << "I'm Whiskey" << std::endl;
	}
};

class Beer : public Product
{
public:
	void print()
	{
		std::cout << "I'm actually Beer" << std::endl;
	}
};

class Factory
{
public:
	virtual Product* MakeWhiskey() = 0;
	virtual Product* MakeBeer() = 0;
};

class BoozeFactory : public Factory
{
public:
	Product* MakeWhiskey()
	{
		return new Whiskey;
	}
	Product* MakeBeer()
	{
		return new Beer;
	}
};


int main(void)
{
	Factory* factory = new BoozeFactory;
	vector<Product*> products;
	products.push_back(factory->MakeWhiskey());
	products.push_back(factory->MakeBeer());

	for (int i = 0; i < products.size(); i++)
	{
		products[i]->print();
	}

	system("PAUSE");
    return 0;
}

