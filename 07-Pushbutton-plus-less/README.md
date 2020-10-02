# 07 - Pushbutton plus/less

Controlador de velocidad de intermitencia con acumulador, donde:
- Deben existir dos pulsadores para incrementar o disminuir la velocidad de intermitencia del LED principal.
- El circuito debe contener 5 LEDs que representen la velocidad de intermitencia, estos se deben mantener encendidos para representar la velocidad, donde cada LED encendido significan 200ms en la intermitencia del LED principal.
- Y por último existe otro pulsador que enciende el LED principal.

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
- 6 LEDs
- 3 Pushbuttons
- 6 resistencias de 120 Ω
- Jumpers (Cables)

### Pasos:
1. clonar el repositorio actual:
  > git clone https://github.com/okarook/ucc-electiva-iv.git

2. Ir al directorio del proyecto:
  > cd ucc-electiva-iv/07-Pushbutton-plus-less/

3. Crear el siguiente montaje en la plataforma [tinkercad.com](https://www.tinkercad.com/).
![Circuito](./assets/circuitAssembly.png)

4. Abrir el archivo `src/main.ino` en su editor preferido y copiar el código en la plataforma [tinkercad.com](https://www.tinkercad.com/)

5. Por ultimo dar clic en el botón iniciar ejecución

6. Puede ver el proyecto [aquí](https://www.tinkercad.com/things/h7mXmbDPp0L)

## Licencia
[MIT License](./../LICENSE)
