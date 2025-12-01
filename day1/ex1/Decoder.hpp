#ifndef DECODER_HPP
#define DECODER_HPP

#include <iostream>
#include <fstream>

class Decoder
{
    private:
        int position = 50;
        std::ifstream file;
        std::string line;
        bool end = false;
    public:
        void decrementPos(const int dec);
        void incrementPos(const int inc);

        void getNewFile(char *rute);
        void getNextLine();
};

#endif
