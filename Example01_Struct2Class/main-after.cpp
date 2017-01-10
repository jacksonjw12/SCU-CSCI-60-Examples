//
// Example 01: Converting a struct to a class
//
// In this example we have converted a struct to a class by making all member
// variables private, adding getters/setters, and adding a constructor.
//
#include <iostream>
#include <string>

using namespace std;

class Student {
 private:
  // Following the Google C++ Style Guide I am adding a trailing underscore to
  // all member variables of my class.
  string name_;
  int id_number_;
  int grad_year_;
  string major_;
  double gpa_;

 public:
  // Constructors
  // We have added two constructors here. The firsts allows us to set all
  // member variables of the class Student and the second allows use to set
  // none of the member variables.
  Student(string name, int id_number, int grad_year, string major, double gpa);
  Student() = default;  // Tell C++ to use the default implementation

  // Getters and Setters
  string get_name();
  int get_id_number();
  int get_grad_year();
  string get_major();
  double get_gpa();
  void set_name(string name);
  void set_id_number(int id_number);
  void set_grad_year(int grad_year);
  void set_major(string major);
  void set_gpa(double gpa);
};

int main() {
  Student s("Not Sure", 123456789, 3000, "History", 3.4);
  cout << "Name: " << s.get_name() << endl
       << "Id: " << s.get_id_number() << endl
       << "Year: " << s.get_grad_year() << endl
       << "Major: " << s.get_major() << endl
       << "GPA: " << s.get_gpa() << endl;

  return 0;
}

Student::Student(string name, int id_number, int grad_year, string major,
                 double gpa) {
  name_ = name;
  id_number_ = id_number;
  grad_year_ = grad_year;
  major_ = major;
  gpa_ = gpa;
}

string Student::get_name() { return name_; }

int Student::get_id_number() { return id_number_; }

int Student::get_grad_year() { return grad_year_; }

string Student::get_major() { return major_; }

double Student::get_gpa() { return gpa_; }

void Student::set_name(string name) { name_ = name; }

void Student::set_id_number(int id_number) { id_number_ = id_number; }

void Student::set_grad_year(int grad_year) { grad_year_ = grad_year; }

void Student::set_major(string major) { major_ = major; }

void Student::set_gpa(double gpa) { gpa_ = gpa; }
