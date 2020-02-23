
#include <Arduino.h>
#include "PortaCOM.h"

// ------------------------------------ Classe PortaCOM ------------------------------------- //

void PortaCOM::iniciar(long velocidade) {
  meu_serial.begin(velocidade);
}

int PortaCOM::disponivel() {
  return meu_serial.available();
}

int PortaCOM::ler() {
  return meu_serial.read();
}

void PortaCOM::enviar(const char caractere) {
  meu_serial.write(caractere);
}



