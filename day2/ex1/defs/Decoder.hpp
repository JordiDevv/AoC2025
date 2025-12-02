#ifndef DECODER_HPP
#define DECODER_HPP

#include <fstream>
#include <vector>

class Decoder
{
    private:
        std::ifstream file;
        std::string input;
        std::vector<std::string> ranges;
        int password = 0;
    public:
        void addNewFile(const char *rute);
        void parseInput();
        void split(char del);

        void idAnalyzer(std::string id);
};

#endif
