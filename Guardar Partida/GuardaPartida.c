#include <stdio.h>

/* Devuelve 1 si se guarda correctamente, 0 en otro caso. Si existia una partida anterior, se sobreescribe */
int
GuardaPartida (char tablero[8][8])
{
  FILE *fp = fopen ("tablero.tab", "w");
  int resultado = 0;
  if (fp == 0)
    {
      return 0;
    }
  else
    {
      resultado = fwrite (tablero, sizeof (char), 64, fp);
      fclose (fp);
      if (resultado == 64)
	{
	  return 1;
	}
      else
	{
	  return 0;
	}
    }
}
