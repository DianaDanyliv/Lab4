#pragma once
#include <iostream>
#include <string>
using namespace std;

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
