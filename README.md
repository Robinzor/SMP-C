# Install Windows (VsCode)
https://code.visualstudio.com/docs/cpp/config-mingw

# Install Linux
sudo apt install build-essential

# Install Mac
https://brew.sh/index_nl

# Compiling syntax:
gcc opg1a.c -o opg1a

Compiler	cfile		output		outputfile        \
gcc		    opg1a.c 	-o 		    helloworld

# Running Windows:
.\filename.exe

# Running Mac:
./filename

# Hexedit
hexedit file

# Intel or att notation (debugger)
nano ~/.gdbinit
set disassembly-flavor intel

# Debug file
gdb -batch -ex 'file opg1b' -ex 'disassemble/rs main'


