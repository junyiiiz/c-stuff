#include <iostream>
#include <limits>

// bool checkIfIsPrimeNumber(int number)
// {
//     for (int i=2; i<number; ++i)
//     {
//         if (number%i==0)
//             return false;
//     }
//     return true; 
// }
// int main()
// {
//     std::cout << "Please enter a number, you want to check if it is a prime number: ";
//     int x {};  
//     std::cin >> x;
//     bool isPrimeNumber {checkIfIsPrimeNumber(x)};
//     // if (isPrimeNumber(x))
//     if (isPrimeNumber)
//         std::cout<<"The number: " << x << " is a prime number.";
//     else 
//         std::cout<<"The number: " << x << " is not a prime number.";
//     return 0;
// }


#include <iostream>

// bool isAllowedToTakeFunRide()
// {
//   std::cout << "How tall are you? (cm)\n";

//   double height{};
//   std::cin >> height;
//   return height >= 140; 
// }


// 1. Does Calculations 

// double mapUserInputToVar()
// {
//   std::cout << "Enter a double value: ";
//   double number{}; 
//   std::cin >> number; 
//   return number; 
// }

// bool validateEnteredSymbol(char mathOperator)
// {
//   return mathOperator == '+' || mathOperator == '-' || mathOperator == '*' || mathOperator == '/';
// }

// double computeValue(char mathOperator, double firstNumber, double secondNumber)
// {
//   double mathOperationResult {}; 
//   switch (mathOperator) {
//     case '+': 
//       mathOperationResult = firstNumber + secondNumber; 
//       break; 
//     case '-':
//       mathOperationResult = firstNumber - secondNumber; 
//       break; 
//     case '*':
//       mathOperationResult = firstNumber * secondNumber; 
//       break; 
//     case '/':
//       mathOperationResult = firstNumber / secondNumber; 
//       break; 
//   }
//   return mathOperationResult; 
// }

// int main()
// {
//   double firstNumber {mapUserInputToVar()}; 
//   double secondNumber {mapUserInputToVar()}; 
//   std::cout << "Enter +, -, *, or /. ";
//   char mathOperator{}; 
//   std::cin >> mathOperator;
//   if (validateEnteredSymbol(mathOperator))
//     {
//     double value {computeValue(mathOperator, firstNumber, secondNumber)};
//     std::cout << firstNumber << " " << mathOperator << " " << secondNumber << " equals to: " << value; 
//     }
//   else 
//     std::cout << "The entered Arithemtic Operator: " << mathOperator << " is invalid. Choose one of these: +, -, *, or /. "; 
//   return 0; 
// }

//2. Calculate Distance to Tower 
// double calculateDistanceTraveled(int seconds); 
// void printOutputMessage(int seconds, double distaneTraveled, bool isOnGround, int towerHeight) 
// {
//   if (isOnGround) 
//     std::cout << "At "<< seconds << " seconds, the ball is on the ground." << "\n";
//   else 
//     std::cout << "At "<< seconds << " seconds, the ball is at height: "  << towerHeight - distaneTraveled << "\n";
// }

// double calculateDistanceTraveled(int seconds)
// {
//   double gravityConstant {9.81}; 
//   return gravityConstant * (seconds*seconds)/2; 
// }

// int main()
// {
//   std::cout << "Enter the height of the Tower: "; 
//   int heightOfTower{}; 
//   std::cin >> heightOfTower; 
//   int seconds{0}; 
//   printOutputMessage(seconds, calculateDistanceTraveled(seconds), heightOfTower<=calculateDistanceTraveled(0), heightOfTower);
//   seconds = 1;
//   printOutputMessage(seconds, calculateDistanceTraveled(seconds), heightOfTower<=calculateDistanceTraveled(seconds), heightOfTower);
//   seconds = 2;
//   printOutputMessage(seconds, calculateDistanceTraveled(seconds), heightOfTower<=calculateDistanceTraveled(seconds), heightOfTower);
//   seconds = 3;
//   printOutputMessage(seconds, calculateDistanceTraveled(seconds), heightOfTower<=calculateDistanceTraveled(seconds), heightOfTower);
//   seconds = 4;
//   printOutputMessage(seconds, calculateDistanceTraveled(seconds), heightOfTower<=calculateDistanceTraveled(seconds), heightOfTower);
// }


// Solution of the Author: 

#include <iostream>

// Gets tower height from user and returns it
double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}

// Returns the current ball height after "seconds" seconds
double calculateBallHeight(double towerHeight, int seconds)
{
	double gravity { 9.8 };

	// Using formula: s = (u * t) + (a * t^2) / 2
	// here u (initial velocity) = 0, so (u * t) = 0
	double fallDistance { gravity * (seconds * seconds) / 2.0 };
	double ballHeight { towerHeight - fallDistance };

	// If the ball would be under the ground, place it on the ground
	if (ballHeight < 0.0)
		return 0.0;

	return ballHeight;
}

// Prints ball height above ground
void printBallHeight(double ballHeight, int seconds)
{
	if (ballHeight > 0.0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

// Calculates the current ball height and then prints it
// This is a helper function to make it easier to do this
void calculateAndPrintBallHeight(double towerHeight, int seconds)
{
	double ballHeight{ calculateBallHeight(towerHeight, seconds) };
	printBallHeight(ballHeight, seconds);
}

int main()
{
	double towerHeight{ getTowerHeight() };

	calculateAndPrintBallHeight(towerHeight, 0);
	calculateAndPrintBallHeight(towerHeight, 1);
	calculateAndPrintBallHeight(towerHeight, 2);
	calculateAndPrintBallHeight(towerHeight, 3);
	calculateAndPrintBallHeight(towerHeight, 4);
	calculateAndPrintBallHeight(towerHeight, 5);

	return 0;
}