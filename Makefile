BUILD_NAME=build

build:
	g++ -std=c++11 main.cpp Test.cpp -o ${BUILD_NAME}

run: clean build
	./build

clean:
	rm -rf ${BUILD_NAME}
