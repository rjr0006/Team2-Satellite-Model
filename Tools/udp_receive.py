
####################
####
####    This script is used to test byte parsing and data
####    receiving from the simulink simulation.
####

from itertools import count
import socket
import struct 


quit = False
UDP_IP = "" # Machine this python app is running on 
UDP_PORT = 25000
sock = socket.socket(socket.AF_INET, # Internet
                    socket.SOCK_DGRAM) # UDP

sock.bind((UDP_IP, UDP_PORT))
sock.settimeout(1)


f = open("bodyState.csv", "w")
f.write("utc, Lat, Long, Alt, PosX, PosY, PosZ, VelX, VelY, VelZ, QEciX, QEciY, QEciZ, QEciW, QEcefX, QEcefY, QEcefZ, QEcefW\n")
f.close()
# LLA   X_ECEF  V_ECEF  Q_ECI   Q_ECEF
# 3,        3,      3,      4,      4 
# 17 doubles
counter = 0
double_size = 8
num_doubles = 18
table = ["utcTime, Lat", "Long", "Alt", "PosX", "PosY", "PosZ", "VelX", "VelY", "VelZ", "QEciX", "QEciY", "QEciZ", "QEciW", "QEcefX","QEcefY","QEcefZ","QEcefW"]
while (counter < 1000 ):
    try:
        data, ipaddr = sock.recvfrom(144) # buffer size is 1024 bytes
    except:
        continue
    counter += 1
    print(counter)
    f = open("bodyState.csv", "a")
    for i in range(num_doubles):
        start = i * double_size
        unpacked_data = struct.unpack('d', data[start : start + double_size])
        
        #print(table[i], unpacked_data)
        f.write (str(unpacked_data[0]))
        f.write(",")
    f.write("\n")
    f.close()

print("done")
sock.close()







