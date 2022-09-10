# Build directory and build name
BUILD_DIR=./build
BUILD_NAME=test

# Source files and include directory
SRC=./src/main.cpp ./src/Test.cpp
INC_DIR=./include/

##########################################
# Build
##########################################
build:
	mkdir build/
	g++ -std=c++11 -I${INC_DIR} ${SRC} -o ${BUILD_DIR}/${BUILD_NAME}

##########################################
# Build and run
##########################################
run: clean build
	cd ${BUILD_DIR} && ./${BUILD_NAME}

##########################################
# Clean up outputs of this Makefile
##########################################
clean:
	rm -rf ${BUILD_DIR}
