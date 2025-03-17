#include <iostream>
#include <set>

int main() {
  std::set<std::string> validCommands;

  std::string input;
  std::getline(std::cin, input);
  
  if (!validCommands.contains(input)) {
    std::cout << input << "Invalid command" << std::endl;
  }

}
