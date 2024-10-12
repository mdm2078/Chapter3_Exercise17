// Chapter3_Exercise17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	// Seed random number generator
	srand(static_cast<unsigned int>(time(0)));

	// Generate two random numbers between 100 and 999
	int num1 = rand() % 900 + 100;
	int num2 = rand() % 900 + 100;

	// Display the numbers to the user
	cout << "Solve the following problem:" << endl;
	cout << num1 << "+" << num2 << "= ?" << endl;

	// Wait for user input
	int userAnswer;
	cout << "Enter your answer:";
	cin >> userAnswer;

	// Calculate the correct answer
	int correctAnswer = num1 + num2;

	// Check if the user's answer is correct
	if (userAnswer == correctAnswer) {
		cout << "You are correct!" << endl;
	}
	else {
		cout << "Your answer is not correct." << endl;
		cout << "The correct answer is:" << correctAnswer << endl;
	}

	return 0;

}

