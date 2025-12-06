#include <SFML/Network.hpp>
#include <iostream>


int main(){
    unsigned max_string_len = 100;

    sf::TcpSocket socket;
    sf::Time timeout = sf::seconds(60.f);

    sf::Socket::Status status = socket.connect("192.168.0.101", 5001, timeout);
    if (status != sf::Socket::Done){
        std::cout << "_Error: Socet status is't done \n";
    }

    while(true){
        {
        std::string msg;
        std::cout << "You: ";
        std::getline(std::cin, msg);
        unsigned len = msg.size();
        socket.send(&len, sizeof(len));
        socket.send(msg.c_str(), len);
        }

        {
        std::size_t received;
        unsigned len;
        socket.receive(&len, sizeof(len), received);  
        char* buffer = new char[len];
        socket.receive(buffer, len, received);
        std::cout << "Server: ";
        for(auto i = 0; i < len; i++){
            std::cout << buffer[i];
        }
        delete[] buffer;
        std::cout << "\n";
        }
    }
}