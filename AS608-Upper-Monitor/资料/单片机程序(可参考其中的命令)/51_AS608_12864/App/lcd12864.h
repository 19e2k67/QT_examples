#ifndef _lcd12864_H
#define _lcd12864_H

#include "public.h"

extern char local_date;

sbit LCD12864_RS=P2^6;//��������ѡ��
sbit LCD12864_WR=P2^5;//��дѡ��
sbit LCD12864_E=P2^7;//ʹ���ź�

#define LCD12864_DATAPORT	P0	//LCD12864���ݶ˿ڶ���
sbit LCD12864_PSB=P3^2;//8λ��4����/����ѡ��


void lcd12864_init(void);     //LCD��ʼ��
void lcd12864_write_cmd(u8 WCLCD);    //дָ��
void lcd12864_write_data(u8 WDLCD);     //д����
void lcd12864_clear(void);                //����
void lcd12864_show_char(u8 X,u8 Y,u8 DData);   //��ʾһ���ַ�
void lcd12864_show_string(u8 X, u8 Y, u8 *DData);   //��ʾһ���ַ�
void lcd12864_show_image(u8 code *DData);   //��ʾͼ��
void lcd12864_show_num(u8 X, u8 Y, u32 number,u8 Length);    //��ʾһ������



#endif
