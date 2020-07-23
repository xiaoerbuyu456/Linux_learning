
/*
*
*点亮LED:GPIF4
*/
.text
.global _start

_start:
	

/*
*
*配置GPIF4为输出引脚
*把0x100写到地址0x56000050
*/
	ldr r1, =0x56000050
	mov r0, #0x100 /*ldr ro, = 0x100*/
	str r0, [r1]

/*
*设置GPF4输出高电平
*把0写到地址0x56000054
*/
	ldr r1, =0x56000054
	mov r0, #0x0 /*ldr ro, = 0x0*/
	str r0, [r1]

/*死循环*/
halt:
	b halt






