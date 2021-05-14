all: clean build run

build:
	g++ ./src/*.cpp -o ./dist/main
clean:
	rm -rf ./dist
	mkdir ./dist
run:
	clear
	./dist/main