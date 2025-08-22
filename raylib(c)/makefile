# Compiler and paths
CC = gcc
RAYLIB_PATH = C:/raylib/raylib
CFLAGS = $(RAYLIB_PATH)/src/raylib.rc.data -s -static -O2 -std=c99 -Wall \
         -I$(RAYLIB_PATH)/src -Iexternal -DPLATFORM_DESKTOP
LDFLAGS = -L$(RAYLIB_PATH)/src -lraylib -lopengl32 -lgdi32 -lwinmm

# Source and output
SRC = main.c
OUT = main.exe

# Default build
all: $(OUT)

$(OUT): $(SRC)
	$(CC) -o $(OUT) $(SRC) $(CFLAGS) $(LDFLAGS)

# Clean build artifacts
clean:
	del /F $(OUT) 2>nul || true

# Run program (only if compiled)
run: $(OUT)
	./$(OUT)
