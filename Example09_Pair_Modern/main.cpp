//
// Example09: pairs
//
// In this example we see how to use the pair class in C++. A tuple class was
// introduced in C++11 and works in mostly the same way as pair.
//
#include <iostream>
#include <string>
#include <utility>  // for pair

int main() {
  //
  // How to create a new pair object
  //
  std::pair<std::string, int> name_id_1("Michael", 1234);  // C++98 and beyond
  auto name_id_2 = std::make_pair("Bob", 1122);            // C++11 and beyond
  // auto name_id_3 = std::pair("Tom", 8888)               // C++17 and beyond

  //
  // How to get the values out of a pair
  //
  // C++98 and beyond
  std::string name = name_id_1.first;
  int id = name_id_1.second;
  std::cout << "name = " << name << std::endl << "id = " << id << endl;
  // C++11 and beyond
  std::tie(name, id) = name_id_2;  // name and id need to have been declared
  std::cout << "name = " << name << std::endl << "id = " << id << endl;
  // C++17 and beyond
  // auto [name, id] = name_id_3; // name and id are declared here automatically
  // std::cout << "name = " << name << std::endl << "id = " << id << endl;

  return 0;
}
