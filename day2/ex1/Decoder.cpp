#include "Decoder.hpp"
#include <iostream>
#include <fstream>

//Reading methods
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

//Utilities for the "ranges" manipulation

int Decoder::getNRanges() { return nRanges; }
void Decoder::countRanges(char del)
{ for (int i = 0; i < input.size(); i++) if (input[i] == del) nRanges++; }

// void Decoder::split(char del)
// {
//     char *beg = &input[0];
//     char *end;
//     int i = 0;
//     for (int j = 0; input; j++)
//     {
//         if (input[i] == del && input[i + 1]) continue;
//         if (input[i + 1] == del)
//         {
//             end = &input[i];
            
//         }
//     }
// }
