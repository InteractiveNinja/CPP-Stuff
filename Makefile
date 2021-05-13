all: clean build run

build:
	g++ -g ./src/*.cpp -o ./dist/main 
clean:
	rm -rf ./dist
	mkdir ./dist
run:
	./dist/main.exe