//Get excited it is your first collaborative project!

// This project is intended for learning and getting used to working together

#include <iostream> // for cout << etc
#include <cmath> // various math functions *I used this for sqrt

#include "formulas.h" // Our header that contains the formulas

using namespace std;

int main(){

	cout << "Pythagorean Theorem\n\n"; // "\n" creates the new line character
	
	double opp, adj, hyp; // floats are lighter than doubles but dont hold as many digits
	
	for(;;){//ever

	cout << "Enter the opposite side\n";
	cin >> opp; // when you enter random characters instead of a number, the binary of it is stored and interpretted as a float
	cout << "Enter the adjacent side\n";
	cin >> adj;
	cout << "Your hypotenuse is:\n";
	
	//hyp = sqrt((opp*opp)+(adj*adj)); 
	hyp = hypotenuse(adj,opp);
	// This function is in our formulas header 
	cout << hyp << "\n\n" << "NEW HYPOTENUSE\n";
	}

	system("pause"); // Some DoS Console programming

	return 0;
}