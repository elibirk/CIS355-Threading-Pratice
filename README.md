# CIS355-Threading-Pratice
Practice with threads using C++. 

P1_Perry_Leah.cpp uses forking to run P1_Perry_Leah_Child.cpp

Since the assignment reads "Write a program that will accept the names of 3 processes as command-line arguments," 
it was assumed that the 'child' processes should be other programs, rather than just forks of the current one.
Therefore, in order to run the program as intended, compile and then run the parent with the name of the child 
process 3 times as arguments. For instance, if you rename the parent process p.cpp while compiling and the child 
process c.cpp while compiling, the code to run it would be:

./p.cpp c.cpp c.cpp c.cpp
