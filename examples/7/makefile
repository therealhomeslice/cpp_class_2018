all: arm-test arm-virtual poly-demo mortgage-test


mortgage-test: mortgage-test.o Loan.o Mortgage.o 
	g++ -o mortgage-test mortgage-test.o Loan.o Mortgage.o 

mortgage-test.o: mortgage-test.cpp Loan.h Mortgage.h 
	g++ -c mortgage-test.cpp

Mortgage.o: Mortgage.cpp Mortgage.h Loan.h
	g++ -c Mortgage.cpp

Loan.o: Loan.cpp Loan.h
	g++ -c Loan.cpp


arm-test: arm-test.cpp 
	g++ -o arm-test arm-test.cpp

arm-virtual: arm-virtual.cpp 
	g++ -o arm-virtual arm-virtual.cpp

poly-demo: poly-demo.cpp 
	g++ -o poly-demo poly-demo.cpp


clean:
	rm arm-test arm-virtual poly-demo *.o

