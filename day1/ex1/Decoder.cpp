#include "Decoder.hpp"
#include <iostream>
#include <fstream>

//Parsing methods
int Decoder::checkFormat()
{
    if (!line.c_str()) return -1;

    const char *order = line.c_str();
    if (order[0] != 'L' && order[0] != 'R')
    {
        std::cout << "Some order is in a wrong format." << std::endl;
        exit (1);
    }

    return std::stoi(line.substr(1));
}

int Decoder::cleanNumber(int n) { while (n > 99) n -= 100; return n; }

//Decoding methods
void Decoder::applyOrder(const int n)
{
    const char *order = line.c_str();
    if (order[0] == 'L') decrementPos(n);
    else incrementPos(n);
}

void Decoder::decrementPos(const int dec)
{
    position -= dec;
    if (position < 0) position += 100;
    if (position == 0) password++;
}

void Decoder::incrementPos(const int inc)
{
    position += inc;
    if (position > 99) position -= 100;
    if (position == 0) password++;
}

//Reading methods
void Decoder::getNewFile(const char *rute)
{
    file.open(rute);
    if (!file)
    {
        std::cout << "Error opening the file." << std::endl;
        exit (1);
    }
}

void Decoder::getNextLine()
{
    if (!std::getline(file, line))
    {
        line.clear();
        end = true;
    }
}

bool Decoder::isEnd() { return end; }
int Decoder::getPassword() { return password; }
