import telnetlib
connection = telnetlib.Telnet('10.130.10.30',7016)
connection.write("\r\n")
connection.read_until("#",5)
connection.write("./bcm.user")
print connection.read_until("#",5)

