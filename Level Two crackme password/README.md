# ripfaceless's Level Two crackme password
[Link](https://crackmes.one/crackme/66b5fa2c90c4c2830c821d0a)

There seems to be some bugs in the crackme related to reading user input (it doesn't read enough characters). Because of this, solving the challenge involves some luck.

The flag can be found easily with the `strings` command. It is a long hexadecimal value that the program then encrypts using the AES256 algorithm. It then reads in the user input and uses the same algorithm and password on it. At the end it compares the results. Thus this long hexadecimal value works as the password to the program *sometimes*.

The password that works *sometimes* is 7a4baaac9cc258c33b7459113da21360ef68864859cdb4dc389b20e24513c110
