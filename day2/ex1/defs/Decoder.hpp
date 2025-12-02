#ifndef DECODER_HPP
#define DECODER_HPP

#include <fstream>

class Decoder
{
    private:
        std::ifstream file;
        std::string input;
        int nRanges = 1;
        char **ranges;
    public:
        void addNewFile(const char *rute);
        void parseInput();

        int getNRanges();
        void countRanges(char del);
        //void split(char del);
        //void addRange();
};

#endif
