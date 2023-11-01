// Ernesto Gomez
// ernestogomez5612@csu.fullerton.edu
// @ernestogomez5612
// Partners: @seannooners, @Jahirclaudio20

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  double sum = 0.0;
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  bool first{true};

  for (std::string& argument : arguments) {
    if (first) {
      first = false;
      continue;
    }
    double temp = std::stod(argument);
    sum += temp;
  }
  double average{0.0};
  average = sum / static_cast<int>(arguments.size() - 1);
  std::cout << "average = " << average << "\n";

  return 0;
}
