#include "Decoder.hpp"
#include <fstream>

void Decoder::getNewFile(char *rute)
{
    file.open(rute);
    if (!file)
    {
        std::cout << "Error opening the file." << std::endl;
        exit (1);
    }
}
