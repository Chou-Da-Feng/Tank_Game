#pragma once
#include "data_format.h"
struct min_arrary
{
	float f[5];
	int N = 5;
};
struct index_num
{
	int ind;
	float min_f;
};
struct tracking_data
{
	struct position pos;
};
index_num min(struct min_arrary);
tracking_data lock_system(struct profile, struct enemy_profile[]);
