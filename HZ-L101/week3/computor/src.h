#ifndef __SRC_H__	
#define __SRC_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  // �궨��
#define  BUFFLEN  1024
  // ���Ͷ���
typedef unsigned int uint32;
typedef unsigned char unit8;

  // ��������
extern int gval;

  //��������
extern int myadd (int x, int y);
extern int mysub (int x, int y);
extern int mymul (int x, int y);
extern int mydiv (int x, int y);

#endif
