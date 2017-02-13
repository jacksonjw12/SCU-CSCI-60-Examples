#include <fstream>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  ifstream in_file;
  in_file.open("scores.txt");
  if (in_file.fail()) throw runtime_error("No open good?");

  map<int, pair<int, vector<string>>> scores;
  string score;
  string name;

  while (getline(in_file, score, ' ') && getline(in_file, name)) {
    long temp = stoi(score);
    scores[temp].first++;
    scores[temp].second.push_back(name);
  }

  for (int i = 0; i <= 10; i++) {  // I am assuming not score is greater than 10
    cout << (i < 10 ? " " : "") << i << " ";
    for (int j = 0; j < scores[i].first; j++) cout << "X";
    cout << endl;
  }

  cout << endl;
  cout << "Enter a number from 0 to 10 to see students with that score: ";
  int s;
  cin >> s;
  for (const auto& e : scores[s].second) cout << e << endl;
  return 0;
}
