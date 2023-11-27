#pragma once

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

class Item
{

private:

	//Attribute (variables)
	string name;
	int damage;
	int ca;

public:

	//Actions (functions)


	//Getter
	string GetName() {
		return name;
	}
	int GetDamage() {
		return damage;
	}
	int GetCA() {
		return ca;
	}

	//Setter
	void SetName(string n) {
		name = n;
	}

	void SetDamage(int d) {
		damage = d;
	}
	
	void SetCA(int a) {
		ca = a;
	}

};

