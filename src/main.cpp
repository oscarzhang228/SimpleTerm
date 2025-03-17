#include <iostream>
#include <set>

int main() {
  std::set<std::string> validCommands;
  
  while (true) {
    std::cout << "$ ";
    std::string input;
    std::getline(std::cin, input);
    
    if (!validCommands.contains(input)) {
      std::cout << input << ": command not found" << std::endl;
    }
  }
}
