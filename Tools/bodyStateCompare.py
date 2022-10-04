import csv

print("start")

cppFileName = "bodyState_cpp.csv"
simulinkFileName = "bodyState_simulink.csv"
f1 = open(cppFileName)
f2 = open(simulinkFileName)

aligned = False

csvReader = csv.reader(f1, delimiter=',')
csvReader2 = csv.reader(f2, delimiter=',')
header = csvReader.__next__()
csv2row = csvReader2.__next__()

floatval1 = float(csvReader.__next__()[0])
floatval2 = float(csvReader2.__next__()[0])
#align the csv's so we are comparing packets with the same timestamps
while (floatval2 != floatval1):
    if (floatval1 < floatval2):
        floatval1 = float(csvReader.__next__()[0])
        print("advance ", cppFileName)
    elif (floatval2 < floatval1):
        floatval2 = float(csvReader2.__next__()[0])
        print("advance ", simulinkFileName)

print("aligned on ",floatval1 )

lineNumber = 1
failCounter = 0
for row in csvReader:
    try:
        csv2row = csvReader2.__next__()
    except:
        break
    colNumber = 0
    packetPass = True
    for col in row:
        if (lineNumber > 0 and colNumber < 18):
                
            floatval1 = float(col)
            floatval2 = float(csv2row[colNumber])

            format_float1 = "{:.7f}".format(floatval1)
            format_float2 = "{:.7f}".format(floatval2)
            
            if(format_float1 != format_float2):
                print("Packet", lineNumber, "FAIL: ", header[colNumber], format_float1, " != ", format_float2)
                packetPass = False
                failCounter +=1
        colNumber +=1
        
    if (packetPass):
        print("Packet ", lineNumber, "PASS")
    lineNumber+=1
        
f1.close()
f2.close()

if(failCounter == 0):
    print("SUCCESS - All packets PASS")
else:
    print("FAIL: ", failCounter, "Packets failed")

print("end")