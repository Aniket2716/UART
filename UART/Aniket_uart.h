/*
 * This is the header file containing the driver function declarations for
 * LPC2148's UART written by Aniket
 */

/**
 * @brief Configures the baud rate of the UART
 *
 * @param baud : the baud rate of the UART data to be transmitted
 * valid values: 50 ...128000
 * @param clock : the input clock frequency in MHz is from the crystal clock. 
 * valid values: 1.8432MHz, 3.072MHz, 18.432MHz
 *
 * @return none
 */
void configure_baudrate (unsigned int baud,float clock);

/**
 * @brief Configures the data width of the UART
 *
 * @param data_width : number of bits of data to be passed
 * valid values: 5 ...8
 *
 * @return None
 */
void configure_data_width (unsigned char data_width);

/**
 * @brief Configures the stop bit of the UART.
 * 
 * Determines the number of stop bits based on the specified data width.
 * 
 * | Data Width | Stop Bit | Number of Stop Bits |
 * |------------|----------|---------------------|
 * |     5      |    0     |         1           |
 * |     5      |    1     |        1.5          |
 * |     6-8    |    1     |         2           |
 * 
 * @param stop_bit : Value of stop bit (valid values: 0, 1).
 * @return None
 */
void configure_stop_bit(unsigned char stop_bit);


/**
 * @brief Configures the parity preference
 *
 * @param prefered_parity : Parity to be maintained for checking data correctness or none parity
 * valid values: even-0, odd-1, none-2
 *
 * @return None
 */
void configure_parity (unsigned char prefered_parity);

/**
 * @brief transmits the data
 *
 * @param data : the data to be transmitted
 * valid values: Any type of data
 *
 * @return None
 */
void transmit_data (unsigned char data);

/**
 * @brief Receives the data
 *
 * @param  : None
 * valid values: None
 *
 * @return unsigned int
 *@brief if return 0  ---> success
 *          return 1 ----> failure
 */
 
int receive_data(unsigned char* data);

