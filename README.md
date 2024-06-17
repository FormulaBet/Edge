# Edge
Sistema de captação e demonstração de dados para o Sprint 1 do Challenge da matéria de Edge computing.

Integrantes:
- Leonardo de Farias Silva - RM: 555211.
- Giancarlo Cestarolli - RM: 555248.
- Gustavo Laur Pisanello - RM: 556603
- Gabriel Mazzariol - RM: 555410
- Rodrigo Akira - RM: 555384

Para esse primeiro Sprint do Challenge, utilizaremos o Arduino UNO R3 para captação de determinados dados
durante as corridas de Fórmula E.

Os dados escolhidos por nós foram:

# Velocidade do carro

 - Escolhemos utilizar um Encoder de 1000 PPR para calcularmos a velocidade do carro em tempo real.
   
   Utilização:
    - Acesse o arquivo "speed.ino"
    - Altere a váriavel "wheelDiameter", colocando o diâmetro da roda do carro
    - Faça a conexão entre o Encoder e o Arduino, seguindo a numeração das portas especificadas nos comentários do código
    - Realize o Upload do código para o Hardware
    - Após todos os passos, faça o teste girando o Encoder e visualizando a velocidade no Monitor Serial

(Notas: As altas velocidades da Fórmula E excedem a capacidade do Arduino, portanto, o valor da velocidade é aproximado, não exato.<br/>Em uma situação real, o mecanismo seria aplicado na roda do carro)

Simulação no TinkerCad: https://www.tinkercad.com/things/hiWTdHblpww-simulacao-rpm?sharecode=o7y19NHrpTQjII4W81WehZWJr7mE_FPA8Bm6IB-3doI

Devido às limitações da plataforma, utilizamos:<br/>
Um motor CC para simularmos as rotações.<br/>
Uma fonte de energia para alterarmos a tensão e a corrente.<br/>
Um display LCD para mostrar em tempo real o número de rotações.<br/>
Um osciloscópio para mostrar gráficamente as oscilações.

- Temperatura do motor

Para fazermos essa medição, escolhemos o Termopar tipo K, por conta de sua resistência a altas temperaturas
e támbem sua grande durabilidade.

Confira o código em "temperature.ino"

Simulação no TinkerCad: https://www.tinkercad.com/things/jwEQMK3mG9v-medidor-de-temperatura-tmp36?sharecode=t6DTtvCnz_UQcpBDItbN_Q5RTIu4Te4lGHOa9Dkzmjc<br/>

Devido às limtações da plataforma, utilizamos um TMP36 como ferramenta de medida. 
<br/>A temperatura é exibida no Monitor Serial, porém, também utilizamos leds para representar os estados do motor.
Leds apagados: Motor desligado ou com baixo uso.<br/>
Led Verde: Motor com Temperatura entre 60 graus e 79 graus.<br/>
Led Amarelo: Motor com Temperatura entre 80 graus e 99 graus.<br/>
Led Vermelho: Motor com Temperatura entre 100 graus e 125 graus(limitação do TMP36).







