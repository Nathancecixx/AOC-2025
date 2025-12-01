#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int processLine( std::string line){
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

int main() {
    std::ifstream file("../input.txt");
    std::string line;

    int ZeroCounter = 0;

    //Starting point of 50
    int DialPos = 50;

    if(file.is_open()){
        while(std::getline(file, line)){
            int lineChange = processLine(line);
            std::cout << line << " Change: " << lineChange << std::endl;

            DialPos += lineChange;
            DialPos %= 100;
            if(DialPos < 0) DialPos += 100;

            if(DialPos == 0) ZeroCounter++;
            std::cout << "Dial position: " << DialPos << std::endl;

        }

        file.close();
    } else {
        std::cerr << "Unable to open file!" << std::endl;
    }

    std::cout << "Zero Counter: " << ZeroCounter << std::endl;
    return 0;
}
