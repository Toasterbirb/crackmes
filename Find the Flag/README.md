# froglover22's Find the Flag
[Link](https://crackmes.one/crackme/66299081a562ef06c3b52e76)

The program does some XOR stuff on a string stored in the binary. The resulting string will be run as a shell command. In the loop the program checks bits in the provided integer and if a bit is turned on, the XOR cipher gets run.

Since parts of the command string are already decrypted, we'll need to skip those. Namely the third and fifth bit need to be turned off. Bits 1, 2 and 4 need to be set so that the decryption cipher runs on those parts of the command. This can be achieved with the number 11 (0000 1011). The rest of the bits don't matter.
