import r2pipe,sys
r2 = r2pipe.open(sys.argv[1])
r2.cmd('aaa')
r2.cmd('doo;dcu main')

while True:
    print(r2.cmd("s"))
    r2.cmd('dso')
    
    print(r2.cmd("pf z @ rbp-0x40"))


