#include "main.hpp"

main(int argc, char* argv[]){
    std::cout << "argc === " << argc << std::endl;

    for(int i = 0; i < argc; i++){
        std::cout << i << ":" << argv[i] << std::endl;       
    }
}