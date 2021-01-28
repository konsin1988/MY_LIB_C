obj = try_input_u32.o my_getch.o in_range.o

unsigned_with_comments: main.c $(obj)
	gcc $^ -o $@

clean:
	rm *.o

isp:
	rm only_number
