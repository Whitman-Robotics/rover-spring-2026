#include <iostream>
#include <chrono>
#include <string>
#include <thread>
#include "net.h"

int main() {
    // Initialize network listener
    if (!InitNetwork(8080)) {
        std::cerr << "Failed to start network listener." << std::endl;
        return 1;
    }

    std::cout << "Rover Pi Node active and awaiting commands" << std::endl;

    bool running = true;
    while (running) {
        std::string cmd = GetNextCommand();
        if (!cmd.empty()) {
            std::cout << cmd << std::endl;
        }
        // 2. Update motor controllers/GPIO
        // 3. Send telemetry back to laptop

        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }

    return 0;
}