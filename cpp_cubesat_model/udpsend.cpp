#include "udpsend.h"
#include <poll.h>
udpSocket::udpSocket(std::string ip, uint16_t port)
{
    sock = ::socket(AF_INET, SOCK_DGRAM, 0);

    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    addr.sin_addr.s_addr = inet_addr(ip.c_str());
    if (addr.sin_addr.s_addr == -1)
    {
        std::cout<< "invalid hostname : " << ip.c_str() << std::endl;
    }


    bind(sock, (struct sockaddr *) &addr, sizeof(addr));

}

udpSocket::~udpSocket()
{
    close();
}

int udpSocket::send( void * data, int lengthInBytes)
{

    
    int n_bytes = ::sendto(sock, data, lengthInBytes, 0, reinterpret_cast<sockaddr*>(&addr), sizeof(addr));

    return n_bytes;

}

//return > 0 if data is recieved
int udpSocket::recieve(void * buffer, int bufferSize)
{


    struct pollfd fd;
    int ret;
    socklen_t len = sizeof(addr);

    fd.fd = sock; // your socket handler 
    fd.events = POLLIN;
    ret = poll(&fd, 1, 1); // 1ms for timeout
    switch (ret) 
    {
        case -1:
            // Error
            break;
        case 0:
            // Timeout 
            break;
        default:
            recvfrom(sock, (char *)buffer, bufferSize,  
                MSG_WAITALL, (struct sockaddr *) &addr, 
                &len);
            break;
    }
    return ret;
}


void udpSocket::close()
{
    ::close(sock);

}