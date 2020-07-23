all:
	echo "1"
	arm-linux-gcc -c -0 led_on.S
	echo "2"
	arm-linux-ld -Ttext 0 led_on.o -o led_on.elf
	echo "3"
	arm-linux-objcopy -O binary -S led_on.elf led_on.bin
	echo "4"

clean:
	rm *.bin *.o *.elf
