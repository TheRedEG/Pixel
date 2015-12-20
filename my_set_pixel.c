/*
** my_set_pixel.c for pixel in /home/girole_t/Projets/pixel
** 
** Made by Thomas Girolet
** Login   <girole_t@epitech.net>
** 
** Started on  Thu Dec  3 14:03:52 2015 Thomas Girolet
** Last update Sat Dec  5 14:39:25 2015 Thomas Girolet
*/

#include <lapin.h>
#include "line.h"

void        my_set_pix(t_bunny_pixelarray	*pix,
		       t_bunny_position		*pos,
		       unsigned int		color)   
{
  
  unsigned int	*pixel;

  pixel = (unsigned int*)pix->pixels;
  pixel[pix->clipable.buffer.width * pos->y + pos->x] = color;
}
