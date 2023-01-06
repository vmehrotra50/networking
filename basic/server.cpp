#include <iostream>
#include <string>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>

class Client {
    private:
        int socket_id;
        std::string address;
        std::string response_data = "";
        int port;
        struct sockaddr_in server;

    public:
        Client() {
            socket_id = -1;
            port = 0;
            address = "";
        }

        bool connect(std::string address, int port) {
            if (socket_id == -1) {
                socket_id = socket(AF_INET, SOCK_STREAM, 0);
                if (socket_id == -1) {
                    std::cout << "Error: could not create socket" << std::endl;
                    return false;
                }
                std::cout << "Socket created" << std::endl;
            }
        }
};