#include <buzz.h>
#include <key.h>
#include <uart.h>
#include <FPM10A.h>
#include <lcd12864.h>

void main()
{
	lcd12864_init();			//��ʼ��Һ��
    delay_10us(1);
    lcd12864_clear();
	Uart_Init();			//��ʼ������
	Key_Init();				//��ʼ������
	delay_ms(500);          //��ʱ500MS���ȴ�ָ��ģ�鸴λ
	Device_Check();		   	//У��ָ��ģ���Ƿ������ȷ��Һ��������Ӧ����ʾ
	delay_ms(500);			//�Խӳɹ�����ͣ��һ��ʱ��
    lcd12864_clear();
    lcd12864_show_string(2,0,"ָ�Ʋ���");
    lcd12864_show_string(1,1,"����ָ��");
	lcd12864_show_string(1,2,"���ָ��");	 //��Ӻ�ɾ��ָ��
 	lcd12864_show_string(1,3,"���ָ��");
   
	while (1) {
		/**************���������ܽ���****************/

		if (local_date == 0) {
            lcd12864_show_char(0,1,'*');
            lcd12864_show_char(0,2,' ');
            lcd12864_show_char(0,3,' ');
		}
		else if (local_date == 1) {
            lcd12864_show_char(0,1,' ');
            lcd12864_show_char(0,2,'*');
            lcd12864_show_char(0,3,' ');
		}
		else if (local_date == 2) {
            lcd12864_show_char(0,1,' ');
            lcd12864_show_char(0,2,' ');
            lcd12864_show_char(0,3,'*');
            
		}
		//ȷ�ϼ�
		if (KEY_OK == 0) {
			while (KEY_OK == 0); //�ȴ��ɿ�����
			switch (local_date) {
				case 0:  //����ָ��
					FPM10A_Find_Fingerprint();
					break;

				case 1:	 //���ָ��
					FPM10A_Add_Fingerprint();
					break;

				case 2:	//���ָ��
					FPM10A_Delete_All_Fingerprint();
					break;
			}
		}
		if (KEY_UP == 0) {
			while (KEY_UP == 0); //�ȴ��ɿ�����
			if (local_date >= -1) {
				local_date--;
				if (local_date == -1)
					local_date = 2;
			}
		}
		//�л���
		if (KEY_DOWN == 0) {
			while (KEY_DOWN == 0); //�ȴ��ɿ�����
			if (local_date <= 2) {
				local_date++;
				if (local_date == 3)
					local_date = 0;
			}
		}
		delay_ms(100); //��ʱ�ж�100MS���һ��
	}
}
