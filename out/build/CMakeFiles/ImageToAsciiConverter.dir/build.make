# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\NestorMartinez\OneDrive - Quality Technology\Desktop\ASCIIConverter"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\NestorMartinez\OneDrive - Quality Technology\Desktop\ASCIIConverter\out\build"

# Include any dependencies generated for this target.
include CMakeFiles/ImageToAsciiConverter.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ImageToAsciiConverter.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ImageToAsciiConverter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ImageToAsciiConverter.dir/flags.make

CMakeFiles/ImageToAsciiConverter.dir/main.cpp.obj: CMakeFiles/ImageToAsciiConverter.dir/flags.make
CMakeFiles/ImageToAsciiConverter.dir/main.cpp.obj: C:/Users/NestorMartinez/OneDrive\ -\ Quality\ Technology/Desktop/ASCIIConverter/main.cpp
CMakeFiles/ImageToAsciiConverter.dir/main.cpp.obj: CMakeFiles/ImageToAsciiConverter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\NestorMartinez\OneDrive - Quality Technology\Desktop\ASCIIConverter\out\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ImageToAsciiConverter.dir/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ImageToAsciiConverter.dir/main.cpp.obj -MF CMakeFiles\ImageToAsciiConverter.dir\main.cpp.obj.d -o CMakeFiles\ImageToAsciiConverter.dir\main.cpp.obj -c "C:\Users\NestorMartinez\OneDrive - Quality Technology\Desktop\ASCIIConverter\main.cpp"

CMakeFiles/ImageToAsciiConverter.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ImageToAsciiConverter.dir/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\NestorMartinez\OneDrive - Quality Technology\Desktop\ASCIIConverter\main.cpp" > CMakeFiles\ImageToAsciiConverter.dir\main.cpp.i

CMakeFiles/ImageToAsciiConverter.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ImageToAsciiConverter.dir/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\NestorMartinez\OneDrive - Quality Technology\Desktop\ASCIIConverter\main.cpp" -o CMakeFiles\ImageToAsciiConverter.dir\main.cpp.s

# Object files for target ImageToAsciiConverter
ImageToAsciiConverter_OBJECTS = \
"CMakeFiles/ImageToAsciiConverter.dir/main.cpp.obj"

# External object files for target ImageToAsciiConverter
ImageToAsciiConverter_EXTERNAL_OBJECTS =

ImageToAsciiConverter.exe: CMakeFiles/ImageToAsciiConverter.dir/main.cpp.obj
ImageToAsciiConverter.exe: CMakeFiles/ImageToAsciiConverter.dir/build.make
ImageToAsciiConverter.exe: CMakeFiles/ImageToAsciiConverter.dir/linkLibs.rsp
ImageToAsciiConverter.exe: CMakeFiles/ImageToAsciiConverter.dir/objects1
ImageToAsciiConverter.exe: CMakeFiles/ImageToAsciiConverter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\NestorMartinez\OneDrive - Quality Technology\Desktop\ASCIIConverter\out\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ImageToAsciiConverter.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ImageToAsciiConverter.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ImageToAsciiConverter.dir/build: ImageToAsciiConverter.exe
.PHONY : CMakeFiles/ImageToAsciiConverter.dir/build

CMakeFiles/ImageToAsciiConverter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ImageToAsciiConverter.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ImageToAsciiConverter.dir/clean

CMakeFiles/ImageToAsciiConverter.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\NestorMartinez\OneDrive - Quality Technology\Desktop\ASCIIConverter" "C:\Users\NestorMartinez\OneDrive - Quality Technology\Desktop\ASCIIConverter" "C:\Users\NestorMartinez\OneDrive - Quality Technology\Desktop\ASCIIConverter\out\build" "C:\Users\NestorMartinez\OneDrive - Quality Technology\Desktop\ASCIIConverter\out\build" "C:\Users\NestorMartinez\OneDrive - Quality Technology\Desktop\ASCIIConverter\out\build\CMakeFiles\ImageToAsciiConverter.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ImageToAsciiConverter.dir/depend

