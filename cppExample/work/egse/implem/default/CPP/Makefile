VISUAL?=kate

all: compile-linux

clean:
	rm -rf obj

edit:
	$(VISUAL) ../../dataview/C/dataview-uniq.h src/egse.h src/egse.cc

compile-linux:
	mkdir -p obj && cd obj && g++ -c ../src/*.cc
