//
// Example 15: Word Count
//
// Yet another solution to Homework 1. Now we use maps to make life much
// much easier!
//
#include <fstream>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  // Open file
  string file_name = "alice.txt";
  ifstream in_file;
  in_file.open(file_name);
  if (in_file.fail()) throw runtime_error("Could not open: " + file_name);

  // Ask user for numbers
  cout << "Please enter a minimum word frequency: ";
  int min_freq = 0;
  cin >> min_freq;

  // Fill frequency map
  map<string, int> freqs;
  for (string word; in_file >> word;) freqs[word]++;

  // Print results
  for (auto e : freqs) {
    if (e.second > min_freq) cout << e.first << " : " << e.second << endl;
  }

  return 0;
}
