# Week 2

VIDEOS:

- CUTTER-R2GHIDRA: https://www.youtube.com/watch?v=eHtMiezr7l8 Goals: install cutter, try to re-create what is done in the last week but this time using cutter install r2ghidra via r2pm.  

- cutter https://www.youtube.com/watch?v=w8Bl5ZSmmZM

READING/BLOG:

- Variables https://artik.blue/reversing-radare-5 , master the data types and should be able to understand and recognize ints, chars, floats, pointers and array-like structures made of items of the same kind

- Structs https://artik.blue/reversing-radare-6 Take a deep look inside structs and understand the main dilemma here that is: there will be hard time identifying them inside the code as some times you'll get each item as a separate variable. Pay interest at the pf command to map stuff out use r2pipe along with the pf command (use the pf command inside a r2pipe .py script) to keep track of array values (print them, store them in a file as they go or do whatever but work with them). For example, write a C program that declares a char array of 20 chars and works with it through several steps generating a "serial-key" inside that array, that serial key is never printed and "deleted from memory" at some point on the program (over-write the array with '0's or something like that), goal will be to keep track of the state of that array every time its values get modified by using pf so at the end you'll know about the serial, that would be a great thing to do and get practiced in C, Reversing and Python


- Itay cohens r2 crackme solvings https://www.megabeets.net/a-journey-into-radare-2-part-1/ and https://www.megabeets.net/a-journey-into-radare-2-part-2/ it does not matter if you don't get it 100% it's a fun read

If you are good with that, keep solving IOLI crackmes, level 0x00 should be already covered by the end of this week as said and 0x01 - 0x02 by the end of the middle of july
