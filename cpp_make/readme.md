1st : create a preprocessor directive so that the header
won't be included in every other file if reimported

to compile just include all the file names
g++ math_utils.cpp math_pgm.cpp -o math

if you include -c to the compilation process in g++
will create .o object files aka compiled cpp code
then you could go
g++ math_utils.o math_pgm.o

.o is useful to distribute a library but not necessary
they are also used by make files !!
make files allow us to minimize the amount of
compilation that is necessary to produce the final output file
