all: clean build run

build:
	g++ ./src/*.cpp ./src/headers/*.h ./src/sources/*.cpp -o ./dist/main
clean:
	rm -rf ./dist
	mkdir ./dist
run:
	clear
	./dist/main