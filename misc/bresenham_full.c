#define SIGN(x) ((x) < 0 ? (-1) : (1)) 
#define ABS(x) ((x) < 0 ? (-x) : (x))
#define FALSE 0
#define TRUE 1

deltax = ABS((x2 - x1)); //descarta sinal
deltay = ABS((y2 - y1));
signalx = SIGN((x2 - x1)); //subtração do ponto x final pelo x inicial - se > 0 signalx = 1 e se < signalx = -1 
signaly = SIGN((y2 - y1));

x = x1; //valor inicial de x em nova variavel(x1) para nao perder valor incial
y = y1;

if (signalx < 0) //nao é util pq ja tem ali no SIGN ne?
	x -= 1;
if (signaly < 0)
	y -= 1;
// trocar deltax com deltay dependendo da inclinacao da reta
interchange = FALSE;//flag para ver o maior valor e ai vai desenhar  a partir desse ponto, mantendo o maior constante

if (deltay > deltax)
{
	tmp = deltax;
	deltax = deltay;
	deltay = tmp;
	interchange = TRUE; //troca aqui a flag 
}
erro = 2 * deltay - deltax; //diferença para entender se está no meio e decidir se o pixel vai desenhado no pixel de cima ou de baixo

for (i = 0; i < deltax; i++) //começa a ligar o ponto 
{
	setPixel(x, y);
	while (erro >= 0)
	{
		if (interchange)
			x = x + signalx;
		else
			y = y + signaly;
		erro = erro -
			   2 * deltax;
	} // while
	if (interchange)
		y = y + signaly;
	else
		x = x + signalx;
	erro = erro + 2 * deltay; 
}