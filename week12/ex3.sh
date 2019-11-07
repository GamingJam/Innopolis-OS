gcc -DBUF_SIZE=1024 -DSYNC copy.c
time ./a.out ex2.c ex2.c.copy
rm ex2.c.copy a.out