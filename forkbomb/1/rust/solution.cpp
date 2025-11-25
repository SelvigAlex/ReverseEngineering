#include <iostream>
#include <vector>

int main() {
    std::vector<int> v {215, 233, 200, 218, 374, 167, 164, 158, 167, 311, 308, 296, 158, 164, 155, 167, 170, 173, 173, 167, 161, 158, 155, 152, 158, 164, 311, 311, 308, 380};
    for (auto& elem : v) {
        std::cout << char((elem - 5) / 3);
    }
    std::cout << '\n';
    return 0;
}