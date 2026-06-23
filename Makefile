CC ?= gcc
CFLAGS ?= -std=c11 -Wall -Wextra -Wpedantic -Werror

SOURCES := $(sort $(wildcard src/*/*.c))
PROGRAMS := $(patsubst src/%.c,bin/%,$(SOURCES))

.PHONY: all check clean list

all: $(PROGRAMS)

bin/%: src/%.c
	@mkdir -p "$(dir $@)"
	$(CC) $(CFLAGS) "$<" -o "$@"

check:
	@set -e; for source in $(SOURCES); do \
		echo "Checking $$source"; \
		$(CC) $(CFLAGS) -fsyntax-only "$$source"; \
	done

list:
	@printf '%s\n' $(SOURCES)

clean:
	rm -rf bin
