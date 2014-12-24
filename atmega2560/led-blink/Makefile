CC = avr-gcc
OBJCOPY = avr-objcopy

MCU_TARGET = atmega2560

CFLAGS = -mmcu=$(MCU_TARGET) -Wall -Os
TARGET = blink

all: $(TARGET).hex $(TARGET).elf

%.hex: %.elf
	$(OBJCOPY) -j .text -j .data -O ihex $< $@

%.elf: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *o *elf *hex $(TARGET)
