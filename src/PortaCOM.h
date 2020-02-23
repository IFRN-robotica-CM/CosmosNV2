
#include <Arduino.h>
#include <SoftwareSerial.h>
#include "Pinagem.h"

// ------------------------------------ Classe PortaCOM ------------------------------------- //

class PortaCOM
{
  public:
    void iniciar(long velocidade);
    int disponivel();
    int ler();
    void enviar(const char caractere);
  private:
    SoftwareSerial meu_serial = SoftwareSerial(PINO_RX, PINO_TX);
};