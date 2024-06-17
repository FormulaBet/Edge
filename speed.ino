// Configurações do encoder
const int encoderPinA = 2; // Pino do encoder conectado ao pino 2 do Arduino 
const int encoderPPR = 1000; // Pulses Per Revolution (pulsos por revolução)

volatile unsigned long pulseCount = 0; // Variável volátil para contar os pulsos, precisa ser volátil porque é modificada na ISR
unsigned long lastPulseTime = 0; // Tempo da última leitura de pulsos
float wheelDiameter = 0.65; // Diâmetro da roda em metros (valor de exemplo)

// Função de interrupção para contar pulsos
void IRAM_ATTR encoderISR() {
  pulseCount++; // Incrementa o contador de pulsos a cada interrupção
}

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial a 9600 bps
  pinMode(encoderPinA, INPUT_PULLUP); // Configura o pino do encoder como entrada com resistor pull-up
  attachInterrupt(digitalPinToInterrupt(encoderPinA), encoderISR, RISING); // Ativa interrupção no pino do encoder para detectar borda de subida
}

void loop() {
  noInterrupts(); // Desabilita interrupções temporariamente
  unsigned long pulses = pulseCount; // Armazena o número de pulsos recebidos
  pulseCount = 0; // Reseta o contador de pulsos
  interrupts(); // Reabilita interrupções

  unsigned long currentTime = millis(); // Obtém o tempo atual em milissegundos
  unsigned long elapsedTime = currentTime - lastPulseTime; // Calcula o tempo decorrido desde a última leitura
  lastPulseTime = currentTime; // Atualiza o tempo da última leitura

  if (elapsedTime > 0) { // Verifica se o tempo decorrido é maior que zero
    float frequency = (float)pulses / (elapsedTime / 1000.0); // Calcula a frequência dos pulsos (pulsos por segundo)
    float rpm = frequency * 60.0 / encoderPPR; // Converte a frequência para RPM (Revoluções por Minuto)
    float wheelCircumference = PI * wheelDiameter; // Calcula a circunferência da roda em metros
    float speedMps = (wheelCircumference * rpm) / 60.0; // Calcula a velocidade em metros por segundo
    float speedKmh = speedMps * 3.6; // Converte a velocidade de m/s para km/h

    Serial.print("Velocidade: "); // Imprime a palavra "Velocidade: "
    Serial.print(speedKmh); // Imprime a velocidade calculada em km/h
    Serial.println(" km/h"); // Imprime " km/h" e pula para a próxima linha
  }

  delay(2000); // Pequeno delay para não sobrecarregar o monitor serial
}