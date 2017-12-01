TARGET=lib.so

$(TARGET):lib.c
	    $(CC) -shared -fPIC -Wl,-e,print_version $^ -o $@

.PHONY:clean
clean:
	$(RM) $(TARGET)
