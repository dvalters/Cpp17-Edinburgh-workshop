#include <iostream>
#include <array>

template <int N>
struct rectangles
{
  std::array<std::pair<int, int>, N> dimensions;
};

int main()
{
  rectangles<2> rects1{{{{5, 2}, {4, 4}}}};
  auto [a1, a2] = rects1;

  rectangles<3> rects2{{{{1, 2}, {3, 4}, {5, 6}}}};
  auto [a3, a4, a5] = rects2;

  std::cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << "\n";
}

