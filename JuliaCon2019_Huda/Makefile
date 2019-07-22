UNAME := $(shell uname)
ifeq ($(UNAME),Linux)
	SHAREDLIB_EXT := so
	SHAREDLIB_FLAG := -shared
endif
ifeq ($(UNAME),Darwin)
	SHAREDLIB_EXT := dylib
	SHAREDLIB_FLAG := -dynamiclib
endif

CURDIR := $(shell pwd)
FIBOLIBNAME := $(CURDIR)/Fibo_externC.$(SHAREDLIB_EXT)

CXXFLAGS:= -std=c++0x -U__STRICT_ANSI__ -O3 -fPIC -c
OBJS=Fibo_externC.o
all: fibonacci

.PHONY: all clean

fibonacci: Fibo_externC.cpp
	g++ $(CXXFLAGS) Fibo_externC.cpp
	g++ $(SHAREDLIB_FLAG) -o $(FIBOLIBNAME) Fibo_externC.o
        # used to use this to fix lib paths:
        # export LD_LIBRARY_PATH=$(CURDIR):$$LD_LIBRARY_PATH
	
clean:
	$(RM) -rf $(OBJS) fibonacci
	$(RM) -rf $(FIBOLIBNAME) fibonacci