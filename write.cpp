#include <iostream>
#include <fstream>
#include <windows.h>
#include <random>
#include <time.h>

#include "write.h"

#include <iostream>

Write::Write() { }


void Write::write(std::string fileName, std::string content) {
    std::ofstream fout;
    Write write;

    write.setFileName(fileName);
    
    fout.open(write.getPath() + fileName);

    if (!fout.is_open()) std::cout << "Error. Don't Open file"; // TODO: Переделать через исключения
    else fout << content;

    fout.close();
}


std::string Write::read() {
    srand(time(NULL));
    int sec = rand();

    std::cout << sec;

    Sleep(sec/10);

    return " 10 ";
}

