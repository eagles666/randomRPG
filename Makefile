files := $(wildcard sources/*.c)
 
all:randomRPG 
	@echo "Done."

randomRPG: $(files)
	gcc -Wall -o $@ $(files) -I headers/

