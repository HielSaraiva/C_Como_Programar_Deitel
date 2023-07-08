#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define MAT_DIM 12

void escreveMat(char mat[MAT_DIM][MAT_DIM]);
void matTrans(char mat[MAT_DIM][MAT_DIM], int x, int y, int dir);
int viavel(char mat[MAT_DIM][MAT_DIM], int x, int y);

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   char mat[MAT_DIM][MAT_DIM] = {
	{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
	{'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#'},
	{'.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.', '#'},
	{'#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#'},
	{'#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.'},
	{'#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
	{'#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
	{'#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
	{'#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#'},
	{'#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#'},
	{'#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
	{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
   };

   matTrans(mat, 2, 0, 0);

   system("pause");
   return 0;
}

void matTrans(char mat[MAT_DIM][MAT_DIM], int x, int y, int dir)
{
   /* x � a linha */
   /* y � a coluna */
   /* dir � a dire��o em graus (pode ser 0, 90, 180, 270 */

   /* printa o X */
    mat[x][y] = 'x';

   /* printa a matriz */
    escreveMat
   (mat);

   /* checa se encontramos a sa�da */
   if ((x == MAT_DIM - 1) || (y == MAT_DIM - 1)) {
	   printf("Sa�da encontrada!\n ");
	   return;
   }

   /* caso contr�rio, pr�ximo passo */
   if (dir == 0) {

	if (viavel(mat, x + 1, y))
	   matTrans(mat, x + 1, y, 270);
	else if (viavel(mat, x, y + 1))
	   matTrans(mat, x, y + 1, 0);
	else if (viavel(mat, x - 1, y))
	   matTrans(mat, x - 1, y, 90);
	else if (viavel(mat, x, y - 1))
	   matTrans(mat, x, y - 1, 180);
   } else if (dir == 90) {

	if (viavel(mat, x, y + 1))
	   matTrans(mat, x, y + 1, 0);
	else if (viavel(mat, x - 1, y))
	   matTrans(mat, x - 1, y, 90);
	else if (viavel(mat, x, y - 1))
	   matTrans(mat, x, y - 1, 180);
	else if (viavel(mat, x + 1, y))
	   matTrans(mat, x + 1, y, 270);

    } else if (dir == 180) {

	if (viavel(mat, x - 1, y))
	   matTrans(mat, x - 1, y, 90);
	else if (viavel(mat, x, y - 1))
	   matTrans(mat, x, y - 1, 180);
	else if (viavel(mat, x + 1, y))
	   matTrans(mat, x + 1, y, 270);
	else if (viavel(mat, x, y + 1))
	   matTrans(mat, x, y + 1, 0);

    } else if (dir == 270) {

	if (viavel(mat, x, y - 1))
	   matTrans(mat, x, y - 1, 180);
	else if (viavel(mat, x + 1, y))
	   matTrans(mat, x + 1, y, 270);
	else if (viavel(mat, x, y + 1))
	   matTrans(mat, x, y + 1, 0);
	else if (viavel(mat, x - 1, y))
	   matTrans(mat, x - 1, y, 90);

   }

}

int viavel(char mat[MAT_DIM][MAT_DIM], int x, int y)
{
   return (mat[x][y] != '#');
}

void escreveMat(char mat[MAT_DIM][MAT_DIM])
{
   int i, j;

   printf("\n");
   for (i = 0; i < MAT_DIM; i++) {
	   printf("  ");
	   for (j = 0; j < MAT_DIM; j++)
	      printf("%c ", mat[i][j]);
	   printf("\n");
   }
   printf("\n");
}