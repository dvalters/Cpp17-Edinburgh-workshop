#include <iostream>
#include <string>
#include <map>

int const TOTAL_EPISODES = 67;

namespace cpp {
  namespace edinburgh {
    namespace example {
      void test(std::map<std::string, int> const& episode_counts)
      {

        for (std::map<std::string, int>::const_iterator it = episode_counts.begin();
          it != episode_counts.end();
          ++it)
        {
          std::cout << it->first << " has been in " << it->second << " episodes\n";

          int over_half = it->second - (TOTAL_EPISODES / 2);
          if (over_half > 0) {
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

