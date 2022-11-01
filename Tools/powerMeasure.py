import time
import csv
from ina219 import INA219

SHUNT_OHMS = 0.1

clock = time.CLOCK_REALTIME

print("clock res (in seconds): " + str(time.clock_getres(clock)))

ina1 = INA219(SHUNT_OHMS,address=0x43)
ina1.configure()
print("ina219 test")

fields = ["Time", "Bus Voltage (V)", "Bus Current (mA)", "Power (mW)", "Shunt Voltage (mV)"]


curTime = time.clock_gettime(clock)
filename = "powerData" + str(curTime)
with open(filename, 'w') as csvfile:
    csvwriter = csv.writer(csvfile)
    csvwriter.writerow(fields)
    while True:
        curTime = time.clock_gettime_ns(clock)
        try:
            csvwriter.writerow([curTime, ina1.voltage(), abs(ina1.current()), ina1.power(), abs(ina1.shunt_voltage())])
        except DeviceRangeError as e:
            print(e)
            break
        time.sleep(0.01 - ((time.clock_gettime_ns(clock) - curTime)/1000000000))
