% Red neuronal, simulacion operador NAND

clear all
clc

% Matriz compuerta
matriz=[0 0 0 0 1 1 1 1;
        0 0 1 1 0 0 1 1;
        0 1 0 1 0 1 0 1];


% Resultado compuerta NAND
nand = [1 1 1 1 1 1 1 0];

% Creamos la red neuronal
red=newff(minmax(matriz), [3 1], {'tansig', 'purelin'}, 'traincgf');

% Inicializamos la RMA
red=init(red);

% Parametros de la red que se contruye y se inicializa
red.trainParam.epochs=500;
red.trainParam.goal=1e-6;

% Entrenamos
red=train(red, matriz, nand);

validacion=sim(red, matriz);

% Se muestra los pesos w y las bias B
perso=red.iw{1,1};
bias1=red.biases{1, 1};
