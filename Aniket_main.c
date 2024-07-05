#include<stdio.h>
#include "Aniket_uart.h"

int main()
{
	char transfer_data = 'w';
	char received_data;
	unsigned int baud = 9600; 
	float clock = 1.8432;
	char stop_bit = '0';
      	unsigned short int data_width = 5;	
	unsigned short int prefered_parity = 1;
	
	configure_baudrate(baud, clock);
	configure_data_width (data_width);
	configure_stop_bit (stop_bit);
	configure_parity (prefered_parity);
	transmit_data (transfer_data);
	received_data = receive_data();

	return 0;
}
