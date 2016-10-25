#include <iostream>
#include<string>
#include "SodaCan.hpp"
using namespace std ;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

///////////////////////////////////////////////////////////////////////////////

string brand;
int size ;
int contents ;
int choice ;
SodaCan can ;

int main() 
{
	cout<<"\t welcome to the vending machine!"<<endl<<endl;
	cout<<"please input your order"<<endl<<"and pls don't put any spaces in brand name!";
	
	cout << "CHOOSE" << endl;
			cout << "1. Buy a drink" << endl;
			cout << "2. Combine the drink" << endl;
			cout << "3. Subtract the drink" << endl;
			cout << "4. Exit" << endl;
			cout << "input your choice : ";
			cin >> choice;
			
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
		cout << can.getContents() << " mL of " << can.getBrand();
		
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
	
	
	return 0;
}
