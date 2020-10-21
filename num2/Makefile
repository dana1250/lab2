calc : calc.o add.o sub.o mul.o div.o
	gcc -o calc calc.o add.o sub.o mul.o div.o
	ar rcs ./lib/lib55.a add.o sub.o mul.o div.o
	gcc -o ./lib/lq55 -L./lib calc.c -l55
calc.o : calc.c
	gcc -c calc.c 
add.o : ./lib/add.c
	gcc -c ./lib/add.c
sub.o : ./lib/sub.c
	gcc -c ./lib/sub.c
mul.o : ./lib/mul.c
	gcc -c ./lib/mul.c
div.o : ./lib/div.c
	gcc -c ./lib/div.c
clean :
	rm -f cal calc.o add.o sub.o mul.o div.o
