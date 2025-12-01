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
        int password = 0;
    public:
        int checkFormat();
        int cleanNumber(int n);

        void applyOrder(const int n);
        void decrementPos(const int dec);
        void incrementPos(const int inc);

        void getNewFile(const char *rute);
        void getNextLine();
        bool isEnd();
        int getPassword();
};

#endif
