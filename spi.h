#ifndef SPI_H
#define SPI_H
#include <stdint.h>
#include "pin.h"
#include <avr/io.h>

#define SPI_CS   B0
#define SPI_MOSI B2
#define SPI_MISO B3
#define SPI_SCK  B1

void spi_start();
void spi_stop();
uint8_t spi_read();
void spi_write(uint8_t data);

#endif