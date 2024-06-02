```markdown
# Robô Seguidor de Linha com Arduino

Este projeto consiste em um robô seguidor de linha que utiliza um Arduino para seguir uma linha preta em um fundo branco. O robô é capaz de detectar a linha e ajustar seu caminho para segui-la.

## Índice

- [Introdução](#introdução)
- [Componentes Necessários](#componentes-necessários)
- [Circuito](#circuito)
- [Como Usar](#como-usar)

## Introdução

Este robô utiliza sensores infravermelhos para detectar a linha preta e ajustar seu movimento de acordo com a posição da linha. Desenvolvido como parte de um projeto acadêmico para aprender sobre eletrônica e programação com Arduino.

## Componentes Necessários

- Arduino Uno
- Motores Servo (x2)
- Sensores Infravermelhos (x2)
- Chassi de robô
- Rodas (x2)
- Bateria e suporte de bateria
- Fios de conexão
- Placa de ensaio (breadboard) (opcional)

## Circuito

O diagrama do circuito está disponível no diretório `hardware` como `circuit_diagram.png`.

### Conexões:

- Servo Esquerdo: Pino digital 12
- Servo Direito: Pino digital 13
- Sensor Infravermelho Esquerdo: Pino analógico A5
- Sensor Infravermelho Direito: Pino analógico A4


## Como Usar

1. Monte o circuito conforme o diagrama disponível.
2. Carregue o código `robo_arduino.ino` no seu Arduino.
3. Coloque o robô em uma pista com uma linha preta em um fundo branco.
4. Ligue o robô e veja-o seguir a linha.

## Contribuição

Se você gostaria de contribuir para este projeto, siga os passos abaixo:

1. Faça um fork do projeto.
2. Crie uma nova branch (`git checkout -b feature/nova-feature`).
3. Faça commit das suas mudanças (`git commit -m 'Adiciona nova feature'`).
4. Faça push para a branch (`git push origin feature/nova-feature`).
5. Abra um Pull Request.

```
