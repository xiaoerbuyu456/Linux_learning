int main()
{
	/*config GPF*/
	int * pGPFCON =  (unsigned int *)0x56000050;
	pGPFCON = 0X100;
	/*write data to control led on/off */
	int * pGPFDAT = (unsigned int *)0X56000056; 
	pGPFDAT = 0X10;
	pGPFDAT =0;
}

