#include <iostream>
#include <unordered_map>
#include <vector>
#include <map>

int main() {
    int n, x;
    std::cin >> n >> x;

    std::map<int, int> mymap;
    bool flag = false;

    for (int i = 1; i <= n; ++i) {
        int num;
        std::cin >> num;

        int diff = x - num;

        if (mymap.count(diff)) {
            std::cout << mymap[diff] << " " << i << "\n";
            flag = true;
            break;
        }
        mymap[num] = i;
    }

    if (!flag) {
        std::cout << "IMPOSSIBLE\n";
    }
    return 0;
}