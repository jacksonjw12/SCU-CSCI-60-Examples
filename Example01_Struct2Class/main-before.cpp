//
// Example 01: Converting a struct to a class
//
#include <iostream>
#include <string>

using namespace std;

struct Student {
  string name;
  int id_number;
  int grad_year;
  string major;
  double gpa;
};

Student student_from_user();
void student_print(Student s);

int main() {
  Student s1 = {"Not Sure", 123456789, 3000, "History", 3.4};
  student_print(s1);
  cout << endl;

  Student s2 = student_from_user();
  cout << endl;
  student_print(s2);

  return 0;
}

Student student_from_user() {
  Student s;
  string line;

  cout << "Please enter name: ";
  getline(cin, line);
  s.name = line;

  cout << "Please enter ID: ";
  getline(cin, line);
  s.id_number = stoi(line);  // Convert line to integer if possible

  cout << "Please enter major: ";
  getline(cin, line);
  s.major = line;

  cout << "Please enter year: ";
  getline(cin, line);
  s.grad_year = stoi(line);

  cout << "Please enter GPA: ";
  getline(cin, line);
  s.gpa = stod(line);  // Convert line to double if possible

  return s;
}

void student_print(Student s) {
  cout << "Name: " << s.name << endl
       << "ID: " << s.id_number << endl
       << "Major: " << s.major << endl
       << "Year: " << s.grad_year << endl
       << "GPA: " << s.gpa << endl;
}
