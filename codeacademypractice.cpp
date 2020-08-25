#include <iostream>

// C++ basic data types include:
//      int: integers
//      double: floating-point numbers
//      char: individual characters
//      string: sequence of characters
//      bool: true/false

int main() {
  double ph = 4.6; 
  // Write the if, else if, else here:
  if (ph > 7) {
    std::cout << "Basic.";
  } else if (ph < 7) {
    std::cout << "Acidic.";
  } else {
    std::cout << "Neutral.";
  } 
}

int main() { 
  double height, weight, bmi;
  // Ask user for their height 
  std::cout << "Type in your height (m): ";
  std::cin >> height; 
  // Now ask the user for their weight and calculate BMI
  std::cout << "Type in your weight (kg): ";
  std::cin >> weight;
  bmi = weight / pow(height,2);
  std::cout << "Your BMI is " << bmi << ".\n";
  return 0;
}

int main() {
  int score = 1234;
  // Change score here:
  score *= 99; 
  std::cout << score << "\n";
}

int main() {
  double tempf = 70;
  double tempc;
  tempc = (tempf - 32)/1.8; 
  std::cout << "The temp is " << tempc << "degrees Celsius.\n";
}