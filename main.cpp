#include <iostream> 
#include <string>
#include "Helicopter.h"

using namespace std;

int main() {
	cout << "\t\tHelicopters\n\n";
	Helicopter NCT(4, "NCT", 100, 4, "Black", 8, "Iot");
	Helicopter BTS(4, "BTS", 300, 4, "red", 9, "Iot1");
	Helicopter SF9(4, "SF9", 400, 4, "white", 10, "Iot2");

	cout << "mass of passangers: " << NCT.get_mass_of_passangers() << endl;
	cout << "name: " << NCT.get_name() << endl;
	cout << "max speed: " << NCT.get_max_speed() << endl;
	cout << "sit: " << NCT.get_sit() << endl;
	cout << "colour: " << NCT.get_colour() << endl;
	cout << "time: " << NCT.get_time() << endl;
	cout << "mark: " << NCT.get_mark() << endl;

	cout << endl;

	cout << "mass of passangers: " << BTS.get_mass_of_passangers() << endl;
	cout << "name: " << BTS.get_name() << endl;
	cout << "max speed: " << BTS.get_max_speed() << endl;
	cout << "sit: " << BTS.get_sit() << endl;
	cout << "colour: " << BTS.get_colour() << endl;
	cout << "time: " << BTS.get_time() << endl;
	cout << "mark: " << BTS.get_mark() << endl;

	cout << endl;

	cout << "mass of passangers: " << SF9.get_mass_of_passangers() << endl;
	cout << "name: " << SF9.get_name() << endl;
	cout << "max speed: " << SF9.get_max_speed() << endl;
	cout << "sit: " << SF9.get_sit() << endl;
	cout << "colour: " << SF9.get_colour() << endl;
	cout << "time: " << SF9.get_time() << endl;
	cout << "mark: " << SF9.get_mark() << endl;


	getchar();
	getchar();
	return 0;
}