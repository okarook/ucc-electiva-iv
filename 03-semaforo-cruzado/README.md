# 03 - Semáforo cruzado

Construir semáforos cruzados, donde existan 4 semáforos con 3 LED (Rojo, Amarillo, Verde). Cada semáforo debe realizar su secuencia de encendido y apagado y e ir pasando al siguiente semáforo. Repetir la secuencia.

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
- 4 LEDs Rojos
- 4 LEDs Amarillos
- 4 LEDs Verdes
- 12 resistencias de 120 Ω
- Jumpers (Cables)

### Pasos:
1. clonar el repositorio actual:
  > git clone https://github.com/okarook/ucc-electiva-iv.git

2. Ir al directorio del proyecto:
  > cd ucc-electiva-iv/03-semaforo-cruzado/

3. Crear el siguiente montaje en la plataforma [tinkercad.com](https://www.tinkercad.com/).
![Circuito](./assets/circuitAssembly.png)

4. Abrir el archivo `src/main.ino` en su editor preferido y copiar el código en la plataforma [tinkercad.com](https://www.tinkercad.com/)

5. Por último dar clic en el botón iniciar ejecución

6. Puede ver el proyecto [aquí](https://www.tinkercad.com/things/gpDzhgPSkTv)

## Licencia
[MIT License](./../LICENSE)
