# nimacpp's level3
[Link](https://crackmes.one/crackme/65df05c5199e6a5d372a3d25)

Similar to the level2 challenge (assumably from the same author) this crackme also requires some patching. After the offending instructions have been patched out, the program processes 4 separate user provided password strings and compares them to hard coded strings. The algorithms used for manipulating the strings are simple additions.

During the execution of the program a certain string is manipulated char by char and it is checked at the end of the program. Some of its characters are set to wrong values and those need to be patched aswell.

After patching, the following strings should work for passwords
```
n6r001
m33erl1n
9o,&Ji
d
```
