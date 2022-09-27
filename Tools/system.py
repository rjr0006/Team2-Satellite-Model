####################
####
####    This script is used to test byte parsing
####

import sys
import struct

# Byte string for testing
matlabbytes = b'\t\x16+\xd4\x11\x05<@\x82\x18\xb8S\x93rd\xc0\x80M\xca:\xa8\xf4\x18A\nZ\xa6kT\xf0U\xc1 Rf\xf87\xdc9\xc1\xf1\xf7\xf2(m0HA\xa7\xdc\x07\x8e\x90\x19\xae@\x13%C\xb4Ih\xaf\xc0\x0e\x7f\xd56D\xd9\xb2@h5\x0e\xa2\xb0E\xa0?\xf9\xc5\x0c\r\xd9\xad\xe3?H\xdd\xc4\xd7\xae\xdd\xe2\xbf\xb6\xecQ5\xfa\xb9\xe0?\xef\xb7\xe2\x10\xa6$\xd3\xbf\xe6\x87r\xce\xe9\x1e\xeb?\xca\xb9 e;J\xb5\xbfJ\xa8\xdf\x06\x1c\x8d\xdb?\nZ\xa6kT\xf0U\xc1 Rf\xf87\xdc9\xc1\xf1\xf7\xf2(m0HA\xa7\xdc\x07\x8e\x90\x19\xae@\x13%C\xb4Ih\xaf\xc0\x0e\x7f\xd56D\xd9\xb2@'

# LLA   X_ECEF  V_ECEF  Q_ECI   Q_ECEF
# 3,        3,      3,      4,      4 
# 17 doubles

double_size = 8
for i in range(17):
    start = i * double_size
    print(struct.unpack('d', matlabbytes[start : start + double_size]))