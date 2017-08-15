CXX = g++
CXXFLAGS = -Wall -g -MMD
EXEC = a4q1
OBJECTS = main.o list.o vector.o sorted.o unsorted.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}

.PHONY: clean
