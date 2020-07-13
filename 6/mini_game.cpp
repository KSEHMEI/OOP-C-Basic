#include<iostream>
#include <string>

using namespace std;

class Hero{

private:
	string name;
	double health;
	double attPower;
	double armDef;

public:
	Hero(string nama, double darah, double pukulan, double tangkisan){
		this->name = nama;
		this->health = darah;
		this->attPower = pukulan;
		this->armDef = tangkisan;
	}

	void serang(Hero *korban){
		korban->diserang(this);
	}

	void diserang(Hero *pelaku){
		this->health -= pelaku->attPower ;
	}

	double getHealth(){
		return this->health;
	}

};

int main()
{
	Hero *traxex = new Hero("mendess", 100,10,10);
	Hero bloodseeker("Gondes", 100, 10, 20);
	Hero rikimaru("Mendes", 80, 25, 15);

	bloodseeker.serang(&rikimaru);
	traxex->serang(&rikimaru);

	cout<<rikimaru.getHealth()<<endl;

	return 0;
}