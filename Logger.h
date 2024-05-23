#pragma once
#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <fstream>
#include <string>

class Logger {
private:
    std::string logFileName;

public:
    Logger(const std::string& fileName);
    void log(const std::string& message) const;
};

#endif 
