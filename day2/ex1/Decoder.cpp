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

//Decoding methods

void Decoder::idAnalyzer(const std::string id)
{
    char beg = id[0];
    int i;
    size_t len = 0;

    for (i = 0; i < id.size() || beg == id[i]; i++) len++;
    if (i == id.size()) return;
    std::string pattern = id.substr(beg, len);
    if (id.size() - len == pattern.size() && id.substr(len) == pattern)
        std::cout << "OK" << std::endl;
}
