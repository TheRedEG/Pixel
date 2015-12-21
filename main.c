/*
** main.c for main in 
** 
** Made by Thomas Girolet
** Login   <girole_t@epitech.net>
** 
** Started on  Sun Dec 20 11:57:28 2015 Thomas Girolet
** Last update Mon Dec 21 16:49:53 2015 Thomas Girolet
*/
#include		<lapin.h>
#include		"line.h"

t_bunny_pixelarray	*g_pix;

t_bunny_response	mainloop(void		*_win)
{
  t_bunny_window	*win;
  t_bunny_position	pos;
  t_bunny_position	pos2;
  t_set			set;

  set.position1.x = 300; 
  set.position1.y = 400;
  set.position2.x = 450;
  set.position2.y = 20;
  set.pix = g_pix;
  win = _win;
  pos.x = 0;
  pos.y = 0;
  pos2.x = 1;
  pos2.y = 246;
  //back_color(g_pix, &pos2, BLACK);
  //draw_rect(set, WHITE);
  //line(set, YELLOW);
  //my_set_pix(g_pix, &pos2, RED);
  bunny_blit(&win->buffer, &g_pix->clipable, &pos);
  bunny_display(win);
  return (GO_ON);
}

int			main(void)
{
  t_bunny_window	*win;

  g_pix = bunny_new_pixelarray(500,500);
  win = bunny_start(500, 500, false, "Fenetre");
  bunny_set_loop_main_function(mainloop);
  bunny_loop(win, 150, win);
  return (0);
}
