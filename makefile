.PHONY : all windows clean
all : build/array build/array-compact build/string
windows : build/array.exe build/array-compact.exe build/string.exe

build/array : array.cpp
	g++ array.cpp -o build/array

build/array.exe : array.cpp
	g++ array.cpp -o build/array.exe

build/array-compact : array-compact.cpp
	g++ array-compact.cpp -o build/array-compact

build/array-compact.exe : array-compact.cpp
	g++ array-compact.cpp -o build/array-compact.exe

build/string : string.cpp
	g++ string.cpp -o build/string

build/string.exe : string.cpp
	g++ string.cpp -o build/string.exe
