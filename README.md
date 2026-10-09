Sensor de Ré com Arduino

Curso: Análise e Desenvolvimento de Sistemas

Unidade Curricular: Sistemas Embarcados

Aluno: Jean Padilha

Descrição: O projeto consiste no desenvolvimento de um sensor de ré utilizando Arduino Uno, sensor ultrassônico HC-SR04, LED RGB e piezo. O sensor ultrassônico realiza a medição da distância entre o sensor e um obstáculo. Conforme a distância identificada, o LED RGB muda de cor e o piezo emite avisos sonoros, simulando o funcionamento de um sensor de estacionamento automotivo.

Funcionamento

Verde: indica que o obstáculo está distante.
Amarelo: indica que o obstáculo está se aproximando.
Vermelho: indica que o obstáculo está muito próximo.
Piezo: emite bipes que ficam mais rápidos conforme o obstáculo se aproxima.

Componentes Utilizados

Arduino Uno
Sensor ultrassônico HC-SR04
LED RGB
Resistores de 220 Ω
Piezo (buzzer)
Protoboard
Fios jumper

O código-fonte do projeto está disponível neste repositório, no arquivo `SensorJean.ino`.
