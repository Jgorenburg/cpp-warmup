// Name: Jacob Gorenburg
// Date: 2/22

#pragma once
#include <iostream>

// your code here

class Circle {

public:
	Circle();
	Circle(float r);
	Circle(const Circle& circ); //copy
	~Circle(); //destructor

	Circle& operator=(const Circle& circ); //assigment
	friend Circle operator+(const Circle& circ1, const Circle& circ2); //addition

	float getRadius();
	void setRadius(float newR);

	float computeArea();

	friend std::ostream& operator<<(std::ostream& os, const Circle& circ);

protected:
	float radius = 1.0f;

};