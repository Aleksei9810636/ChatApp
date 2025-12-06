#include <SFML/Network.hpp>
#include <iostream>

int main(){
    unsigned max_string_len = 100;
    
    sf::Clock clock;
    sf::TcpListener listener;

    if (listener.listen(5001) != sf::Socket::Done){    
        std::cout << "_Error: failed to bind listener socket to port:(" << "\n";
        std::cout << "_Error: restart program pls \n";
    }

    sf::TcpSocket client;
    if (listener.accept(client) != sf::Socket::Done){
        std::cout << "_Error: client unacceptable \n";
    }

    while(true){
        {
        std::size_t received;
        unsigned len;
        if(client.receive(&len, sizeof(len), received) != sf::Socket::Done){};  
        char* buffer = new char[len];
        client.receive(buffer, len, received);
        std::cout << "Client: ";
        for(auto i = 0; i < len; i++){
            std::cout << buffer[i];
        }
        delete[] buffer;
        std::cout << "\n";
        }

        {
        std::string msg;
        std::cout << "You: ";
        std::getline(std::cin, msg);
        unsigned len = msg.size();
        client.send(&len, sizeof(len));
        client.send(msg.c_str(), len);
        }
    }
    
}