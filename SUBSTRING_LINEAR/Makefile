obj= std.o str_work.o find_substring.o
find_substring: main.c $(obj)
	gcc $^ -o $@ -lm

clean:
	rm *.o

rm:
	rm find_substring

run: find_substring
	./find_substring
