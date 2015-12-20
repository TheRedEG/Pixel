/*
** line.h for line in 
** 
** Made by Thomas Girolet
** Login   <girole_t@epitech.net>
** 
** Started on  Sat Dec  5 12:13:28 2015 Thomas Girolet
** Last update Sat Dec  5 14:43:01 2015 Thomas Girolet
*/

#include <lapin.h>
#ifndef LINE_H_
#define LINE_H_

#define ABS_(x) ((x)<0 ? -(x) : (x))
#define SGN_(x) (((x) < 0) ? -1 : ((x) == 0 ? 0 : 1))

typedef struct	s_draw_line
{
  
  int	i;
  int	dx;
  int	dy;
  int	sdx;
  int	sdy;
  int	dxabs;
  int	dyabs;
  int	x;
  int	y;
  int	px;
  int	py;
}		t_draw_line;

typedef struct	s_set
{
  t_bunny_pixelarray	*pix;
  t_bunny_position	position1;
  t_bunny_position	position2;
}		t_set;

#endif /* !LINE_H_ */
