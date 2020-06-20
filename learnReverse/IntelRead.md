# Week 1
## Basics of Assembling

x64,x86_64,IA-32e,EMT64,AMD64 - 64 bit architecture
x86 - 32 bit architecture

### data size
1 byte - 8bits
1 word - 2bytes(16bits)
1 double word - 2 words(32bits)
1 quadword - 2 double words(64 bits)
1 double quadword - 2 quadwords(128 bits)

### General Purpose Registers (64 bit)
- RAX
- RBX
- RCX
- RDX
- RBP
- RSI
- RDI
- RSP
- R8 - R15

R denotes 64 bit registers

#### Lower and Higher bits 
ex: 0x19
POS:  8 7 6 5  4 3 2 1
SBCD: 8 4 2 1  8 4 2 1
bits: 0 0 0 1  1 0 0 1

Higher bits - 0001
Lower bits - 1001

E denotes 32 bit registers(NA for R8-R15)
E**A**X,E**B**X.. - Access Lower 32 bits

Removing first letter(NA for R8-R15) - access lower 16 bits
Ex: AX,BX,..

A**L** - lower 16 bits
A**H** - higher 16 bits

R8-R15
R8 - qword
R8**D** - lower dword
R8**W** - lowest word
R8**B** - lowest byte MASM style, Intel style RBL

[REX Opcode](https://xem.github.io/minix86/manual/intel-x86-and-64-manual-vol2/o_b5573232dd8f1481-68.html)
- available only in 64 bit mode
- used as instruction-prefix
- used to specify GPRs and SSE registers
- used to specify 64 bit operand size
- used to specify exented control registers

RIP - Instruction Pointer
RSP - points to last item pushed onto the stack and grows toward lower addresses
RFLAGS - register which stores flags as a result of operation (64bit)
EFLAGS - 32 bit

FPR0-FPR7 
- 8 Floating Point Unit (FPU) Registers
- alias for 64 bit MMX Registers
- support 80-bit data but only available in assembly

[BCD](https://en.wikipedia.org/wiki/Binary-coded_decimal)
#### other registers
- segment registers
- control registers
- memory management registers
- debug registers
- virtualization registers
- performance registers

RDTSC - count processor cycles for profiling small pieces of code.
[Intel Developer Manual More Info.](http://www.intel.com/content/www/us/en/processors/architectures-software-developer-manuals.html)

#### SIMD Architecture
- Single Instruction Multiple Data, execute commands on multiple data in parallel
- MMX and SSE registers are used.
- 8 with 8 data in parallel operation
- MMX0-MMX7 alias of FPU registers
- 16 128-bit XMM registers allow parallel operation on four single or two double precision values per instruciton

#### Tools
Assemblers - NASM,YASM,FASM,MASM(microsoft)

#### Compilers
inline assembly vs intrinsics
- C supports inline assembly by giving the asssembly code in c source file itself to have more optimized machine instructions that the normal compiler may not give
- intrinsics are function  which is available already in compilers and OS that gives more optimized machine instructions like inline assembly would do , the difference is here it is available in OS and compilers and for the above one user has to write the assembly language . Since it is available in compiler itself, it is more optimized and have good performance than inline assembly. Better portability than inline asm.

#### Addressing Modes
- Immediate
  - ADD EAX,14; add 14 into 32-bit EAX
- Register to Register
  - ADD R8L,AL; add 8 bit AL into R8L
- indirect
  - 8,16,32 bit displacement with any general puporse registers for base and index and a scale of 1,2,4 or 8 to multiply the index 
  - MOV R8W,1234[8*RAX+RCX]; move word at address 8*RAX+RCX+1234 into R8W
  - Equivalent ways to write the same above instruciton 
      - MOV   ECX, dword ptr table[RBX][RDI]
      - MOV   ECX, dword ptr table[RDI][RBX]
      - MOV   ECX, dword ptr table[RBX+RDI]
      - MOV   ECX, dword ptr [table+RBX+RDI]
      -
- Relative addressing
  - accessing data tables in code relative to current Instruction Pointer 
  - position independent code 

#### Operating Systems
- 64bit can address 2^64 bytes of data in theory
- current chips does not allow to access all 2^64 bytes of data since os needs to store a lot more paging table 
- OS use higher half of the spaces and user programs uses the lower half

#### [Calling Conventions](https://en.wikipedia.org/wiki/X86_calling_conventions)
 - calling conventions define order of parameters and how are they passed (pushed on the stack)
 - which registers are to be preservers , used and more.
 - In linux it is called as Application Binary Interface(ABI)
 
## retool comparison

Comparing RE tools with text editors
Radare2 -> vim
Binary Ninja -> emacs
IDA Pro -> IDE

