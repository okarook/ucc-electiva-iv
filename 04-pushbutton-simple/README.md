# 04 - Pushbutton Simple
Construir un interruptor con 2 LEDs y un pulsador, el comportamiento debe ser el siguiente:
- Cuando este pulsado: el primer LED se enciende y el segundo esta apagado
- Cuando no este pulsado: el primer LED se apaga y el segundo esta encendido

### Ejemplo:
![Ejemplo](./assets/operation.gif)

### Diagrama:
![Diagrama](./assets/diagram.png)

[Descargar .drawio](./assets/diagram.drawio)

# Desarrollar

Para realizar el proyecto se hace uso de la plataforma [tinkercad.com](https://www.tinkercad.com/), por tanto debe primero tener una cuenta en la plataforma y crear un proyecto nuevo.

### Componentes a utilizar:
- 1 Placa arduino UNO
- 1 Protoboard
- 2 LEDs
- 1 Pushbutton
- 2 resistencias de 120 Ω
- Jumpers (Cables)

### Pasos:
1. clonar el repositorio actual:
  > git clone https://github.com/okarook/ucc-electiva-iv.git

2. Ir al directorio del proyecto:
  > cd ucc-electiva-iv/04-pushbutton-simple/

3. Crear el siguiente montaje en la plataforma [tinkercad.com](https://www.tinkercad.com/).
![Circuito](./assets/circuitAssembly.png)

4. Abrir el archivo `src/main.ino` en su editor preferido y copiar el código en la plataforma [tinkercad.com](https://www.tinkercad.com/)

5. Por ultimo dar clic en el botón iniciar ejecución

6. Puede ver el proyecto [aquí](https://www.tinkercad.com/things/gi2BvSgIf2S)

## Licencia
[MIT License](./../LICENSE)
