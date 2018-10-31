PROGNAME="exec"

$(PROGNAME): $(patsubst %.c,%.o,$(wildcard *.c))
	gcc $^ -o $@ 

%.o: %.c
	gcc -c -MD $<

clean:
	rm -f $(PROGNAME) $(wildcard *.d) $(wildcard *.o)  

include $(wildcard *.d)

.PHONY: clean