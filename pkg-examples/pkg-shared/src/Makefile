
TARGET = libpkgshared.so
SOURCES = $(shell echo *.c)
OBJECTS = $(SOURCES:.c=.o)

CFLAGS += -Iinclude

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) -shared $(CFLAGS) -o $@ $< $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -fPIC -c -o $@ $<

clean:
	-rm -f $(OBJECTS) $(TARGET)
