#include <iostream>
#include <array>

int main() {
    std::array<std::pair<double, double>, 3> rects;

    for (std::size_t i = 0; i < rects.size(); ++i) {
        std::cout << "a" << i << " = ";
        std::cin >> rects[i].first;
        std::cout << "b" << i << " = ";
        std::cin >> rects[i].second;
    }

    std::cout << "a) " << std::max(rects[0].first * rects[0].second, rects[1].first * rects[1].second) << std::endl;

    std::cout << "b) ";
    const double sqr1 = rects[0].first * rects[0].second,
                 sqr2 = rects[1].first * rects[1].second;
    
    if (sqr1 > sqr2) {
        std::cout << sqr1;
    } else if (sqr1 < sqr2) {
        std::cout << sqr2;
    } else {
        std::cout << sqr1 << ", squares are equal";
    } std::cout << std::endl;

    std::cout << "c)\t";
    const double sqr3 = rects[2].first * rects[2].second;

    if (sqr1 > sqr2 && sqr1 > sqr3) {
        std::cout << sqr1;
    } else if (sqr2 > sqr3) {
        std::cout << sqr2;
    } else {
        std::cout << sqr3;
    } std::cout << std::endl 
                << '\t';

    std::cout << (sqr1 > sqr2 && sqr1 > sqr3 ? sqr1 : sqr2 > sqr3 ? sqr2 : sqr3) << std::endl
              << '\t';

    const auto cmp = [](const std::pair<double, double>& left, const std::pair<double, double>& right) {
        return left.first * left.second < right.first * right.second;
    };

    const std::pair<double, double>& maximum = std::max(std::max(rects[0], rects[1], cmp), rects[2], cmp);

    std::cout << maximum.first * maximum.second << std::endl;

    return 0;
}