#ifndef SodaCan_hpp
#define SodaCan_hpp

#include<string>
#include<iostream>
using namespace std;

class SodaCan
{
	string my_Brand ;
	int my_Size ;
	int my_Contents;
	
	public :
		~SodaCan();
		SodaCan() ;
		SodaCan (string brand,int size,int contents) ;
		int contents ;
		bool isEmpty ;
		void pourInSoda(int amount) ;
		void drint(int amount) ;
		void setSize(int size) ;
		int getSize ();
		string getBrand ();
		void setBrand(string brand);
		int getContents();
		
};

void SodaCan::pourInSoda(int amount)
{
	my_Contents = amount;
}

void SodaCan::setSize(int size)
{
	my_Size = size;
}

int SodaCan::getSize()
{
	return my_Size;
}

string SodaCan::getBrand()
{
	return my_Brand;
}

void SodaCan::setBrand(string brand)
{
	my_Brand = brand;
}

#endif
