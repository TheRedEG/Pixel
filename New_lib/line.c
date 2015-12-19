/*
** line.c for line in /home/girole_t/Projets/pixel/fct
** 
** Made by Thomas Girolet
** Login   <girole_t@epitech.net>
** 
** Started on  Sat Dec  5 12:13:17 2015 Thomas Girolet
** Last update Tue Dec 15 14:52:03 2015 Thomas Girolet
*/

#include <lapin.h>
#include "line.h"

void line(t_set set)
{
  t_draw_line		val;
  t_bunny_position	pos;
  int			x1;
  int			y1;
  int			x2;
  int			y2;
 
  x1 = set.position1.x;
  y1 = set.position1.y;
  x2 = set.position2.x;
  y2 = set.position2.y;
  val.dx = x2 - x1;		 /* la distance horizontal de la ligne */
  val.dy = y2 - y1;		 /* la distance verticale de la ligne */
  val.dxabs = ABS_(val.dx);
  val.dyabs = ABS_(val.dy);
  val.sdx = SGN_(val.dx);
  val.sdy = SGN_(val.dy);
  val.x = val.dyabs>>1;
  val.y = val.dxabs>>1;
  val.px = x1;
  val.py = y1;
  
  if (val.dxabs >= val.dyabs)   /* la ligne est plus horizontal que vertical */
    {
      val.i = 0;
      while (val.i < val.dxabs)
	{
	  val.y += val.dyabs;
	  val.i++;
      if (val.y >= val.dxabs)
	{
	  val.y -= val.dxabs;
	  val.py += val.sdy;
	}
      val.px += val.sdx;
      pos.x = val.px;
      pos.y = val.py;
      my_set_pix(set.pix, &pos, RED);
	}
    }
  else				/* la ligne est plus verticale que horizontal */
    {
      val.i = 0;    
      while (val.i < val.dyabs)
	{
	  val.x += val.dxabs;
	  val.i++;
	  if (val.x >= val.dyabs)
	    {
	      val.x -= val.dyabs;
	      val.px += val.sdx;
	    }
	  val.py += val.sdy;
	  pos.x = val.px;
	  pos.y = val.py;
	  my_set_pix(set.pix, &pos, BLUE);
	}
    }
}
