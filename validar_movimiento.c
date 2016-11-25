int
validar_movimiento (char tablero[8][8], int posicion_ini_x int posicion_ini_y,
		    int posicion_x, int posicion_y, char pieza,
		    char piezas_movidas[1000])
{

  int resultado = 0;
  switch (pieza)
    {
    case 'P':


      resultado =
	validar_movimiento_peon_blanco (posicion_ini_x, posicion_ini_y,
					posicion_y, posicion_x, tablero);
      break;


    case 'p':
      resultado =
	validar_movimiento_peon_negro (posicion_ini_x, posicion_ini_y,
				       posicion_y, posicion_x, tablero);
      break;


    case 'T':
      resultado =
	validar_movimiento_torre (posicion_ini_x, posicion_ini_y, posicion_y,
				  posicion_x, tablero);
      break;


    case 't':
      resultado =
	validar_movimiento_torre (posicion_ini_x, posicion_ini_y, posicion_y,
				  posicion_x, tablero);
      break;
    case 'C':
      resultado =
	validar_movimiento_caballo (posicion_ini_x, posicion_ini_y,
				    posicion_y, posicion_x, tablero);
      break;

    case 'c':
      resultado =
	validar_movimiento_caballo (posicion_ini_x, posicion_ini_y,
				    posicion_y, posicion_x, tablero);
      break;

    case 'A':

      resultado =
	validar_movimiento_alfil (posicion_ini_x, posicion_ini_y, posicion_y,
				  posicion_x, tablero);
      break;

    case 'a':

      resultado =
	validar_movimiento_alfil (posicion_ini_x, posicion_ini_y, posicion_y,
				  posicion_x, tablero);
      break;

    case 'R':

      resultado =
	validar_movimiento_rey (posicion_ini_x, posicion_ini_y, posicion_y,
				posicion_x, tablero);
      break;
    case 'r':

      resultado =
	validar_movimiento_rey (posicion_ini_x, posicion_ini_y, posicion_y,
				posicion_x, tablero);
      break;
    case 'D':

      resultado =
	validar_movimiento_reina (posicion_ini_x, posicion_ini_y, posicion_y,
				  posicion_x, tablero);
      break;
    case 'd':

      resultado =
	validar_movimiento_reina (posicion_ini_x, posicion_ini_y, posicion_y,
				  posicion_x, tablero);
      break;

    }
  if (resultado == 1);
  {
    piezas_movidas (pieza, piezas_mov);
  }

  return resultado;
}
