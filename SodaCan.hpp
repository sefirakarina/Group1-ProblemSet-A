#ifndef SodaCan_hpp
#define SodaCan_hpp

#include <iostream>
#include <string>
using namespace std;

class SodaCan{
private:
	string my_Brand;
	int my_Contents;
	int my_Size;
public:
	~SodaCan();
	SodaCan();
	SodaCan(string brand, int size, int contents);
	bool isEmpty();
	void pourInSoda(int amount);
	void drink(int amount);
	void setBrand(string brand);
	void setSize(int size);
	string getBrand();
	int getContents();
	int getSize();
	
	void combineSoda(int,int,string,string);
	int subtractSoda (int,int);

};

SodaCan::~SodaCan(){}
SodaCan::SodaCan(){}

SodaCan::SodaCan(string brand, int size, int contents){
	my_Brand = brand;
	my_Size = size;
	my_Contents = contents;
}

bool SodaCan::isEmpty()
{
	if(my_Contents == 0) 
	return 0;
	
	else 
	return 1;
}

void SodaCan::pourInSoda(int amount)
{
	my_Contents = amount;
}

void SodaCan::drink(int amount)
{
	my_Contents = my_Contents - amount;
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

int SodaCan::getContents()
{
	return my_Contents;
}

void SodaCan::combineSoda(int amount1,int amount2,string brand1,string brand2)
{
	cout<<"your choice is "<< amount1<< " ml of "<< brand1 <<" and " <<amount2 <<" ml of "<< brand2;
}

int SodaCan::subtractSoda (int amount1,int amount2)
{
	int subtract ;
	
	if(amount1>amount2)
	{
		subtract=amount1-amount2;
	}
	
	else if (amount1==amount2)
	{
		subtract=amount1;
	}
	
	else
	{
		subtract=amount2-amount1;
	}
	
	return subtract;
}


#endif
