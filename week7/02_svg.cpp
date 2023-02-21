#include <fstream>

struct Circle {
  float r;
  float cx;
  float cy;
};

// DSL => Domain Specific Language

void writeHeader(std::ofstream & fout) {
  fout << "<svg viewBox=\"0 0 100 100\" xmlns=\"http://www.w3.org/2000/svg\">\n\t";
}

void writeEnd(std::ofstream & fout) {
  fout << "</svg>\n";
}

void writeCircle(std::ofstream & fout, const Circle & circle) {
  auto [r, cx, cy] = circle;
  fout << "<circle cx=\"" << cx << "\" cy=\"" << cy << "\" r=\"" << r << "\" />\n";
}

int main() {
  std::ofstream fout{"file.svg"};
  writeHeader(fout);
  for (size_t i{}; i < 10; ++i) {
    float cx = 10*(i+1);
    writeCircle(fout, {5, cx, 30});
  }
  writeEnd(fout);
}