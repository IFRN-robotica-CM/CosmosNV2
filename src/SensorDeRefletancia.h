
#include <Arduino.h>

// ------------------------------- Classe SensorDeRefletancia ------------------------------------- //

class SensorDeRefletancia
{
  public:
    SensorDeRefletancia(uint8_t pino);
    int ler();

  private:
    uint8_t _pino;
};
