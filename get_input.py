import serial

#In Linux, the esp32 is usually identified by /dev/ttyUSB0 ($ ls /dev/tty*).
#In Windows, it uses a COM port
s = serial.Serial("/dev/ttyUSB0",115200)
while True:
    print(s.readline())
