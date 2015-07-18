CC = avr-gcc
OBJCOPY = avr-objcopy

MCU_TARGET = atmega2560

CFLAGS = -mmcu=$(MCU_TARGET) -Wall -Os
C_INCLUDE_PATH = ../../include/
TARGET = rgb-blink

all: $(TARGET).hex $(TARGET).elf

%.hex: %.elf
	$(OBJCOPY) -j .text -j .data -O ihex $< $@

%.elf: %.c
	$(CC) $(CFLAGS) $< -o $@ -I $(C_INCLUDE_PATH)

clean:
	rm -rf *o *elf *hex $(TARGET)
