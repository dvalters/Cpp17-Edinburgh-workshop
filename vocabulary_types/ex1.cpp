#include <iostream>
#include <optional>
//bool get_42(int& result) {
//int i;
//    if (std::cin >> i && i == 42) {
//            result = 42;
//            return true;
//    }
//    return false;

std::optional<int> get_42(int result) {
    int i;
    if (std::cin >> i && i == 42) {
        result = 42;
    }
    return result;
 

}
int main() {
    int i;
    if (get_42(i)) std::cout << i << "\n";
    else std::cout << "OH NO" << "\n";
}

