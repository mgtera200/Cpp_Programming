/*
 * Eng.Mostafa Tera
 * Created on Thu May 16 2024
 */


#include <iostream>
#include <string>
#include <vector>

/**
 * @class Backtrace
 * @brief A utility class for capturing and printing function call traces.
 */
class Backtrace {
public:
    /**
     * @brief Records the entry of a function.
     * @param func The name of the function being entered.
     */
    static void EnterFN(const std::string& func);

    /**
     * @brief Records the exit of a function.
     * @param func The name of the function being exited.
     */
    static void ExitFN(const std::string& func);

    /**
     * @brief Prints the current function call trace.
     */
    static void print_trace();

private:
    static std::vector<std::string> trace; ///< Stores the function call trace.
};

/**
 * @def EnterFn
 * @brief Macro to record the entry of a function.
 */
#define EnterFn Backtrace::EnterFN(__func__)

/**
 * @def ExitFn
 * @brief Macro to record the exit of a function.
 */
#define ExitFn Backtrace::ExitFN(__func__)

/**
 * @def PRINT_BT
 * @brief Macro to print the current function call trace.
 */
#define PRINT_BT Backtrace::print_trace()

