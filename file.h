#ifndef File_H
#define File_H

#include <string>

class File
{
private:
    std::string path = "C:/Windows/Temp/";
    std::string nameFile = "";

public:
    File();
    static void write(std::string fileName, std::string content);
    static std::string read(std::string fileName);

    void setConfig(std::string fileName, std::string content);

    std::string getPath()     { return this->path;     }
    std::string getNameFile() { return this->nameFile; }

    void setPath(std::string value)     { this->path = value;     }
    void setNameFile(std::string value) { this->nameFile = value; }
};

#endif // WRITE_H
