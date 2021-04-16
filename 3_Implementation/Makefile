# Name of the project
PROJECT_NAME = StudentRC

# Output directory
BUILD = build

# All source code files
SRC = main.c

# All test source files

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
-Iunity\

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
   editor = notepad
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
	  editor = cat
   endif
endif
TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).$(EXEC)
#Library Includes
INCLUDE_LIBS = 

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).$(EXEC)

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc main.c $(SRC) $(INC) -o $(call FixPath,$(PROJECT_OUTPUT).$(EXEC))

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).$(EXEC)

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	$(RM) *.(EXEC)
	$(RM) StudentRC.bin

# Create new build folder if not present
$(BUILD):
	mkdir build
