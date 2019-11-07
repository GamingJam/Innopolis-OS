gcc -o copy.o -DBUF_SIZE=512 -DSYNC copy.c
time ./copy.o ex2.c ex2.c.copy >>ex3.txt
rm ex2.c.copy copy.o