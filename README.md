# SAMPLE_CALCULATOR
sample calculator program to showcase cmake and google tests

program is broken into 3 parts:
- include : contains all the header files.
- source : contains the shared library source and the main code.
- tests : contains google unittests for the shared library code.
- build : the out of tree build folder for clean compilation.

To build the source and tests perform the following command.

cd into build directory.
cd build

then run cmake ..

This command will generate the makefiles.

followed by make.

to actually compile the sources. 
After this process the output a libshared.so shared library and main binary along with shared_unittest binary

will be present in build/output/ Folder.

to run the main code execute main binary. to execute the googletests run shared_unitttest.
