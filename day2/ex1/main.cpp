#include "Decoder.hpp"
#include <fstream>
#include <iostream>

int main ()
{
    Decoder decoder;

    decoder.addNewFile("prueba.txt");
    decoder.parseInput();
    decoder.split(',');
    decoder.idAnalyzer("99");
    return (0);
}
