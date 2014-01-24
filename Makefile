CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=        \
main.c          \
rpg_armor.c     \
rpg_character.c \
rpg_guard.c     \
rpg_utils.c     \
rpg_weapon.c    \

OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=rpg

all: $(SOURCES) $(EXECUTABLE)

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@


