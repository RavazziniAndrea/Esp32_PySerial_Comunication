import serial

s = serial.Serial("/dev/ttyUSB0",115200)
while True:
    print(s.readline())
