#include<regx51.h>
#define doll P2
#define sur P3
void delay();
void main()
{
	doll=0xE1;
	sur=0x22; delay();  //d
	
	doll=0xFF;
	sur=0x00; delay();//o
	
	doll=0xF0;
	sur=0x00; delay();  //l
	
	doll=0xF0;
	sur=0x00; delay();  //l
	
	doll=0x00;
	sur=0x25; delay();  //y
	
	doll=0xBB;
	sur=0x88; delay();  //s
	
	doll=0xCC;
	sur=0x88; delay();  //h
	
	doll=0xF3;
	sur=0x88; delay();  //e
	
	doll=0xC3;
	sur=0x88; delay();  //f
	
	doll=0xCF;
	sur=0x88; delay();  //a
	
	doll=0xF0;
	sur=0x00; delay();  //l
	
	doll=0x33;
	sur=0x22; delay();  //l
	
	
}

void delay(){
	int i,j;
	for(i=0;i<250;i++){
		for(j=0;j<250;j++);
	}
}