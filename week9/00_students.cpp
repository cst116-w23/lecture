#include <iostream>
#include <fstream>
#include <cstring>

/*

Four Categories of Data

1. Scalars
2. Lists
3. Bags
4. Functions/lambdas

*/

constexpr size_t MAX_STUDENTS{100};
constexpr size_t MAX_NAME{64};

struct Student {
  char givenName[MAX_NAME]{};
  char familyName[MAX_NAME]{};
  float grade{};
};

void print(Student students[], size_t numStudents) {
  for (size_t i{}; i < numStudents; ++i) {
    std::cout
      << students[i].givenName
      << ' '
      << students[i].familyName
      << ' '
      << students[i].grade
      << '\n';
  }
  std::cout << '\n';
}

float calcGrades(Student students[], size_t numStudents) {
  // loop over students
  float sum{};
  for (size_t i{}; i < numStudents; ++i) {
    // sum up the grade part
    sum += students[i].grade;
  }
  // return or print out the grade average
  return sum / numStudents;
}

void printGradeAverage(Student students[], size_t numStudents) {
  float avg = calcGrades(students, numStudents);
  std::cout << "Student average is: " << avg << '\n';
}

void readStudents(Student students[], size_t & numStudents, const char * filename) {
  std::ifstream fin{filename};

  Student student{};

  while (fin >> student.givenName >> student.familyName >> student.grade) {
    std::strcpy(students[numStudents].givenName, student.givenName);
    std::strcpy(students[numStudents].familyName, student.familyName);
    students[numStudents].grade = student.grade;

    ++numStudents;
  }
}

int main(int argc, char * argv[]) {
  // guard pattern
  if (argc < 2) {
    std::cerr << "You need to pass a file name.\n";
    return 1;
  }

  Student students[MAX_STUDENTS]{};
  size_t numStudents{};
  const char * filename{argv[1]};

  readStudents(students, numStudents, filename);
  print(students, numStudents);
  printGradeAverage(students, numStudents);
}