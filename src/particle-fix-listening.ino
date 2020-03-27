/*
 * Project particle-fix-listening
 * Author: Adam Walsh
 * Date: 2020-03-27
 */

#include "Particle.h"
#include "dct.h"

SYSTEM_MODE(SEMI_AUTOMATIC);

void setup()
{
  const uint8_t val = 0x01;
  dct_write_app_data(&val, DCT_SETUP_DONE_OFFSET, 1);
  Particle.connect();
}

void loop() {}