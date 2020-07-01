# r2 tips and command list 

- dcu main -> set breakpoint in main function and execute till main function. It is equivalent to "db main ; dc"

- ? -> replacement for rax2 -> useful for viewing the value in other types
  - ex : ? 0x10 -> will show the relevant value in hex,int,fload,double ..etc
  - can also do operations like "? ox10+10"

- In visual mode,  enter i for viewing different pseudocode.
- execute shell commands inside r2 using "!" .
  - example: !python 
