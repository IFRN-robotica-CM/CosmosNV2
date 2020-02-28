
#ifndef SensorDeRefletancia_h
#define SensorDeRefletancia_h

#include <Arduino.h>

// ------------------------------- Classe SensorDeRefletancia ------------------------------------- //

class SensorDeRefletancia
{
  public:
    SensorDeRefletancia(uint8_t pino);
    int ler();
    void configurarModo(uint8_t modo);

  private:
    uint8_t _pino;
    uint8_t _modo;
};

#endif
