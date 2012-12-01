#ifndef _FUNCTIONS //This is a Header Guard
#define _FUNCTIONS //It prevents us from loading this code twice

#include <cmath>

const double pi = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798;

float hypotenuse(float adj, float opp){
	return sqrt((opp*opp)+(adj*adj));
}

float angle(float adj, float opp){
	return sin(opp/hypotenuse(adj, opp));
}

#endif