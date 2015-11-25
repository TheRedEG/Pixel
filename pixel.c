/*
** pixel.c for pixe in /home/girole_t/Projets/pixel
** 
** Made by Thomas Girolet
** Login   <girole_t@epitech.net>
** 
** Started on  Wed Nov 25 13:12:48 2015 Thomas Girolet
** Last update Wed Nov 25 14:15:05 2015 Thomas Girolet
*/

#include "lapin.h"

void	main()
{
  t_bunny_window	*win;
  t_bunny_picture	*pic;
  t_bunny_pixelarray	*pix;
  t_bunny_position	pos;
  t_color		aff;
  unsigned int		*x;

  pix->clipable.clip_x_position = 20;
  pix->clipable.clip_y_position = 30;
  pix->clipable.clip_width = 50;
  pix->clipable.clip_height = 60;
  pos.x = 200;
  pos.y = 300;
  bunny_blit(&pic->buffer, &pix->clipable, &pos); // On dessine dans pic à la position (200, 300) la partie de pix entre (20, 30) et (70, 90)
  pic->clip_x_position = 0;
  pic->clip_y_position = 0;
  pic->clip_width = 800;
  pic->clip_height = 600;
  bunny_blit(&win->buffer, pic, &pos); // On dessine tout pic dans win


  win = bunny_start(500, 500, 0, "test");
  pos.x = 100;
  pos.y = 100;
  pix = bunny_new_pixelarray(500, 500); 
  x = (unsigned int*)pix->pixels;
  x[125000] = RED;
  while (42)
    {
      bunny_display(win);
    }
  bunny_stop(win);
}
