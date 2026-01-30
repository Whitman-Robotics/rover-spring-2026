#pragma once

#include <string>

// Initializes the socket, binds to the port, and starts listening for the laptop
// Returns true if the server is up and waiting, false if bind/listen failed
bool InitNetwork(int port);

// Non-blocking check to see if a new command has arrived from the laptop
// Returns the command string or an empty string if nothing is waiting
std::string GetNextCommand();

//checks if client_fd is -1, if so calls accept()
void AcceptConnection();

// Sends telemetry data (graphs, status, etc.) back to the laptop
// Returns true if sent successfully
bool SendTelemetry(const std::string& data);

// Closes the sockets and cleans up resources
void ShutdownNetwork();