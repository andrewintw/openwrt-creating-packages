
TARGET = linklib
SOURCES = $(shell echo *.c)
OBJECTS = $(SOURCES:.c=.o)

LDFLAGS += -lpkgshared

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	-rm -f $(OBJECTS) $(TARGET)
