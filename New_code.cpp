#include <iostream>
#include <string>
#include <vector>
#include <cctype>

int main(int argc, char* argv[])
{ 
    const std::vector<std::string> cmdLineArgs { argv, argv+argc };
    for (std::size_t i{0}; i < cmdLineArgs.size(); ++i){
        if (cmdLineArgs[i] == "-h" or cmdLineArgs[i] == "--help"){
            std::cout << "You are getting NO HELP!!!!!!" << std::endl;
        }
    }
}