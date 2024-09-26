//Chapter2Ex17-samantha-a-elliott

#include <iostream>
using namespace std;

int main() {
	//customers surveyed
	const int totalcustomers = 16500;
//customers who purchase one or more drinks a week
	const double percentEnergyDrinkers = 0.15;
	//customers who perfer citrus drinks
	const double percentcitrusdrinkers = 0.58;

	//equation of energy drink customers
	int energydrinkers = totalcustomers * percentEnergyDrinkers;
	//equation of cirtus energy drinkers
	int citrusdrinkers = energydrinkers * percentcitrusdrinkers;


		//display results
		cout << "approximaye number of customers who purchase one or more drinks a week: " << energydrinkers <<endl;
	cout << "approximate number of customers who perfer citrus energy drinks: " << citrusdrinkers << endl;

	return 0;




}