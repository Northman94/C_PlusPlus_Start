#include <iostream>

using namespace std;

int main()
{
	cout << "\n";
	
	cout << "Hello, wellcome to carpet cleaning service!" << endl;
	cout << "It's 30 $ per room & 6 % tax rate." << endl;
	cout << "\nHow many room would you like to be cleaned ?" << endl; 
	
	int number_of_rooms {0};
	cin >> number_of_rooms;
	
	cout << "estimate for carpet cleaning service is: " << number_of_rooms << endl;
	cout << "\n It will cost: " << 30 * number_of_rooms << " $" << endl; 
	cout << "\nCost with TAX: " << 30 * number_of_rooms * 0.06 << " $" << endl; 
	cout << "== == == == == == == == == == == == == == == == == == == == == == == == == " << endl;
	
	cout << "\n Total Estimate: " << (30 * number_of_rooms) + (30 * number_of_rooms * 0.06) << " $"  << endl;
	cout << "\n This Estimate is valid for " << 30 << " days." << endl;
	
	
	cout << endl;
	return 0; 
}
