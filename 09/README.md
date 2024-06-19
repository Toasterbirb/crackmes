# benni's 09
[Link](https://crackmes.one/crackme/657630dd35240bf986f1004f)

The password to the program is checked by XORing user input against a hardcoded buffer of data in the binary and comparing the sum of all characters in the result string against a hardcoded value. When the sum matches, the flag string is printed out (the resulting string is the "flag").

The decryption algorithm that uses XOR seems to only use the first 4 characters of the user input so the password is very simple to bruteforce.

The correct password is 5382
