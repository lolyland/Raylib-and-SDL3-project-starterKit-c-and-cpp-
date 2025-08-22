# Compiler
CXX = g++

# Paths to SDL3
SDL_PATH = C:/SDL3
CXXFLAGS = -I$(SDL_PATH)/include -O2 -Wall -std=c++17
LDFLAGS = -L$(SDL_PATH)/lib -lSDL3

# Sources and output
SRC = main.cpp
OUT = main.exe

# Default build
all: $(OUT)

$(OUT): $(SRC)
	$(CXX) -o $(OUT) $(SRC) $(CXXFLAGS) $(LDFLAGS)

# Clean build artifacts
clean:
	del /F $(OUT) 2>nul || true

# Run program
run: $(OUT)
	./$(OUT)
