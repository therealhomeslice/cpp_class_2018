line-test: line-test.o Point.o Line.o 
	g++ -o line-test line-test.o Point.o Line.o 

line-test.o: line-test.cpp Point.h Line.h 
	g++ -c line-test.cpp

Line.o: Line.cpp Line.h Point.h
	g++ -c Line.cpp

Point.o: Point.cpp Point.h
	g++ -c Point.cpp

clean:
	rm line-test *.o

