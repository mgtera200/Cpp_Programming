/*
 * Eng. Mostafa Tera
 * Created on Sat May 18 2024
 * 
 * Logger class to handle logging messages with different levels (INFO, WARNING, ERROR)
 * and storing them for later retrieval and clearing.
 */

#include <iostream>
#include <string>
#include <utility>
#include <vector>

/**
 * @enum LogLevel
 * @brief Enum to represent the severity level of logs.
 */
enum class LogLevel {
    INFO,
    WARNING,
    ERROR
};

/**
 * @class Logger
 * @brief A class for logging messages with various severity levels.
 * 
 * This class provides static methods to log messages, dump the log buffer,
 * clear the log buffer, and convert log levels to string representation.
 */
class Logger {
private:
    static std::vector<std::pair<LogLevel, std::string>> logBuffer; ///< Buffer to store log messages and their levels.
    static LogLevel baseLevel; ///< Base log level. Only messages with this level or higher are logged.

public:
    Logger() = default; ///< Default constructor.
    ~Logger() = default; ///< Default destructor.

    Logger(const Logger&) = delete; ///< Delete copy constructor.
    Logger(Logger&&) = delete; ///< Delete move constructor.
    Logger& operator=(const Logger&) = delete; ///< Delete copy assignment operator.
    Logger& operator=(Logger&&) = delete; ///< Delete move assignment operator.

    /**
     * @brief Log a message with a specified log level.
     * 
     * @param level The severity level of the log message.
     * @param message The log message to be recorded.
     */
    static void log(LogLevel level, const std::string& message);

    /**
     * @brief Convert a log level to its string representation.
     * 
     * @param level The log level to convert.
     * @return A string representing the log level.
     */
    static std::string levelToString(LogLevel level);

    /**
     * @brief Dump the contents of the log buffer to the console.
     * 
     * This function prints all the log messages stored in the buffer.
     */
    static void dump();

    /**
     * @brief Clear the log buffer.
     * 
     * This function removes all log messages from the buffer.
     */
    static void clear();
};

// Definition of static members
std::vector<std::pair<LogLevel, std::string>> Logger::logBuffer;
LogLevel Logger::baseLevel = LogLevel::INFO;

void Logger::log(LogLevel level, const std::string& message) {
    if (level >= baseLevel) {
        logBuffer.emplace_back(level, message);
        std::cout << "Log saved successfully" << std::endl;
    }
}

void Logger::dump() {
    if (logBuffer.empty()) {
        std::cout << "Log buffer is empty" << std::endl;
        return;
    }
    for (const auto& log : logBuffer) {
        std::cout << levelToString(log.first) << ": " << log.second << std::endl;
    }
}

void Logger::clear() {
    logBuffer.clear();
    std::cout << "Log buffer cleared successfully" << std::endl;
}

std::string Logger::levelToString(LogLevel level) {
    switch (level) {
        case LogLevel::INFO:
            return "INFO";
        case LogLevel::WARNING:
            return "WARNING";
        case LogLevel::ERROR:
            return "ERROR";
        default:
            return "UNKNOWN";
    }
}

int main(int argc, const char** argv) {
    Logger::log(LogLevel::WARNING, "Forgot to close the file");
    Logger::log(LogLevel::ERROR, "Failed to close the file");
    Logger::dump();
    Logger::clear();
    Logger::dump();

    return 0;
}
