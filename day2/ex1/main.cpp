#include "Decoder.hpp"
#include <fstream>
#include <iostream>

int main ()
{
    Decoder decoder;

    decoder.addNewFile("prueba.txt");
    decoder.parseInput();
    decoder.countRanges(',');
    std::cout << decoder.getNRanges() << std::endl;
    return (0);
}
