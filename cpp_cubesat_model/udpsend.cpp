#include "udpsend.h"

udpSocket::udpSocket(std::string ip, uint16_t port)
{
    sock = ::socket(AF_INET, SOCK_DGRAM, 0);

    destination.sin_family = AF_INET;
    destination.sin_port = htons(port);
    destination.sin_addr.s_addr = inet_addr(ip.c_str());
}

udpSocket::~udpSocket()
{
    close();
}

int udpSocket::send( void * data, int lengthInBytes)
{


    int n_bytes = ::sendto(sock, data, lengthInBytes, 0, reinterpret_cast<sockaddr*>(&destination), sizeof(destination));

    return n_bytes;

}

void udpSocket::close()
{
    ::close(sock);

}