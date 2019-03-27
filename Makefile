CC         = -gcc
GCC        = -g++

TOP = $(shell pwd)
SRCDIR = $(TOP)/src
INCDIR = $(TOP)/include

SOURCES = \
	$(wildcard $(SRCDIR)/*.cpp )
	#$(SRCDIR)/main.cpp \
	#$(SRCDIR)/filetracker.cpp

INCLUDES = \
	-I$(INCDIR)

CFLAGS = \
	-std=c++17 \
	-lstdc++fs \
	-lm \
	-lsfml-graphics \
	-lsfml-window \
	-lsfml-system

divinePlan:$(SOURCES)
	$(GCC) -o $@ $^ $(INCLUDES) $(CFLAGS)