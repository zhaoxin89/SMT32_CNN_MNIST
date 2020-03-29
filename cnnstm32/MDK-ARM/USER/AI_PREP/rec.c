#include "rec.h"

u16 my_max(u16 x, u16 y)
{
	if (x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

void READ_BUF_to_cnn_input_buf_convert(const touch_screen_point *rb, ai_i8* cib,u16 w, u16 h, u16 pcnt)
{
	u16 x_start = w/2-14*4;
	u16 y_start = h/2-14*4;
	u16 x,y;
	int i;
	for (i = 0; i < pcnt; i++)
	{
		x = my_max((rb[i].x-x_start)/4,0);
		y = my_max((rb[i].y-y_start)/4,0);
		if (x>27) x = 27;
		if (y>27) y = 27;
	  ((ai_float*)cib)[y*28+x] = 1.0f;
	}

}