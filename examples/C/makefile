#
#  Makefile for Examples, Appendix C
#

all: enum-demo structure-demo structure-init structure-print

enum-demo: enum-demo.c
	gcc -o enum-demo enum-demo.c
	
structure-demo: structure-demo.c Record.h
	gcc -o structure-demo structure-demo.c	

structure-init: structure-init.c Record.h
	gcc -o structure-init structure-init.c

structure-print: structure-print.c Record.h
	gcc -o structure-print structure-print.c
	
clean: 
	rm enum-demo structure-demo structure-init structure-print  
