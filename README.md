# Trabajo1_ComputacionParalela
//Como archivo adjunto se entregará las salidas en pantalla de las ejecuciones y los ejemplos que se utilizaron

Integrantes:
-Javier Andrés Peña Vargas - 2204123
-Santiago Yarce Prince - 2204122

Objetivo:El objetivo de este taller, es realizar una primera interacción práctica con el espacio de la plataforma, así como la compilación, ejecución y uso de optimizadores, usando gcc.

transcribiendo inicialmente el código realizado en C para el método de Jacobi disponible en: https://www.codesansar.com/numerical-methods/system-of-linear-equation-using-jacobi-iteration-using-c-programming.htm en el espacio de la plataforma (GUANE-1). Realice lo siguiente:

Parte 1.
Compilelo usando usando gcc y ejecutelo.
Parte 2.
Use las opciones -01, -02 y -03 generando un ejecutable, por ejemplo de cada manera: suejecutable01.exe ¿Que observa en el comportamiento del código tanto al compilarlo como al ejecutar?¿Que pasa si usa las opciones -O, -O0, -Ofast -Og y Oz?

Al ejecutar las diferentes banderas se visualizó que og oz ofast optimizan mas rapido el codigo que o0,o1,o2,o3.

Parte 3
Busqué por internet un código de ejemplo simple que use punteros y repita los puntos

Para este ejemplo se complica mas analizar el rendimiento general del codigo con las distintas banderas, aunque hay algunas mejoras en algunos tiempo se puede concluir que no son inherentes a las banderas propuestas. esto se puede deber a la baja complejidad algoritmica del ejemplo.


.
