// BridgePattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Character
{
public:
	Character() {}
	void Print() 
	{
		cout << "Printing out Character" << endl;
	}
};

class Handler
{
public:
	Handler() : character(new Character()) {}
	Character* operator->() { return character; }
private:
	Character* character;

};


int main()
{
	Handler handle;
	handle->Print();
}

