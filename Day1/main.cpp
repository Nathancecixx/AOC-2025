#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int processLine(std::string line){
    std::istringstream iss(line);
    char Direction;
    int Rotation;

    if (!(iss >> Direction >> Rotation)) {
        std::cerr << "Failed to process line: " << line << std::endl;
        return 0;
    }

    if(Direction == 'L') return 0-Rotation;
    else if(Direction == 'R') return Rotation;
    else {
        std::cerr << "Invalid Direction in line: " << line << std::endl;
        return 0;
    }
}

int countZeroClicks(int startPos, int lineChange) {
    const int MOD = 100;

    if (lineChange == 0) return 0;

    int steps = std::abs(lineChange);
    int t0;

    if (lineChange > 0) {
        // Right rotation: S + t ≡ 0 (mod 100)
        t0 = (startPos == 0) ? MOD : (MOD - startPos);
    } else {
        // Left rotation: S - t ≡ 0 (mod 100)
        t0 = (startPos == 0) ? MOD : startPos;
    }

    if (steps < t0) return 0;

    return 1 + (steps - t0) / MOD;
}

int main() {
    std::ifstream file("../input.txt");
    std::string line;


    int ZeroAtEndCounter = 0;
    int ZeroClickCounter = 0;

    //Starting point of 50
    int DialPos = 50;

    if(file.is_open()){
        while(std::getline(file, line)){
            if(line.empty()) continue;

            int lineChange = processLine(line);
            std::cout << line << " Change: " << lineChange << std::endl;

            ZeroClickCounter += countZeroClicks(DialPos, lineChange);

            DialPos += lineChange;
            DialPos %= 100;
            if(DialPos < 0) DialPos += 100;

            if(DialPos == 0) ZeroAtEndCounter++;
            std::cout << "Dial position: " << DialPos << std::endl;

        }
        file.close();
    } else {
        std::cerr << "Unable to open file!" << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Part 1:\n End Of Rotation Zero Counter: " << ZeroAtEndCounter << std::endl;
    std::cout << "Part 2:\n All Zero Hit's Counter: " << ZeroClickCounter << std::endl;
    return 0;
}
