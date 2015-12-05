/*
** back_color.c for back_color in 
** 
** Made by Thomas Girolet
** Login   <girole_t@epitech.net>
** 
** Started on  Sat Dec  5 11:30:54 2015 Thomas Girolet
** Last update Sat Dec  5 12:08:07 2015 Thomas Girolet
*/

#include <lapin.h>

void	back_color(t_bunny_pixelarray	*pix,
		   t_bunny_position	*pos,
		   unsigned int		color)
{
  int	x;
  int	y;
  int	i;
  unsigned int*pixel;

  pixel = (unsigned int*)pix->pixels;
  i = 0;
  x = pix->clipable.buffer.height;
  y = pix->clipable.buffer.width;
  while (i < (x*y))
    {
      pixel[i] = BLACK;
      i++;
    }
}
