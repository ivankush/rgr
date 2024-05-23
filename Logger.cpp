#include "Logger.h"
#include <ctime>

Logger::Logger(const std::string& fileName) : logFileName(fileName) {}

void Logger::log(const std::string& message) const {
    std::ofstream logFile(logFileName, std::ios_base::app);
    if (logFile.is_open()) {
        time_t now = time(0);
        char buf[26];
        ctime_s(buf, sizeof(buf), &now);
        logFile << buf << ": " << message << std::endl;
        logFile.close();
    }
}
