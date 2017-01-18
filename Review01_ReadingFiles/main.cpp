//
// Review 01: How to read files
//
// This review example goes over how to read from a file.
//
#include <fstream>
#include <iostream>
#include <string>

int main() {
  // How to open a file
  std::ifstream in_file;
  // You will need to change the next line to point to a file on your computer.
  in_file.open("/Users/michael/Documents/CSCI60/ReadingFiles/input.txt");
  if (in_file.fail()) {
    std::cout << "Failed to open file!!!\n";
    exit(1);
  }
  // How to read a file line-by-line
  for (std::string line; std::getline(in_file, line);) {
    std::cout << line << std::endl;
  }
  // How to reset the file stream to read the file a second time
  in_file.clear();
  in_file.seekg(0);
  // How to read a file word-by-word
  for (std::string word; in_file >> word;) {
    std::cout << word << std::endl;
  }
  in_file.close();
  return 0;
}
