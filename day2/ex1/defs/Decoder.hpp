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
        std::vector<int> idLimits;
    public:
        void addNewFile(const char *rute);
        void parseInput();
        void split(char del);

        void idAnalyzer(std::string id);
        void parseLimits(const std::string range);

        int getPassword() const;
        std::vector<std::string> getRanges() const;
        std::vector<int> getLimits() const;

        void clearLimits();
};

#endif
