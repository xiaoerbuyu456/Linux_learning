all:
	arm-linux-gcc -c -o led_on.o led_on.c
	arm-linux-gcc -c -o uart.o uart.c
	arm-linux-gcc -c -o sys.o sys.c
	echo "1"
	arm-linux-gcc -c -o start.o start.S
	echo "2"
	arm-linux-ld -Ttext 0  start.o sys.o led_on.o uart.o -o led_on.elf
	echo "3"
	arm-linux-objcopy -O binary -S led_on.elf led_on.bin
	echo "4"
	arm-linux-objdump -D led_on.elf > led_on.dis
	echo "5"
  
clean:
	rm *.bin *.o *.elf

#.PHONY
