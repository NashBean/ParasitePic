# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nash/code/ParasitePic

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nash/code/ParasitePic

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/nash/code/ParasitePic/CMakeFiles /home/nash/code/ParasitePic/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/nash/code/ParasitePic/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named ParasitePic

# Build rule for target.
ParasitePic: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 ParasitePic
.PHONY : ParasitePic

# fast build rule for target.
ParasitePic/fast:
	$(MAKE) -f CMakeFiles/ParasitePic.dir/build.make CMakeFiles/ParasitePic.dir/build
.PHONY : ParasitePic/fast

ImageManager.o: ImageManager.cpp.o

.PHONY : ImageManager.o

# target to build an object file
ImageManager.cpp.o:
	$(MAKE) -f CMakeFiles/ParasitePic.dir/build.make CMakeFiles/ParasitePic.dir/ImageManager.cpp.o
.PHONY : ImageManager.cpp.o

ImageManager.i: ImageManager.cpp.i

.PHONY : ImageManager.i

# target to preprocess a source file
ImageManager.cpp.i:
	$(MAKE) -f CMakeFiles/ParasitePic.dir/build.make CMakeFiles/ParasitePic.dir/ImageManager.cpp.i
.PHONY : ImageManager.cpp.i

ImageManager.s: ImageManager.cpp.s

.PHONY : ImageManager.s

# target to generate assembly for a file
ImageManager.cpp.s:
	$(MAKE) -f CMakeFiles/ParasitePic.dir/build.make CMakeFiles/ParasitePic.dir/ImageManager.cpp.s
.PHONY : ImageManager.cpp.s

MainWindow.o: MainWindow.cpp.o

.PHONY : MainWindow.o

# target to build an object file
MainWindow.cpp.o:
	$(MAKE) -f CMakeFiles/ParasitePic.dir/build.make CMakeFiles/ParasitePic.dir/MainWindow.cpp.o
.PHONY : MainWindow.cpp.o

MainWindow.i: MainWindow.cpp.i

.PHONY : MainWindow.i

# target to preprocess a source file
MainWindow.cpp.i:
	$(MAKE) -f CMakeFiles/ParasitePic.dir/build.make CMakeFiles/ParasitePic.dir/MainWindow.cpp.i
.PHONY : MainWindow.cpp.i

MainWindow.s: MainWindow.cpp.s

.PHONY : MainWindow.s

# target to generate assembly for a file
MainWindow.cpp.s:
	$(MAKE) -f CMakeFiles/ParasitePic.dir/build.make CMakeFiles/ParasitePic.dir/MainWindow.cpp.s
.PHONY : MainWindow.cpp.s

ParasiteDetector.o: ParasiteDetector.cpp.o

.PHONY : ParasiteDetector.o

# target to build an object file
ParasiteDetector.cpp.o:
	$(MAKE) -f CMakeFiles/ParasitePic.dir/build.make CMakeFiles/ParasitePic.dir/ParasiteDetector.cpp.o
.PHONY : ParasiteDetector.cpp.o

ParasiteDetector.i: ParasiteDetector.cpp.i

.PHONY : ParasiteDetector.i

# target to preprocess a source file
ParasiteDetector.cpp.i:
	$(MAKE) -f CMakeFiles/ParasitePic.dir/build.make CMakeFiles/ParasitePic.dir/ParasiteDetector.cpp.i
.PHONY : ParasiteDetector.cpp.i

ParasiteDetector.s: ParasiteDetector.cpp.s

.PHONY : ParasiteDetector.s

# target to generate assembly for a file
ParasiteDetector.cpp.s:
	$(MAKE) -f CMakeFiles/ParasitePic.dir/build.make CMakeFiles/ParasitePic.dir/ParasiteDetector.cpp.s
.PHONY : ParasiteDetector.cpp.s

ResultManager.o: ResultManager.cpp.o

.PHONY : ResultManager.o

# target to build an object file
ResultManager.cpp.o:
	$(MAKE) -f CMakeFiles/ParasitePic.dir/build.make CMakeFiles/ParasitePic.dir/ResultManager.cpp.o
.PHONY : ResultManager.cpp.o

ResultManager.i: ResultManager.cpp.i

.PHONY : ResultManager.i

# target to preprocess a source file
ResultManager.cpp.i:
	$(MAKE) -f CMakeFiles/ParasitePic.dir/build.make CMakeFiles/ParasitePic.dir/ResultManager.cpp.i
.PHONY : ResultManager.cpp.i

ResultManager.s: ResultManager.cpp.s

.PHONY : ResultManager.s

# target to generate assembly for a file
ResultManager.cpp.s:
	$(MAKE) -f CMakeFiles/ParasitePic.dir/build.make CMakeFiles/ParasitePic.dir/ResultManager.cpp.s
.PHONY : ResultManager.cpp.s

YOLOModel.o: YOLOModel.cpp.o

.PHONY : YOLOModel.o

# target to build an object file
YOLOModel.cpp.o:
	$(MAKE) -f CMakeFiles/ParasitePic.dir/build.make CMakeFiles/ParasitePic.dir/YOLOModel.cpp.o
.PHONY : YOLOModel.cpp.o

YOLOModel.i: YOLOModel.cpp.i

.PHONY : YOLOModel.i

# target to preprocess a source file
YOLOModel.cpp.i:
	$(MAKE) -f CMakeFiles/ParasitePic.dir/build.make CMakeFiles/ParasitePic.dir/YOLOModel.cpp.i
.PHONY : YOLOModel.cpp.i

YOLOModel.s: YOLOModel.cpp.s

.PHONY : YOLOModel.s

# target to generate assembly for a file
YOLOModel.cpp.s:
	$(MAKE) -f CMakeFiles/ParasitePic.dir/build.make CMakeFiles/ParasitePic.dir/YOLOModel.cpp.s
.PHONY : YOLOModel.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... ParasitePic"
	@echo "... edit_cache"
	@echo "... ImageManager.o"
	@echo "... ImageManager.i"
	@echo "... ImageManager.s"
	@echo "... MainWindow.o"
	@echo "... MainWindow.i"
	@echo "... MainWindow.s"
	@echo "... ParasiteDetector.o"
	@echo "... ParasiteDetector.i"
	@echo "... ParasiteDetector.s"
	@echo "... ResultManager.o"
	@echo "... ResultManager.i"
	@echo "... ResultManager.s"
	@echo "... YOLOModel.o"
	@echo "... YOLOModel.i"
	@echo "... YOLOModel.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

