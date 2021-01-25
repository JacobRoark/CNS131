/*
File:    Week 1 Assignment.cpp
Author1: Jacob Roark (jacobroark001@student.crowder.edu)
Author2:
Date:    January 17th, 2021
Course:  CNS131: Introduction to Game Programming
Summary of File: Week 1 Assignments
*/

/*
THREE GOOD EXAMPLES OF VALID INT NAMES

This uses camelCase
1. playerScore

This uses a valid underscore
2. _shieldPoints 

This uses a valid number
3. player2
THREE BAD EXAMPLES OF VALID INT NAMES

This is a non descriptive text
1. lol

This does not use camelCase format
2. CamelCase

This uses all caps which is usually reserved for constants
3. NOTACONSTANT
*/

#include <iostream>
using namespace std;

int main()
{
	//This will divide seven by three and return its value without decimal points
	cout << "Seven divided by 3 is " << 7 / 3 << endl;

	//This will divide seven by three and return its value with decimal points
	cout << "Seven divided by 3 is " << 7 / 3.0 << endl;
	
	//This will divide seven by three and return its value with decimal points
	cout << "Seven divided by 3 is " << 7.0 / 3.0 << endl;
	
	//No need to use float here, double will work for an example.
	//Scientific numbers even work (just stay within the double overflow limit)
	//They absolutely have to be numbers, there is no fault guard for letters
	double player1;
	double player2;
	double player3;

	cout << "Input 3 scores (please dont cheat)." << endl;
	cout << "Enter score 1/3: " << endl;
	cin >> player1;
	cout << "Enter score 2/3: " << endl;
	cin >> player2;
	cout << "Enter score 3/3: " << endl;
	cin >> player3;
	cout << "Now calculating the average of the three scores " << endl;
	cout << "." << endl;
	cout << "." << endl;//These three outputs seriously does nothing but use up memory and look fancy
	cout << "." << endl;
	cout << "The average of the three scores is: " << int (player1 + player2 + player3) / 3 << endl; //AVERAGING FUNCTION, THIS WILL NOT SCALE UP OR DOWN IN SIZE AS A FUNCTION!
	//I'm aware ive used int to round the number to a whole, I think it looks better.
	return EXIT_SUCCESS; //Saw this when looking up how to clear screen text, I think it looks better than 0 or NULL.
};

