obj = try_input_u32.o my_getch.o in_range.o

only_number: main.c $(obj)
	gcc $^ -o $@

clean:
	rm *.o

isp:
	rm only_number
