//A program that keeps track of the computers in your store
#include <iostream>
using namespace std;
int main()
{
	string brand, model;
	int serial_number, ram_size, values, price_no;
	double price;
	float sum, average;
	
	cout << "This is a program that keeps track of the computers in your store" << endl << endl << endl;


	sum = 0;
	int largest = 0;
	
	cout << "Enter the total number of brands: ";
	cin >> values;
	cout << "\n";
	
	for (int i = 0; i < values; i++)
	{
		cout << "Enter " << i + 1 << "st brand: ";
		cin >> brand;

		
		
		cout << "Enter " << i + 1 << "st model: ";
		cin >> model;

		
		
		cout << "Enter " << i + 1 << "st serial number: ";
		cin >> serial_number;
		
		
		cout << "Enter " << i + 1 << "st Ram size: ";
		cin >> ram_size;
		
		cout << "Enter " << i + 1 << " st price: ";
		cin >> price;
		cout << endl;
		
			
			sum+= price;
			
			if (largest < price)
			{
              largest = price;
			}

	}  
	
	average = sum/values;
	cout << endl << endl << endl;
 
	cout << "The total price of all computers is: " << sum << endl;	
	cout << "The average price of all computers is: " << average << endl;		
	cout << "The price of the brand with the most expensive computer is: " << largest << endl;
	cout << "The price of the model with the most expensive computer is: " << largest << endl;


	
	return 0;
	
}
