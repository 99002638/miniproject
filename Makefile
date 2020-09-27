SRC = unity/unity.c\
src/add.c\
src/create.c\
src/mobilechange.c\
src/search.c\
src/view.c\
src/withdraw.c\
main.c

INC = -Iinc\


PROJECT_NAME = main.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html
