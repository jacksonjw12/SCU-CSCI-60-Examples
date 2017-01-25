#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

struct association {
  string word;
  int frequency;
};

int find_index(string word, association table[], int word_count);
int initialize_frequencies(ifstream& in_file, association table[]);
void print_results(association table[], int word_count, int min_frequency);

int main() {
  string file_name = "alice.txt";
  ifstream in_file;
  in_file.open(file_name);
  if (in_file.fail()) throw runtime_error("Could not open " + file_name);

  cout << "Please enter a minimum word frequency: ";
  int min_frequency = 0;
  cin >> min_frequency;

  const int table_sz = 50000;
  association table[table_sz];
  int word_count = initialize_frequencies(in_file, table);

  print_results(table, word_count, min_frequency);
  return 0;
}

int find_index(string word, association table[], int word_count) {
  int i = 0;
  while (i < word_count && table[i].word != word) i++;
  return i;
}

int initialize_frequencies(ifstream& in_file, association table[]) {
  int word_count = 0;
  for (string word; in_file >> word;) {
    int i = find_index(word, table, word_count);
    if (i == word_count) table[word_count++] = {word, 0};
    table[i].frequency++;
  }
  return word_count;
}

void print_results(association table[], int word_count, int min_frequency) {
  for (int i = 0; i < word_count; i++) {
    if (table[i].frequency > min_frequency) {
      cout << table[i].word << " : " << table[i].frequency << endl;
    }
  }
}
