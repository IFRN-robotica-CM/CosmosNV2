
#include <Arduino.h>

// ------------------------------------- Classe Motor --------------------------------------- //

class Motor
{
  public:
    Motor(uint8_t porta);
    void configurarVelocidade(uint8_t velocidade);
    void girar(uint8_t sentido);
    void girar(uint8_t sentido, uint8_t velocidade);
    void parar();

  private:
    uint8_t _porta;
    uint8_t _sentido;
    uint8_t _velocidade;
    uint8_t a, b;
};
