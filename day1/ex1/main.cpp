#include "Decoder.hpp"
#include <iostream>
#include <fstream>

int main()
{
    Decoder decoder;

    decoder.getNewFile("input.txt");
    decoder.getNextLine();

    while (!decoder.isEnd())
    {
        int n = decoder.checkFormat();
        n = decoder.cleanNumber(n);
        decoder.applyOrder(n);
        decoder.getNextLine();
    }

    std::cout << decoder.getPassword() << std::endl;
    return (0);
}
