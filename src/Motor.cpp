
#include <Arduino.h>
#include "Motor.h"
#include "Pinagem.h"
#include "Constantes.h"

// ------------------------------------- Classe Motor --------------------------------------- //

Motor::Motor(uint8_t porta) {
  _porta = porta;

  switch (_porta) {
    case M1:
      pinMode(PINO_MOTOR1_A, OUTPUT);
      pinMode(PINO_MOTOR1_B, OUTPUT);
      pinMode(PINO_VELOCIDADE_MOTOR_1, OUTPUT);
      break;
    case M2:
      pinMode(PINO_MOTOR2_A, OUTPUT);
      pinMode(PINO_MOTOR2_B, OUTPUT);
      pinMode(PINO_VELOCIDADE_MOTOR_2, OUTPUT);
      break;
    default:
      break;
	}

	configurarVelocidade(75);
}

void Motor::configurarVelocidade(uint8_t velocidade) {
  _velocidade = (int) ceil(velocidade*0.01*255);
	
	switch (_porta) {
    case M1:
      analogWrite(PINO_VELOCIDADE_MOTOR_1, _velocidade);
      break;
    case M2:
      analogWrite(PINO_VELOCIDADE_MOTOR_2, _velocidade);
      break;
	}
}

void Motor::girar(uint8_t sentido) {
	_sentido = sentido;
	
	switch (_porta) {
    case M1:
      a = PINO_MOTOR1_A; b = PINO_MOTOR1_B;
      break;
    case M2:
      a = PINO_MOTOR2_A; b = PINO_MOTOR2_B;
      break;
    default:
      return;
	}

	switch (_sentido) {
    case PARA_FRENTE:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      break;
    case PARA_TRAS:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      break;
    default:
      break;
	}
}

void Motor::girar(uint8_t sentido, uint8_t velocidade) {
	_sentido = sentido;
  _velocidade = velocidade;
	
	switch (_porta) {
    case M1:
      a = PINO_MOTOR1_A; b = PINO_MOTOR1_B;
      break;
    case M2:
      a = PINO_MOTOR2_A; b = PINO_MOTOR2_B;
      break;
    default:
      return;
	}

	switch (_sentido) {
    case PARA_FRENTE:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      break;
    case PARA_TRAS:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      break;
    default:
      break;
	}

  configurarVelocidade(_velocidade);
}

void Motor::parar() {
	switch (_porta) {
    case 1:
      a = PINO_MOTOR1_A; b = PINO_MOTOR1_B;
      break;
    case 2:
      a = PINO_MOTOR2_A; b = PINO_MOTOR2_B;
      break;
    default:
      return;
	}

	digitalWrite(a, LOW);
	digitalWrite(b, LOW);
}
