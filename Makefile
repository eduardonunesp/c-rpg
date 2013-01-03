CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.c rpg_person.c rpg_weapon.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=rpg

all: $(SOURCES) $(EXECUTABLE)

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@


