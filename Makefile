CC = x86_64-w64-mingw32-gcc
#CFLAGS = -Wall -Wextra -std=c11 -O2 -g -mavx2
CFLAGS = -O2 -mavx2 -std=gnu17
INCLUDES = -Isrc
LDFLAGS =  -mwindows -luser32 -lgdi32

SRC_DIR = src
BUILD_DIR = build
CODE_DIR = code

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))

TARGET = $(BUILD_DIR)/Main.exe

all:
	$(CC) $(CFLAGS) $(INCLUDES) ./$(SRC_DIR)/Main.c -o ./$(TARGET) $(LDFLAGS) 

exe:
	wine64 ./$(TARGET)

clean:
	rm -rf $(BUILD_DIR)/*

do: clean all exe