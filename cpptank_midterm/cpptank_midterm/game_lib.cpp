#include "pch.h"
#include "game_lib.h"
#include <math.h>

index_num min(min_arrary input)  //尋找最小值的function
{
	index_num output;            //存放答案的struct
	output.min_f = input.f[0];   //先設第0個位置為最小值
	output.ind = 0;              //最小值為第0個位置
	for (int i = 1; i < 5; i++)
	{
		if (input.f[i] < output.min_f)     //如果後面位置的值有比第0個位置小
		{
			output.min_f = input.f[i];     //替換output值
			output.ind = i;                 //替換output的index值
		}
	}
	return output;
}

tracking_data lock_system(profile tank, enemy_profile e[]) //鎖定function  //鎖定離坦克最近的敵人
{
	min_arrary input;   //最小值的陣列
	index_num ouput;    //
	tracking_data tk;  //追蹤位置的數據
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





