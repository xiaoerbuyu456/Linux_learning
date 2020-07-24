int main()
{
	/*config GPF*/
	#define pGPFCON  (*((volatile unsigned int *)0x56000050));//int * pGPFCON = 0x56000050;and *pGPFCON = 0x100;
	pGPFCON = 0X100;
	/*write data to control led on/off */
	#define pGPFDAT  (*((volatile unsigned int *)0x56000056));
	pGPFDAT = 0X10;
	pGPFDAT =0;
	
	return 0;
}

