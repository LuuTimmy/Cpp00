#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cstdlib>
#include <float.h>
#include <limits>
#include <cstdlib>

size_t dateToInt(std::string date_str)
{
    int year, month, day;
    sscanf(date_str.c_str(), "%d-%d-%d", &year, &month, &day);
    return year*10000 + month*100 + day;
}

std::map<size_t, float> readCSV(std::string fileName) {
    std::map<size_t, float> data;
    std::ifstream file(fileName.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        exit(0);
    }
    std::string line;
    getline(file, line);
    while (getline(file, line)) {
        std::istringstream iss(line);
        std::string data_str;
        std::string value_str;
        getline(iss, data_str, ',');
        getline(iss, value_str);
        if (data_str.empty() || value_str.empty())
            continue ;
        data[dateToInt(data_str)] = atof(value_str.c_str());
    }
    file.close();
    return data;
}

float getExchangeRate(std::map<size_t, float> data, std::string date_str) {
    size_t date = dateToInt(date_str);
    
    std::map<size_t, float>::reverse_iterator rit;
    for (rit = data.rbegin(); rit != data.rend(); ++rit) {
        if (rit->first <= date)
            return rit->second;
    }
    return (0);
}

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Usage: btc <input_file>" << std::endl;
        return 0;
    }
    std::string file = argv[1];
    std::map<size_t, float> data = readCSV("data.csv");

    std::ifstream input(file.c_str());
    if (!input.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        exit(0);
    }

    std::string line;
    getline(input, line);
    while(getline(input, line)) {
        std::istringstream iss(line);
        std::string data_str;
        std::string value_str;
        getline(iss, data_str, '|');
        getline(iss, value_str);
        if (value_str.empty()) {
            std::cout << "Error: bad input => " << data_str << std::endl; 
            continue ;
        }
        
        float value;
        if (strtoll(value_str.c_str(), NULL, 10) > std::numeric_limits<int>::max()) {
            std::cout << "Error: value too big." << std::endl;
            continue;
        }
        else
            std::stringstream(value_str) >> value;
        if (value <= 0.0f) {
            std::cout << "Error: not a positive number." << std::endl;
            continue;
        }
        float result = getExchangeRate(data, data_str) * value;
        //verif error:
        printf("%s=> %.1f = %.1f\n", data_str.c_str(), value, result);
    }
    input.close();
    return 0;
}