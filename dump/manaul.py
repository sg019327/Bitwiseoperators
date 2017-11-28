import os
import sys
os.putenv('SOC_BOOT_FLAGS','0x1000')
if os.getenv('SOC_BOOT_FLAGS') in ("0x1000"):
	print "The BOOT FLAG SET SUCCESFULLY AS: %s " %os.getenv('SOC_BOOT_FLAGS')      
else:
	sys.exit( "Failed to set BOOT FLAG to 0x1000")
print " Initializing bcm.user app "
os.system("./bcm.user")
print "done"
