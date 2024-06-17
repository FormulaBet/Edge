# Edge
Sistema de captação e demonstração de dados para o Sprint 1 do Challenge da matéria de Edge computing.

Integrantes:
- Leonardo de Farias Silva - RM: 555211.
- Giancarlo Cestarolli - RM: 555248.
- Gustavo Laur Pisanello - RM: 556603

Para esse primeiro Sprint do Challenge, utilizaremos o Arduino UNO R3 para captação de determinados dados
durante as corridas de Fórmula E.

Os dados escolhidos por nós foram:

- Temperatura do motor

Para fazermos essa medição, escolhemos o Termopar tipo K, por conta de sua resistência a altas temperaturas
e támbem sua grande durabilidade.

Simulação no TinkerCad: https://www.tinkercad.com/things/jwEQMK3mG9v-medidor-de-temperatura-tmp36?sharecode=t6DTtvCnz_UQcpBDItbN_Q5RTIu4Te4lGHOa9Dkzmjc<br/>

Devido às limtações da plataforma, utilizamos um TMP36 como ferramenta de medida. 
<br/>A temperatura é exibida no Monitor Serial, porém, também utilizamos leds para representar os estados do motor.
Leds apagados: Motor desligado ou com baixo uso.<br/>
Led Verde: Motor com Temperatura entre 60 graus e 79 graus.<br/>
Led Amarelo: Motor com Temperatura entre 80 graus e 99 graus.<br/>
Led Vermelho: Motor com Temperatura entre 100 graus e 125 graus(limitação do TMP36).

- Velocidade do carro
Escolhemos utilizar um Encoder de 1000 PPR para calcularmos a velocidade do carro em tempo real.<br/>
Confira o código em "speed.ino"<br/>
(Notas:<br/>
      Para fazer o cálculo real, seria necessário alterar a váriavel wheelDiameter, colocando o diâmetro real da roda do carro.<br/>
      As altas velocidades da Fórmula E excedem a capacidade do Arduino, portanto, o valor da velocidade é aproximado, não exato)


