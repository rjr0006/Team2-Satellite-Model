
####################
####
####    This script is used to test byte parsing and data
####    receiving from the simulink simulation.
####

import socket
import struct 

UDP_IP = "127.0.0.1" # Machine this python app is running on 
UDP_PORT = 80

sock = socket.socket(socket.AF_INET, # Internet
                     socket.SOCK_DGRAM) # UDP
sock.bind((UDP_IP, UDP_PORT))


# LLA   X_ECEF  V_ECEF  Q_ECI   Q_ECEF
# 3,        3,      3,      4,      4 
# 17 doubles

double_size = 8
num_doubles = 17
while True:
    data, addr = sock.recvfrom(8192) # buffer size is 1024 bytes
    
    for i in range(num_doubles):
        start = i * double_size
        print(struct.unpack('d', data[start : start + double_size]))


sock.close()