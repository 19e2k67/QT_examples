#include "lcd12864.h"
char local_date=0;
//LCD��ʼ��
void lcd12864_init(void)
{
	LCD12864_PSB = 1; //ѡ��8λ��4λ���ڷ�ʽ
	lcd12864_write_cmd(0x30);        //��ʾģʽ���ã���ʼҪ��ÿ�μ��æ�ź�
	lcd12864_write_cmd(0x01);        //��ʾ����
	lcd12864_write_cmd(0x06);        //��ʾ����ƶ�����
	lcd12864_write_cmd(0x0C);        //��ʾ�����������

}

//дָ��
void lcd12864_write_cmd(u8 cmd)
{

	LCD12864_RS = 0;
	LCD12864_WR = 0;
	LCD12864_E = 0;
	LCD12864_DATAPORT = cmd;
	delay_ms(1);
	LCD12864_E = 1;
	delay_ms(1);
	LCD12864_E = 0;
}

//д����
void lcd12864_write_data(u8 dat)
{

	LCD12864_RS = 1;
	LCD12864_WR = 0;
	LCD12864_E = 0;
	LCD12864_DATAPORT = dat;
	delay_ms(1);
	LCD12864_E = 1;
	delay_ms(1);
	LCD12864_E = 0;
}

//����
void lcd12864_clear(void)
{
	lcd12864_write_cmd(0x01);        //��ʾ����
}

/*******************************************************************************
* �� �� ��       : lcd12864_show_char
* ��������		 : LCD12864��ʾһ���ַ�
* ��    ��       : x,y����ʾ���꣬x=0~7��y=0~3;
				   DData����ʾ���ַ�
* ��    ��    	 : ��
*******************************************************************************/
void lcd12864_show_char(u8 X, u8 Y, u8 DData)
{
	if(Y<=0)Y=0;
	if(Y>3)Y=3;
	X &= 0x0F;      //����X���ܴ���16��Y���ܴ���1
	switch (Y) {
		case 0:
			X |= 0x80;
			break;
		case 1:
			X |= 0x90;
			break;
		case 2:
			X |= 0x88;
			break;
		case 3:
			X |= 0x98;
			break;
	}

	lcd12864_write_cmd(X);      //���ﲻ���æ�źţ����͵�ַ��
	lcd12864_write_data(DData);
}

/*******************************************************************************
* �� �� ��       : lcd12864_show_string
* ��������		 : LCD12864��ʾ�ַ���
* ��    ��       : x,y����ʾ���꣬x=0~7��y=0~3;
				   DData����ʾ�ַ�������
* ��    ��    	 : ��
*******************************************************************************/
void lcd12864_show_string(u8 X, u8 Y, u8 *DData)
{
	u8 ListLength, X2;
	ListLength = 0;
	X2 = X;
	if(Y<=0)Y=0;
	if(Y>3)Y=3;
	X &= 0x0F;      //����X���ܴ���16��Y��1-4֮��
	switch (Y) {
		case 0:
			X2 |= 0x80;
			break;
		case 1:
			X2 |= 0x90;
			break;
		case 2:
			X2 |= 0x88;
			break;
		case 3:
			X2 |= 0x98;
			break;
	}
	lcd12864_write_cmd(X2);     //���͵�ַ��
	while (DData[ListLength] >= 0x20) { //�������ִ�β���˳�
		if (X <= 0x0F) { //X����ӦС��0x0F
			lcd12864_write_data(DData[ListLength]);
			ListLength++;
			X++;
			delay_ms(5);
		}
	}
}




/*******************************************************************************
* �� �� ��       : lcd12864_show_num
* ��������		 : LCD12864��ʾ����
* ��    ��       : x,y����ʾ���꣬x=0~7��y=0~3;
				   number����ʾ�ַ�������
                   Length��Ҫ��ʾ���ֵĳ���
* ��    ��    	 : ��
*******************************************************************************/

void lcd12864_show_num(u8 X, u8 Y, u32 number, u8 Length)
{
	u8 array[11];
	u8 i;
	array[Length] = 0;
  
    
	for (i = Length; i > 0; i--) {
		array[i - 1] = number % 10 + '0';
		number /= 10;
	}

	for (i = 0; i < Length - 1; i++) {
		if (array[i] == '0') {
			array[i] = ' ';
		}
		else {
			break;
		}
	}
	lcd12864_show_string(X, Y, array);
}

/*******************************************************************************
* �� �� ��       : lcd12864_show_image
* ��������		 : LCD12864��ʾͼƬ
* ��    ��       : DData��Ҫ��ʾ��ͼƬ
                    ���룬˳�򣨸�λ��ǰ��������
* ��    ��    	 : ��
*******************************************************************************/

void lcd12864_show_image(u8 code *DData)
{
    u8 x, y, i;
    u16 tmp = 0;
    for(i = 0; i < 9; i+=8)     //���������ϰ������°���
    {
        for(x=0; x<32; x++)
        {
            lcd12864_write_cmd(0x34);
            lcd12864_write_cmd(0x80+x);      //�е�ַ
            lcd12864_write_cmd(0x80+i);      //�е�ַ���°���
            for(y=0;y<16;y++)
            {
                lcd12864_write_data(DData[tmp+y]); //��ȡ����д��LCD
            }
            tmp +=16;
        }
    }
    lcd12864_write_cmd(0x36);        //���书���趨
    lcd12864_write_cmd(0x30);
}