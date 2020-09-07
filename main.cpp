#include <iostream>

using std::string;

using namespace std;

class Student {
  string firstName;
  string secondName;
  int birthYear;
  string group;
  float middleMark;

public:
  Student() {
    firstName = "Ivan";
    secondName = "Petrov";
    birthYear = 1998;
    group = "VIS35";
    middleMark = 4.2;

    cout << "Default constructor..." << endl;
  }

  Student(string fn, string sn, int y, string g, float mm) {
    firstName = fn;
    secondName = sn;
    birthYear = y;
    group = g;
    middleMark = mm;

    cout << "Constructor with parameters..." << endl;
  }

  Student(const Student &obj) {
    firstName = obj.firstName;
    secondName = "Petrov";
    birthYear = 1998;
    group = "VIS35";
    middleMark = 4.2;
  }

  ~Student() {

  };
};

int main() {
  std::cout << "Hello World!\n";
  Student d;
  Student s("Ivan", "Petrov", 1998, "VIS35", 4.2);
}
