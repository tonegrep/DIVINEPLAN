CC         = -gcc
GCC        = -g++

TOP = $(shell pwd)
SRCDIR = $(TOP)/src
INCDIR = $(TOP)/include

SOURCES = \
	$(SRCDIR)/main.cpp \
	$(SRCDIR)/filetracker.cpp
	#$(wildcard $(SRCDIR)/*.cpp )

INCLUDES = \
	-I$(INCDIR)

CFLAGS = \
	-std=c++17 \
	-lstdc++fs \
	-lm 

all:$(SOURCES)
	$(GCC) -o $@ $^ $(INCLUDES) $(CFLAGS)