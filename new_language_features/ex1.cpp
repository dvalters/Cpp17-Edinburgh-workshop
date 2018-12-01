#include <iostream>
#include <string>
#include <map>

int const TOTAL_EPISODES = 67;

// C++17: Use nested namespace syntax
namespace cpp::edinburgh::example {
      void test(std::map<std::string, int> const& episode_counts)
      {
        // C++17: Can we use the range TS feature?
        for (std::map<std::string, int>::const_iterator it = episode_counts.begin();
          it != episode_counts.end();
          ++it)
        // Not sure here, return to it later on
        //for (std::map<std::string, int>::const_iterator it : episode_counts)
        {
          std::cout << it->first << " has been in " << it->second << " episodes\n";
          // C++17: Let's use if-initialisers!
          // We can constrain our variables to be within the if scope now:
          //int over_half = it->second - (TOTAL_EPISODES / 2);
          if (auto over_half = it->second - (TOTAL_EPISODES /2); over_half > 0) {
            std::cout << "That's " << over_half << " more than half!\n";
          }

          std::cout << "Their name shares a starting letter with ";
          switch (it->first[0]) {
            case 'G': std::cout << "George ";
            case 'R': std::cout << "Raymond Richard ";
            case 'M': std::cout << "Martin ";
              std::cout << "which is probably important!";
              break;
            default:
              std::cout << "nothing of much importance.";
          }
          std::cout << "\n\n";
        }
      }
}

int main() {
  std::map<std::string, int> episode_counts{
    {"Jon", 56},
    {"Arya", 53},
    {"Sansa", 54},
    {"Robb", 22},
    {"Bran", 35},
    {"Rickon", 14}
  };

  cpp::edinburgh::example::test(episode_counts);
}

