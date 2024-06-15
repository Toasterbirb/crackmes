# BNauss's crack the key
[Link](https://crackmes.one/crackme/65ed01ee7b0f7ceced2c5afb)

The program starts by reading in a file called `secret_flag` in the current working directory. If the string in the file is 8 characters long (including the newline), a series of XOR operations are done to the string and the results are compared against a hardcoded byte array. The binary contains 2 different keys in total that are used to encrypt the input string. The cleartext password can be deduced by reversing the XOR operations. If the encryted user input matches a hardcoded key, the flag gets decrypted and printed out.

The password is "superman". The password file can be created with the following command: `echo -n "superman" > ./secret_flag`. The `-n` flag is important because the newline is counted as a character and thus makes the program exit prematurely due to the input string being too long.
