# Compiler
CC = gcc

# Paths to SDL3
SDL_PATH = C:/SDL3
CFLAGS = -I$(SDL_PATH)/include -O2 -Wall -std=c99
LDFLAGS = -L$(SDL_PATH)/lib -lSDL3

# Sources and output
SRC = main.c
OUT = main.exe

# Default build
all: $(OUT)

$(OUT): $(SRC)
	$(CC) -o $(OUT) $(SRC) $(CFLAGS) $(LDFLAGS)

# Clean build artifacts
clean:
	del /F $(OUT) 2>nul || true

# Run program
run: $(OUT)
	./$(OUT)
