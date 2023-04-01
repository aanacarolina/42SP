#include <math.h>
#include src/matrix

/*
         [1     0      0]
   X     [0  cos0  -sin0]
         [0  sin0   cos0]
*/
void	x_rotation(t_map *points, int size, double ang)
{
	double	tmp_y;
	double	pcos;
	double	psin;
	double	nsin;
	double	rad;

	rad = ang * M_PI / 180;
	pcos = cos(rad);
	psin = sin(rad);
	nsin = -sin(rad);
	while (size--)
	{
		tmp_y = points[size].y
		points[size].y = pcos * tmp_y + nsin * points[size].z; 
		points[size].z = psin * tmp_y + pcos * points[size].z;
	}
}

/*
         [cos0  0   sin0]
   Y     [0     1      0]
         [-sin0 0   cos0]
*/
void	y_rotation(t_point *points, int points_size, double ang)
{
	double	tmp_x;
	double	pcos;
	double	psin;
	double	nsin;
	double	rad;

	rad = ang * M_PI / 180;
	pcos = cos(rad);
	psin = sin(rad);
	nsin = -sin(rad);
	while (size--)
	{
		tmp_x = points[size].coor[X];
		points[size].coor[X] = pcos * tmp_x + psin * points[size].coor[Z];
		points[size].coor[Z] = nsin * tmp_x + pcos * points[size].coor[Z];
	}
}

/*
         [cos0  -sin0  0]
   Z     [sin0   cos0  0]
         [0     0      1]
*/
void	z_rotation(t_point *points, int size, double ang)
{
	double	tmp_x;
	double	pcos;
	double	psin;
	double	nsin;
	double	rad;

	rad = ang * M_PI / 180;
	pcos = cos(rad);
	psin = sin(rad);
	nsin = -sin(rad);
	while (size--)
	{
		tmp_x = points[size].coor[X];
		points[size].coor[X] = pcos * tmp_x + nsin * points[size].coor[Y];
		points[size].coor[Y] = psin * tmp_x + pcos * points[size].coor[Y];
	}
}

/*
         [Sx  0   0   0]
         [0   Sy  0   0]
         [0   0   Sz  0]
         [0   0   0   1]
*/