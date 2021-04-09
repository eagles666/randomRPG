files := $(wildcard sources/*.cpp)
 
all:randomRPG 
	@echo "Done."

randomRPG: $(files)
	g++ -Wall -o $@ $(files) -I headers/

