/*I affirm that all code given below was written solely by me, Tersa Motbaynor Almaw, and that any help I received adhered to the rules stated for this exam.*/

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

//PT -- 88/100

namespace Exam1 // NAMESPACE
{
	class Wheel
	{
	private:
		int _radius;
	public:
		Wheel(int radius) { _radius = radius; }
		
	};

	// STEP 1: Complete the implementation of the Vehicle base class 
	// as described in the UML diagram
	class Vehicle
	{
	protected:
		string _color;
		int _topspeed;
		vector<Wheel> wheels;

	public:
		Vehicle(string color /*, _topspeed*/)
		{
			this->_color = _color;
			// this->_topspeed = _topspeed;
			// Complete the implementation
		}
		//PT -- getColor, not setColor
		string setColor() { return _color; }
		// int getTopSpeed() { return _topspeed; }
		
		virtual void Description() = 0;
	};

	// STEP 2:  Define the RaceCar, Sedan, and Pickup classes as described
	// in the UML diagram.   For this test, you do not need to separate
	// the class implementation into a cpp file.
	class RaceCar : public Vehicle
	{ 
	
	public:
		RaceCar(string _color) : Vehicle(_color)
		{
			//Top speed: 250mph
		//Wheel radius: 305mm
			// this sets the top speed of the racecar to be 205
			_topspeed = 205;
			// this sets the radius of the wheels into the vector stored in the private class in vehicle 
			Wheel w1(305); 
			Wheel w2(305);
			Wheel w3(305);
			Wheel w4(305);
			
			//PT -- put the wheels in the vehicle
			//PT -- -4
			//PT -- wheels.push_back(w1); wheels.push_back(w2); wheels.push_back(w3); wheels.push_back(w4); 
		}
		// this is what the user sees which is the description of the car
		void Description() { cout << " I am a"<< setColor() <<" race car that can race " << _topspeed << "mph. Vroom!" << endl; }
		
		

	};

	class Sedan: public Vehicle
	{
	private:
		int number_of_seats;
	public: 

		Sedan(string color, int seats) : Vehicle(color)
		{
			
			number_of_seats = seats; // helps change the number of seats that is in private, which later on helps the user to see the amount of ppl that the car can carry 
			//Top speed: 95mph
			_topspeed = 95; 
			//Wheel radius: 381mm
			Wheel w1(381);
			Wheel w2(381);
			Wheel w3(381);
			Wheel w4(381);

			//PT -- put the wheels in the vehicle
			//PT -- -4
			//PT -- wheels.push_back(w1); wheels.push_back(w2); wheels.push_back(w3); wheels.push_back(w4); 
		}
		// dislays this value of the number of seats, the top speed of the car and the color to the user
		void Description() { cout <<"I am a " << setColor() << " sedan that can carry " << number_of_seats <<" people at " << _topspeed << "mph. Yea!"<< endl; }


	};

	class Pickup: public Vehicle  
	{
	private: 
		int hauling_capacity;
	public:
	
		Pickup(string color, int capcity) : Vehicle(color) 
		{
			_color = color;
			hauling_capacity = capcity; // helps use the hauling capacity set in the private 
			//Top speed: 85mph
			_topspeed = 85; 
		//Wheel radius: 432mm
			Wheel w1(432);
			Wheel w2(432);
			Wheel w3(432);
			Wheel w4(432);
			//Wheel pushback() :/

			//PT -- put the wheels in the vehicle
			//PT -- -4
			//PT -- wheels.push_back(w1); wheels.push_back(w2); wheels.push_back(w3); wheels.push_back(w4); 
			}
		// Displays to the user the description of the pickup car
		void Description() { cout <<"I am "<< _color <<" pickup that can haul "<< hauling_capacity << "sq. feet at "<< _topspeed <<"mph." << endl; }
		

	};
}


int main()
{
	Exam1::Vehicle * Garage[3];

	// STEP 3: Assign ONE RaceCar, ONE Sedan, AND ONE Pickup object to each of the elements 
	// in the Garage array.  Remember the classes are defined in the namespace Exam1.
	//Garage[0] = ???
	//Garage[1] = ???
	//Garage[2] = ???
	Exam1::Vehicle * raceCar = new Exam1::RaceCar("red");  // sets the new EXAM1 equal to the racecar 
	Exam1::Vehicle * sedan = new Exam1::Sedan("brown", 5);
	Exam1::Vehicle * pickUp = new Exam1::Pickup("black", 600);

	Garage[0] = raceCar; // stores racecar to an array in garage 
	Garage[1] = sedan;
	Garage[2] = pickUp;

	for (int i = 0; i < 3; ++i)
	{
		// The method Description() should display an output like 
		// "I am a red sedan (or racecar/pickup) and I can go 95 (or 250 or 85) mph"
		Garage[i]->Description();
	}
}

/*I affirm that all code given below was written solely by me, Tersa Motbaynor Almaw,
*and that any help I received adhered to the rules stated for this exam.*/
