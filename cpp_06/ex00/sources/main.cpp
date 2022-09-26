//
// Created by Hilaria Rebbeca on 9/12/22.
//

#include <string>
#include <iostream>
#include <ostream>

int main(int argc, char **argv){
    if (argc != 2){
        std::cout << "this program take only 1 argument, not more, not less" << std::endl;
        return (1);
    }
    try {
        if (isprint((argv[1][0])) && strlen(argv[1]) == 1 && !isnumber(argv[1][0])){
            std::cout << "char: '" << argv[1][0] << "'" << std::endl;
        }
        else if (isprint(static_cast<char>(std::stoi(argv[1]))) && std::stoi(argv[1]) > 0) {
            std::cout << "char: '" << static_cast<char>(std::stoi(argv[1])) << "'" << std::endl;
        }
        else {
            std::cout << "char: non displayable" << std::endl;
        }
    }
    catch (std::exception &e){
        std::cout << "char: impossible" << std::endl;
    }
    try{
        std::cout << "int: " << static_cast<int>(std::stoi(argv[1])) << std::endl;
    }
    catch (std::exception &e){
        std::cout << "impossible" << std::endl;
    }
    try {
        float f = static_cast<float>(std::stof(argv[1]));
        std::cout.precision(1);
        std::cout << std::fixed;
        std::cout << "float: " << f << "f" << std::endl;
    } catch (std::out_of_range &outOfRange) {
        std::cout << "float: " << std::numeric_limits<float>::infinity() << "f" << std::endl;
    } catch (std::exception &ex) {
        std::cout << "float: impossible" << std::endl;
    }
    try {
        std::cout << "double: " << static_cast<double>(std::stod(argv[1])) << std::endl;
    } catch (std::out_of_range &outOfRange) {
        std::cout << std::numeric_limits<double>::infinity() << std::endl;
    } catch (std::exception &ex) {
        std::cout << "impossible" << std::endl;
    }
    return (0);
}