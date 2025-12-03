#include "Decoder.hpp"
#include <fstream>
#include <iostream>

int main ()
{
    Decoder decoder;

    decoder.addNewFile("input.txt");
    decoder.parseInput();
    decoder.split(',');

    for (int i = 0; i < decoder.getRanges().size(); i++)
    {
        decoder.parseLimits(decoder.getRanges()[i]);
        long id = decoder.getLimits()[0];
        while (id <= decoder.getLimits()[1])
        {
            decoder.idAnalyzer(std::to_string(id));
            id++;
        }
        decoder.clearLimits();
    }

    std::cout << decoder.getPassword() << std::endl;
    return (0);
}
