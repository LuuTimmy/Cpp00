#include <iostream>
#include <fstream>
#include <cstring>

std::string ft_replace(std::string str, std::string s1, std::string s2)
{
    int pos = 6;
    int len = s2.size();

    while ((pos = str.find(s1)) != std::string::npos) {
        str.erase(pos, s1.size() + 1);
        str.insert(pos, s2);
    }
    return (str);
}

int main(int argc, char **argv) 
{
    std::string str;
    std::ifstream infile;
    std::ofstream outfile;

    if (argc != 4) {
        std::cout << "Invalid number of arg" << std::endl;
        return (0);
    }
    infile.open(argv[1]);
    if (infile.fail()) {
        std::cerr << "Error: " << std::strerror(errno);
    }
    str = argv[1];
    str = str + ".replace";
    outfile.open(str);
    if (infile && outfile) {
        while (std::getline(infile, str)) {
            str = ft_replace(str, argv[2], argv[3]);
            outfile << str << std::endl;
        }
    }
    else {
        infile.close();
        outfile.close();
        std::cout << "cannot read file" << std::endl;
    }
    infile.close();
    outfile.close();
}