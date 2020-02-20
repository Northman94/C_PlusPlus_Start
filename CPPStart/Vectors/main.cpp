/*
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	std::vector <double> high_temperatures (365, 80.10);
	
	
	std::cout << "\n" << high_temperatures[330];

	std::cout << "\n";
	return 0;
}
*/

// ADDITION
/*
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector <int> array_addition {100, 90, 80};
	
	array_addition.push_back (70) ;
	array_addition.push_back (60) ;
	
	cout << array_addition.at (3) << "\n" ;
	cout << array_addition.at (4) ;

	cout << "\n";
	return 0;
}*/

/*
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector <int> array_addition {100, 90, 80};
	
	array_addition.push_back (70);
	
	cin >> array_addition[2];
	cout << array_addition[2] << endl;
	
	cin >> array_addition.at (3);
	cout << array_addition.at (3) << endl;
	
	cout << "Vector Size: " << array_addition.size() << endl;
	
	cout << "\n";
	return 0;
}
*/



// 2D Vector = vector of vectors
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector <vector <int>> array_of_arrays
	{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	
	//Using Array synthax:
	cout << array_of_arrays[0][0] << endl;
	cout << array_of_arrays[0][1] << endl;
	cout << array_of_arrays[0][2] << endl;
	cout << array_of_arrays[0][3] << endl;
	//Using Vector synthax:
	cout << array_of_arrays.at(1).at(0) << endl;
	cout << array_of_arrays.at(1).at(1) << endl;
	cout << array_of_arrays.at(1).at(2) << endl;
	cout << array_of_arrays.at(1).at(3) << endl;
	
	cout << "\n";
	return 0;
}


