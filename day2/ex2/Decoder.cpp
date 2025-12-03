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
    int check;
    for (check = 0; check < id.size() && id[0] == id[check]; check++) {}
    if (check == id.size())
    { 
        password += std::stol(id);
        return;
    }

    if (id.size() % 2 != 0) return;

    size_t half = id.size() / 2;
    std::string p = id.substr(0, half);
    if (id.substr(half) == p) { password += std::stol(id); }
}

void Decoder::parseLimits(const std::string range)
{
    int beg = 0;
    int len;
    for (len = 0; len < range.size() && range[len] != '-'; len++) {}
    idLimits.push_back(std::stol(range.substr(beg, len)));

    beg = len + 1;
    for (len = len + 1; len < range.size() && range[len] != '-'; len ++) {}
    idLimits.push_back(std::stol(range.substr(beg, len)));
}

//Getters

std::vector<std::string> Decoder::getRanges() const { return ranges; }
std::vector<long> Decoder::getLimits() const { return idLimits; }
long Decoder::getPassword() const { return password; }

//Utilities

void Decoder::clearLimits() { idLimits.clear(); }
