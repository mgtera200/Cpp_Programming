/*
 * Eng.Mostafa Tera
 * Created on Thu May 16 2024
 */

#include "backtrace.hpp"

// Definition of the static member variable
std::vector<std::string> Backtrace::trace;

void Backtrace::EnterFN(const std::string& func) {
    std::cout << "Enter to " << func << std::endl;
    trace.push_back(func);
}

void Backtrace::ExitFN(const std::string& func) {
    std::cout << "Exit from " << func << std::endl;
}

void Backtrace::print_trace() {
    std::cout << "Backtrace as follows:" << std::endl;
    int index = 0;
    for (const auto& func : trace) {
        std::cout << index << "- " << func << std::endl;
        ++index;
    }
    std::cout << "Backtrace is finished" << std::endl;
}

/**
 * @brief A sample function to demonstrate backtrace functionality.
 * @param x An integer parameter.
 */
void fun3(int x) {
    EnterFn;
    PRINT_BT;
    ExitFn;
}

/**
 * @brief A sample function to demonstrate backtrace functionality.
 * @param x An integer parameter.
 */
void fun2(int x) {
    EnterFn;
    fun3(3);
    ExitFn;
}

/**
 * @brief A sample function to demonstrate backtrace functionality.
 * @param x An integer parameter.
 */
void fun1(int x) {
    EnterFn;
    fun2(2);
    ExitFn;
}

int main(int argc, const char** argv) {
    EnterFn;
    fun1(3);
    ExitFn;

    return 0;
}
