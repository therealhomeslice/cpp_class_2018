all: loan-struct loan-test/loan-test constructors/constructors destructors pointers/pointers static-demo 

loan-struct: loan-struct.cpp
	g++ -o loan-struct loan-struct.cpp


loan-test/loan-test: loan-test/loan-test.o loan-test/Loan.o
	g++ -o loan-test/loan-test loan-test/loan-test.o loan-test/Loan.o

loan-test/loan-test.o: loan-test/loan-test.cpp loan-test/Loan.h
	g++ -c -o loan-test/loan-test.o loan-test/loan-test.cpp

loan-test/Loan.o: loan-test/Loan.cpp loan-test/Loan.h
	g++ -c -o loan-test/Loan.o  loan-test/Loan.cpp


constructors/constructors: constructors/constructors.o constructors/Loan.o
	g++ -o constructors/constructors constructors/constructors.o constructors/Loan.o

constructors/constructors.o: constructors/constructors.cpp constructors/Loan.h
	g++ -c -o constructors/constructors.o constructors/constructors.cpp

constructors/Loan.o: constructors/Loan.cpp constructors/Loan.h
	g++ -c -o constructors/Loan.o constructors/Loan.cpp


destructors: destructors.cpp
	g++ -o destructors destructors.cpp


pointers/pointers: pointers/pointers.o pointers/Loan.o
	g++ -o pointers/pointers pointers/pointers.o pointers/Loan.o

pointers/pointers.o: pointers/pointers.cpp pointers/Loan.h
	g++ -c -o pointers/pointers.o pointers/pointers.cpp

pointers/Loan.o: pointers/Loan.cpp pointers/Loan.h
	g++ -c -o pointers/Loan.o pointers/Loan.cpp


static-demo: static-demo.cpp
	g++ -o static-demo static-demo.cpp


clean: 
	rm loan-struct loan-test/loan-test loan-test/*.o constructors/constructors constructors/*.o destructors pointers/pointers pointers/*.o static-demo




