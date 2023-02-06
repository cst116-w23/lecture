#include <iostream>
#include <fstream>

int main(int argc, char * argv[]) {
  char * filename{argv[1]};
  char * output{argv[2]};
  // const char * filename{"myfile.txt"};
  //char filename[]{"myfile.txt"};
  //char filename[256]{"myfile.txt"};
  std::ifstream fin{filename};
  std::ofstream fout{output};

  char buffer[256]{};
  // while (fin >> buffer) {
  while (fin.getline(buffer, 256)) {
    std::cout << buffer << '\n';
    buffer[0] += 1;
    fout << buffer << '\n';
  }
}
