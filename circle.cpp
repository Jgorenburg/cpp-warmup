#define _USE_MATH_DEFINES
#include "circle.h"

// your code here
//#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

Circle::Circle()
{
	cout << "basic creator" << endl;
}

Circle::Circle(float r)
{
	radius = r;
	cout << "create: " << radius << endl;
}

Circle::Circle(const Circle& circ)
{
	radius = circ.radius;
	cout << "copy\n";
}

Circle::~Circle()
{
	cout << "destructor\n";
}

Circle& Circle::operator=(const Circle& circ)
{
	radius = circ.radius;
	cout << "operator assignment\n";
	return *this;
}

Circle operator+(const Circle& circ1, const Circle& circ2)
{
	float r = circ1.radius + circ2.radius;
	cout << r << endl;
	Circle circ(r);
	return circ;
}

float Circle::getRadius()
{
	cout << "getRadius function\n";
	return this->radius;
}

void Circle::setRadius(float newR)
{
	radius = newR;
	cout << "setting radius to " << newR << endl;
}

float Circle::computeArea()
{
	cout << "Area function\n";
	return M_PI * pow(this->getRadius(), 2);
}

std::ostream& operator<<(std::ostream& os, const Circle& circ)
{
	os << circ.radius;
	return os;
}


