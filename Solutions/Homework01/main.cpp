#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  // Open file
  ifstream in_file;
  in_file.open("alice.txt");
  if (in_file.fail()) {
    cout << "Failed to open alice.txt" << endl;
    exit(1);
  }
  // Ask user for numbers
  cout << "Please enter a minimum word frequency: ";
  int min_frequency = 0;
  cin >> min_frequency;
  // Initialize parallel array "data structure"
  const int array_size = 50000;
  string word[array_size];
  int frequency[array_size] = {0};
  int length = 0;
  // Fill parallel arrays
  for (string current_word; in_file >> current_word;) {
    int i = 0;
    while (i < length && word[i] != current_word) i++;
    if (i == length) length++;
    word[i] = current_word;
    frequency[i]++;
  }
  // Print results
  for (int i = 0; i < length; i++) {
    if (frequency[i] > min_frequency) {
      cout << word[i] << " : " << frequency[i] << endl;
    }
  }
  return 0;
}
