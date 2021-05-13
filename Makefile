all: clean build run

build:
	g++ ./src/*.cpp ./src/include/*.h -o ./dist/main.exe
clean:
	rm -rf ./dist
	mkdir ./dist
run:
	./dist/main.exe