#include <iostream> 
#include <string>
#include "Helicopter.h"

using namespace std;
/*
class Helicopter {
private:
  int mass_of_passangers;
  string name;
  int max_speed;

public:

  int sit;
  string colour;
  Helicopter() {
	mass_of_passangers = 4;
	name = "NCT";
	max_speed = 100;
	sit = 4;
	colour = "black";
	time = 8;
	mark = "IoT";
  }

  Helicopter(int new_mass_of_passangers, string new_name, int new_max_speed, int new_sit, string new_colour, int new_time, string new_mark) {
	mass_of_passangers = new_mass_of_passangers;
	name = new_name;
	max_speed = new_max_speed;
	sit = new_sit;
	colour = new_colour;
	time = new_time;
	mark = new_mark;
  }

  ~Helicopter() {
	cout << "uhy" << endl;
  }


  int get_mass_of_passangers() {
	return mass_of_passangers;
  }
  string get_name() {
	return name;
  }
  int get_max_speed() {
	return max_speed;
  }
  int get_sit() {
	return sit;
  }
  string get_colour() {
	return colour;
  }
  int get_time() {
	return time;
  }
  string get_mark() {
	return mark;
  }


protected:
  int time;
  string mark;
};
*/
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