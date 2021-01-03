/*
 * UIRebuildCabin.cpp
 *
 * write by lairiwen
 * 2002.11.29
 */



/*
 * Ҫ�ӷ�����ȡ��������:
 *     1.��������.
 *     2.ÿ�����յ�����,�������е���Ʒ.
 *     3.����������ڸۿڸ��첻ͬ���յļ۸񼰲�ͬ�����ڴ˸ۿڲ�����ܵĵ��Ľ�Ǯ.
 *     4.��ҳ��н�Ǯ.
 *
 * ���ظ�������������.
 *     1:��Ҵ�������.
 *     2:��Ҹ��촬�յ�����.
 */

#ifndef MAX_SHIP_NUM
#define MAX_SHIP_NUM 20
#define MAX_CABIN_NUM 40
#endif

// ÿ�ִ��Ĵ�������.
int g_CabinNum[MAX_SHIP_NUM]=
{
	10, // 0
	14, // 1
	18, // 2
	22, // 3
	13, // 4
	17, // 5
	21, // 6
	10, // 7
	14, // 8
	19, // 9
	22, // 10
	14, // 11
	19, // 12
	21, // 13
};

// ÿ�ִ��������յ�λ�ü���������.
int g_CabinPos[MAX_SHIP_NUM][MAX_CABIN_NUM][3]=
{
	//0
	{
		{74,24,3},
		{171,26,3},
		{25,85,1},
		{103,94,4},
		{139,94,4},
		{174,94,4},
		{210,94,4},
		{246,94,4},
		{133,128,4},
		{169,128,4},
	},

	//1
	{
		{53,29,3},
		{128,18,3},
		{209,6,3},
		{9,75,1},
		{63,89,4},
		{100,89,4},
		{138,89,4},
		{175,89,4},
		{212,89,4},
		{9,119,2},
		{63,126,4},
		{100,126,4},
		{128,126,4},
		{175,126,4},
	},

	//2
	{
		{14,18,3},
		{59,18,3},
		{102,18,3},
		{203,18,3},
		{7,70,1},
		{59,86,4},
		{97,6,4},
		{133,86,4},
		{170,86,4},
		{207,86,4},
		{253,73,4},
		{7,114,2},
		{59,121,4},
		{97,121,4},
		{133,121,4},
		{170,121,4},
		{207,121,4},
		{254,112,4},
	},

	//3
	{
		{68,4,3},
		{135,14,3},
		{173,14,3},
		{211,14,3},
		{248,14,3},
		{6,52,1},
		{51,54,4},
		{36,87,4},
		{72,87,4},
		{109,87,4},
		{146,87,4},
		{184,87,4},
		{221,87,4},
		{258,87,4},
		{1,103,2},
 		{36,122,4},
		{72,122,4},
		{109,122,4},
		{146,122,4},
		{184,122,4},
		{221,122,4},
		{258,122,4},
	},

	//4
	{
		{39,14,3},
		{226,14,3},
		{10,77,1},
		{59,91,4},
		{94,91,4},
		{129,91,4},
		{165,91,4},
		{200,91,4},
		{20,121,2},
		{94,126,4},
		{129,126,4},
		{165,126,4},
		{200,126,4},
	},

	//5
	{
		{46,19,3},
		{165,18,3},
		{209,18,3},
		{4,73,1},
		{42,94,4},
		{79,94,4},
		{115,94,4},
		{151,94,4},
		{187,94,4},
		{4,117,2},
		{42,128,4},
		{79,128,4},
		{115,128,4},
		{151,128,4},
		{187,128,4},
		{222,110,4},
		{261,95,4},
	},

	//6
	{
 		{71,8,3},
		{128,8,3},
		{185,8,3},
		{242,8,3},
		{17,50,1},
		{123,50,4},
		{178,50,4},
		{33,89,4},
		{67,89,4},
		{102,89,4},
		{137,89,4},
		{172,89,4},
		{207,89,4},
		{242,89,4},
		{5,125,2},
		{46,125,4},
		{82,125,4},
		{117,125,4},
		{152,125,4},
		{187,125,4},
		{222,125,4},
	},

	//7
	{
		{143,27,3},
		{228,27,3},
		{4,65,1},
		{32,111,4},
		{69,118,4},
		{106,119,4},
		{144,119,4},
		{181,120,4},
		{218,120,4},
		{253,120,4},
	},

	//8
	{
 		{79,15,3},
		{135,15,3},
		{239,15,3},
		{27,56,1},
		{83,94,4},
		{118,94,4},
		{153,94,4},
		{188,94,4},
		{223,94,4},
		{38,113,2},
		{126,128,4},
		{161,128,4},
		{196,128,4},
		{231,128,4},
	},

	//9
	{
		{14,28,1},
		{59,19,3},
		{104,19,3},
		{149,19,3},
		{194,19,3},
		{239,19,3},
		{10,87,2},
		{84,92,4},
		{119,92,4},
		{155,92,4},
		{190,92,4},
		{225,92,4},
		{260,92,4},
		{49,111,4},
		{84,127,4},
		{119,127,4},
		{154,127,4},
		{190,127,4},
		{225,127,4},
	},

	//10
	{
		{14,11,3},
		{61,11,3},
		{108,11,3},
		{155,11,3},
		{202,11,3},
		{249,11,3},
		{7,71,1},
		{48,88,4},
		{83,88,4},
		{118,88,4},
		{154,88,4},
		{189,88,4},
		{223,88,4},
		{257,88,4},
		{7,115,2},
		{48,122,4},
		{83,122,4},
		{118,123,4},
		{154,123,4},
		{189,123,4},
		{223,123,4},
		{257,123,4},
	},

	//11
	{
		{125,13,3},
		{184,13,3},
		{243,13,3},
		{25,44,1},
		{80,88,4},
		{116,88,4},
		{154,88,4},
		{193,88,4},
		{232,88,4},
		{34,109,2},
		{98,124,4},
		{134,124,4},
		{173,124,4},
		{214,124,4},
	},

	//12
	{
		{51,16,3},
		{108,16,3},
		{184,16,3},
		{241,16,3},
		{7,51,1},
		{25,92,4},
		{65,92,4},
		{103,92,4},
		{141,92,4},
		{179,92,4},
		{218,92,4},
		{256,92,4},
		{9,130,2},
		{65,127,4},
		{103,127,4},
		{141,127,4},
		{179,127,4},
		{218,127,4},
		{256,127,4},
	},

	//13
	{
		{7,32,1},
		{54,10,3},
		{103,10,3},
		{152,10,3},
		{201,10,3},
		{248,10,3},
		{7,101,2},
		{54,88,4},
		{89,88,4},
		{123,88,4},
		{157,88,4},
		{191,88,4},
		{225,88,4},
		{259,88,4},
		{54,125,4},
		{89,125,4},
		{123,125,4},
		{157,125,4},
		{191,125,4},
		{225,125,4},
		{259,125,4},
	},
};