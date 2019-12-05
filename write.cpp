#include <iostream>
#include <fstream>
#include <windows.h>
#include <random>
#include <time.h>

#include "file.h"

#include <iostream>

File::File() { }


void File::write(std::string nameFile, std::string content) {
    File file;
    file.setNameFile(nameFile);
    
    std::ofstream fout;
    fout.open(file.getPath() + nameFile);

    if (fout.is_open()) fout << content;
    else std::cout << "[File::write] Don't open file | path -> " + file.getPath() + nameFile;

    fout.close();
}


std::string File::read(std::string nameFile) {
    int intervalA = 1;
    int intervalB = 1;

    srand(time(NULL));
    
    int sec = rand() % intervalB + intervalA;

    Sleep(sec * 1000);

    std::string content = "";

    File file;
    std::ifstream in;
   in.open(file.getPath() + nameFile);

    if (in.is_open()) getline(in, content);
    else std::cout << "[File::read] Don't open file | path -> " + file.getPath() + nameFile;

    in.close();

    return content;
}

