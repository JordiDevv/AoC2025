#include "Decoder.hpp"
#include <iostream>
#include <fstream>

//Parsing methods
void Decoder::addNewFile(const char *rute)
{
    file.open(rute);
    if (!file)
    {
        std::cout << "Error opening the file." << std::endl;
        exit (1);
    }
}

void Decoder::parseInput()
{ if (!std::getline(file, input)) exit(1); }

void Decoder::split(char del)
{
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); i++)
    {
        if (i == input.size() || input[i] == del)
        {
            ranges.push_back(input.substr(start, i - start));
            start = i + 1;
        }
    }
}

void idAnalyzer(const std::string first, const std::string last)
{
    
}
