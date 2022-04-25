#include <Arduino.h>
#include "NRF204.h"
#include "Controller.h"

using namespace Radio;
using namespace OnGroundController;

Reader reader;


void setup()
{
  // put your setup code here, to run once:
  reader = Reader(A1, A2, A0, A3);
}

void loop()
{
  // put your main code here, to run repeatedly:
  reader.run();
}
