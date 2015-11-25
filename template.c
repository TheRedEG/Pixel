
#include		<lapin.h>

t_bunny_pixelarray	*g_pix;

void		        my_set_pix(t_bunny_pixelarray	*pix,
				   t_bunny_position	*pos,
				   unsigned int		color)				   
{
  unsigned int		*pixel;

  pixel = (unsigned int*)pix->pixels;
  pixel[pix->clipable.buffer.width * pos->y + pos->x] = BLUE;
}

t_bunny_response	mainloop(void		*_win)
{
  t_bunny_window	*win;
  t_bunny_position	pos;
  t_bunny_position	pos2;

  win = _win;
  pos.x = 0;
  pos.y = 0;
  pos2.x = 1;
  pos2.y = 246;
  my_set_pix(g_pix, &pos2, RED);
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

