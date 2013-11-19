#include <iostream>
using namespace std;
#include "person.cpp"

int main()
{
	person david;
	david.setFirstName("Davie");
	david.setLastName("wavie");


	cout << david.getLastName() << ", " << david.getFirstName() << "\n";

	return 0;
}