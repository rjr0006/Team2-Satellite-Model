#ifndef UDP_SEND_
#define UDP_SEND_

#include <iostream>
#include <string>

#include <arpa/inet.h> // htons, inet_addr
#include <netinet/in.h> // sockaddr_in
#include <sys/types.h> // uint16_t
#include <sys/socket.h> // socket, sendto
#include <unistd.h> // close
#include "asbCubeSat.h" 

class udpSocket
{
    public:
    udpSocket(std::string ip, uint16_t port);
    ~udpSocket();
    int send( void * data, int lengthInBytes);
    int recieve(void * buffer, int bufferSize);
    void close();

    private:
    sockaddr_in addr;
    int sock;

};

#endif