#include "SodaCan.hpp"
#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////////////////////////////////////////

string brand;
int size ;
int contents ;
int choice ;
string brand1,brand2 ;
SodaCan can ;

int main() 
{
	cout<<"\t welcome to the vending machine!!!!!!!"<<endl<<endl;
	cout<<"please input your order"<<endl<<"and pls don't put any spaces in brand name!"<<endl<<endl;
	
	cout << "CHOOSE" << endl;
			cout << "1. Buy a drink" << endl;
			cout << "2. Combine the drink" << endl;
			cout << "3. Subtract the drink" << endl;
			cout << "4. Exit" << endl;
			cout << "input your choice : ";
			cin >> choice;
			
			cout<<endl;
			
	if(choice == 1)
	{
		cout << "Type the soda type: ";
		cin >> brand;
		cout<<endl ;
		can.setBrand(brand);
				
		cout << "how much ml? : ";
		cin >> contents;
		cout<<endl;
		can.pourInSoda(contents);
								
		cout << "What size would you like?\n";
		cout << "1.tall"<<endl;
		cout << "2.grande"<<endl;
		cout << "3.venti"<<endl;
		cout << "input your choice : ";
		cin >> size;
		can.setSize(size);
		
		cout<<endl;
			
		cout << "Your order is";
		cout << can.getContents() << " ml of " << can.getBrand();
		
		if(size == 1) 
		{
		cout << " size tall";
		cout<<endl;
		}
		
		else if(size == 2) 
		{
		cout << " size grande";
		cout<<endl;
	    }
	    
		else if(size == 3) 
		{
		cout << " size venti";
		cout<<endl;
		}
		
	}
///////////////////////////////////////////////////////////////////

	else if (choice==2)
	{
		cout<<"input soda 1 : ";
		cin>>brand1 ;
		
		cout<<"input soda 2 : ";
		cin>>brand2 ;
		cout<<endl;
		
		while(brand1 != brand2)
		{
			cout<<"please input the same type of soda :)"<<endl<<endl;
			
			cout<<"input soda 1 : ";
			cin>>brand1 ;
		
			cout<<"input soda 2 : ";
			cin>>brand2 ;
			cout<<endl;
		}
		
		if(brand1==brand2)
		{
			int amount1,amount2;
			
			cout<<"input the amount of soda 1 : ";
			cin>>amount1;
			
			cout<<"input the amount of soda 2 : ";
			cin>>amount2;
			cout<<endl;
			
			can.combineSoda(amount1,amount2,brand1,brand2);
		}
	}	
/////////////////////////////////////////////////////////////////////////////

	else if (choice==3)
	{
		cout<<"input soda 1 : ";
		cin>>brand1 ;
		
		cout<<"input soda 2 : ";
		cin>>brand2 ;
		cout<<endl;
		
		while(brand1 != brand2)
		{
			cout<<"please input the same type of soda :)"<<endl<<endl;
			
			cout<<"input soda 1 : ";
			cin>>brand1 ;
		
			cout<<"input soda 2 : ";
			cin>>brand2 ;
			cout<<endl;
		}
		
		if(brand1==brand2)
		{
			int amount1,amount2;
			
			cout<<"input the amount of soda 1 : ";
			cin>>amount1;
			
			cout<<"input the amount of soda 2 : ";
			cin>>amount2;
			cout<<endl;
			
			cout<<"now you have " << can.subtractSoda(amount1,amount2)<<" ml of "<< brand1 ;
		}
		
	}

////////////////////////////////////////////////////////////////////////////////////////////

	else if(choice==4)
	cout<<"okay,bye!!!";


	return 0;
}
