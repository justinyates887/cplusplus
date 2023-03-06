#include <iostream>
using namespace std;

int main(int argCount, char *args[]) {
  // Check to make sure enough arguments were passed in
  if (argCount < 3) {
    cout << "NOT ENOUGH ARGUMENTS!" << endl;
    cout << "Expected form:" << endl;
    cout << args[0] << " POINTSEARNED POINTSPOSSIBLE" << endl;
    return 1;
  }

  // 1. Create a variable for "points earned", assign it the value from args[1].
  float pointsEarned = stof(args[1]);

  // 2. Create a variable for "points possible", assign it the value from
  // args[2].
  float pointsPossible = stof(args[2]);

  // 3. Create a variable for "percent", assign it to earned / possible * 100.
  float percent = pointsEarned / pointsPossible * 100;

  // 4. Create a char variable named "grade".
  char grade;

  // 5. Use an if/else if/else statement to determine letter grade:
  //   [90,100]: A
  //   [80,90): B
  //   [70,80): C
  //   [60,70): D
  //   [0,60): F
  if (percent < 60) grade = 'F';
  else if (percent < 70) grade ='D';
  else if (percent < 80) grade = 'C';
  else if (percent < 90) grade = 'B';
  else if (percent <= 100) grade = 'A';
  else return 1;

  // 6. Display the points earned, points possible, score % and letter grade
  cout << "RESULTS" << endl;
  cout << string(30,'-') << endl;
  cout << "Points Earned: " << pointsEarned << endl;
  cout << "Points Possible: " << pointsPossible << endl;
  cout << "Grade: " << grade << endl;
}
