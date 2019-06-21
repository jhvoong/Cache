exec	:= a.out
objs	:= address.o block.o cache.o main.o queue.o set.o

CPP     := g++
CFLAGS  := -Wall -Werror
CFLAGS  += -g

ifneq ($(V),1)
Q = @
endif

all: $(exec)

$(exec): $(objs)
	@echo "CPP $@"
	$(Q)$(CPP) $(CFLAGS) -o $@ $^

%.o: %.cpp
	@echo "CPP $@"
	$(Q)$(CPP) $(CFLAGS) -c -o $@ $<

clean:
	@echo "clean"
	$(Q)rm -rf $(exec) $(objs) $(deps)

