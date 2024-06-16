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
Simulação no TinkerCad: https://www.tinkercad.com/things/jwEQMK3mG9v-medidor-de-temperatura-tmp36?sharecode=t6DTtvCnz_UQcpBDItbN_Q5RTIu4Te4lGHOa9Dkzmjc
Devido às limtações da plataforma, usamos um TMP36 como ferramenta de medida. 
A temperatura é exibida no Monitor Serial, porém, também utilizamos leds para representar os estados do motor.
Leds apagados: Motor desligado ou com baixo uso
Led Verde: Motor com Temperatura entre 60 graus e 79 graus
Led Amarelo: Motor com Temperatura entre 80 graus e 99 graus
Led Vermelho: Motor com Temperatura entre 100 graus e 125 graus(limitação do TMP36)
