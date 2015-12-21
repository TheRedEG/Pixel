#include <lapin.h>
#include "line.h"

void draw_rect(t_set set, unsigned int color)
{
  t_set pos;

  pos.pix = set.pix;
  pos.position1.x = set.position1.x;
  pos.position1.y = set.position1.y;
  pos.position2.x = set.position2.x;
  pos.position2.y = set.position1.y;
  line(pos, color);
  pos.position1.x = set.position1.x;
  pos.position1.y = set.position1.y;
  pos.position2.x = set.position1.x;
  pos.position2.y = set.position2.y;
  line(pos, color);
  pos.position1.x = set.position2.x;
  pos.position1.y = set.position1.y;
  pos.position2.x = set.position2.x;
  pos.position2.y = set.position2.y;
  line(pos, color);
  pos.position1.x = set.position1.x;
  pos.position1.y = set.position2.y;
  pos.position2.x = set.position2.x;
  pos.position2.y = set.position2.y;
  line(pos, color);
}
