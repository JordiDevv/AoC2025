#include "Decoder.hpp"
#include <iostream>
#include <fstream>

//Reading methods
void Decoder::getNewFile(char *rute)
{
    file.open(rute);
    if (!file)
    {
        std::cout << "Error opening the file." << std::endl;
        exit (1);
    }
}

void Decoder::getNextLine()
{ if (!std::getline(file, line)) line.clear(); }