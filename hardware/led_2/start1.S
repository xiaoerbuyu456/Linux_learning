.extern     main
.text

.global _start

_start:

	/*set stack storage local varible*/
	ldr sp, = 4096;//start nand flash
	//ldr sp, = 0x40000000 + 4096;start nor flash

	/*call main*/
	bl main


halt:

	b halt
