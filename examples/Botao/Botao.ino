#include "CosmosNV2.h"

Botao botao(5);

void setup() {
  Serial.begin(9600);
}

void loop() {
  boolean estado = botao.lerEstado();
  Serial.println(estado);
}