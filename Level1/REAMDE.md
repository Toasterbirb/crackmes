# nimacpp's Level1
[Link](https://crackmes.one/crackme/65d490306d3d2b1fef4be1ad)

Rename to the executable so that the second character in its name is 'n'. When you run the executable, "./" needs to be in its argv[0], so you need to run the executable in the current working directory. The application also requires a singular argument, and that is a '@' character.

All of these checks are simple if-statements, but the confusion of the challenge comes from the way it reads the argv variable with the pointer derefencing and such.
