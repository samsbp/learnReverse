import r2pipe,sys
binFile=sys.argv[1]
r = r2pipe.open(binFile)
print "analyzing "+binFile
print r.cmd("aaa")
print "Strings "
print r.cmd("iz")
print "\nFunction List"
print r.cmd("afl")
print "disassambling main function"
r.cmd("s main")
print r.cmd('pdf main') # disassamble funtion
