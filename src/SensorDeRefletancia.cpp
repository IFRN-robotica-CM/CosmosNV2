
#include <Arduino.h>
#include "SensorDeRefletancia.h"

// ------------------------------- Classe SensorDeRefletancia ------------------------------------- //

SensorDeRefletancia::SensorDeRefletancia(uint8_t pino) {
	_pino = pino;

	pinMode(_pino, INPUT);
}

int SensorDeRefletancia::ler() {
	return analogRead(_pino);
}