all: clean build run

build:
	g++ ./src/*.cpp ./src/include/*.h -o ./dist/main
clean:
	rm -rf ./dist
	mkdir ./dist
run:
	clear
	./dist/main