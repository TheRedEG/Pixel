#include <lapin.h>
#include "line.h"

void draw_rect(t_set set, unsigned int color)
{
  t_set pos;

  //Copie du pixel array

  pos.pix = set.pix;

  //Ligne 1
  
  pos.position1.x = set.position1.x;
  pos.position1.y = set.position1.y;
  pos.position2.x = set.position2.x;
  pos.position2.y = set.position1.y;
  
  line(pos, color);

  //Ligne 2

  pos.position1.x = set.position1.x;
  pos.position1.y = set.position1.y;
  pos.position2.x = set.position1.x;
  pos.position2.y = set.position2.y;
  
  line(pos, color);
  
  //Ligne 3
  
  pos.position1.x = set.position2.x;
  pos.position1.y = set.position1.y;
  pos.position2.x = set.position2.x;
  pos.position2.y = set.position2.y;
  
  line(pos, color);
  
  //Ligne 4
  
  pos.position1.x = set.position1.x;
  pos.position1.y = set.position2.y;
  pos.position2.x = set.position2.x;
  pos.position2.y = set.position2.y;

  line(pos, color);
}
