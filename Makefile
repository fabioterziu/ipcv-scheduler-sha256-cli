CFLAGS= -Wall -std=gnu99
INCLUDES= -I./inc -I/opt/homebrew/opt/openssl/include
LDFLAGS = -L/opt/homebrew/opt/openssl/lib
LIBS = -lssl -lcrypto

SERVER_SRCS=src/errExit.c src/server.c src/message.c src/sharedMemory.c src/sha256.c
CLIENT_SRCS=src/errExit.c src/client.c src/message.c src/sharedMemory.c src/sha256.c

SERVER_OBJS=$(SERVER_SRCS:.c=.o)
CLIENT_OBJS=$(CLIENT_SRCS:.c=.o)

all: server client

all: server client

server: $(SERVER_OBJS)
	@echo "Making executable: "$@
	@$(CC) $(LDFLAGS) $^ -o $@ $(LIBS)

client: $(CLIENT_OBJS)
	@echo "Making executable: "$@
	@$(CC) $(LDFLAGS) $^ -o $@ $(LIBS)

.c.o:
	@echo "Compiling: "$<
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

.PHONY: clean

clean:
	@rm -f src/*.o client server
	@echo "Removed object files and executables..."

# To compile:
#            > cd ese_1
#            > make
# To run the executable
#			> ./ese_1 ...
# To Remove object file(s) and executable(s)
#			> make clean

############################### DA AGGIUNGERE SHA256 e al