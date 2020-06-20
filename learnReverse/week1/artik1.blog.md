# Week 1
Recreating [artik's blog post](https://artik.blue/reversing-radare2-1)
## Analysis using R2
cmd :  r2 cfiles/HelloWorld

The above command will initialise r2 with the given binary in read mode. 
aaaa -> analyse the binary, data structures, functions ie it will analyse everything about the binary 

![aaaa cmd screenshot](https://raw.githubusercontent.com/samsbp/learnReverse/master/learnReverse/week1/screenshots/aaaa.png "aaaa screenshot")

The next thing to do is getting what are the functions available in our binary. we can do this by afl command
![alf cmd screenshot](https://raw.githubusercontent.com/samsbp/learnReverse/master/learnReverse/week1/screenshots/afl.png "alf screenshot")
iI - info on binary like architecture, type, compiler stats etc  

![iI cmd screenshot](https://raw.githubusercontent.com/samsbp/learnReverse/master/learnReverse/week1/screenshots/fileinfo.png "iI screenshot")
ii - imports used in the binary

![ii cmd screenshot](https://raw.githubusercontent.com/samsbp/learnReverse/master/learnReverse/week1/screenshots/ii.png "ii screenshot")
iz - strings that are available in .data section of the file
![iz cmd screenshot](https://raw.githubusercontent.com/samsbp/learnReverse/master/learnReverse/week1/screenshots/iz.png "iz screenshot")
izz- strings in the whole file
![izz cmd screenshot](https://raw.githubusercontent.com/samsbp/learnReverse/master/learnReverse/week1/screenshots/izz.png "izz screenshot")

[x64 architecture cheatsheet](https://cs.brown.edu/courses/cs033/docs/guides/x64_cheatsheet.pdf)
[y eax is 0 before calling printf function](https://stackoverflow.com/questions/6212665/why-is-eax-zeroed-before-a-call-to-printf)

eax is 0 because printf does not have vector register i.e registers for floating point arguments like XMM, MMX, FPR

