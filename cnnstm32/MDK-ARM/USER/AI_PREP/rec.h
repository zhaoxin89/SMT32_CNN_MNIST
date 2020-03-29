#ifndef __REC_H
#define __REC_H		
#include "mytypedef.h"
#include "ai_platform.h"
__packed typedef struct _touch_screen_point
{
	short x; 	
	short y;	
}touch_screen_point;	

void READ_BUF_to_cnn_input_buf_convert(const touch_screen_point *rb, ai_i8* cib,u16 w, u16 h, u16 pcnt);
#endif