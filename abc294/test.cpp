#include <iostream>
#include <vector>

int main() {
    std::vector<std::pair<int, int>> C = {{1, 2}, {3, 4}, {5, 4}};

    for (int i = 0; i < C.size() - 1; i++) {
        C[i + 1].second ^= C[i].second;
    }

    for (const auto& pair : C) {
        std::cout << pair.first << ", " << pair.second << std::endl;
    }
	std::cout << (2^4) << " " << (3^4) << " " << ((2^4) ^ (3^4)) << std::endl;

    return 0;
}
