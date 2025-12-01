#ifndef DECODER_HPP
#define DECODER_HPP

#include <fstream>

class Decoder
{
    private:
        int position = 50;
        std::ifstream file;
        std::string line;
        bool end = false;
    public:
        int checkFormat(char *order);
        int cleanNumber(int n);

        void applyOrder(char sense);
        void decrementPos(const int dec);
        void incrementPos(const int inc);

        void getNewFile(char *rute);
        void getNextLine();
};

#endif
