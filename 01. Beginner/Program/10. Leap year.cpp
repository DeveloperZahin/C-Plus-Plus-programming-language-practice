#include <iostream>

using namespace std;

int main() {
  int year;

  cout << "Enter a year: ";
  cin >> year;

  // Check if the year is divisible by 400
  if (year % 400 == 0) {
    cout << year << " is a leap year." << endl;
  } else {
    // Check if the year is divisible by 100
    if (year % 100 == 0) {
      cout << year << " is not a leap year." << endl;
    } else {
      // Check if the year is divisible by 4
      if (year % 4 == 0) {
        cout << year << " is a leap year." << endl;
      } else {
        cout << year << " is not a leap year." << endl;
      }
    }
  }

  return 0;
}
