#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Create a vector of integers
  vector<int> numbers = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

  // Define the target value to search for
  int target = 13;

  // Perform linear search
  bool found = false;
  for (int i = 0; i < numbers.size(); i++) {
    if (numbers[i] == target) {
      found = true;
      break;
    }
  }

  // Print the result
  if (found) {
    cout << "The target value " << target << " was found in the vector." << endl;
  } else {
    cout << "The target value " << target << " was not found in the vector." << endl;
  }

  return 0;
}