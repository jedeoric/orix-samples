#include <stdio.h>
#include <conio.h>
#include <serial.h>

int main ()
{
    struct ser_params    params;
 /*   
    struct ser_params {
    unsigned char       baudrate;       
    unsigned char       databits;       
    unsigned char       stopbits;       
    unsigned char       parity;         
    unsigned char       handshake;      
};



#define SER_BAUD_45_5           0x00
#define SER_BAUD_50             0x01
#define SER_BAUD_75             0x02
#define SER_BAUD_110            0x03
#define SER_BAUD_134_5          0x04
#define SER_BAUD_150            0x05
#define SER_BAUD_300            0x06
#define SER_BAUD_600            0x07
#define SER_BAUD_1200           0x08
#define SER_BAUD_1800           0x09
#define SER_BAUD_2400           0x0A
#define SER_BAUD_3600           0x0B
#define SER_BAUD_4800           0x0C
#define SER_BAUD_7200           0x0D
#define SER_BAUD_9600           0x0E
#define SER_BAUD_19200          0x0F
#define SER_BAUD_38400          0x10
#define SER_BAUD_57600          0x11
#define SER_BAUD_115200         0x12
#define SER_BAUD_230400         0x13
#define SER_BAUD_31250          0x14
#define SER_BAUD_62500          0x15
#define SER_BAUD_56_875         0x16


#define SER_BITS_5              0x00
#define SER_BITS_6              0x01
#define SER_BITS_7              0x02
#define SER_BITS_8              0x03


#define SER_STOP_1              0x00   
#define SER_STOP_2              0x01   


#define SER_PAR_NONE            0x00
#define SER_PAR_ODD             0x01
#define SER_PAR_EVEN            0x02
#define SER_PAR_MARK            0x03
#define SER_PAR_SPACE           0x04


#define SER_HS_NONE             0x00    
#define SER_HS_HW               0x01    
#define SER_HS_SW               0x02    
#define SER_STATUS_PE           0x01    
#define SER_STATUS_FE           0x02    
#define SER_STATUS_OE           0x04    
#define SER_STATUS_DCD          0x20    
#define SER_STATUS_DSR          0x40    


#define SER_ERR_OK              0x00    
#define SER_ERR_NO_DRIVER       0x01    
#define SER_ERR_CANNOT_LOAD     0x02    
#define SER_ERR_INV_DRIVER      0x03    
#define SER_ERR_NO_DEVICE       0x04    
#define SER_ERR_BAUD_UNAVAIL    0x05    
#define SER_ERR_NO_DATA         0x06    
#define SER_ERR_OVERFLOW        0x07    
#define SER_ERR_INIT_FAILED     0x08    
#define SER_ERR_INV_IOCTL       0x09    
#define SER_ERR_INSTALLED       0x0A    
#define SER_ERR_NOT_OPEN        0x0B    

*/
static const struct ser_params Params = {
    SER_BAUD_4800,      /* Baudrate */
    SER_BITS_8,         /* Number of data bits */
    SER_STOP_1,         /* Number of stop bits */
    SER_PAR_NONE,       /* Parity setting */
    SER_HS_HW           /* Type of handshake to use */
};
    
  
    
	ser_load_driver (NULL);
    //ser_install ();
    ser_open (&Params);

	return 0;
}
