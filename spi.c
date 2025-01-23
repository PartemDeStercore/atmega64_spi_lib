#include "spi.h"
void spi_start()PR(SPI_CS);
void spi_stop()PS(SPI_CS);
void spi_wait()while(!(SPSR&(1<<SPIF)));
uint8_t spi_read(){
	SPDR = 0x00;
	spi_wait();
	return SPDR;
}
void spi_write(uint8_t data){
	SPDR=data;
	spi_wait();
}