#include "net.h"
#include <iostream>
#include <string>
#include <cstring>
#include <unistd.h> //these three are linux only files and will not compile on a windows machine.
#include <sys/socket.h>
#include <netinet/in.h>
#include <fcntl.h>

int server_fd = -1;
int client_fd = -1;

bool InitNetwork(int port) {
    // 1. Create socket (AF_INET, SOCK_STREAM)
    // 2. Set socket options (SO_REUSEADDR) so you can restart the app quickly
    // 3. Bind to the port
    // 4. Listen for incoming connections
    return false; 
}

std::string GetNextCommand() {
    // 1. Check if client_fd is valid
    // 2. Use recv() with MSG_DONTWAIT to read data without hanging the CPU
    // 3. Buffer the result and return as string
    return "";
}

bool SendTelemetry(const std::string& data) {
    // 1. Use send() to push data to client_fd
    // 2. Handle potential broken pipe (client disconnected)
    return false;
}

void ShutdownNetwork() {
    // 1. close(client_fd)
    // 2. close(server_fd)
}