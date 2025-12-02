#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

bool IsInvalidId(long long n) {
    std::string s = std::to_string(n);

    //Must be even length
    if (s.size() % 2 != 0) return false;

    std::size_t half = s.size() / 2;
    return s.substr(0, half) == s.substr(half, half);
}

long long HandleRange(const std::string& str_range) {
    long long start, end;
    char dash;

    std::stringstream range(str_range);
    range >> start >> dash >> end;

    long long sum = 0;
    for (long long id = start; id <= end; ++id) {
        if (IsInvalidId(id)) {
            sum += id;
        }
    }

    return sum;
}


int main() {
    std::ifstream file("../input.txt");
    std::string line;

    if(file.is_open()){
        //Extract single line
        std::getline(file, line);

        //Turn line into string stream
        std::stringstream ss(line);
        std::string item;
        long long total_sum = 0;

        // Iterate over ranges
        while (std::getline(ss, item, ',')) {
            //In case trailing comma
            if (item.empty()) continue;
            total_sum += HandleRange(item);
        }

        file.close();

        std::cout << std::endl;
        std::cout << "Total sum of invalid IDs: " << total_sum << std::endl;
    } else {
        std::cerr << "Unable to open file!" << std::endl;
    }
    return 0;
}
