#include "pch.h"
#include "game_lib.h"
#include <math.h>

index_num min(min_arrary input)  //�M��̤p�Ȫ�function
{
	index_num output;            //�s�񵪮ת�struct
	output.min_f = input.f[0];   //���]��0�Ӧ�m���̤p��
	output.ind = 0;              //�̤p�Ȭ���0�Ӧ�m
	for (int i = 1; i < 5; i++)
	{
		if (input.f[i] < output.min_f)     //�p�G�᭱��m���Ȧ����0�Ӧ�m�p
		{
			output.min_f = input.f[i];     //����output��
			output.ind = i;                 //����output��index��
		}
	}
	return output;
}

tracking_data lock_system(profile tank, enemy_profile e[]) //��wfunction  //��w���Z�J�̪񪺼ĤH
{
	min_arrary input;   //�̤p�Ȫ��}�C
	index_num ouput;    //
	tracking_data tk;  //�l�ܦ�m���ƾ�
	for (int i = 0; i < 5; i++)
	{
		input.f[i] = sqrt((e[i].pos.X - tank.pos.X) * (e[i].pos.X - tank.pos.X) +
			(e[i].pos.Y - tank.pos.Y) * (e[i].pos.Y - tank.pos.Y));
		if (e[i].enable == 0)
			input.f[i] = 9999;
	}
	ouput = min(input);
	tk.pos.X = e[ouput.ind].pos.X - tank.pos.X;
	tk.pos.Y = e[ouput.ind].pos.Y - tank.pos.Y;
	tk.pos.Theta = atan(tk.pos.Y / tk.pos.X);
	return tk;
}





