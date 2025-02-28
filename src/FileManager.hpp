#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include <filesystem>

class FileManager {
public:
  FileManager();
  ~FileManager();
  static std::string read(const std::string& filename);
  static std::string getExecutablePath();

private:
};

#endif