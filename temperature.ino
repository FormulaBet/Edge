#include <SPI.h>
#include "max6675.h"

// Define os pinos utilizados
int thermoDO = 12;
int thermoCS = 10;
int thermoCLK = 13;

// Cria um objeto para o sensor MAX6675
MAX6675 thermocouple(thermoCLK, thermoCS, thermoDO);

void setup() {
  // Inicializa a comunicação serial
  Serial.begin(9600);
  Serial.println("Iniciando a leitura da temperatura...");
  delay(500);
}

void loop() {
  // Lê a temperatura do termopar
  double temperature = thermocouple.readCelsius();

  // Exibe a temperatura na porta serial
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println(" °C");

  // Aguarda 1 segundo antes de fazer a próxima leitura
  delay(1000);
}