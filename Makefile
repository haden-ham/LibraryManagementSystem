# Compiler
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I./src

# Source and build directories
SRC_DIR = src
BUILD_DIR = build

# Output binary name
TARGET = $(BUILD_DIR)/library_manager

# Source files
SRCS = $(SRC_DIR)/main.cpp \
       $(SRC_DIR)/Book.cpp \
       $(SRC_DIR)/Library.cpp

# Object files (same as source but with .o and in build dir)
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

# Default target
all: $(TARGET)

# Build the final executable
$(TARGET): $(OBJS)
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile .cpp to .o
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean compiled files
clean:
	rm -rf $(BUILD_DIR)

# Optional convenience target
run: all
	./$(TARGET)
