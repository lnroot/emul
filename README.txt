8-Bit Processor Emulator
[Still a WIP]

Written in C. Consists of three devices and their functionalities: CPU, Memory, and Clock.
This project was a class project that I never finished, but I liked the idea, so I decided to continue it on my own.
In the future, if I get the emulator fully functional, I'd like to try recreating some 8-bit arcade games to run on it.

INSTRUCTIONS FOR USE
I recommend redirecting input from a file with your chosen commands written out, so the program terminates properly when
reaching EOF.

Clock commands:

clock reset
    The reset command sets the internal clock counter to zero.

clock tick <decimal integer>
    The tick command accepts a positive decimal integer indicating how many clock ticks should be
    issued to attached devices. The internal counter is incremented by the specified number of ticks.

clock dump
    The dump command shows the value of the internal clock counter in decimal.


Memory commands:

memory create <size in hex bytes>
    The “create” command accepts a single hex integer parameter which indicates the size of the
    memory, in bytes, to be allocated. Example: “memory create 0x10000”.

memory reset
    The “reset” command causes all allocated memory to be set to zero.

memory dump <hex address> <hex count>
    The dump command shows the contents of memory starting at address <address>, and
    continuing for <count> bytes. Example: “memory dump 0x04 0x20”

memory set <hex address> <hex count> <hex byte 1> <hex byte 2> … <hex byte N>
    The set command initializes memory to a supplied set of values. The “hex address”
    specifies where to begin setting memory values, “hex count” is how many bytes will be assigned,
    and is followed by the expected number of hex bytes, separated by a single space.
    Example: “memory set 0x10 0x05 0x08 0xDE 0xAD 0xBE 0xEF”


CPU commands:

cpu reset
    The “reset” command causes all CPU registers (including PC) to be zero. Example: “cpu reset”.

cpu set reg <reg> <hex byte>
    The “set reg” command sets the value of the specified CPU register. The “reg” parameter can be
    one of the values RA-RH, or PC for the program counter. Example: “cpu set reg RE 0xAA”.

cpu dump
    The “dump” command shows the value of all CPU registers.


CURRENT PROGRESS
In the current stage, all of the above commands work. They are properly parsed and the information sent to the proper
device, where the action requested is accomplished. However, the devices only react independently, and do not
communicate with each other. For example, the clock ticks can be set, dumped, and reset, but the clock tick doesn't
tell the cpu to do anything on the clock cycle. Similarly, memory can be allocated, reset, set, and dumped, but the
CPU never accesses anything in the memory. Adding the communication among the devices is my next step.