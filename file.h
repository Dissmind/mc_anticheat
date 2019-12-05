#ifndef WRITE_H
#define WRITE_H

#include <string>

class Write
{
private:
    std::string path = "C:/Windows/Temp/";
    std::string nameFile;

public:
    Write();
    static void write(std::string fileName, std::string content);
    static std::string read();

    void setConfig(std::string fileName, std::string content);

    std::string getPath() { return path; }

    void setPath(std::string value)     { path = value;     }
    void setFileName(std::string value) { nameFile = value; }
};

#endif // WRITE_H
