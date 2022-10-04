
####################
####
####    This script is used to test byte distribution
####

import socket
import struct

UDP_IP = "127.0.0.1" # Machine to send the data to 
UDP_PORT = 81

# Message Data

a1 = struct.pack('>h', 1)
a2 = struct.pack('>f', 2.5)
a3 = struct.pack('>?', 1)
a4 = a1 + a2 + a3 + b'COSMOS'

print("message:", a4)

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM) # UDP
sock.sendto(a4, (UDP_IP, UDP_PORT))

