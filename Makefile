SERVER=server
CLIENT=client
CC=cc
CFLAGS= -Wall -Wextra -Werror
HDR=minitalk.h
SRCSC=ft_client.c ft_utils.c
SRCSS=ft_server.c ft_utils.c ft_itoa.c


.PHONY: $(SERVER) $(CLIENT) clean fclean re 

all: $(SERVER) $(CLIENT)

$(SERVER):
	$(CC) $(CFLAGS) -o $(SERVER) $(SRCSS) $(HRD) 

$(CLIENT):
	$(CC) $(CFLAGS) -o $(CLIENT) $(SRCSC) $(HRD) 

clean:
	rm $(SERVER) $(CLIENT)

fclean: clean
	
re: fclean all
