#include<stdio.h>
#include "Aniket_uart.h"

int main()
{
	unsigned char transfer_data = 'w';
	unsigned char received_data;

	
	configure_baudrate(9600, 1.8432);    // sets the baud rate
	configure_data_width (5);	     // sets the data width
	configure_stop_bit (1);		     // configures the stop bit
	configure_parity (1);                // configures the parity
	transmit_data (transfer_data);	     // transfers the data
	
	
	if(receive_data(&received_data)==1){
		printf("error occured\n");
		return 1;
	}
	
	return 0;
}
