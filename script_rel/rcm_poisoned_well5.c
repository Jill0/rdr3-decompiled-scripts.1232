#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	bool bLocal_16 = false;
	vector3 vLocal_17 = { 0f, 0f, 0f };
	char* sLocal_20 = NULL;
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	char* sLocal_23 = NULL;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	vector3 vLocal_27 = { 0f, 0f, 0f };
	float fLocal_30 = 0f;
	vector3 vLocal_31 = { 0f, 0f, 0f };
	vector3 vLocal_34 = { 0f, 0f, 0f };
	vector3 vLocal_37 = { 0f, 0f, 0f };
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 1065353216;
	var uLocal_57 = 1119092736;
	var uLocal_58 = 1092616192;
	var uLocal_59 = 1085276160;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72[2] = { 0, 0 };
	int iLocal_75 = 0;
	int iLocal_76[2] = { 0, 0 };
	int iLocal_79 = 0;
	char* sLocal_80 = NULL;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	bool bLocal_83 = false;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121[2] = { 0, 0 };
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	int iLocal_131 = 0;
	vector3 vLocal_132 = { 0f, 0f, 0f };
	vector3 vLocal_135 = { 0f, 0f, 0f };
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	int iLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	float fLocal_161 = 0f;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180[4] = { 0, 0, 0, 0 };
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	int iLocal_198 = 0;
	var uLocal_199 = 0;
	vector3 vLocal_200 = { 0f, 0f, 0f };
	vector3 vLocal_203 = { 0f, 0f, 0f };
	float fLocal_206 = 0f;
	int iLocal_207 = 0;
	struct<4> Local_208[7];
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	int iLocal_240 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<2606> Var0;
	
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_17 = { 2314.029f, 1142.53f, 95.3064f };
	sLocal_20 = "l_14_cave";
	sLocal_21 = "POISON_MINE_BLOCKAGE";
	sLocal_22 = "POISON_MINE_BLOCKAGE_COLLAPSED";
	sLocal_23 = "poison_mine_explosion_blockage";
	iLocal_26 = 774211111;
	vLocal_27 = { 2298.42f, 1130.48f, 95.25f };
	fLocal_30 = 220.3389f;
	vLocal_31 = { 2281.65f, 1198.91f, 108.11f };
	vLocal_34 = { 2353.77f, 1003.04f, 72.38f };
	vLocal_37 = { 2407.067f, 974.3833f, 73.5095f };
	iLocal_75 = 1282171014;
	iLocal_79 = 1326245298;
	sLocal_80 = "PlayerDrugsPoisonWell";
	iLocal_131 = 10;
	vLocal_132 = { 2513.035f, 806.8499f, 71.1932f };
	vLocal_135 = { 2534.164f, 784.8981f, 74.2134f };
	iLocal_178 = 1;
	vLocal_200 = { 2281.74f, 1199.1f, 107.92f };
	Var0 = 9;
	Var0.f_28 = 4;
	Var0.f_41 = 25;
	Var0.f_117 = 10;
	Var0.f_175 = -1;
	Var0.f_178.f_8 = -1;
	Var0.f_178.f_17 = 1097859072;
	Var0.f_178.f_18 = 1000;
	Var0.f_178.f_19 = 1067450368;
	Var0.f_178.f_20 = 5000;
	Var0.f_178.f_21 = 42;
	Var0.f_178.f_22 = 1103626240;
	Var0.f_178.f_23 = 1077936128;
	Var0.f_178.f_24 = 1106247680;
	Var0.f_178.f_25 = 1103101952;
	Var0.f_178.f_26 = 1097859072;
	Var0.f_178.f_27 = 1103626240;
	Var0.f_206 = 1;
	Var0.f_206.f_13 = 27;
	Var0.f_206.f_338 = 1097859072;
	Var0.f_206.f_339 = 1101004800;
	Var0.f_206.f_366 = 4;
	Var0.f_643 = 24;
	Var0.f_741 = 1092616192;
	Var0.f_742 = 1094713344;
	Var0.f_744 = -1082130432;
	Var0.f_745 = 1103626240;
	Var0.f_748 = -1;
	Var0.f_749 = -1;
	Var0.f_750 = -1;
	Var0.f_751 = -1;
	Var0.f_752 = -1;
	Var0.f_753.f_3 = 27;
	Var0.f_753.f_3.f_1.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("weapon_unarmed");
	Var0.f_753.f_355.f_15 = 1;
	Var0.f_753.f_371 = 30;
	Var0.f_753.f_371.f_1 = -1;
	Var0.f_753.f_371.f_1.f_2 = 1;
	Var0.f_753.f_371.f_1.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_753.f_371.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_753.f_912 = 8;
	Var0.f_753.f_1241 = 8;
	Var0.f_753.f_1241.f_1.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1241.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_753.f_1418 = 11;
	Var0.f_753.f_1529 = 2;
	Var0.f_753.f_1564 = 2;
	Var0.f_753.f_1581 = -1;
	Var0.f_753.f_1584 = -1;
	Var0.f_753.f_1585 = -1082130432;
	Var0.f_753.f_1667 = 24;
	Var0.f_753.f_1791 = -1;
	Var0.f_2605 = 15;
	Var0.f_2605.f_241 = 15;
	Var0.f_2605.f_482 = 16;
	Var0.f_2605.f_739 = 2;
	Var0.f_2605.f_772 = 3;
	Var0.f_174 = ScriptParam_0;
	if (ScriptParam_0.f_1)
	{
		func_1(&(Var0.f_172), 4096);
	}
	else
	{
		func_2(&(Var0.f_172), 4096);
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4650))
	{
		func_3(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_4(&Var0);
	while (true)
	{
		func_5(&Var0);
		if (func_6(Var0.f_172, 50331648))
		{
			func_7(&Var0);
		}
		else
		{
			switch (Var0.f_177)
			{
				case 0:
					func_8(&Var0);
					break;
				
				case 1:
					func_9(&Var0);
					break;
				
				case 3:
					func_10(&Var0);
					break;
				
				case 4:
					func_11(&Var0);
					break;
				
				case 2:
					func_12(&Var0);
					break;
				
				case 5:
					func_13(&Var0);
					break;
				
				case 6:
					func_14(&Var0);
					break;
				
				case 7:
					func_15(&Var0);
					break;
				
				case 8:
					func_16(&Var0);
					break;
				
				case 9:
					func_17(&Var0, 0);
					break;
				
				case 10:
					func_18(&Var0);
					break;
				
				case 11:
					if (Var0.f_174 == func_19())
					{
						func_20();
						func_21();
					}
					func_22(&Var0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_2(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_3(var uParam0)
{
	int iVar0;
	
	if (&Global_1879534 == 1)
	{
		func_23(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43));
	}
	if (func_6(uParam0->f_172, 8))
	{
		iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		func_24(uParam0, iVar0);
		if (iVar0 == 32)
		{
			func_16(uParam0);
		}
		else
		{
			func_17(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_177 == 10)
	{
		func_25(uParam0);
	}
	func_26(&(uParam0->f_753));
	func_22(uParam0);
}

void func_4(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (uParam0->f_174 == func_19())
	{
		bVar0 = true;
	}
	else if (func_27(uParam0))
	{
		bVar0 = true;
		func_28(uParam0, 128);
	}
	if (bVar0)
	{
		func_28(uParam0, 64);
		if (func_29())
		{
			func_28(uParam0, 128);
		}
		func_30(0, 0);
	}
	if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
	{
		uParam0->f_741 = 0f;
		uParam0->f_742 = 0f;
	}
	if (!func_32(uParam0, 64))
	{
		func_33(uParam0->f_174, 1);
		func_34(uParam0->f_174, 1);
	}
	func_35(uParam0->f_174);
	func_36(uParam0);
	func_37(uParam0);
	func_38(uParam0, 0, 0, 0, -1, -1, 0);
	func_39(uParam0, 0, 0, 0, -1, -1, 0);
	func_40(&(uParam0->f_178));
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_28 != 0)
	{
		func_41(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, 7);
	}
	func_42(uParam0);
	func_43(uParam0, 1);
	iVar1 = func_44(uParam0);
	if (!func_6(uParam0->f_172, 8388608) && func_45(uParam0))
	{
		iVar1 = 4;
	}
	if (!func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 64))
	{
		if ((iVar1 != 0 && iVar1 != 1) && !func_45(uParam0))
		{
			func_47(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
		}
	}
	func_48();
	func_49(uParam0, iVar1);
}

void func_5(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	
	if (func_6(uParam0->f_172, 50331648))
	{
		return;
	}
	if (func_50())
	{
		func_1(&(uParam0->f_172), 16777216);
		if (!func_6(uParam0->f_172, 8))
		{
			func_51(uParam0, 14);
		}
		return;
	}
	else if (func_52())
	{
		func_1(&(uParam0->f_172), 33554432);
		if (!func_6(uParam0->f_172, 8))
		{
			func_51(uParam0, 15);
		}
		return;
	}
	if (func_53(uParam0))
	{
		return;
	}
	func_2(&(uParam0->f_172), 64);
	func_2(&(uParam0->f_172), 128);
	if (func_6(uParam0->f_172, 67108864))
	{
		func_54(1);
		func_2(&(uParam0->f_172), 67108864);
	}
	func_55(uParam0);
	if (((uParam0->f_177 == 11 || uParam0->f_177 == 10) || uParam0->f_177 == 8) || uParam0->f_177 == 9)
	{
		return;
	}
	if (func_6(uParam0->f_172, 4096))
	{
		iVar0 = func_56(0);
		if (!func_57(iVar0) || ((*Global_1347702)[uParam0->f_174 /*49*/])->f_15 == iVar0)
		{
			func_2(&(uParam0->f_172), 4096);
		}
		else
		{
			return;
		}
	}
	if (!func_6(uParam0->f_172, 8) && func_58())
	{
		if (uParam0->f_174 != 59 || !func_59(97))
		{
			if (uParam0->f_174 != 155 || !func_59(8))
			{
				return;
			}
		}
	}
	if (uParam0->f_177 != 2)
	{
		if (func_6(uParam0->f_172, 8))
		{
			if (func_32(uParam0, 32))
			{
				if (!func_32(uParam0, 64))
				{
					if (!func_60(32768))
					{
						Var1 = { func_61(0) };
						if (func_62(&Var1))
						{
							func_63(uParam0, 32);
						}
					}
					else
					{
						func_63(uParam0, 32);
					}
				}
				else
				{
					func_63(uParam0, 32);
				}
			}
			if (func_64(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					func_49(uParam0, 9);
					return;
				}
			}
			else if (func_65(uParam0))
			{
				if (uParam0->f_177 != 6 && uParam0->f_177 != 5)
				{
					func_49(uParam0, 8);
					return;
				}
			}
			if (!func_6(uParam0->f_172, 131072))
			{
				if (!Global_1935630->f_12)
				{
					PED::SET_PED_RESET_FLAG(Global_35, 187, true);
				}
			}
			if (!func_6(uParam0->f_172, 268435456))
			{
				func_66();
			}
			if (!func_6(uParam0->f_172, 536870912))
			{
				POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			}
			if (!func_6(uParam0->f_172, 1073741824))
			{
				func_67(1, 0);
			}
			func_68(uParam0);
		}
		else if (!func_32(uParam0, 64) && !func_27(uParam0))
		{
			uParam0->f_743 = BUILTIN::VDIST2(func_69(uParam0->f_174), Global_36);
			if (func_70(uParam0))
			{
				if (func_71(uParam0) == 2 || func_71(uParam0) == 12)
				{
					func_22(uParam0);
					return;
				}
				func_72(uParam0);
				func_49(uParam0, 10);
				return;
			}
			else
			{
				func_73(uParam0);
			}
			func_74(uParam0);
		}
	}
	func_75(uParam0);
	if (func_6(uParam0->f_172, 32))
	{
		func_77(uParam0, func_76(uParam0));
	}
	else if (func_6(uParam0->f_172, 8))
	{
		if (func_78(uParam0))
		{
		}
	}
}

bool func_6(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_7(var uParam0)
{
	if (func_6(uParam0->f_172, 8))
	{
		func_17(uParam0, 0);
	}
	else
	{
		if (!func_79(&(uParam0->f_2597)))
		{
			func_80(&(uParam0->f_2597), 0);
		}
		func_81(uParam0);
		if (func_82(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_177 == 10)
			{
				func_25(uParam0);
			}
			else
			{
				func_72(uParam0);
			}
			func_22(uParam0);
		}
	}
}

void func_8(var uParam0)
{
	if (!func_83(64))
	{
		return;
	}
	if (func_84())
	{
		if (Global_1310720->f_6)
		{
		}
		else
		{
			return;
		}
	}
	if (Global_1879534 && func_27(uParam0))
	{
		return;
	}
	if (func_6(uParam0->f_172, 8192))
	{
		func_49(uParam0, 1);
	}
}

void func_9(var uParam0)
{
	if (func_85(uParam0))
	{
		if (func_32(uParam0, 64))
		{
			func_86(uParam0);
			func_49(uParam0, 2);
			func_78(uParam0);
		}
		else if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			func_49(uParam0, 3);
		}
		else
		{
			func_87(uParam0);
			func_49(uParam0, 4);
		}
	}
}

void func_10(var uParam0)
{
	int iVar0;
	
	if (!func_79(&(uParam0->f_2585)) || IntToFloat(func_82(&(uParam0->f_2585))) > func_88(uParam0))
	{
		func_80(&(uParam0->f_2585), 1);
		iVar0 = func_89(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				func_86(uParam0);
				func_78(uParam0);
			}
			func_49(uParam0, iVar0);
		}
	}
}

void func_11(var uParam0)
{
	int iVar0;
	
	if (!func_83(64))
	{
		return;
	}
	if (func_84())
	{
		return;
	}
	else if (func_90(&Global_1935630, 131072))
	{
		return;
	}
	else if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_91(uParam0);
	if (func_92(uParam0))
	{
		func_86(uParam0);
		iVar0 = func_93(uParam0);
		if (iVar0 == 5)
		{
			func_94(uParam0, 4);
			func_13(uParam0);
			if (uParam0->f_177 == 6)
			{
				iVar0 = 6;
			}
			else
			{
				iVar0 = 5;
			}
		}
		else if (iVar0 == 6)
		{
			func_94(uParam0, 4);
			func_14(uParam0);
		}
		else if (iVar0 == 7)
		{
			MISC::_0xA565FAC215CBC77D();
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		if (func_27(uParam0))
		{
			if (iVar0 == 7 && !CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		func_78(uParam0);
		func_49(uParam0, iVar0);
	}
}

void func_12(var uParam0)
{
	if (!func_6(uParam0->f_172, 8192))
	{
		return;
	}
	func_49(uParam0, func_96(uParam0, func_95(uParam0)));
	if (uParam0->f_177 != 2)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GRAPHICS::_0x297B72E2AF094742(6);
		}
		if (uParam0->f_177 == 7 || uParam0->f_177 == 8)
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		func_97(0);
	}
	else if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
}

void func_13(var uParam0)
{
	if (func_98(uParam0))
	{
		func_14(uParam0);
		func_49(uParam0, 6);
	}
}

void func_14(var uParam0)
{
	int iVar0;
	
	func_99(uParam0);
	if (func_100(&(uParam0->f_2575)))
	{
		if (func_101(uParam0))
		{
			func_102(uParam0, 1);
			iVar0 = func_103(uParam0);
			func_49(uParam0, iVar0);
		}
	}
	else
	{
		func_2(&(uParam0->f_172), 16);
		func_102(uParam0, 0);
		iVar0 = func_103(uParam0);
		func_49(uParam0, iVar0);
	}
}

void func_15(var uParam0)
{
	int iVar0;
	
	if (func_104(uParam0))
	{
		return;
	}
	if (func_6(uParam0->f_172, 262144))
	{
		func_106(uParam0, func_105(uParam0));
	}
	iVar0 = func_107(uParam0);
	if (iVar0 == 5)
	{
		func_94(uParam0, 7);
		func_13(uParam0);
		if (uParam0->f_177 == 6)
		{
			iVar0 = 6;
		}
		else
		{
			iVar0 = 5;
		}
	}
	else if (iVar0 == 6)
	{
		func_94(uParam0, 7);
		func_14(uParam0);
	}
	func_49(uParam0, iVar0);
}

void func_16(var uParam0)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	struct<7> Var5;
	bool bVar12;
	
	if (uParam0->f_177 != 8)
	{
		func_49(uParam0, 8);
	}
	if (func_6(uParam0->f_172, 32768))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(1000);
			}
			return;
		}
		if (MISC::_0x1B065A2BF7953815(1) == 1)
		{
			return;
		}
	}
	if (func_71(uParam0) != 0)
	{
		func_51(uParam0, 0);
		if (func_108(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			if (!STATS::_0x01F4D242765C6B24(func_109(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15)))
			{
				STATS::_0xCA41E86545413B5B(func_110(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_111(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_112(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), func_109(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), Global_36);
			}
			if (!STATS::_0x01F4D242765C6B24(func_109(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15)))
			{
			}
			else
			{
				STATS::_0xB2A38826E5886E83(func_109(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15), 0);
			}
		}
		if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 262144))
		{
			func_113();
			func_114(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0);
		}
		func_115(uParam0->f_174, 1);
		func_116(uParam0);
		func_118(func_117(), 0);
		if (func_6(uParam0->f_172, 8))
		{
			func_119(uParam0, 0, 1);
			if (func_120(uParam0->f_174, 128))
			{
				func_121(uParam0->f_174, 128);
			}
		}
		func_122(uParam0);
		if (!func_6(uParam0->f_172, 32768) || !func_6(uParam0->f_172, 65536))
		{
			if (func_6(uParam0->f_172, 8))
			{
				MISC::_0x1096603B519C905F("");
				HUD::SET_MISSION_NAME(false, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
				if (MISC::GET_MISSION_FLAG())
				{
					MISC::SET_MISSION_FLAG(false);
				}
				func_48();
				UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
				func_123(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15);
				func_124();
				func_125(Global_1935630, 8);
			}
			MemCopy(&vVar0, {((*Global_1347702)[uParam0->f_174 /*49*/])->f_1}, 3);
			StringConCat(&vVar0, "_obj", 24);
			if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4))
			{
				if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 64))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&vVar0))
					{
						func_126(uParam0, &vVar0, 1, 7500, 0, 0, -1082130432, 0, 0, -1, -1, 0);
					}
				}
			}
			bVar3 = func_127();
			func_128(uParam0->f_174, 1, 1, 0, 1, 1, bVar3);
			if (func_6(uParam0->f_172, 8))
			{
				iVar4 = func_95(uParam0);
				if (iVar4 < 0)
				{
					iVar4 = 0;
				}
				Var5 = func_109(func_129(uParam0->f_174));
				Var5.f_1 = 0;
				Var5.f_2 = iVar4;
				Var5.f_3 = func_71(uParam0);
				Var5.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0));
				Var5.f_5 = Global_40.f_7729;
				Var5.f_6 = func_130(0);
				TELEMETRY::_0xD894437E12C17AEC(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), &Var5);
				bVar12 = false;
				bVar12 = true;
				if (bVar12)
				{
					func_20();
					func_21();
				}
			}
		}
	}
	if (!func_6(uParam0->f_172, 32768) || !func_6(uParam0->f_172, 65536))
	{
		if (func_27(uParam0))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			func_131();
			func_132(0);
		}
		else if (func_6(uParam0->f_172, 32768))
		{
			func_133(1, 1);
			func_1(&(uParam0->f_172), 65536);
			return;
		}
	}
	if (func_6(uParam0->f_172, 32768))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		func_134(1);
		func_135();
		func_136(6);
		func_137(4096);
	}
	func_72(uParam0);
	if (func_6(uParam0->f_172, 32768) || func_27(uParam0))
	{
		func_22(uParam0);
	}
	func_49(uParam0, 10);
}

void func_17(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	func_49(uParam0, 9);
	if (func_71(uParam0) != 1)
	{
		func_51(uParam0, 1);
		if (func_120(uParam0->f_174, 128))
		{
			func_121(uParam0->f_174, 128);
		}
		func_138(uParam0);
	}
	if (func_6(uParam0->f_172, 134217728))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::_0x16E9ABDD34DDD931();
			CAM::DO_SCREEN_FADE_OUT(0);
		}
	}
	func_115(uParam0->f_174, 0);
	if (bParam1 == 1)
	{
		if (uParam0->f_174 == func_19())
		{
			func_20();
			func_21();
		}
	}
	else
	{
		bVar0 = false;
		if (func_6(uParam0->f_172, 134217728))
		{
			bVar0 = true;
		}
		if (!CAM::IS_SCREEN_FADED_OUT() || func_6(uParam0->f_172, 134217728))
		{
			if (!func_79(&(uParam0->f_2597)))
			{
				func_80(&(uParam0->f_2597), 0);
			}
			func_81(uParam0);
			bVar1 = CAM::_0x139EFB0A71DD9011();
			bVar2 = CAM::_0x7CE9DC58E3E4755F();
			if (!func_6(uParam0->f_172, 2097152) && !bVar2)
			{
				if (!bVar1)
				{
					func_139(1, 1);
					return;
				}
				else
				{
					func_1(&(uParam0->f_172), 2097152);
				}
			}
			if (bVar2)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				func_2(&(uParam0->f_172), 134217728);
			}
			else if (func_82(&(uParam0->f_2597)) >= 2500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				func_2(&(uParam0->f_172), 134217728);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				return;
			}
			else if (func_6(uParam0->f_172, 134217728))
			{
				return;
			}
		}
		iVar3 = 1;
		if (func_6(uParam0->f_172, 16777216))
		{
			iVar3 = 2;
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 11, true))
			{
				StringCopy(&(uParam0->f_2578), "PLAYER_KO", 24);
			}
			else
			{
				StringCopy(&(uParam0->f_2578), "PLAYER_DEAD", 24);
			}
		}
		else if (func_6(uParam0->f_172, 33554432))
		{
			iVar3 = 6;
			StringCopy(&(uParam0->f_2578), "PLAYER_ARRESTED", 24);
		}
		func_141(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, iVar3, &(uParam0->f_2578), func_140(uParam0), 0, bVar0);
	}
	if (func_6(uParam0->f_172, 8))
	{
		MISC::_0x1096603B519C905F("");
		HUD::SET_MISSION_NAME(false, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_48();
		func_125(Global_1935630, 8);
	}
	if (func_142(&(uParam0->f_2605)))
	{
		func_143(uParam0);
	}
	func_144(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15);
	bParam1 = true;
	if (func_6(uParam0->f_172, 50331648))
	{
		bParam1 = true;
	}
	else
	{
		func_72(uParam0);
	}
	if (bParam1)
	{
		func_22(uParam0);
	}
	else
	{
		func_49(uParam0, 10);
	}
}

void func_18(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_13 & 4096 != 0)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_37);
		uParam0->f_743 = BUILTIN::VDIST2(func_69(uParam0->f_174), Global_36);
		func_145(uParam0->f_174, bVar0, uParam0->f_743);
	}
	if (func_146(64, 1, 1))
	{
		iVar1 = func_56(0);
		if (func_57(iVar1))
		{
			func_25(uParam0);
			func_22(uParam0);
			return;
		}
	}
	if (func_147(uParam0) && func_148())
	{
		func_25(uParam0);
		func_22(uParam0);
	}
	else if (!func_79(&(uParam0->f_2585)) || IntToFloat(func_82(&(uParam0->f_2585))) > func_149(uParam0))
	{
		func_80(&(uParam0->f_2585), 1);
		if (func_150(uParam0))
		{
			func_49(uParam0, 11);
		}
	}
}

int func_19()
{
	return func_152(func_151());
}

void func_20()
{
	int iVar0;
	
	Global_40.f_9.f_21 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_40.f_9.f_21.f_1[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_40.f_9.f_21.f_6[iVar0] = 0f;
		iVar0++;
	}
}

void func_21()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_153(0);
	func_154(0);
	func_155(0);
	func_156(0);
	func_157(0);
	func_158(1f);
}

void func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	func_159(uParam0);
	func_160(uParam0->f_751);
	func_161(uParam0);
	func_162(uParam0);
	func_163(uParam0);
	func_164(uParam0->f_174);
	func_165(uParam0->f_174);
	func_166(2);
	iVar0 = 0;
	bVar2 = false;
	if (func_167(((*Global_1347702)[uParam0->f_174 /*49*/])->f_14, 1024))
	{
		bVar2 = true;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		func_168(iVar1, 1, -1082130432, 1, 1, bVar2, 0);
		iVar0++;
	}
	if (func_71(uParam0) == 2)
	{
		func_23(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43));
	}
	else
	{
		func_169(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43), 1, 0, 1);
	}
	((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = 0;
	func_170(uParam0);
	func_171(uParam0);
	if (func_71(uParam0) == 0)
	{
		func_172(uParam0->f_174);
	}
	if (func_71(uParam0) == 2 || func_71(uParam0) == 12)
	{
		func_173(uParam0->f_174);
	}
	if (func_174(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		func_175(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 0, 2);
	}
	func_102(uParam0, 0);
	if (func_6(uParam0->f_172, 8))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
	}
	func_2(&(uParam0->f_172), 8);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_35 != -1)
	{
		func_177(uParam0->f_174, 0);
	}
	if (func_71(uParam0) == 12)
	{
		func_115(uParam0->f_174, 0);
		if (uParam0->f_174 == 65 && func_56(0) == Global_1888801[16 /*35*/])
		{
			func_178(uParam0->f_174, 8192);
		}
	}
	func_179(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 32768);
	func_180(uParam0);
	func_48();
	func_181(0);
	func_181(1);
	func_182(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_23(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_24(var uParam0, int iParam1)
{
}

void func_25(var uParam0)
{
}

void func_26(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2))
		{
			if (ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2)))
			{
				TASK::TASK_CLEAR_LOOK_AT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2));
				if (func_183(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2), 0, 1);
				}
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2) != Global_35)
				{
					PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2), true);
				}
			}
		}
		iVar0++;
	}
}

int func_27(var uParam0)
{
	if (func_60(32768) && func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 8192))
	{
		return 1;
	}
	return 0;
}

void func_28(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 || iParam1);
}

bool func_29()
{
	return Global_1572864->f_13;
}

void func_30(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (iParam1 && iVar0 < 0)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

bool func_31(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_32(var uParam0, int iParam1)
{
	return (uParam0->f_173 && iParam1) != 0;
}

int func_33(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_21))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_21 = ITEMSET::CREATE_ITEMSET(bParam1);
	}
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_21))
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_22 = ITEMSET::CREATE_ITEMSET(bParam1);
	}
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 128 != 0)
	{
		return 1;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_45 = func_184(((*Global_1347702)[iParam0 /*49*/])->f_24, 1);
	func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 128);
	return 1;
}

void func_36(var uParam0)
{
	func_185(uParam0, 0);
	func_186(uParam0, 13);
	func_187(uParam0, 0);
	STREAMING::REQUEST_PTFX_ASSET();
}

void func_37(var uParam0)
{
	if (uParam0->f_748 == -1)
	{
		if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			uParam0->f_748 = 5;
		}
	}
	if (uParam0->f_748 > 0)
	{
		PED::_0xED9582B3DA8F02B4(uParam0->f_748);
	}
}

void func_38(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char cVar0[64];
	vector3 vVar8;
	
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2603))
	{
		if (uParam0->f_741 <= 0f)
		{
			return;
		}
		MemCopy(&cVar0, {((*Global_1347702)[uParam0->f_174 /*49*/])->f_3}, 8);
		StringConCat(&cVar0, ".VolAmbPopMoveRestrict", 64);
		vVar8 = { uParam0->f_741, uParam0->f_741, uParam0->f_741 };
		uParam0->f_2603 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_69(uParam0->f_174), 0f, 0f, 0f, vVar8, &cVar0);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2603))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_2603, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
	}
}

void func_39(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char cVar0[64];
	vector3 vVar8;
	
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2604))
	{
		if (uParam0->f_742 <= 0f)
		{
			return;
		}
		MemCopy(&cVar0, {((*Global_1347702)[uParam0->f_174 /*49*/])->f_3}, 8);
		StringConCat(&cVar0, ".VolAmbPopSpawnRestrict", 64);
		vVar8 = { uParam0->f_742, uParam0->f_742, uParam0->f_742 };
		uParam0->f_2604 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_69(uParam0->f_174), 0f, 0f, 0f, vVar8, &cVar0);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2604))
	{
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_2604, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
	}
}

void func_40(var uParam0)
{
	func_188(uParam0);
}

void func_41(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_189(&(uParam0->f_41), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_190(&(uParam0->f_41));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_41[iVar0 /*3*/] = iParam1;
	(uParam0->f_41[iVar0 /*3*/])->f_2 = ((uParam0->f_41[iVar0 /*3*/])->f_2 || iParam2);
	if (func_6(uParam0->f_172, 8192))
	{
		func_2(&(uParam0->f_172), 8192);
	}
}

void func_42(var uParam0)
{
	func_191(uParam0, 0);
	func_41(uParam0, -287202633, 7);
	func_41(uParam0, -917358175, 7);
	func_41(uParam0, iLocal_26, 7);
	func_41(uParam0, iLocal_75, 7);
	func_41(uParam0, -1216910965, 7);
	func_192(uParam0, "RCM_HNTN5_ASSIST", 2, -1, 7);
	func_192(uParam0, "RCM_HNTN5_ASSIST2", 2, -1, 7);
	func_41(uParam0, iLocal_79, 7);
	func_41(uParam0, 68512371, 7);
	func_41(uParam0, -1072715734, 7);
	func_41(uParam0, 918898309, 7);
	func_41(uParam0, 867074004, 7);
	func_41(uParam0, 1230724566, 7);
	func_41(uParam0, -1443906703, 7);
	func_41(uParam0, -1281909308, 7);
	func_41(uParam0, 989669666, 7);
}

void func_43(var uParam0, int iParam1)
{
	if (func_193(uParam0) == iParam1)
	{
		return;
	}
	func_194(uParam0, uParam0->f_168, iParam1);
	uParam0->f_168 = iParam1;
	func_2(&(uParam0->f_172), 8192);
}

int func_44(var uParam0)
{
	return 0;
}

int func_45(var uParam0)
{
	if (func_32(uParam0, 64))
	{
		return 0;
	}
	if ((func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_6(uParam0->f_172, 1024)) && !func_195(uParam0->f_174))
	{
		return 1;
	}
	return 0;
}

bool func_46(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_48()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_49(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_177)
	{
		func_94(uParam0, uParam0->f_177);
		uParam0->f_177 = iParam1;
	}
}

int func_50()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 1;
	}
	else if (Global_1935630->f_12)
	{
		return 1;
	}
	else if (PED::IS_PED_FATALLY_INJURED(Global_35))
	{
		return 1;
	}
	else if (ENTITY::GET_ENTITY_HEALTH(Global_35) <= 0)
	{
		return 1;
	}
	return 0;
}

void func_51(var uParam0, int iParam1)
{
	if (uParam0->f_175 != iParam1)
	{
		uParam0->f_175 = iParam1;
	}
}

int func_52()
{
	if ((CAM::IS_SCREEN_FADED_OUT() && !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
	{
		return 1;
	}
	return 0;
}

int func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch (func_196(&iVar0))
	{
		case 1:
			StringCopy(&(uParam0->f_2578), "", 24);
			func_17(uParam0, 0);
			return 1;
		
		case 3:
			if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3398))
			{
				uParam0->f_3398 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
			}
			if (((func_57(iVar0) && iVar0 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_15) && func_6(uParam0->f_172, 8)) && (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 134217728) || func_60(32768)))
			{
				iVar1 = 1;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3398, iVar1);
			break;
	}
	return 0;
}

void func_54(bool bParam0)
{
	func_197(bParam0);
	func_198(bParam0);
}

void func_55(var uParam0)
{
	if (func_6(uParam0->f_172, 8192))
	{
		return;
	}
	if (uParam0->f_168 == 0)
	{
		return;
	}
	if (func_199(uParam0, uParam0->f_168))
	{
		func_1(&(uParam0->f_172), 8192);
	}
}

int func_56(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

bool func_57(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_58()
{
	int iVar0;
	
	iVar0 = func_56(0);
	if ((func_57(iVar0) && func_110(iVar0) == 8) && func_31(((*Global_1347702)[func_111(iVar0) /*49*/])->f_12, 131072))
	{
		return 1;
	}
	return 0;
}

int func_59(int iParam0)
{
	if (func_200() != -1)
	{
		return 0;
	}
	if (!func_201(iParam0))
	{
		return 0;
	}
	return func_174(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

bool func_60(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

struct<4> func_61(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = iParam0;
	if (iVar0 == 0)
	{
		Var1 = { 2283.03f, 1197.32f, 107.72f };
		Var1.f_3 = 210.7332f;
	}
	else if (iVar0 == 1)
	{
		Var1 = { 2313.258f, 1142.231f, 95.3082f };
		Var1.f_3 = 112.0023f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { 2306.154f, 1102.225f, 93.4344f };
		Var1.f_3 = 146.7775f;
	}
	else if (iVar0 == 3)
	{
		Var1 = { 2355.571f, 1001.937f, 72.5401f };
		Var1.f_3 = 220.2287f;
	}
	else if (iVar0 == 4)
	{
		Var1 = { vLocal_135 };
		Var1.f_3 = 0f;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_202(*uParam0, uParam0->f_3);
}

void func_63(var uParam0, int iParam1)
{
	uParam0->f_173 = (uParam0->f_173 - (uParam0->f_173 && iParam1));
}

int func_64(var uParam0)
{
	if (func_203(uParam0, &(iLocal_76[0])))
	{
		StringCopy(&(uParam0->f_2578), "HNTN5_V_DEAD", 24);
		return 1;
	}
	if (func_203(uParam0, &(iLocal_76[1])))
	{
		StringCopy(&(uParam0->f_2578), "HNTN5_V_DEAD", 24);
		return 1;
	}
	if (iLocal_187 == 1 || iLocal_187 == 2)
	{
		if (!func_204(Global_35, iLocal_40, 1, 0) && !func_204(Global_35, iLocal_45, 1, 0))
		{
			if (func_205(Global_35, vLocal_31, 1) > 25f)
			{
				StringCopy(&(uParam0->f_2578), "HNTN5_F_1", 24);
				return 1;
			}
		}
	}
	if (iLocal_185 == 7 && iLocal_138)
	{
		if ((((!func_206(iLocal_113, 0) || !func_206(iLocal_114, 0)) || !func_206(iLocal_115, 0)) || !func_206(iLocal_116, 0)) || !func_206(iLocal_117, 0))
		{
			StringCopy(&(uParam0->f_2578), "HNTN5_V_DEAD", 24);
			return 1;
		}
		else if (!func_206(iLocal_25, 0))
		{
			StringCopy(&(uParam0->f_2578), "HNTN5_S_DEAD", 24);
			return 1;
		}
		else if (!func_206(iLocal_112, 0))
		{
			StringCopy(&(uParam0->f_2578), "HNTN5_H_DEAD", 24);
			return 1;
		}
		else if (iLocal_177 == 5)
		{
			StringCopy(&(uParam0->f_2578), "HNTN5_V_SPOK", 24);
			return 1;
		}
	}
	return 0;
}

int func_65(var uParam0)
{
	return 0;
}

void func_66()
{
	LAW::_0x15ABD5004CAD2D99(0);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), 1352191066, 3, 3, 1);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), 1171995096, 4, 0, -1);
}

void func_67(bool bParam0, bool bParam1)
{
	if (CAM::_0x450769C833D58844() && (!bParam0 || !CAM::IS_CINEMATIC_CAM_RENDERING()))
	{
		HUD::_0xC9CAEAEEC1256E54(-1679307491);
		if (!bParam1)
		{
			PAD::DISABLE_CONTROL_ACTION(2, 1287709438, false);
			if (Global_1935689->f_1 || &Global_1935689 == 1)
			{
				Global_1935689 = 2;
			}
		}
	}
}

void func_68(var uParam0)
{
}

Vector3 func_69(int iParam0)
{
	vector3 vVar0;
	
	if (!func_201(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_207(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

int func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_83(64))
	{
		return 0;
	}
	else if (func_90(&Global_1935630, 131072))
	{
		return 0;
	}
	else if (func_84())
	{
		return 0;
	}
	else if (Global_1310720->f_6)
	{
		return 0;
	}
	else if (func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
	{
		return 0;
	}
	if (func_146(0, 1, 0))
	{
		iVar0 = func_56(0);
		if (func_57(iVar0) && func_208(uParam0, iVar0))
		{
		}
		else
		{
			func_51(uParam0, 12);
			return 1;
		}
	}
	if (func_209(uParam0->f_174))
	{
		func_51(uParam0, 13);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 32 == 0)
	{
		if (uParam0->f_743 > (((*Global_1347702)[uParam0->f_174 /*49*/])->f_17 * ((*Global_1347702)[uParam0->f_174 /*49*/])->f_17))
		{
			func_51(uParam0, 2);
			return 1;
		}
	}
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 65536) && !func_195(uParam0->f_174))
	{
		func_210(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 16384);
		func_51(uParam0, 3);
		return 1;
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 8388608 != 0)
	{
		iVar1 = func_211(uParam0->f_174);
		if (iVar1 != -1)
		{
			if (func_212(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_178(uParam0->f_174, 32768);
				}
				func_51(uParam0, 5);
				return 1;
			}
			else if (func_213(iVar1))
			{
				if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
				{
					func_178(uParam0->f_174, 32768);
				}
				func_51(uParam0, 5);
				return 1;
			}
		}
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_45 != -1)
	{
		if (func_212(((*Global_1347702)[uParam0->f_174 /*49*/])->f_45))
		{
			func_178(uParam0->f_174, 2048);
			func_51(uParam0, 6);
			return 1;
		}
	}
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_46 != 0)
	{
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 268435456 == 0)
		{
			iVar2 = func_214();
			if (!func_215(iVar2, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_46))
			{
				func_51(uParam0, 7);
				return 1;
			}
		}
	}
	if (Global_1357549->f_1614 == 1)
	{
		func_51(uParam0, 8);
		return 1;
	}
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		if (func_216(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			func_178(uParam0->f_174, 16384);
			func_51(uParam0, 9);
			return 1;
		}
	}
	if (uParam0->f_172 & 256 != 0 && !func_217(uParam0->f_174, 1, 1, 0, 0))
	{
		func_51(uParam0, 10);
		return 1;
	}
	if (func_218(uParam0) || func_219(uParam0->f_174, uParam0->f_743))
	{
		func_178(uParam0->f_174, 1024);
		func_51(uParam0, 11);
		return 1;
	}
	if (!func_220(uParam0) && func_221(uParam0->f_743))
	{
		func_178(uParam0->f_174, 8192);
		func_51(uParam0, 11);
		return 1;
	}
	return 0;
}

int func_71(var uParam0)
{
	return uParam0->f_175;
}

void func_72(var uParam0)
{
	bool bVar0;
	
	func_222();
	func_223(uParam0);
	if (func_6(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (func_71(uParam0) == 1)
		{
			bVar0 = false;
		}
		else if (func_32(uParam0, 128) && func_29())
		{
			func_156(0);
		}
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		AUDIO::STOP_AUDIO_SCENES();
		if (func_71(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			func_124();
			if (func_71(uParam0) == 1)
			{
				func_224(uParam0->f_174, 1);
			}
		}
		if (func_6(uParam0->f_172, 67108864))
		{
			func_54(1);
			func_2(&(uParam0->f_172), 67108864);
		}
		func_225(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
			func_226(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(-2012097661, true);
		}
	}
	if (func_71(uParam0) == 3)
	{
		func_227(uParam0->f_174);
	}
	else if (func_71(uParam0) == 2)
	{
	}
	else if (!func_167(((*Global_1347702)[uParam0->f_174 /*49*/])->f_14, 2))
	{
		func_115(uParam0->f_174, 0);
	}
	func_173(uParam0->f_174);
	if (func_71(uParam0) == 0)
	{
		func_172(uParam0->f_174);
		func_228(uParam0);
	}
	func_161(uParam0);
	func_229(0);
	func_102(uParam0, 0);
	func_43(uParam0, 4);
	func_2(&(uParam0->f_172), 8);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 1024);
	func_176(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
	func_47(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 4);
	func_230(&(uParam0->f_2585));
	func_231(uParam0);
}

void func_73(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	vVar0 = { func_69(uParam0->f_174) };
	fVar3 = BUILTIN::VDIST2(Global_36, vVar0);
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_37))
	{
		if (uParam0->f_177 == 4 || uParam0->f_177 == 3)
		{
			fVar4 = func_232(uParam0->f_174);
			if ((((*Global_1347702)[uParam0->f_174 /*49*/])->f_36 != -1822497728 || func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 32)) || fVar3 < (fVar4 * fVar4))
			{
				func_233(uParam0->f_174, vVar0, 1, 0);
			}
		}
	}
	else
	{
		func_234(uParam0->f_174, fVar3);
		func_235(uParam0->f_174, vVar0, fVar3);
		func_236(uParam0->f_174);
		func_237(uParam0->f_174);
	}
}

void func_74(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	
	if (func_32(uParam0, 64))
	{
		return;
	}
	if (func_6(uParam0->f_172, 256))
	{
		if ((func_6(uParam0->f_172, 4194304) && uParam0->f_177 == 4) && !func_45(uParam0))
		{
			func_2(&(uParam0->f_172), 256);
			func_160(uParam0->f_751);
			func_238(uParam0);
		}
		else
		{
			func_239(uParam0);
		}
	}
	else if (uParam0->f_177 == 4)
	{
		if (func_45(uParam0))
		{
			if (func_6(uParam0->f_172, 16))
			{
				cVar0 = { func_240() };
				Var8 = { func_241(&(uParam0->f_206)) };
				if (!MISC::ARE_STRINGS_EQUAL(&Var8, &cVar0))
				{
					func_242(&(uParam0->f_206));
					func_243(&(uParam0->f_206), &cVar0);
				}
			}
			func_1(&(uParam0->f_172), 256);
		}
	}
}

void func_75(var uParam0)
{
	bool bVar0;
	bool bVar1;
	
	if (!func_6(uParam0->f_172, 16))
	{
		return;
	}
	if (func_244(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { func_69(uParam0->f_174) };
	}
	bVar0 = func_245(uParam0);
	if (!bVar0)
	{
		if (func_6(uParam0->f_172, 8))
		{
			if (uParam0->f_206.f_338 == 15f)
			{
				uParam0->f_206.f_338 = 50f;
			}
			if (uParam0->f_206.f_339 == 20f)
			{
				uParam0->f_206.f_339 = 75f;
			}
		}
		else
		{
			if (uParam0->f_206.f_338 > 15f)
			{
				uParam0->f_206.f_338 = 15f;
			}
			if (uParam0->f_206.f_339 > 20f)
			{
				uParam0->f_206.f_339 = 20f;
			}
		}
		if (uParam0->f_206.f_338 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= uParam0->f_206.f_338)
		{
		}
	}
	if (func_100(&(uParam0->f_2575)))
	{
		bVar1 = true;
		if (uParam0->f_177 == 4 || uParam0->f_176 == 4)
		{
			if (func_27(uParam0))
			{
				bVar1 = false;
			}
			else if (func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
			{
				bVar1 = false;
			}
		}
		if (func_246(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!func_6(uParam0->f_172, 1))
			{
				func_247(uParam0);
				func_1(&(uParam0->f_172), 1);
			}
		}
		else if (func_6(uParam0->f_172, 1))
		{
			func_2(&(uParam0->f_172), 1);
		}
	}
	else if (!func_6(uParam0->f_172, 1))
	{
		func_1(&(uParam0->f_172), 1);
	}
}

int func_76(var uParam0)
{
	return uParam0->f_169;
}

void func_77(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!func_6(uParam0->f_172, 32))
	{
		return;
	}
	if (uParam0->f_2605.f_785 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2605.f_785)
		{
			if (func_248(uParam0->f_2605[iVar0 /*16*/], 1048576))
			{
				if (func_249(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_250(uParam0->f_2605[iVar0 /*16*/]);
				}
				else if (func_251(uParam0, uParam0->f_2605[iVar0 /*16*/], iParam1))
				{
					func_252(uParam0->f_2605[iVar0 /*16*/]);
				}
			}
			iVar0++;
		}
	}
	if (uParam0->f_2605.f_786 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2605.f_786)
		{
			if (func_248(uParam0->f_2605.f_241[iVar0 /*16*/], 1048576))
			{
				if (func_253(uParam0, uParam0->f_2605.f_241[iVar0 /*16*/], iParam1))
				{
					func_254(uParam0->f_2605.f_241[iVar0 /*16*/]);
				}
			}
			iVar0++;
		}
	}
	if (uParam0->f_2605.f_787 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2605.f_787)
		{
			if (func_248(uParam0->f_2605.f_482[iVar0 /*16*/], 1048576))
			{
				if (func_253(uParam0, uParam0->f_2605.f_482[iVar0 /*16*/], iParam1))
				{
					if (func_255(uParam0->f_2605.f_482[iVar0 /*16*/], 0))
					{
						if (func_248(uParam0->f_2605.f_482[iVar0 /*16*/], 4))
						{
							func_256(&(uParam0->f_2605));
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_78(var uParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "RCM_", 64);
	StringConCat(&cVar0, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_1), 64);
	if (func_257(&(uParam0->f_2605), &cVar0, 1, -1, 0, 1))
	{
		func_1(&(uParam0->f_172), 32);
		return 1;
	}
	return 0;
}

bool func_79(var uParam0)
{
	return func_258(*uParam0, 1);
}

void func_80(var uParam0, int iParam1)
{
	if (iParam1 || !func_79(uParam0))
	{
		func_259(uParam0);
	}
}

void func_81(var uParam0)
{
}

int func_82(var uParam0)
{
	if (!func_79(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_260(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_261() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_83(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_84()
{
	return func_90(&Global_1935630, 4096);
}

int func_85(var uParam0)
{
	if (func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 64))
	{
		return 1;
	}
	if (func_262(uParam0) && func_263(uParam0))
	{
		func_47(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13), 64);
		return 1;
	}
	return 0;
}

void func_86(var uParam0)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;
	
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 67108864 == 0)
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_264(uParam0->f_174), func_265(uParam0->f_174)))
		{
			func_266(uParam0->f_174, 128);
		}
		else
		{
			func_121(uParam0->f_174, 128);
		}
		if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_12 & 512 != 0)
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_264(uParam0->f_174), func_265(uParam0->f_174)))
			{
				func_267(uParam0->f_174);
				func_268(uParam0->f_174);
			}
		}
		else
		{
			func_269(Global_1347702[uParam0->f_174 /*49*/]);
			func_267(uParam0->f_174);
		}
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(func_264(uParam0->f_174), func_265(uParam0->f_174)))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_264(uParam0->f_174), func_265(uParam0->f_174), 0, "");
		}
	}
	if (!func_174(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
	{
		if (!func_270(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15))
		{
			func_271(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1);
		}
		func_272(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, 1, 1);
		func_273(Global_1935630, 8);
	}
	bVar0 = true;
	if (func_32(uParam0, 64))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_115(uParam0->f_174, 0);
	}
	func_274(uParam0);
	func_1(&(uParam0->f_172), 8);
	if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 8192))
	{
		func_54(0);
		LAW::_0x55F37F5F3F2475E1();
		LAW::_0x292AD61A33A7A485();
		func_275(1, 16384, 1);
		func_1(&(uParam0->f_172), 67108864);
	}
	func_119(uParam0, 1, 0);
	func_225(1);
	func_229(1);
	func_276();
	func_163(uParam0);
	func_164(uParam0->f_174);
	func_165(uParam0->f_174);
	func_277(uParam0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	func_278(1);
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(-2012097661, false);
	}
	if (func_45(uParam0))
	{
		func_1(&(uParam0->f_172), 256);
	}
	if (func_6(uParam0->f_172, 8388608) || !func_6(uParam0->f_172, 256))
	{
		func_43(uParam0, 2);
	}
	MISC::_0x1096603B519C905F(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
	HUD::SET_MISSION_NAME(true, &(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3));
	AUDIO::_0xA6A3A3F96B8B030E();
	AUDIO::_0x33D51F801CB16E4F();
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	func_279(uParam0);
	if (uParam0->f_174 != func_19())
	{
		if (!func_60(32768))
		{
			Var1 = { func_61(0) };
			if (!func_62(&Var1))
			{
				func_28(uParam0, 32);
			}
		}
	}
	iVar5 = 0;
	if (func_280(uParam0))
	{
		iVar5 = func_95(uParam0);
	}
	TELEMETRY::_0x15B0CC1B36F1DE29(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_3), 0, iVar5, func_32(uParam0, 64));
	if (uParam0->f_174 != func_19())
	{
		func_281(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

void func_87(var uParam0)
{
	func_282(uParam0, 0);
}

float func_88(var uParam0)
{
	return 1000f;
}

int func_89(var uParam0)
{
	return 3;
}

bool func_90(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_91(var uParam0)
{
}

int func_92(var uParam0)
{
	bool bVar0;
	
	if (func_27(uParam0))
	{
		return 1;
	}
	bVar0 = false;
	if (func_6(uParam0->f_172, 4096) || func_58())
	{
		bVar0 = true;
	}
	if (func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024))
	{
		if (!bVar0)
		{
			return 1;
		}
	}
	if (func_6(uParam0->f_172, 262144) && !func_6(uParam0->f_172, 256))
	{
		func_106(uParam0, bVar0);
		if (func_6(uParam0->f_172, 524288))
		{
			return 1;
		}
		else if (func_6(uParam0->f_172, 1048576))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (bVar0)
		{
			return 0;
		}
		if (uParam0->f_171 != 0 || func_283(uParam0))
		{
			if (func_284(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_93(var uParam0)
{
	return 7;
}

void func_94(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_176)
	{
		uParam0->f_176 = iParam1;
	}
}

int func_95(var uParam0)
{
	if (uParam0->f_174 == func_19())
	{
		return func_285();
	}
	return -1;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		if (func_286(uParam0))
		{
			func_281(uParam0, func_61(0), func_61(1), 0, 1, 0);
			return 7;
		}
		return 2;
	}
	else if (iVar0 == 1)
	{
		if (func_287(uParam0))
		{
			if (!func_288(-654032793, 1, 0))
			{
				func_289(-654032793, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
			func_281(uParam0, func_61(1), func_61(2), 1, 2, 0);
			return 7;
		}
		return 2;
	}
	else if (iVar0 == 2)
	{
		if (func_287(uParam0))
		{
			if (!func_288(-654032793, 1, 0))
			{
				func_289(-654032793, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			func_281(uParam0, func_61(2), func_61(3), 2, 3, 0);
			iLocal_63 = 1;
			iLocal_81 = 1;
			return 7;
		}
		return 2;
	}
	else if (iVar0 == 3)
	{
		if (func_290(uParam0))
		{
			if (!func_288(-654032793, 1, 0))
			{
				func_289(-654032793, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			func_281(uParam0, func_61(3), func_61(4), 3, 4, 0);
			return 7;
		}
		return 2;
	}
	else if (iVar0 == 4)
	{
		if (func_291(uParam0))
		{
			if (!func_288(-654032793, 1, 0))
			{
				func_289(-654032793, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			CAM::DO_SCREEN_FADE_IN(500);
			return 5;
		}
		return 2;
	}
	return 7;
}

void func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (!func_146(0, 0, 1) || iParam0)
	{
		iVar0 = func_292();
		iVar1 = func_293(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = func_294(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = func_294(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnWithHonor");
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 1, fVar3);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 2, fVar2);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 3, fVar4);
	}
	else
	{
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
	}
}

int func_98(var uParam0)
{
	if (func_46(((*Global_1347702)[uParam0->f_174 /*49*/])->f_13, 1024) && uParam0->f_176 == 4)
	{
		if (!func_6(uParam0->f_172, 1))
		{
			return 0;
		}
		if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		{
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			return 0;
		}
		MISC::_0xA565FAC215CBC77D();
		return 1;
	}
	if (func_6(uParam0->f_172, 256))
	{
		if (!func_295(uParam0))
		{
			if ((func_6(uParam0->f_172, 8192) && ANIMSCENE::_0x25557E324489393C(uParam0->f_751)) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_751, 0))
			{
				if (func_6(uParam0->f_172, 8388608) || func_85(uParam0))
				{
					func_43(uParam0, 2);
					if (!func_6(uParam0->f_172, 16))
					{
						func_87(uParam0);
					}
				}
			}
			return 0;
		}
	}
	else if (func_6(uParam0->f_172, 262144) && !func_6(uParam0->f_172, 256))
	{
		func_106(uParam0, 0);
		if (!func_6(uParam0->f_172, 1048576))
		{
			return 0;
		}
	}
	else
	{
		func_296();
		func_297(uParam0);
		if (!func_298(uParam0))
		{
			return 0;
		}
	}
	if (!func_6(uParam0->f_172, 1))
	{
	}
	return 1;
}

void func_99(var uParam0)
{
	if (func_6(uParam0->f_172, 2048))
	{
		return;
	}
	if (func_100(&(uParam0->f_2575)))
	{
		func_299(&(uParam0->f_206), &(uParam0->f_753));
		if (uParam0->f_176 == 4 && !func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 512))
		{
			func_300(uParam0, 0);
		}
	}
	if (func_6(uParam0->f_172, 1024) && uParam0->f_176 == 4)
	{
		func_281(uParam0, func_61(0), func_61(1), 0, 1, 1);
	}
	func_2(&(uParam0->f_172), 512);
	if (uParam0->f_176 == 4)
	{
		if (func_301(Global_35))
		{
			if (func_302())
			{
				func_303(42, 1);
			}
		}
	}
	MISC::_0xA565FAC215CBC77D();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	func_1(&(uParam0->f_172), 2048);
}

int func_100(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return 1;
}

int func_101(var uParam0)
{
	struct<4> Var0;
	
	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return 1;
	}
	return func_304(Var0, &(uParam0->f_206), uParam0);
}

void func_102(var uParam0, bool bParam1)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_206.f_348))
	{
		if (!ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_206.f_348, 0))
		{
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_206.f_348, 0))
			{
			}
			else if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_206.f_348, 1, 0))
			{
			}
			else if (ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_206.f_348, 1))
			{
			}
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_206.f_348);
		}
	}
	if (bParam1)
	{
		CAM::STOP_GAMEPLAY_HINT(true);
	}
	func_2(&(uParam0->f_172), 1);
	func_2(&(uParam0->f_172), 16);
	func_2(&(uParam0->f_172), 2048);
	if (func_100(&(uParam0->f_2575)))
	{
		func_305(&(uParam0->f_206));
	}
	func_306(&(uParam0->f_206));
	func_307(uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_186)
	{
		case 0:
			func_289(-654032793, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			if (func_308(uParam0) != 1)
			{
				func_309(uParam0, 1);
			}
			func_310(&iLocal_69);
			func_311(3);
			func_126(uParam0, "HNTN5_OBJ1", 1, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
			break;
		
		case 1:
			if (func_288(-654032793, 1, 0))
			{
				func_312(-654032793, 1, 0, -1387038764, 0);
			}
			func_169(&iLocal_112, 1, 0, 1);
			func_169(&iLocal_113, 1, 0, 1);
			func_169(&iLocal_114, 1, 0, 1);
			func_169(&iLocal_115, 1, 0, 1);
			func_169(&iLocal_116, 1, 0, 1);
			func_169(&iLocal_117, 1, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_119))
			{
				ENTITY::_0x203BEFFDBE12E96A(iLocal_119, 2533.35f, 784.52f, 74.28f, 144.19f, 1, false, 1);
			}
			func_310(&iLocal_120);
			if (!TASK::_0x841475AC96E794D1(iLocal_124))
			{
				iLocal_124 = TASK::CREATE_SCENARIO_POINT(-1206647372, 2534.141f, 784.906f, 74.123f, 26.615f, 0f, 0, 0);
			}
			ENTITY::SET_ENTITY_COORDS(iLocal_25, vLocal_132, true, false, true, true);
			TASK::CLEAR_PED_TASKS(iLocal_25, 1, 0);
			func_313(uParam0, iLocal_25, "HNTN_Shaman", 1);
			func_259(&uLocal_128);
			func_314(25, 1);
			return 8;
	}
	return 7;
}

int func_104(var uParam0)
{
	if (func_6(uParam0->f_172, 256) && !func_6(uParam0->f_172, 1024))
	{
		if (!func_295(uParam0))
		{
			if (func_6(uParam0->f_172, 512) && func_6(uParam0->f_172, 8192))
			{
				if (func_85(uParam0))
				{
					if (!func_6(uParam0->f_172, 16))
					{
						func_87(uParam0);
					}
				}
			}
			return 1;
		}
		else
		{
			if (func_6(uParam0->f_172, 1024) && uParam0->f_176 == 4)
			{
				func_281(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return 0;
		}
	}
	return 0;
}

int func_105(var uParam0)
{
	return 0;
}

void func_106(var uParam0, bool bParam1)
{
	if (!func_6(uParam0->f_172, 262144))
	{
		return;
	}
	if (func_6(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		func_2(&(uParam0->f_172), 262144);
		return;
	}
	if (!func_6(uParam0->f_172, 1048576))
	{
		if (func_315(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			func_1(&(uParam0->f_172), 1048576);
		}
		if (!func_6(uParam0->f_172, 524288))
		{
			if (func_316(&(uParam0->f_753)))
			{
				func_1(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_107(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_25))
	{
	}
	func_317(uParam0);
	func_318();
	switch (iLocal_185)
	{
		case 0:
			func_319(uParam0);
			func_320();
			if (iLocal_179 == 2)
			{
				return 7;
			}
			func_321();
			func_259(&uLocal_84);
			func_311(1);
			func_282(uParam0, 0);
			func_281(uParam0, func_61(0), func_61(1), 0, 1, 0);
			iLocal_185 = 1;
			break;
		
		case 1:
			func_319(uParam0);
			if (func_204(Global_35, iLocal_41, 1, 0))
			{
				if (func_308(uParam0) != 0)
				{
					func_309(uParam0, 0);
				}
			}
			if (!iLocal_176)
			{
				if (!func_204(Global_35, iLocal_40, 1, 0))
				{
					if (func_322(1, 0, "pl_leadout"))
					{
						iLocal_176 = 1;
					}
				}
			}
			func_323();
			func_324();
			func_325(uParam0);
			func_326();
			func_327(uParam0);
			func_328();
			if (func_205(Global_35, 2326.07f, 1143.91f, 95.35f, 1) < 5f || func_329())
			{
				iLocal_185 = 2;
				func_330(&(uParam0->f_206), 65536);
				func_331(&(uParam0->f_206), Global_35, 0, "s_interact_lantern02x", 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_70))
				{
					func_332(uParam0, iLocal_70, "p_crate03d", 0, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
				{
					func_332(uParam0, iLocal_69, "s_rc_poisonedwater01x", 0, 0, 0);
				}
				func_333(uParam0, iLocal_25, 0, 0, 0, 0);
				return 5;
			}
			else if (!func_204(Global_35, iLocal_40, 1, 0) && !func_204(Global_35, iLocal_45, 1, 0))
			{
				if (func_205(Global_35, vLocal_31, 1) > 10f)
				{
					func_311(2);
					iLocal_185 = 3;
				}
			}
			break;
		
		case 3:
			if ((func_204(Global_35, iLocal_40, 1, 0) || func_204(Global_35, iLocal_45, 1, 0)) || func_205(Global_35, vLocal_31, 1) < 3f)
			{
				func_311(1);
				iLocal_185 = 1;
			}
			break;
		
		case 2:
			func_326();
			if (func_79(&uLocal_88) && func_334(&uLocal_88) < 1f)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(Global_35, 2f);
			}
			if (func_335())
			{
				func_336();
				func_281(uParam0, func_61(1), func_61(2), 1, 2, 0);
				iLocal_185 = 4;
			}
			break;
		
		case 4:
			if (CAM::IS_SCREEN_FADED_IN())
			{
				func_311(4);
				func_259(&uLocal_84);
				func_259(&uLocal_165);
				iLocal_185 = 5;
			}
			break;
		
		case 5:
			func_326();
			if (!func_337("HNTN5_OBJ2", 1))
			{
				if (!iLocal_164)
				{
					func_338("POISONEDWEL5_HLP1", 10000, 0, 0, 0, 1);
					if (!func_339() && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						func_340(Global_35, "COUGH_SICK_SMALL", 1615046335, 0, 1, 0, 0, 1);
					}
					iLocal_164 = 1;
				}
			}
			func_341(uParam0);
			func_319(uParam0);
			if (!iLocal_63)
			{
				func_342();
			}
			else if (iLocal_162)
			{
				CAM::_0x4285804FD65D8066("DRUNK_SHAKE", 0);
				iLocal_162 = 0;
			}
			func_343(uParam0);
			func_344();
			func_345(uParam0);
			func_346();
			func_327(uParam0);
			if (func_308(uParam0) != 2)
			{
				func_309(uParam0, 2);
			}
			if (iLocal_63 == 0)
			{
				if (func_204(Global_35, iLocal_60, 1, 0))
				{
					func_281(uParam0, func_61(2), func_61(3), 2, 3, 0);
					iLocal_63 = 1;
				}
			}
			else if (func_204(Global_35, iLocal_61, 1, 0))
			{
				iLocal_63 = 0;
			}
			if (!iLocal_144)
			{
				if (func_205(Global_35, vLocal_34, 0) < 50f)
				{
					func_347();
				}
			}
			if (func_205(Global_35, vLocal_34, 0) < 14f)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
				if (func_322(3, 0, "pl_WalkThrough_Falls") && !iLocal_104)
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(&(iLocal_180[3]), "pl_WalkThrough_Falls"))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(&(iLocal_180[3]), "pl_WalkThrough_Falls");
					}
					func_348();
					iLocal_104 = 1;
				}
				if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(&(iLocal_180[2]), 0))
				{
					func_349();
				}
				if (func_205(Global_35, vLocal_34, 0) < 5f)
				{
					CAM::_0x632BE8D84846FA56();
					if (func_350())
					{
						if (func_351(Global_35, &(iLocal_180[3]), "JOHN", "pl_WalkThrough_Falls", &iLocal_103, 1065353216, 0, 1, 1))
						{
							iLocal_185 = 6;
						}
					}
					else if (func_351(Global_35, &(iLocal_180[3]), "ARTHUR", "pl_WalkThrough_Falls", &iLocal_103, 1065353216, 0, 1, 1))
					{
						iLocal_185 = 6;
					}
				}
			}
			break;
		
		case 6:
			if (func_308(uParam0) != 3)
			{
				func_309(uParam0, 3);
			}
			CAM::_0x632BE8D84846FA56();
			CAM::_0x05AB44D906738426();
			if (func_352())
			{
				func_125(Global_1935630, 262144);
				if (iLocal_91 && !iLocal_92)
				{
					PED::_0x8B3CB08158E98481(Global_35, 0);
				}
				func_353();
				func_281(uParam0, func_61(3), func_61(4), 3, 4, 0);
				iLocal_185 = 7;
			}
			break;
		
		case 7:
			if (func_354(82) && func_355(82))
			{
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				PLAYER::_0x16752DAA7E6D3F72(PLAYER::PLAYER_ID());
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_140) && CAM::IS_SCREEN_FADED_IN())
			{
				func_126(uParam0, "HNTN5_OBJ4", 0, 7500, 0, 1, -1082130432, 0, 0, -1, -1, 0);
				iLocal_140 = func_356(408396114, vLocal_135, 30f, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_140, "HNTN5_BLIP_B");
			}
			if (!iLocal_139)
			{
				if (func_357(uParam0))
				{
					func_282(uParam0, 1);
					iLocal_139 = 1;
				}
			}
			else if (func_358(uParam0))
			{
				func_359(&iLocal_140);
				if (func_308(uParam0) != 5)
				{
					func_309(uParam0, 5);
				}
				return 5;
			}
			break;
	}
	return 7;
}

bool func_108(int iParam0)
{
	return func_360(iParam0) == 0;
}

int func_109(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_110(int iParam0)
{
	if (!func_57(iParam0))
	{
		return 0;
	}
	return func_362(func_361(iParam0));
}

int func_111(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_363(func_361(iParam0));
}

int func_112(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_364(func_361(iParam0));
}

void func_113()
{
	struct<2> Var0;
	
	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(Global_1879514, &Var0, 20);
}

void func_114(char* sParam0, int iParam1)
{
	StringCopy(&(Global_1879514->f_2), sParam0, 32);
	Global_1879514->f_8 = iParam1;
}

void func_115(int iParam0, int iParam1)
{
	if (!func_201(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		func_365(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
		func_366(iParam0);
		if ((!func_216(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43890) || iParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			_NAMESPACE71::_0x2F901291EF177B02(((*Global_1347702)[iParam0 /*49*/])->f_40, 0);
			func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
			func_359(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		else
		{
			func_178(iParam0, 16384);
			func_367(iParam0, 1, func_69(iParam0));
		}
	}
}

void func_116(var uParam0)
{
	func_368(1, &(uParam0->f_2605.f_482));
}

int func_117()
{
	return Global_1894899->f_2;
}

void func_118(int iParam0, bool bParam1)
{
	bool bVar0;
	
	if (!func_354(iParam0))
	{
		return;
	}
	bVar0 = func_369(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_370(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_372(iParam0, func_371());
			func_373(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_374(iParam0, 67108864);
		func_372(iParam0, -15);
	}
	func_375(iParam0);
}

void func_119(var uParam0, int iParam1, int iParam2)
{
	if (func_376(0))
	{
		if (func_377(0))
		{
			func_378(0);
		}
	}
	if (func_376(1))
	{
		if (func_377(1))
		{
			func_378(1);
		}
	}
}

bool func_120(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_121(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_122(var uParam0)
{
}

void func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_110(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_111(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_201(iVar1))
			{
				if (func_120(iVar1, 4))
				{
					func_224(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_379(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_111(iParam0);
		if (iVar3 == 59)
		{
			func_379(1);
		}
		else if (iVar3 == 61)
		{
			func_379(0);
		}
		else if (iVar3 == 83)
		{
			func_379(0);
		}
	}
}

void func_124()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_201(iVar0))
		{
			if (func_120(iVar0, 4))
			{
				if (func_120(iVar0, 16))
				{
					func_380(iVar0, 1);
				}
				if (func_120(iVar0, 8))
				{
					func_381(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_125(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_126(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, int iParam11)
{
	char* sVar0;
	
	func_382(uParam0->f_174, sParam1, bParam5, fParam6, 0, 0, -1, -1, 0);
	if (iParam2 || !func_383(sParam1))
	{
		func_384(sParam1, iParam3, bParam4, bParam5, sParam7, sParam8, sParam9, sParam10, iParam11);
		sVar0 = UILOG::_UILOG_GET_CACHED_OBJECTIVE();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && MISC::ARE_STRINGS_EQUAL(sVar0, sParam1))
		{
			UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
		}
	}
}

var func_127()
{
	return Global_1572864->f_15;
}

void func_128(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	var uVar0;
	
	if (!func_201(iParam0))
	{
		return;
	}
	if (func_385())
	{
		func_266(iParam0, 1);
	}
	if (iParam0 == 85)
	{
		MISC::_0xCC3EDC5614B03F61(18);
	}
	else if (iParam0 == 86)
	{
		MISC::_0xCC3EDC5614B03F61(19);
	}
	else if (iParam0 == 87)
	{
		MISC::_0xCC3EDC5614B03F61(20);
	}
	else if (iParam0 == 135)
	{
		MISC::_0xCC3EDC5614B03F61(73);
	}
	else if (iParam0 == 20)
	{
		MISC::_0xCC3EDC5614B03F61(6);
	}
	else if (iParam0 == 19)
	{
		MISC::_0xCC3EDC5614B03F61(7);
	}
	else if (iParam0 == 12)
	{
		MISC::_0xCC3EDC5614B03F61(10);
	}
	else if (iParam0 == 16)
	{
		MISC::_0xCC3EDC5614B03F61(11);
	}
	else if (iParam0 == 17)
	{
		MISC::_0xCC3EDC5614B03F61(13);
	}
	else if (iParam0 == 18)
	{
		MISC::_0xCC3EDC5614B03F61(14);
	}
	else if (iParam0 == 14)
	{
		MISC::_0xCC3EDC5614B03F61(15);
	}
	if (iParam0 == 95)
	{
		if (!func_60(32768))
		{
			if (STATS::CHAL_IS_GOAL_ACTIVE(-816321659, -1044347982))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(-1718529554, 1);
			}
		}
	}
	else if (iParam0 == 102)
	{
		if (!func_385())
		{
			((*Global_1347702)[iParam0 /*49*/])->f_35 = 104;
			((*Global_1347702)[104 /*49*/])->f_48 = ((*Global_1347702)[iParam0 /*49*/])->f_15;
		}
	}
	func_386(iParam0, 0, iParam3);
	if (func_201(((*Global_1347702)[iParam0 /*49*/])->f_35))
	{
		func_387(((*Global_1347702)[iParam0 /*49*/])->f_35);
		if (iParam1 == 1)
		{
			func_388(((*Global_1347702)[iParam0 /*49*/])->f_35, 0);
			if (func_389(iParam0))
			{
				((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_43 = ((*Global_1347702)[iParam0 /*49*/])->f_43;
			}
		}
	}
	else
	{
		func_390();
	}
	if (!func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1) && !func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 33554432))
	{
		if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 262144))
		{
			if (bParam5)
			{
				func_391(iParam0);
			}
			bParam5 = false;
			uVar0 = func_392(((*Global_1347702)[iParam0 /*49*/])->f_15);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uVar0), 2);
			}
			func_179(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
		}
	}
	if (bParam2 == 1)
	{
		bParam2 = func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 4);
	}
	if (!func_60(32768))
	{
		func_393(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_394(((*Global_1347702)[iParam0 /*49*/])->f_15, bParam6);
	}
	func_395(iParam0);
}

int func_129(int iParam0)
{
	if (!func_201(iParam0))
	{
		return 0;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_15;
}

int func_130(int iParam0)
{
	iParam0 = func_396(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

void func_131()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	
	func_137(4112);
	func_136(6);
	vVar2 = { func_397(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_398(vVar2, uVar1, uVar0, 0);
	func_399(vVar2);
	Global_40.f_9.f_15 = func_184(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_132(int iParam0)
{
	if (func_200() != -1)
	{
		return;
	}
	func_137(32);
	if (iParam0 == 0)
	{
		func_137(16);
	}
	else if (iParam0 == 1)
	{
		func_137(8);
	}
	func_400();
	Global_43888 = 1;
}

void func_133(int iParam0, bool bParam1)
{
	if (func_200() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_60(32768))
	{
		return;
	}
	if (!func_60(32768))
	{
		func_401(1, bParam1);
	}
	MISC::_0x279B0696DA4657EB(iParam0);
	MISC::_COPY_MEMORY((*Global_2621440)[iParam0 /*12065*/], &Global_40, 12065);
	MISC::_COPY_MEMORY((*Global_2645571)[iParam0 /*5398*/], &Global_12105, 5398);
	MISC::_COPY_MEMORY((*Global_2656368)[iParam0 /*3206*/], &Global_17503, 3206);
	MISC::_COPY_MEMORY((*Global_2662781)[iParam0 /*2408*/], &Global_20709, 2408);
	MISC::_COPY_MEMORY((*Global_2667598)[iParam0 /*1769*/], &Global_23117, 1769);
	MISC::_COPY_MEMORY((*Global_2671137)[iParam0 /*1909*/], &Global_24886, 1909);
	MISC::_COPY_MEMORY((*Global_2674956)[iParam0 /*777*/], &Global_26795, 777);
	MISC::_COPY_MEMORY((*Global_2676511)[iParam0 /*4501*/], &Global_27572, 4501);
	MISC::_COPY_MEMORY((*Global_2685514)[iParam0 /*4234*/], &Global_32073, 4234);
	if (func_60(32768))
	{
		((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14 = func_371();
	}
}

void func_134(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_135()
{
	struct<10> Var0;
	struct<16> Var10;
	
	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_402(Var10, 0);
}

void func_136(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

void func_137(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_138(var uParam0)
{
}

void func_139(bool bParam0, bool bParam1)
{
	if (((WEAPON::IS_WEAPON_VALID(Global_1935630->f_44) && WEAPON::_0x6AD66548840472E5(Global_1935630->f_44)) && PED::GET_PED_RESET_FLAG(Global_35, 0)) && CAM::_0xA24C1D341C6E0D53(1, 1, 1))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == -160924582 && PED::GET_PED_RESET_FLAG(Global_35, 0))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == -1016714371)
	{
		func_403(0);
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (bParam0)
	{
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
	}
	if (bParam1)
	{
		CAM::_0x9A92C06ACBAF9731();
	}
}

int func_140(var uParam0)
{
	if (func_60(32768))
	{
		return 0;
	}
	if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 134217728))
	{
		return 1;
	}
	return 0;
}

void func_141(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_404(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_405(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_405(&(Global_1347343->f_11), 16384);
	}
	if (func_406() >= 2)
	{
		if (!func_404(Global_1347343->f_11, 16384))
		{
			func_405(&(Global_1347343->f_11), 8);
		}
		func_158(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_273(Global_1935630, 2048);
	func_407(bParam5);
}

bool func_142(var uParam0)
{
	return uParam0->f_781;
}

void func_143(var uParam0)
{
	func_408(1, &(uParam0->f_2605.f_482));
}

void func_144(int iParam0)
{
	int iVar0;
	
	if (!func_57(iParam0))
	{
		return;
	}
	if (iParam0 != func_56(0))
	{
		return;
	}
	if (func_109(iParam0) == 0)
	{
	}
	iVar0 = func_110(iParam0);
	if (func_409(iParam0) == 3)
	{
		if (func_109(iParam0) == 0)
		{
		}
		else if (STATS::_0x01F4D242765C6B24(func_109(iParam0)))
		{
			if (func_110(iParam0) != 1 && func_110(iParam0) != 8)
			{
				func_410(func_110(iParam0), func_109(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_411(iParam0);
	func_198(1);
	func_412(0);
	func_413(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_414(1);
			func_415(15, 0, 1);
			break;
		
		case 4:
			func_415(10, 0, 1);
			break;
		
		case 8:
			func_415(10, 0, 1);
			break;
		
		case 9:
			func_415(10, 0, 1);
			break;
		
		case 2:
			func_415(10, 0, 1);
			break;
		
		case 6:
			func_415(10, 0, 1);
			break;
		
		case 5:
			func_415(10, 0, 1);
			break;
	}
	func_416(1);
}

void func_145(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	char* sVar1;
	
	if (!bParam1)
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 4096 == 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 == 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 == 0)
	{
		fParam2 = BUILTIN::VDIST2(Global_36, func_417(iParam0));
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 512 != 0)
	{
		if (fParam2 > 225f)
		{
			iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
			if (iVar0 != ((*Global_1347702)[iParam0 /*49*/])->f_39)
			{
				_NAMESPACE71::_0x2F901291EF177B02(((*Global_1347702)[iParam0 /*49*/])->f_39, 0);
			}
			func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 512);
		}
	}
	else if (fParam2 <= 100f)
	{
		if (func_418())
		{
			return;
		}
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "RCM_INVALID_TOD", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_338(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 1024 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_ANTAGONIZE", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_338(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 4096 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_MEMORY", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_338(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 2048 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_WANTED_REGION", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_338(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 16384 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_338(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 8192 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_COMBAT", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_338(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_14 & 32768 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED_2", ((*Global_1347702)[iParam0 /*49*/])->f_37);
			((*Global_1347702)[iParam0 /*49*/])->f_39 = func_338(sVar1, 10000, 0, 0, 0, 1);
		}
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 512);
	}
}

int func_146(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (Global_1572887->f_12 != -1)
	{
		if ((iParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((iParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_419())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (iParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_111(&(Global_1898164->f_1[0 /*5*/]));
		if (func_201(iVar0) && func_31(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_57(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		
		case 1:
			return iParam0 & 1 == 0;
		
		case 4:
			return iParam0 & 2 == 0;
		
		case 6:
			return iParam0 & 4 == 0;
		
		case 2:
			return iParam0 & 16 == 0;
		
		case 5:
			return iParam0 & 32 == 0;
		
		case 9:
			return iParam0 & 64 == 0;
		
		case 8:
			return iParam0 & 8 == 0;
		
		case 10:
			return iParam0 & 512 == 0;
		
		case 3:
			return iParam0 & 128 == 0;
		
		case 11:
			return iParam0 & 256 == 0;
		
		default:
			break;
	}
	return 0;
}

int func_147(var uParam0)
{
	return 1;
}

int func_148()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "JustSavedAtBed"))
		{
			return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "JustSavedAtBed");
		}
	}
	return 0;
}

float func_149(var uParam0)
{
	return 1000f;
}

int func_150(var uParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	
	if (!iLocal_155)
	{
		if (TASK::_0x841475AC96E794D1(iLocal_124))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_125))
			{
				TXD::REQUEST_STREAMED_TEXTURE_DICT("UI_DOC_POISONWELL", false);
				iLocal_125 = TASK::_0x295514F198EFD0CA(iLocal_124, "PrimaryItem");
			}
			else if (TXD::_0xBE72591D1509FFE4(-1556359848))
			{
				DECORATOR::DECOR_SET_INT(iLocal_125, "letter_item", 190329422);
				OBJECT::_0xE124889AE0521FCF(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iLocal_125), -1556359848, 0, 0);
				iLocal_155 = 1;
			}
		}
	}
	if (!iLocal_156)
	{
		sVar1 = "Flee_Panic";
		PED::_0x5C3C55EAAD19915F(iLocal_25, sVar1);
		if (PED::_0xDE3904B22695D9F9(iLocal_25, sVar1))
		{
			PED::_0xAAB050DA48B57978(iLocal_25, sVar1, 0, -1, 4);
			func_420(iLocal_25, 0.5f, 0);
			iLocal_156 = 1;
		}
	}
	else if (!func_421(iLocal_25, 242628503))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2551.212f, 821.9276f, 74.6952f, 2f, -1, 3f, true, 40000f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2564.348f, 801.8375f, 75.164f, 2f, -1, 3f, true, 40000f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2541.493f, 760.2956f, 74.0382f, 2f, -1, 3f, true, 40000f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2527.682f, 761.3697f, 73.6813f, 2f, -1, 3f, true, 40000f);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_25, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
	if (iLocal_177 == 5 && ANIMSCENE::_0x25557E324489393C(iLocal_126))
	{
		if (!ANIMSCENE::_0xD8254CB2C586412B(iLocal_126, 0))
		{
			return 0;
		}
	}
	else if (func_205(Global_35, vLocal_132, 1) < 80f)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_25))
		{
			if (!func_339() && func_334(&uLocal_128) > IntToFloat(iLocal_131))
			{
				sVar2 = func_422();
				if (func_423(uParam0, sVar2, 0))
				{
					iLocal_131 = MISC::GET_RANDOM_INT_IN_RANGE(18, 25);
					func_259(&uLocal_128);
				}
			}
		}
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AT_COORD(Global_35, 2557.18f, 801.91f, 75.17f, 100f, 100f, 100f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_151()
{
	return Global_1572864->f_8;
}

int func_152(int iParam0)
{
	if (func_110(iParam0) == 8)
	{
		return func_111(iParam0);
	}
	return -1;
}

void func_153(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_154(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_155(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_157(1);
	}
}

void func_156(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_157(0);
	}
}

void func_157(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_158(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_159(var uParam0)
{
	if (func_6(uParam0->f_172, 8))
	{
		func_424();
	}
	if (ENTITY::_0x1FF441D7954F8709(iLocal_71))
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_71);
	}
	if (iLocal_163)
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BUT_GUARD_SCENARIOS", true);
		iLocal_163 = 0;
	}
	func_425(iLocal_45);
	func_425(iLocal_40);
	func_425(iLocal_41);
	func_425(iLocal_43);
	func_425(iLocal_44);
	func_425(iLocal_62);
	func_425(iLocal_60);
	func_425(iLocal_61);
	func_425(iLocal_46);
	func_425(iLocal_47);
	func_23(iLocal_76[0]);
	func_23(iLocal_76[1]);
	func_169(iLocal_72[0], 1, 0, 1);
	func_169(iLocal_72[1], 1, 0, 1);
	func_426(&iLocal_190, 1, 1);
	func_426(&iLocal_189, 1, 1);
	func_427(&iLocal_69, 1, 1);
	if (bLocal_16)
	{
		if (INTERIOR::IS_VALID_INTERIOR(iLocal_15) && INTERIOR::IS_INTERIOR_READY(iLocal_15))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_15);
		}
	}
	if (iLocal_91 && !iLocal_92)
	{
		PED::_0x8B3CB08158E98481(Global_35, 0);
	}
	func_169(&iLocal_112, 0, 0, 1);
	func_169(&iLocal_25, 0, 0, 1);
	func_169(&iLocal_113, 0, 0, 1);
	func_169(&iLocal_114, 0, 0, 1);
	func_169(&iLocal_115, 0, 0, 1);
	func_169(&iLocal_116, 0, 0, 1);
	func_169(&iLocal_117, 0, 0, 1);
	func_427(&iLocal_118, 1, 1);
	func_427(&iLocal_119, 1, 1);
	func_427(&iLocal_120, 1, 1);
	func_427(&iLocal_111, 1, 1);
	func_428();
	if (TASK::_0x841475AC96E794D1(iLocal_124))
	{
		TASK::_0x81948DFE4F5A0283(iLocal_124);
	}
}

void func_160(int iParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(iParam0))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0, 0))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

void func_161(var uParam0)
{
	if (uParam0->f_171 != 0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
		MAP::DISPLAY_RADAR(true);
	}
	uParam0->f_171 = 0;
	uParam0->f_747 = 0;
	func_230(&(uParam0->f_2588));
}

void func_162(var uParam0)
{
	struct<2> Var0;
	
	Var0 = { func_429(uParam0->f_174) };
	if (HUD::_0x2C729F2B94CEA911(&Var0))
	{
		HUD::_0xAA03F130A637D923(&Var0);
	}
	Var0 = { func_430(uParam0->f_174) };
	if (HUD::_0x2C729F2B94CEA911(&Var0))
	{
		HUD::_0xAA03F130A637D923(&Var0);
	}
}

int func_163(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[uParam0->f_174 /*49*/])->f_22))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(((*Global_1347702)[uParam0->f_174 /*49*/])->f_22))
	{
		iVar1 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_22));
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
		{
			iVar2 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			EVENT::_0xA86B0EE9B39D15D6(&iVar2);
		}
		else if (ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			ANIMSCENE::_0xBC781D24AA11F179(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1));
		}
		iVar0++;
	}
	return 1;
}

void func_164(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		ITEMSET::DESTROY_ITEMSET(((*Global_1347702)[iParam0 /*49*/])->f_22);
		((*Global_1347702)[iParam0 /*49*/])->f_23 = 0;
	}
}

void func_165(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_21))
	{
		ITEMSET::DESTROY_ITEMSET(((*Global_1347702)[iParam0 /*49*/])->f_21);
	}
}

void func_166(int iParam0)
{
	switch (func_200())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

bool func_167(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_168(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_431(iParam0))
	{
		return;
	}
	if (!func_432(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = func_433(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_KEEP_TASK(iVar0, false);
		}
	}
	func_434(iParam0, 0, 0, bParam1, fParam2, bParam3, bParam4, bParam5, bParam6, 0, 0);
	func_435(iParam0, 0);
	func_436(iParam0);
}

void func_169(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

void func_170(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2603))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_2603);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_2603);
	}
}

void func_171(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2604))
	{
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_2604);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_2604);
	}
}

void func_172(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1347702)[iParam0 /*49*/])->f_41))
	{
		func_437(((*Global_1347702)[iParam0 /*49*/])->f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			PATHFIND::_0xD17672447692478E(((*Global_1347702)[iParam0 /*49*/])->f_41, 0);
		}
		VOLUME::_0x43F867EF5C463A53(((*Global_1347702)[iParam0 /*49*/])->f_41);
	}
}

void func_173(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_438(iParam0, &iVar1, &iVar0))
	{
		if (func_439(iVar1, iVar0, 1))
		{
			func_440(iVar1, iVar0);
		}
	}
}

bool func_174(int iParam0)
{
	int iVar0;
	
	iVar0 = func_360(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_175(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_57(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_174(iParam0) && !func_270(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_109(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_174(iParam0))
	{
		iParam2 = -1;
	}
	if (func_409(iParam0) == 3 || (func_409(iParam0) == 1 && STATS::_0x01F4D242765C6B24(func_109(iParam0))))
	{
		func_410(func_110(iParam0), func_109(iParam0), iParam2);
		if ((!func_57(Global_1572864->f_8) && !func_146(0, 1, 0)) && !func_90(&Global_1935630, 32768))
		{
			iVar0 = func_441(iParam0);
			if (iVar0 != -1)
			{
				func_442(0);
			}
			else if (func_110(iParam0) == 8)
			{
				iVar0 = func_443();
				if (iVar0 != -1)
				{
					func_442(0);
				}
			}
		}
	}
	func_413(iParam0, 0);
	if (func_56(0) == iParam0)
	{
		func_198(1);
		func_412(0);
		func_416(1);
	}
	func_444(iParam0, 1);
	func_411(iParam0);
}

void func_176(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_177(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_35;
	if (iVar0 == -1)
	{
		return;
	}
	if (iParam1 == 1)
	{
		func_47(&(((*Global_1347702)[iVar0 /*49*/])->f_13), 8);
	}
	else
	{
		func_176(&(((*Global_1347702)[iVar0 /*49*/])->f_13), 8);
	}
}

void func_178(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_201(iParam0))
	{
		return;
	}
	func_445(&(((*Global_1347702)[iParam0 /*49*/])->f_14), iParam1);
	func_445(&(((*Global_1347702)[iParam0 /*49*/])->f_14), 2);
	func_210(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_201(&(Global_40.f_450[iVar0])))
			{
				if (&Global_40.f_450[iVar0] == iParam0)
				{
					Global_1430257 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

void func_179(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_180(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		func_446(uParam0->f_41[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_447(uParam0->f_117[iVar0 /*5*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_448((*uParam0)[iVar0 /*3*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_449(uParam0->f_28[iVar0 /*3*/]);
		iVar0++;
	}
	func_162(uParam0);
}

void func_181(int iParam0)
{
	iParam0 = func_396(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_450(iParam0, 32);
	func_451();
}

void func_182(bool bParam0)
{
	Global_1956582 = bParam0;
	if (bParam0)
	{
		MAP::_0x632AA10BF7EA53D3(0, 0);
	}
	else
	{
		MAP::_0x632AA10BF7EA53D3(1, 0);
	}
}

bool func_183(var uParam0, int iParam1)
{
	return (uParam0->f_1560 && iParam1) != 0;
}

int func_184(vector3 vParam0, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_117();
	if (func_354(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_452(vParam0, bParam3);
}

void func_185(var uParam0, int iParam1)
{
	uParam0->f_748 = iParam1;
}

void func_186(var uParam0, int iParam1)
{
	uParam0->f_749 = iParam1;
}

void func_187(var uParam0, bool bParam1)
{
	if (func_350())
	{
		func_313(uParam0, Global_35, "JOHN", bParam1);
	}
	else
	{
		func_313(uParam0, Global_35, "ARTHUR", bParam1);
	}
}

void func_188(var uParam0)
{
	func_453(uParam0);
	func_454(uParam0, 1);
	func_455(uParam0, 1);
	func_456(uParam0, 1);
	func_457(uParam0, 1);
	func_458(uParam0, 1);
	func_459(uParam0, 1);
	func_460(uParam0, 1);
	func_461(uParam0, 0);
}

int func_189(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (uParam0[iVar0 /*3*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_190(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!func_462((*uParam0)[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_191(var uParam0, char* sParam1)
{
	struct<2> Var0;
	
	Var0 = { func_429(uParam0->f_174) };
	if (HUD::_0x2C729F2B94CEA911(&Var0))
	{
		HUD::_0xF66090013DE648D5(&Var0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2573)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			StringCopy(&(uParam0->f_2573), sParam1, 16);
		}
		else
		{
			uParam0->f_2573 = { func_430(uParam0->f_174) };
		}
	}
	if (HUD::_0x2C729F2B94CEA911(&(uParam0->f_2573)))
	{
		HUD::_0xF66090013DE648D5(&(uParam0->f_2573));
	}
}

void func_192(var uParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = func_463(&(uParam0->f_117), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_464(&(uParam0->f_117));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_117[iVar0 /*5*/] = cParam1;
	(uParam0->f_117[iVar0 /*5*/])->f_1 = iParam2;
	(uParam0->f_117[iVar0 /*5*/])->f_2 = iParam3;
	(uParam0->f_117[iVar0 /*5*/])->f_4 = ((uParam0->f_117[iVar0 /*5*/])->f_4 || iParam4);
	if (func_6(uParam0->f_172, 8192))
	{
		func_2(&(uParam0->f_172), 8192);
	}
}

int func_193(var uParam0)
{
	return uParam0->f_168;
}

void func_194(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (func_465((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1))
		{
			func_466((uParam0->f_41[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_41[iVar0 /*3*/])->f_2 == 0 || !func_465((uParam0->f_41[iVar0 /*3*/])->f_2, iParam2))
			{
				func_446(uParam0->f_41[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_465((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1))
		{
			func_466((uParam0->f_117[iVar0 /*5*/])->f_4, iParam1);
			if ((uParam0->f_117[iVar0 /*5*/])->f_4 == 0 || !func_465((uParam0->f_117[iVar0 /*5*/])->f_4, iParam2))
			{
				func_447(uParam0->f_117[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_465(((*uParam0)[iVar0 /*3*/])->f_2, iParam1))
		{
			func_466(((*uParam0)[iVar0 /*3*/])->f_2, iParam1);
			if (((*uParam0)[iVar0 /*3*/])->f_2 == 0 || !func_465(((*uParam0)[iVar0 /*3*/])->f_2, iParam2))
			{
				func_448((*uParam0)[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_465((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1))
		{
			func_466((uParam0->f_28[iVar0 /*3*/])->f_2, iParam1);
			if ((uParam0->f_28[iVar0 /*3*/])->f_2 == 0 || !func_465((uParam0->f_28[iVar0 /*3*/])->f_2, iParam2))
			{
				func_449(uParam0->f_28[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

int func_195(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_44 != -1)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_44 != 0)
		{
			if (!func_467(((*Global_1347702)[iParam0 /*49*/])->f_44))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_196(var uParam0)
{
	vector3 vVar0;
	int iVar4;
	int iVar5;
	
	iVar4 = -899457438;
	iVar5 = 0;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &vVar0))
		{
			switch (vVar0.x)
			{
				case -1203660660:
					if (vVar0.z == 2338895)
					{
						if (UIAPPS::_IS_APP_ACTIVE(1433015236))
						{
							UIAPPS::_CLOSE_APP_BY_HASH(1433015236);
						}
						iVar5 = 1;
					}
					break;
				
				case -1740156697:
					if (iVar5 != 1)
					{
						*uParam0 = func_468(vVar0.z);
						iVar5 = 3;
					}
					break;
				
				case 922460030:
					iVar5 = 2;
					break;
				
				default:
					break;
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
		}
	}
	return iVar5;
}

void func_197(bool bParam0)
{
	if (!bParam0)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
	}
	LAW::_0xC805EB785824F712(bParam0);
	LAW::_0x710448D44A64C213(bParam0);
}

void func_198(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_125(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_273(Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

int func_199(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 25)
	{
		if (func_462(uParam0->f_41[iVar1 /*3*/]))
		{
			if (func_465((uParam0->f_41[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_469(uParam0->f_41[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (func_470(uParam0->f_117[iVar1 /*5*/]))
		{
			if (func_465((uParam0->f_117[iVar1 /*5*/])->f_4, iParam1))
			{
				if (!func_471(uParam0->f_117[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (func_472((*uParam0)[iVar1 /*3*/]))
		{
			if (func_465(((*uParam0)[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_473((*uParam0)[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_474(uParam0->f_28[iVar1 /*3*/]))
		{
			if (func_465((uParam0->f_28[iVar1 /*3*/])->f_2, iParam1))
			{
				if (!func_475(uParam0->f_28[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (iParam1 != 0 && iParam1 != 4)
	{
		if (!func_476(uParam0->f_174))
		{
			iVar0 = 0;
		}
		if (!func_477(uParam0))
		{
			iVar0 = 0;
		}
	}
	if (!func_478(uParam0, iParam1))
	{
		iVar0 = 0;
	}
	if (uParam0->f_177 == 2 && !PED::_0x0EE3F0D7FECCC54F())
	{
		iVar0 = 0;
	}
	if (iParam1 == 2)
	{
		if (!func_6(uParam0->f_172, 32))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_200()
{
	return Global_1572887->f_12;
}

bool func_201(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_202(vector3 vParam0, var uParam3)
{
	int iVar0;
	
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		func_133(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_479(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_480(0, 0);
		if (func_481(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_482(1, 0);
		}
	}
	else
	{
		func_482(1, 0);
	}
	func_154(0);
	func_483(0, vParam0, uParam3);
	return 1;
}

int func_203(var uParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!func_206(iParam1, 207))
		{
			func_484(uParam0);
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, Global_35, 1, 1))
		{
			func_484(uParam0);
			return 1;
		}
		else
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
			fVar3 = 10f;
			if (FIRE::IS_EXPLOSION_ACTIVE_IN_AREA(-1, vVar0 - Vector(fVar3, fVar3, fVar3), vVar0 + Vector(fVar3, fVar3, fVar3)))
			{
				func_484(uParam0);
				return 1;
			}
		}
	}
	return 0;
}

bool func_204(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

float func_205(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_206(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_485(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_485(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_485(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_485(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_485(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_485(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_485(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_485(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_207(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_486(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
		{
			((*Global_1347702)[iParam0 /*49*/])->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return 1;
		}
	}
	else if (iParam0 == 96)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return 1;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return 1;
		}
	}
	return 0;
}

int func_208(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_487(0);
	if (iVar0 == 11)
	{
		iVar1 = func_488(func_112(iParam1), 1);
		if (iVar1 != -589165916)
		{
			if ((iVar1 == -103573613 || iVar1 == 194099983) || iVar1 == 2038046186)
			{
				iVar2 = func_489(Global_40.f_4283);
				if (func_354(iVar2) && iVar2 == ((*Global_1347702)[uParam0->f_174 /*49*/])->f_27)
				{
					return 1;
				}
			}
		}
	}
	else if (iVar0 == 4)
	{
		iVar3 = func_490(iParam1);
		if (iVar3 != -1)
		{
			if ((iVar3 == 1 || iVar3 == 3) || iVar3 == 2)
			{
				if (func_354(Global_1894899->f_2) && Global_1894899->f_2 == func_489(Global_40.f_4283))
				{
					return 1;
				}
			}
		}
	}
	if (func_491(uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 8 != 0)
	{
		return 1;
	}
	if (func_492(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		if (!func_492(((*Global_1835011)[44 /*74*/])->f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return 1;
			}
		}
		if (func_492(((*Global_1835011)[67 /*74*/])->f_1, 1))
		{
			if ((!func_492(((*Global_1347702)[8 /*49*/])->f_15, 1) && !func_492(((*Global_1835011)[69 /*74*/])->f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1835011)[67 /*74*/])->f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1835011)[67 /*74*/])->f_22))) > 0)
				{
					return 1;
				}
			}
		}
	}
	else if ((!func_493(2) && !func_492(((*Global_1347702)[61 /*49*/])->f_15, 1)) && func_492(((*Global_1347702)[59 /*49*/])->f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return 1;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = func_496(func_494(65536), 0, 3, func_495(65536));
		if (func_57(iVar1))
		{
			iVar0 = func_486(iVar1);
			if (!func_485(iVar0, 4))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!func_492(((*Global_1835011)[14 /*74*/])->f_1, 1) && func_492(((*Global_1347702)[62 /*49*/])->f_15, 1)) && func_492(((*Global_1347702)[0 /*49*/])->f_15, 1)) && func_492(((*Global_1347702)[94 /*49*/])->f_15, 1)) && func_492(((*Global_1835011)[25 /*74*/])->f_1, 1)) && (func_492(((*Global_1835011)[8 /*74*/])->f_1, 1) || (func_492(((*Global_1347702)[98 /*49*/])->f_15, 1) && func_486(((*Global_1347702)[98 /*49*/])->f_15) == 0)))
		{
			return 1;
		}
	}
	else if (iParam0 == 27)
	{
		if (!func_492(((*Global_1835011)[34 /*74*/])->f_1, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 42)
	{
		if (!func_492(((*Global_1347702)[41 /*49*/])->f_15, 1))
		{
			if (!func_497(8))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!func_498(2))
		{
			return 1;
		}
	}
	else if (iParam0 == 52)
	{
		if (!func_492(((*Global_1347702)[51 /*49*/])->f_15, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 57)
	{
		if (func_270(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (func_499(((*Global_1347702)[iParam0 /*49*/])->f_15) == 0)
		{
			if (func_500() <= 160)
			{
				return 1;
			}
			else
			{
				func_501(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
			}
		}
		if (!func_502(68))
		{
			return 1;
		}
	}
	else if (iParam0 == 77)
	{
		if (func_270(((*Global_1835011)[47 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_270(((*Global_1835011)[45 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_503(16, 0))
		{
			return 1;
		}
	}
	else if (iParam0 == 87)
	{
		if (func_270(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 95)
	{
		if (func_270(((*Global_1835011)[20 /*74*/])->f_1))
		{
			return 1;
		}
		else if (func_270(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 113)
	{
		if (MISC::GET_GAME_TIMER() + 5000 < &Global_1898438)
		{
			return 1;
		}
		else if ((Global_1879534->f_1 || Global_1879534) // PointerArith)
		{
			return 1;
		}
		else if (!SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[113 /*49*/])->f_42, false) && func_504())
		{
			if (func_384("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				func_179(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 262144);
				func_210(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 64);
				func_128(113, 1, 0, 1, 1, 1, 0);
				return 1;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (func_505(-404697685, 1))
		{
			return 1;
		}
	}
	else if (iParam0 == 117)
	{
		if (func_270(((*Global_1835011)[69 /*74*/])->f_1))
		{
			return 1;
		}
	}
	else if (iParam0 == 136)
	{
		if (func_270(((*Global_1835011)[21 /*74*/])->f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_210(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_211(int iParam0)
{
	if (iParam0 == 11 || iParam0 == 153)
	{
		return 26;
	}
	else if (iParam0 == 12 || iParam0 == 16)
	{
		return 5;
	}
	else if ((iParam0 == 13 || iParam0 == 154) || iParam0 == 15)
	{
		return 105;
	}
	else if (iParam0 == 14 || iParam0 == 135)
	{
		return 76;
	}
	else if ((iParam0 == 17 || iParam0 == 18) || iParam0 == 155)
	{
		return 38;
	}
	else if (iParam0 == 19 || iParam0 == 20)
	{
		return 115;
	}
	return -1;
}

int func_212(int iParam0)
{
	if (!func_354(iParam0))
	{
		return 0;
	}
	return func_369(iParam0, 33554432);
}

int func_213(int iParam0)
{
	if (!func_354(iParam0))
	{
		return 0;
	}
	return func_369(iParam0, 67108864);
}

var func_214()
{
	var uVar0;
	var uVar1;
	float fVar2;
	var uVar3;
	
	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_215(int iParam0, int iParam1)
{
	return func_506(iParam0, iParam1);
}

int func_216(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_507(iParam0, bParam1, iParam2, iParam3))
	{
		return 1;
	}
	if (bParam1)
	{
		if (LAW::_0x0BB6DE7D23C60626(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_217(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 32768 != 0)
	{
		return 1;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 2 == 0)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0] > -1 && &((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0] < 27)
		{
			if ((Global_40.f_4942[&((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0] /*60*/])->f_59 != 0)
			{
				if ((Global_40.f_4942[&((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0] /*60*/])->f_59 != ((*Global_1347702)[iParam0 /*49*/])->f_15)
				{
					return 0;
				}
			}
			else if (func_508(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 16, 1))
			{
				if (iParam1 == 0)
				{
					return 0;
				}
				else if (!func_432(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])))
				{
					return 0;
				}
			}
			if (iParam4 && func_90(&Global_1935630, 4096))
			{
			}
			else if (func_509(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0]), 44, 0) && iParam2 == 1)
			{
			}
			else if (!func_510(func_433(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar0])), -1f, 10f, 1, 1, 40f))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_218(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
	{
		if (!func_511(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43), &(uParam0->f_178), &iVar0, 1, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	int iVar10;
	int iVar11;
	int iVar12;
	
	if (!ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_22))
	{
		return 0;
	}
	iVar0 = ITEMSET::GET_ITEMSET_SIZE(((*Global_1347702)[iParam0 /*49*/])->f_22);
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (fParam1 > (100f * 100f))
	{
		return 0;
	}
	iVar1 = iVar0;
	if (iVar1 > 3)
	{
		iVar1 = 3;
	}
	while (iVar2 <= iVar1)
	{
		iVar3 = ((*Global_1347702)[iParam0 /*49*/])->f_23;
		iVar10 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, ((*Global_1347702)[iParam0 /*49*/])->f_22);
		iVar4 = iVar10;
		vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar4, true, false) };
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar4))
			{
				iVar5 = iVar4;
				iVar11 = EVENT::_0xAD17A18215DD23D6(iVar5, 1, 0);
				if (iVar11 > 0 && iVar11 <= 2000)
				{
					iVar12 = EVENT::_0x796EECFF0C6D39BE(iVar5, 1, 0);
					if (iVar12 != -587661767 || Global_1935630->f_44 != 2055893578)
					{
						return 1;
					}
				}
				if (MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(vVar7, -1504859554, 10f, true) || MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(vVar7, 1885857703, 10f, true))
				{
					return 1;
				}
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar4))
			{
				iVar6 = iVar4;
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar6, Global_35, 1, 1))
				{
					return 1;
				}
			}
		}
		iVar2++;
		((*Global_1347702)[iParam0 /*49*/])->f_23++;
		if (((*Global_1347702)[iParam0 /*49*/])->f_23 >= iVar0)
		{
			((*Global_1347702)[iParam0 /*49*/])->f_23 = 0;
		}
	}
	if (Global_1945917->f_6 >= 0 && (MISC::GET_GAME_TIMER() - Global_1945917->f_6) <= 1000)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_1945917->f_1) && ENTITY::IS_ENTITY_A_PED(Global_1945917->f_1)) && ITEMSET::IS_IN_ITEMSET(Global_1945917->f_1, ((*Global_1347702)[iParam0 /*49*/])->f_22))
		{
			return 1;
		}
	}
	return 0;
}

int func_220(var uParam0)
{
	return 0;
}

int func_221(float fParam0)
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		iVar0 = PED::_0x336B3D200AB007CB(Global_35, Global_36, 50f, 0);
	}
	if (iVar0 > 0 && fParam0 <= (50f * 50f))
	{
		return 1;
	}
	return 0;
}

void func_222()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_431(iVar0) && func_432(iVar0))
		{
			func_512(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_80(&(Global_1359489->f_40), 1);
}

void func_223(var uParam0)
{
	func_23(iLocal_76[0]);
	func_23(iLocal_76[1]);
	if (func_6(uParam0->f_172, 8))
	{
		func_424();
	}
	func_169(&iLocal_112, 0, 0, 1);
	func_169(&iLocal_113, 0, 0, 1);
	func_169(&iLocal_114, 0, 0, 1);
	func_169(&iLocal_115, 0, 0, 1);
	func_169(&iLocal_116, 0, 0, 1);
	func_169(&iLocal_117, 0, 0, 1);
	func_169(iLocal_72[0], 1, 0, 1);
	func_169(iLocal_72[1], 1, 0, 1);
	func_425(iLocal_45);
	func_425(iLocal_40);
	func_425(iLocal_41);
	func_425(iLocal_42);
	func_425(iLocal_43);
	func_425(iLocal_44);
	func_425(iLocal_62);
	func_425(iLocal_60);
	func_425(iLocal_46);
	func_425(iLocal_47);
	func_426(&iLocal_190, 1, 1);
	func_426(&iLocal_189, 1, 1);
	func_427(&iLocal_69, 1, 1);
	func_427(&iLocal_118, 1, 1);
	func_427(&iLocal_119, 1, 1);
	if (bLocal_16)
	{
		if (INTERIOR::IS_VALID_INTERIOR(iLocal_15) && INTERIOR::IS_INTERIOR_READY(iLocal_15))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_15);
		}
	}
}

void func_224(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_264(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_265(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_265(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_265(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_265(iParam0));
			}
		}
	}
	func_121(iParam0, 4);
	func_121(iParam0, 8);
	func_121(iParam0, 16);
}

void func_225(int iParam0)
{
	Global_36579 = iParam0;
}

void func_226(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_227(int iParam0)
{
	func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			func_233(iParam0, func_69(iParam0), 1, 0);
		}
		else
		{
			func_513(iParam0);
		}
	}
	else
	{
		func_115(iParam0, 0);
	}
}

void func_228(var uParam0)
{
	if (func_514(uParam0->f_174))
	{
		func_515(262144, 5, 0, 1);
		func_516(720f, 1, 0);
	}
}

void func_229(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, -1415022764, 0, 0))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_230(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_231(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_71(uParam0);
	if (uParam0->f_750 == -1)
	{
		if (iVar0 == 1 || iVar0 == 0)
		{
			uParam0->f_750 = uParam0->f_749;
		}
		else if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			uParam0->f_750 = uParam0->f_748;
		}
	}
	if (uParam0->f_750 >= 0)
	{
		iVar1 = PED::_0x62DE46F061CAA468();
		if (uParam0->f_750 < iVar1)
		{
			iVar2 = (iVar1 - uParam0->f_750);
			PED::_0x7D4E70A67A651C71(iVar2);
		}
		else if (uParam0->f_750 > PED::_0x62DE46F061CAA468())
		{
			PED::_0xED9582B3DA8F02B4(uParam0->f_750);
		}
	}
	uParam0->f_748 = -1;
	uParam0->f_749 = -1;
}

float func_232(int iParam0)
{
	float fVar0;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_16 > 250f)
	{
		fVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_16;
	}
	else
	{
		fVar0 = 250f;
	}
	return fVar0;
}

void func_233(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;
	
	if (!func_201(iParam0))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 256 != 0 && func_146(0, 0, 1))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 16 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_36 == 0)
	{
		return;
	}
	if (func_60(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_38 = func_517(iParam0);
	if (!bParam5 && func_518(iParam0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::_0x45F13B7E0A15C880(((*Global_1347702)[iParam0 /*49*/])->f_38, func_417(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_18);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	else
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::_0x554D9D53F696D002(((*Global_1347702)[iParam0 /*49*/])->f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	if (iParam0 == 61)
	{
		func_519(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 838722941);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCEXO");
	}
	func_513(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(((*Global_1347702)[iParam0 /*49*/])->f_37, 64, iParam0);
	if (func_200() == -1)
	{
		func_520(iParam0);
		iVar0 = func_489(Global_40.f_4283);
		if (func_354(iVar0) && func_521(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			iVar1 = 1;
			bVar2 = func_522(iVar0);
		}
		if (func_523(iParam0, iVar1, iVar0))
		{
			func_524(((*Global_1347702)[iParam0 /*49*/])->f_15, bVar2, iVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::_0x66F35DD9D2B58579() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 1 == 0)
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		if (((!func_518(iParam0) || func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1)) || func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 512)) || func_46(((*Global_1347702)[iParam0 /*49*/])->f_13, 2048))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 580546400);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32768 == 0)
	{
		if ((((*Global_1347702)[iParam0 /*49*/])->f_36 == -1822497728 && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 == 0) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 2 != 0)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		}
		else
		{
			func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_525(iParam0))
		{
			if (iParam0 == 97)
			{
				func_303(185, 0);
			}
			else
			{
				func_303(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = ((*Global_1347702)[iParam0 /*49*/])->f_37;
			((*Global_1347702)[iParam0 /*49*/])->f_40 = func_338(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_266(iParam0, 2);
	}
}

void func_234(int iParam0, float fParam1)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32768 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 2 == 0)
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	if (fParam1 < (((*Global_1347702)[iParam0 /*49*/])->f_18 * ((*Global_1347702)[iParam0 /*49*/])->f_18))
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
	}
}

void func_235(int iParam0, vector3 vParam1, float fParam4)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 == 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_18 < 0f)
	{
		func_179(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 1048576);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	if (func_526(iParam0, fParam4))
	{
		func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2048);
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		func_115(iParam0, 0);
		func_233(iParam0, vParam1, 1, 0);
	}
}

void func_236(int iParam0)
{
	if (func_527(179))
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		return;
	}
	else if (func_518(iParam0))
	{
		return;
	}
	if (((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && BUILTIN::VDIST2(func_69(iParam0), Global_36) < 10000f) && func_528())
	{
		func_529(179, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_237(int iParam0)
{
	if (func_527(180))
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_36 != -1822497728)
	{
		return;
	}
	else if (!func_518(iParam0))
	{
		return;
	}
	if ((MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37) && MAP::IS_BLIP_ON_MINIMAP(((*Global_1347702)[iParam0 /*49*/])->f_37)) && func_528())
	{
		func_529(180, ((*Global_1347702)[iParam0 /*49*/])->f_37, 0);
	}
}

void func_238(var uParam0)
{
	if (func_6(uParam0->f_172, 16))
	{
		func_102(uParam0, 0);
		func_87(uParam0);
	}
}

int func_239(var uParam0)
{
	struct<8> Var0;
	
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_751))
	{
		if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_751, 1, 0))
		{
			return 1;
		}
	}
	else
	{
		Var0 = { func_530(uParam0->f_174) };
		uParam0->f_751 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var0, 0, 0, false, true);
		if (ANIMSCENE::_0x25557E324489393C(uParam0->f_751))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_751);
		}
	}
	return 0;
}

struct<8> func_240()
{
	char cVar0[64];
	
	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

struct<8> func_241(var uParam0)
{
	return uParam0->f_350;
}

void func_242(var uParam0)
{
	struct<8> Var0;
	
	Var0 = { func_531(uParam0) };
	func_532(uParam0, &Var0);
}

void func_243(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_348, 1, 0))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_366[iVar0 /*9*/]) && MISC::ARE_STRINGS_EQUAL(sParam1, uParam0->f_366[iVar0 /*9*/]))
		{
			Var1 = { uParam0->f_350 };
			*(uParam0->f_366[iVar0 /*9*/]) = { Var1 };
		}
		iVar0++;
	}
	func_532(uParam0, sParam1);
	func_533(uParam0, 2097152, 1);
	func_330(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_348, sParam1, true);
}

int func_244(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_245(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (func_534(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_246(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;
	
	if (bParam3)
	{
		uParam0->f_415++;
		if (uParam0->f_415 < 10)
		{
			return (func_535(uParam0, 256) && !func_535(uParam0, 4194304));
		}
		uParam0->f_415 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_536(uParam0, sParam1);
	if (!func_535(uParam0, 64))
	{
		if (!func_244(func_537(uParam0)))
		{
			func_330(uParam0, 64);
		}
		else
		{
			vVar0 = { func_538(uParam0) };
			if (!func_244(vVar0))
			{
				func_539(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_205(Global_35, func_537(uParam0), 1);
	if (func_535(uParam0, 128) || func_535(uParam0, 256))
	{
		if ((fVar3 >= func_540(uParam0) && !bParam2) || !ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
		{
			if (uParam0->f_433)
			{
				func_541();
				uParam0->f_433 = 0;
			}
			func_542(uParam0);
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
			}
			func_305(uParam0);
			func_533(uParam0, 128, 1);
			func_533(uParam0, 256, 1);
			func_533(uParam0, 4096, 1);
			func_533(uParam0, 32768, 1);
			func_533(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_543(uParam0) || bParam2)
	{
		if (!func_535(uParam0, 128))
		{
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
			{
				if (func_543(uParam0) >= func_540(uParam0))
				{
				}
				Var4 = { func_241(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_544(uParam0);
				}
				Var4 = { func_241(uParam0) };
				iVar12 = 256;
				if (!func_535(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_348 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_344), iVar12, &Var4, false, true);
				func_545(uParam0, 0, 0, 0, 0);
				func_330(uParam0, 128);
			}
		}
	}
	if (func_535(uParam0, 128))
	{
		if (func_535(uParam0, 256) && !func_535(uParam0, 4194304))
		{
			return 1;
		}
		func_546(uParam0);
		if (!uParam0->f_433)
		{
			if (func_547())
			{
				func_548(4096);
				uParam0->f_433 = 1;
			}
		}
		if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_348, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_531(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_366[iVar14 /*9*/]))
				{
					if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_366[iVar14 /*9*/], &Var15))
					{
						if (!(uParam0->f_366[iVar14 /*9*/])->f_8)
						{
							(uParam0->f_366[iVar14 /*9*/])->f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_348, uParam0->f_366[iVar14 /*9*/]);
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, uParam0->f_366[iVar14 /*9*/]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_535(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_348, &Var15))
				{
					if (!func_535(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_348, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_348, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_348, &Var15);
						}
						func_330(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return 0;
			}
			func_330(uParam0, 256);
			func_533(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

void func_247(var uParam0)
{
}

bool func_248(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

int func_249(var uParam0, char* sParam1, int iParam2)
{
	if (func_248(sParam1, 2))
	{
		return 0;
	}
	if (func_248(sParam1, 1))
	{
		return 0;
	}
	if (iParam2 < sParam1->f_11 || iParam2 > sParam1->f_13)
	{
		return 0;
	}
	if ((func_549(sParam1) == 9 || func_549(sParam1) == 12) || func_549(sParam1) == 13)
	{
		if (!func_248(sParam1, 8))
		{
			if (iParam2 == sParam1->f_11)
			{
				func_550(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_11)
	{
		return func_551(uParam0, func_549(sParam1));
	}
	return 0;
}

void func_250(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::START_AUDIO_SCENE(sParam0);
	}
	func_550(sParam0, 1);
}

int func_251(var uParam0, char* sParam1, int iParam2)
{
	if (!func_248(sParam1, 1))
	{
		return 0;
	}
	if (func_248(sParam1, 2))
	{
		return 0;
	}
	if (iParam2 > sParam1->f_13)
	{
		return 1;
	}
	if ((func_552(sParam1) == 9 || func_552(sParam1) == 12) || func_552(sParam1) == 13)
	{
		if (!func_248(sParam1, 8))
		{
			if (iParam2 == sParam1->f_13)
			{
				func_550(sParam1, 8);
			}
		}
		else if (iParam2 != sParam1->f_13)
		{
			return 1;
		}
	}
	if (iParam2 >= sParam1->f_13)
	{
		return func_551(uParam0, func_552(sParam1));
	}
	return 0;
}

void func_252(char* sParam0)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
	func_550(sParam0, 2);
}

int func_253(var uParam0, char* sParam1, int iParam2)
{
	if (func_248(sParam1, 1))
	{
		return 0;
	}
	if (func_549(sParam1) == 2)
	{
		return uParam0->f_177 == 2;
	}
	if (func_549(sParam1) == 0)
	{
		if (uParam0->f_177 == 6 && func_308(uParam0) == -1)
		{
			return 1;
		}
	}
	if (sParam1->f_11 != iParam2)
	{
		if (((func_549(sParam1) == 9 || func_549(sParam1) == 12) || func_549(sParam1) == 13) && func_248(sParam1, 8))
		{
			return 1;
		}
		return 0;
	}
	switch (func_549(sParam1))
	{
		case 0:
			return uParam0->f_177 == 6;
		
		case 4:
			return func_316(&(uParam0->f_753));
		
		case 1:
		case 10:
		case 11:
			return uParam0->f_177 == 7;
		
		case 9:
		case 12:
		case 13:
			if (!func_248(sParam1, 8))
			{
				func_550(sParam1, 8);
			}
			break;
	}
	return 0;
}

void func_254(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::_0x2B9C37C01BF25EDB(sParam0);
	}
	func_550(sParam0, 1);
}

int func_255(char* sParam0, bool bParam1)
{
	if (func_248(sParam0, 1))
	{
		return 0;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		func_550(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_550(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_550(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_550(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_550(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_550(sParam0, 1);
		return 1;
	}
	func_550(sParam0, 1);
	return 0;
}

void func_256(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_482)
	{
		if ((func_248(uParam0->f_482[iVar0 /*16*/], 1048576) && func_248(uParam0->f_482[iVar0 /*16*/], 4)) && !func_248(uParam0->f_482[iVar0 /*16*/], 1))
		{
			AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[iVar0 /*16*/]);
			return;
		}
		iVar0++;
	}
}

int func_257(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	char cVar2[128];
	int iVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	if (!bParam4 && !uParam0->f_782)
	{
		if (!func_553(uParam0, sParam1, iParam2, bParam4, bParam5))
		{
			return 0;
		}
	}
	if (!uParam0->f_783)
	{
		iVar20 = uParam0->f_790;
		while (iVar20 <= (uParam0->f_789 - 1))
		{
			StringCopy(&cVar2, "", 64);
			uParam0->f_776.f_1 = 0;
			uParam0->f_776.f_3 = iVar20;
			if (func_554(uParam0, 0))
			{
				if (func_555(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_556(uParam0, 1, &iVar0))
					{
					}
					if (func_557(uParam0, 3, &cVar2))
					{
					}
					if (func_556(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_556(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_556(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_556(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_556(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 15 && uParam0->f_785 < 15)
						{
							if (!func_558(uParam0, &cVar2, uParam0->f_785))
							{
								*((*uParam0)[uParam0->f_785 /*16*/]) = { cVar2 };
								func_550((*uParam0)[uParam0->f_785 /*16*/], 1048576);
								uParam0->f_785++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 15 && uParam0->f_786 < 15)
						{
							*(uParam0->f_241[uParam0->f_786 /*16*/]) = { cVar2 };
							func_550(uParam0->f_241[uParam0->f_786 /*16*/], 1048576);
							uParam0->f_786++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 16 && uParam0->f_787 < 16)
						{
							*(uParam0->f_482[uParam0->f_787 /*16*/]) = { cVar2 };
							func_550(uParam0->f_482[uParam0->f_787 /*16*/], 1048576);
							if (!bVar19 && func_248(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_482[uParam0->f_787 /*16*/]);
								bVar19 = true;
							}
							uParam0->f_787++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_788 < 2)
					{
						if (!func_558(&(uParam0->f_739), &cVar2, uParam0->f_788))
						{
							*(uParam0->f_739[uParam0->f_788 /*16*/]) = { cVar2 };
							func_550(uParam0->f_739[uParam0->f_788 /*16*/], 1048576);
							uParam0->f_788++;
						}
					}
				}
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_790 = iVar20 + 1;
				uParam0->f_781 = 0;
				return 0;
			}
			iVar20++;
		}
		uParam0->f_783 = 1;
	}
	if (!func_142(uParam0) && uParam0->f_791 > 0)
	{
		iVar20 = uParam0->f_792;
		while (iVar20 <= (uParam0->f_791 - 1))
		{
			uParam0->f_776.f_1 = 0;
			uParam0->f_776.f_3 = iVar20;
			iVar22 = 0;
			if (func_554(uParam0, 12))
			{
				if (func_556(uParam0, 13, &iVar0))
				{
				}
				if (func_556(uParam0, 14, &iVar1))
				{
					iVar22 = iVar1;
				}
			}
			if (STREAMING::IS_MODEL_VALID(iVar22) && iVar22 != 0)
			{
				uParam0->f_772[iVar0] = iVar22;
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_792 = iVar20 + 1;
				uParam0->f_781 = 0;
				return 0;
			}
			iVar20++;
		}
	}
	uParam0->f_781 = 1;
	uParam0->f_790 = 0;
	uParam0->f_792 = 0;
	uParam0->f_783 = 0;
	uParam0->f_784 = 1;
	if (!bParam4)
	{
		func_559(uParam0);
	}
	return 1;
}

bool func_258(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_259(var uParam0)
{
	func_560(uParam0, 0f);
}

bool func_260(var uParam0)
{
	return func_258(*uParam0, 2);
}

int func_261()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_262(var uParam0)
{
	vector3 vVar0;
	
	if (((*Global_1347702)[uParam0->f_174 /*49*/])->f_28 == 0)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
	{
		STREAMING::REQUEST_MODEL(((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, false);
		if (!STREAMING::HAS_MODEL_LOADED(((*Global_1347702)[uParam0->f_174 /*49*/])->f_28))
		{
			return 0;
		}
		vVar0 = { func_69(uParam0->f_174) };
		func_561(vVar0, 2.5f, 1, 0, 0, 0, 0);
		_NAMESPACE49::_0x9D16896F0DBE78A2(vVar0, 2.5f);
		if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 524288))
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_562(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 0, 1, 1);
		}
		else
		{
			((*Global_1347702)[uParam0->f_174 /*49*/])->f_43 = func_562(uParam0, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_28, vVar0, 0, 1, 1, 0, 1, 1, 1, 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43) && !PED::IS_PED_INJURED(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43, true, true);
		}
		return 1;
	}
	return 0;
}

int func_263(var uParam0)
{
	if (func_563())
	{
		if (!STREAMING::_IS_IMAP_ACTIVE(-1392150519))
		{
			STREAMING::_REQUEST_IMAP(-1392150519);
		}
		if (STREAMING::_IS_IMAP_ACTIVE(-1835067413))
		{
			STREAMING::_REMOVE_IMAP(-1835067413);
		}
		func_564(1954026328);
		if (func_95(uParam0) < 1)
		{
			func_328();
		}
		else
		{
			func_565();
		}
		if (!AUDIO::_0xD9130842D7226045("RHNTN_Sounds", 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_264(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0 || ((*Global_1347702)[iParam0 /*49*/])->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_265(int iParam0)
{
	var uVar0;
	
	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_266(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_267(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	char* sVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	uVar10 = func_566(iParam0, 0);
	iVar11 = uVar10;
	iVar12 = uVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_264(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_265(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), ((*Global_1347702)[iParam0 /*49*/])->f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_265(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_265(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_265(iParam0)))
	{
		func_266(iParam0, 4);
	}
}

void func_268(int iParam0)
{
	char cVar0[16];
	char[] cVar3[8];
	
	switch (iParam0)
	{
		case 11:
			StringCopy(&cVar0, "DUL", 8);
			break;
		
		case 13:
			StringCopy(&cVar0, "RCH", 8);
			break;
		
		case 12:
			StringCopy(&cVar0, "ECF", 8);
			break;
		
		case 14:
			StringCopy(&cVar0, "WIL", 8);
			break;
		
		case 15:
			StringCopy(&cVar0, "SHE", 8);
			break;
		
		case 16:
			StringCopy(&cVar0, "NBS", 8);
			break;
		
		case 17:
			StringCopy(&cVar0, "SKN", 8);
			break;
		
		case 18:
			StringCopy(&cVar0, "RDE", 8);
			break;
		
		case 19:
			StringCopy(&cVar0, "BDS", 8);
			break;
		
		case 20:
			StringCopy(&cVar0, "BDM", 8);
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&Var1, "PSTR_O_", 16);
		StringConCat(&Var1, &cVar0, 16);
		cVar3 = func_567(0, &Var1, 0, 0, -1, -1);
		func_568(iParam0, &Var1, cVar3, -1082130432);
	}
}

void func_269(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_201(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			bVar1 = true;
			func_224(iVar0, 1);
		}
		else if (bVar1)
		{
		}
		else
		{
			iVar0++;
		}
	}
}

int func_270(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_409(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

void func_271(int iParam0, bool bParam1)
{
	if (!func_57(iParam0))
	{
		return;
	}
	if (!func_108(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_109(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_109(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_110(iParam0), func_111(iParam0), func_112(iParam0), func_109(iParam0), Global_36);
		}
	}
	func_413(iParam0, 1);
	bParam1 = bParam1;
}

void func_272(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_57(iParam0))
	{
		return;
	}
	if (!func_270(iParam0))
	{
		return;
	}
	iVar0 = func_110(iParam0);
	if (bParam1)
	{
		if (func_109(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_109(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != ((*Global_1835011)[77 /*74*/])->f_1)
			{
				func_569(func_111(iParam0));
			}
			if (func_200() != 0)
			{
				STATS::_0xB2A38826E5886E83(func_109(iParam0), 0);
			}
			else
			{
				STATS::_0xB2A38826E5886E83(func_109(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_570(iParam0);
	if (!func_57(func_56(0)))
	{
		func_413(iParam0, 3);
		func_198(bParam2);
		if (func_200() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			func_412(1);
		}
		func_571(iParam0, -1);
		if (bParam1 && !func_60(2))
		{
			func_572(&Global_0, 1024);
		}
		if (func_200() == -1)
		{
			func_573(&(Global_1347343->f_11), 536870912);
			func_574(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_575(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_576(0);
			}
		}
		if (func_200() == -1)
		{
			iVar1 = func_441(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_443();
				switch (iVar1)
				{
					case 0:
						func_577(0);
						break;
					
					case 1:
						func_577(1);
						break;
					
					case 2:
						func_577(2);
						break;
					
					case 3:
						func_577(3);
						break;
					
					case 4:
						func_577(4);
						break;
					
					case 5:
						func_577(5);
						break;
					
					case 6:
						func_577(5);
						break;
					
					case 7:
						func_577(7);
						break;
					
					case 8:
						func_577(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_111(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_577(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_111(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_577(11);
						break;
					
					default:
						iVar1 = func_443();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_578(0);
									break;
								
								case 1:
									func_578(1);
									break;
								
								case 2:
									func_578(2);
									break;
								
								case 3:
									func_578(3);
									break;
								
								case 4:
									func_578(4);
									break;
								
								case 5:
									func_578(5);
									break;
								
								case 6:
									func_578(5);
									break;
								
								case 7:
									func_578(7);
									break;
								
								case 8:
									func_578(8);
									break;
								
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_416(1);
	}
	else
	{
		func_571(iParam0, -1);
		func_413(iParam0, 4);
	}
	func_444(iParam0, 0);
}

void func_273(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_274(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_749 == -1)
	{
		if (!func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 4096))
		{
			uParam0->f_749 = 15;
		}
	}
	if (uParam0->f_749 >= 0)
	{
		if (uParam0->f_749 < PED::_0x62DE46F061CAA468())
		{
			iVar0 = (PED::_0x62DE46F061CAA468() - uParam0->f_749);
			PED::_0x7D4E70A67A651C71(iVar0);
		}
		else if (uParam0->f_749 > PED::_0x62DE46F061CAA468())
		{
			PED::_0xED9582B3DA8F02B4(uParam0->f_749);
		}
	}
	uParam0->f_748 = -1;
}

void func_275(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (PED::_0x7BE607DAFF382FD2(Global_35, iVar0, iParam1) > 0)
	{
		iVar1 = (ITEMSET::GET_ITEMSET_SIZE(iVar0) - 1);
		while (iVar1 >= 0)
		{
			iVar2 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0));
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
				if (bParam0)
				{
					if (_NAMESPACE48::_0x800DF3FC913355F3(_NAMESPACE48::_0x32A1E3B83D501096(iVar3)))
					{
						_NAMESPACE48::_0x7B204F88F6C3D287(_NAMESPACE48::_0x32A1E3B83D501096(iVar3));
					}
					else
					{
						PED::DELETE_PED(&iVar3);
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iVar3, 0, 0);
					if (bParam2)
					{
						TASK::_0xDF94844D474F31E5(iVar3);
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_276()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_431(iVar0))
		{
			func_512(iVar0, 30, 1);
		}
		iVar0++;
	}
}

void func_277(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_492(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return;
	}
	else if (func_492(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return;
	}
	if (((((((((((((((uParam0->f_174 == 29 || uParam0->f_174 == 56) || uParam0->f_174 == 57) || uParam0->f_174 == 72) || uParam0->f_174 == 84) || uParam0->f_174 == 85) || uParam0->f_174 == 86) || uParam0->f_174 == 87) || uParam0->f_174 == 88) || uParam0->f_174 == 92) || uParam0->f_174 == 111) || uParam0->f_174 == 102) || uParam0->f_174 == 117) || uParam0->f_174 == 122) || uParam0->f_174 == 149) || uParam0->f_174 == 150)
	{
		iVar0 = 100;
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, 379542007, 0, 0))
		{
			if (!func_579(379542007))
			{
				func_580(379542007);
			}
			func_581(Global_35, 379542007, 0, 0, 2, 1, 0, 1056964608, 1065353216, iVar0, 0, 0, 0, 0);
		}
		else
		{
			iVar1 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, 379542007);
			if (iVar1 < iVar0)
			{
				WEAPON::_0xB190BCA3F4042F95(Global_35, 379542007, (iVar0 - iVar1), 752097756);
			}
		}
	}
}

void func_278(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436->f_9 = 0f;
	}
	Global_1935436->f_8 = 0f;
	Global_1935436->f_12.f_1 = 0f;
	Global_1935436->f_12 = 0f;
	Global_1935436->f_12.f_3 = 0f;
	Global_1935436->f_12.f_2 = 0f;
	Global_1935436->f_12.f_4 = 0;
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::_0x06D26A96CA1BCA75(Global_35, 10, 0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_0x406CCF555B04FAD3(Global_35, 0, 0f);
	func_582(0f);
	Global_1935436->f_11 = 1;
	if (func_385())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_583();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_279(var uParam0)
{
	if (func_492(((*Global_1835011)[60 /*74*/])->f_1, 1) && !func_492(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, 1247405313, 0, 0))
		{
			if (!func_579(1247405313))
			{
				func_580(1247405313);
			}
			func_581(Global_35, 1247405313, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
	}
}

int func_280(var uParam0)
{
	if (uParam0->f_174 == func_19())
	{
		return 1;
	}
	return 0;
}

void func_281(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10, bool bParam11)
{
	struct<4> Var0;
	struct<4> Var4;
	
	if (uParam0->f_752 != iParam9)
	{
		if (uParam0->f_752 > -1)
		{
			func_584(uParam0);
		}
		uParam0->f_752 = iParam9;
		func_585(uParam0);
	}
	if (func_32(uParam0, 128) && func_29())
	{
		func_156(0);
		bParam11 = true;
	}
	if (!bParam11)
	{
		if ((func_285() == iParam9 && func_586() == iParam10) && !func_587(*Global_1347394, 0f, 0f, 0f))
		{
			return;
		}
	}
	if (func_285() != iParam9 && !func_587(*Global_1347394, 0f, 0f, 0f))
	{
		func_153(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_588(((*Global_1347702)[uParam0->f_174 /*49*/])->f_15, Var0, Var4, iParam9, iParam10);
}

void func_282(var uParam0, int iParam1)
{
	iLocal_186 = iParam1;
	switch (iParam1)
	{
		case 0:
			StringCopy(&(uParam0->f_2575), "RHNTN_S5_MCS1", 24);
			func_532(&(uParam0->f_206), "MultiStart");
			func_590(uParam0, 89510/*func_589*/);
			func_591(uParam0, 2322.39f, 1140.35f, 95.34f);
			func_592(uParam0, 0, 0, 0);
			break;
		
		case 1:
			StringCopy(&(uParam0->f_2575), "RHNTN_S6_INT", 24);
			func_593(&(uParam0->f_206), 2541.45f, 772.71f, 75.79f, 104.38f, 0);
			func_592(uParam0, 0, 0, 0);
			func_333(uParam0, iLocal_25, 0, 0, 0, 0);
			func_333(uParam0, iLocal_112, 0, 0, 0, 0);
			func_333(uParam0, iLocal_113, "A_F_M_BTCHILLBILLY_01", 0, 0, 0);
			func_333(uParam0, iLocal_114, "A_F_M_BTCHILLBILLY_01^1", 0, 0, 0);
			func_333(uParam0, iLocal_115, "A_M_M_BTCHILLBILLY_01", 0, 0, 0);
			func_333(uParam0, iLocal_116, "A_M_M_BTCHILLBILLY_01^1", 0, 0, 0);
			func_333(uParam0, iLocal_117, "A_M_M_BTCHILLBILLY_01^2", 0, 0, 0);
			func_332(uParam0, iLocal_118, "p_chair_crate02x", 0, 0, 0);
			func_332(uParam0, iLocal_119, "p_chair06x", 0, 0, 0);
			func_332(uParam0, iLocal_120, "p_cs_letter03x", 0, 0, 0);
			func_590(uParam0, 89868/*func_594*/);
			func_591(uParam0, vLocal_135);
			break;
	}
	func_1(&(uParam0->f_172), 16);
}

int func_283(var uParam0)
{
	struct<4> Var0;
	int iVar12;
	vector3 vVar13;
	
	iVar12 = iLocal_191;
	func_320();
	if (!iLocal_163)
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BUT_GUARD_SCENARIOS", false);
		iLocal_163 = 1;
	}
	if (func_595(Global_35))
	{
		func_596(Global_35, vLocal_200, &uLocal_173, 25f, 20f, 15f, 10f, 2f, 0, 0, 1, 1, 1);
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		func_596(Global_35, vLocal_200, &uLocal_173, 30f, 25f, 20f, 15f, 2f, 0, 0, 1, 1, 1);
	}
	switch (iLocal_191)
	{
		case 0:
			if (func_322(0, 0, "pl_PropSetup_loop"))
			{
				if (func_350())
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(&(iLocal_180[0]), "b_PlayerArthur", false, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iLocal_180[0]), "John", Global_35, 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(&(iLocal_180[0]), "b_PlayerArthur", true, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iLocal_180[0]), "Arthur", Global_35, 0);
				}
				ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(&(iLocal_180[0]), "P_CAVEENTRYBLOCK01X", &Var0, true, "pl_PropSetup_loop", 2);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_111))
				{
					iLocal_111 = OBJECT::CREATE_OBJECT_NO_OFFSET(-1216910965, Var0, true, true, false, true);
					ENTITY::SET_ENTITY_ROTATION(iLocal_111, Var0.f_3, 2, true);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iLocal_180[0]), "P_CAVEENTRYBLOCK01X", iLocal_111, 0);
				ENTITY::SET_ENTITY_COLLISION(iLocal_111, false, false);
				ANIMSCENE::START_ANIM_SCENE(&(iLocal_180[0]));
				ANIMSCENE::_0xDF7B5144E25CD3FE(&(iLocal_180[0]), "pl_investigation");
				iLocal_191 = 1;
			}
			break;
		
		case 1:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(&(iLocal_180[0]), "pl_investigation"))
			{
				vVar13 = { func_597(Global_35, &(iLocal_180[0]), "Arthur", "pl_investigation", 0) };
				if (func_205(Global_35, vVar13, 1) < 5f)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
					if (func_479(Global_35, 1, 0, 0) != joaat("weapon_unarmed"))
					{
						WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
					}
				}
				if (func_205(Global_35, vVar13, 1) < 3f && PED::IS_PED_ON_FOOT(Global_35))
				{
					FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 7f);
					iLocal_191 = 2;
				}
			}
			break;
		
		case 2:
			if (PED::_0xD806CD2A4F2C2996(Global_35) == 0)
			{
				if (func_351(Global_35, &(iLocal_180[0]), "ARTHUR", "pl_investigation", &iLocal_103, 1065353216, 1, 1, 1))
				{
					iLocal_103 = 0;
					ENTITY::SET_ENTITY_COLLISION(iLocal_111, true, false);
					MAP::DISPLAY_RADAR(false);
					iLocal_191 = 3;
				}
			}
			else if (!func_421(Global_35, -208384378))
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, PED::_0xD806CD2A4F2C2996(Global_35), Global_36, 1f, 0);
			}
			break;
		
		case 3:
			ANIMSCENE::_0xDF7B5144E25CD3FE(&(iLocal_180[0]), "PL_ENTER_FROM_S_IDLE");
			if (ANIMSCENE::_0x8D81E7824B7753F7(&(iLocal_180[0]), "s_LocoHold", 1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(iLocal_180[0]), "PL_ENTER_FROM_S_IDLE", true);
				iLocal_191 = 6;
			}
			break;
		
		case 6:
			CAM::_0x05AB44D906738426();
			if (ANIMSCENE::_0x8D81E7824B7753F7(&(iLocal_180[0]), "s_Struggle_Loop", 1))
			{
				iLocal_190 = func_598("HNTN5_PULL", -1300031296, 9, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_259(&uLocal_192);
				iLocal_191 = 7;
			}
			break;
		
		case 7:
			if (func_599(iLocal_190, 1))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(&(iLocal_180[0]), "PL_STRUGGLE_BOARD_RIP");
				if (ANIMSCENE::_0x23E33CB9F4A3F547(&(iLocal_180[0]), "PL_STRUGGLE_BOARD_RIP"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(iLocal_180[0]), "PL_STRUGGLE_BOARD_RIP", true);
					func_426(&iLocal_190, 1, 1);
					iLocal_191 = 8;
				}
			}
			else
			{
				CAM::_0x05AB44D906738426();
				func_600();
			}
			break;
		
		case 10:
			if (ANIMSCENE::_0x8D81E7824B7753F7(&(iLocal_180[0]), "s_LocoHold", 1))
			{
				iLocal_190 = func_601("HNTN5_GRAB", -719620017, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_24, 2f, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(&(iLocal_180[0]), "PL_ENTER_FROM_S_IDLE");
				iLocal_198 = 0;
				MAP::DISPLAY_RADAR(true);
				if (func_350())
				{
					vLocal_203 = { func_597(Global_35, &(iLocal_180[0]), "John", "PL_ENTER_FROM_S_IDLE", 0) };
					fLocal_206 = func_602(Global_35, &(iLocal_180[0]), "John", "PL_ENTER_FROM_S_IDLE", 0);
				}
				else
				{
					vLocal_203 = { func_597(Global_35, &(iLocal_180[0]), "Arthur", "PL_ENTER_FROM_S_IDLE", 0) };
					fLocal_206 = func_602(Global_35, &(iLocal_180[0]), "Arthur", "PL_ENTER_FROM_S_IDLE", 0);
				}
				iLocal_191 = 4;
			}
			break;
		
		case 4:
			if (func_603(iLocal_190, 1) && ANIMSCENE::_0x23E33CB9F4A3F547(&(iLocal_180[0]), "PL_ENTER_FROM_S_IDLE"))
			{
				func_426(&iLocal_190, 1, 1);
				TASK::TASK_PED_SLIDE_TO_COORD(Global_35, vLocal_203, fLocal_206, 0.75f);
				MAP::DISPLAY_RADAR(false);
				iLocal_191 = 5;
			}
			break;
		
		case 5:
			if (!func_421(Global_35, 1045468327) || func_205(Global_35, vLocal_200, 0) < 0.5f)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(iLocal_180[0]), "PL_ENTER_FROM_S_IDLE", true);
				iLocal_191 = 6;
			}
			break;
		
		case 8:
			ANIMSCENE::_0xDF7B5144E25CD3FE(&(iLocal_180[0]), "PL_ENTER_CAVE");
			if (ANIMSCENE::_0x8D81E7824B7753F7(&(iLocal_180[0]), "s_LocoHold", 1) && ANIMSCENE::_0x23E33CB9F4A3F547(&(iLocal_180[0]), "PL_ENTER_CAVE"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(iLocal_180[0]), "PL_ENTER_CAVE", true);
				OBJECT::DELETE_OBJECT(&iLocal_111);
				iLocal_191 = 9;
			}
			break;
		
		case 9:
			if (ANIMSCENE::_0x8D81E7824B7753F7(&(iLocal_180[0]), "s_LocoHold", 1))
			{
				return 1;
			}
			break;
	}
	if (iVar12 != iLocal_191)
	{
	}
	return 0;
}

int func_284(var uParam0)
{
	if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 128))
	{
		func_161(uParam0);
		return 1;
	}
	switch (uParam0->f_171)
	{
		case 0:
			if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				func_604(0, 1, 1, 1);
				uParam0->f_171 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_604(0, 1, 1, 1);
			if (func_605(Global_35, &(uParam0->f_747), 0, 0, 0, 1084227584, 100, 0, 0))
			{
				func_161(uParam0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_285()
{
	return Global_1572864->f_9;
}

int func_286(var uParam0)
{
	iLocal_105 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_PARAMS(iLocal_105, 2282.043f, 1197.808f, 109.3145f, -10.8341f, 0f, -147.9893f, 51.282f, 0, 1, 1, 2, 1, 0);
	CAM::SET_CAM_ACTIVE(iLocal_105, true);
	CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0, 0, 1);
	func_321();
	CAM::DO_SCREEN_FADE_IN(500);
	func_282(uParam0, 0);
	func_313(uParam0, Global_35, "Arthur", 1);
	iLocal_185 = 0;
	func_311(1);
	func_606(Global_35, 1247405313, 1, 0, 0, 1056964608, 1065353216, 0);
	return 1;
}

int func_287(var uParam0)
{
	func_321();
	func_607(1);
	CAM::DO_SCREEN_FADE_IN(500);
	func_608();
	func_313(uParam0, Global_35, "Arthur", 1);
	iLocal_185 = 4;
	func_311(4);
	func_336();
	func_606(Global_35, 1247405313, 1, 0, 0, 1056964608, 1065353216, 0);
	return 1;
}

bool func_288(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_609(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_610(iParam0);
	if (iVar0 == -427144552)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_611(iParam0, 1))
		{
			return false;
		}
	}
	return func_612(iParam0, 0, bParam2) >= iParam1;
}

int func_289(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	
	if (!func_609(iParam0, 0))
	{
		return 0;
	}
	if (!func_613(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_614(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_615(iParam0, bParam2);
	iVar2 = 0;
	if (func_612(iParam0, 0, 0) == 0)
	{
		if (func_616(iParam0))
		{
			iVar5 = func_617(iParam0);
			iVar6 = func_618(iVar5);
			iVar7 = func_619(iVar6) + 1;
			func_620(iVar5);
			if (func_621(38))
			{
				func_303(483, 0);
			}
			else
			{
				func_303(482, 0);
			}
			if (iVar7 == func_622(iVar6))
			{
				func_289(func_623(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_624() && func_625(4))
				{
					if (func_624() && (func_626(38) || func_621(38)))
					{
						func_628(38, func_623(iVar6), 0, 0, func_627(), 0, -1, 0);
						func_629(2);
					}
					else
					{
						func_628(38, func_623(iVar6), 0, 0, func_627(), 0, -1, 0);
						func_629(1);
					}
				}
			}
			else if (func_624() && func_625(4))
			{
				if (func_624() && (func_626(38) || func_621(38)))
				{
					func_628(38, 0, 0, 0, func_627(), 0, -1, 0);
					func_629(2);
				}
				else
				{
					func_628(38, 0, 0, 0, func_627(), 0, -1, 0);
					func_629(1);
				}
			}
			if (func_624() && func_625(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_624() && (func_626(38) || func_621(38)))
					{
						func_630(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_630(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_610(iParam0) == -1037537535)
	{
		if ((!func_631(iParam0, 866047851) && !func_631(iParam0, -1979000645)) && !func_631(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_632(iParam0, 8388608) && !func_633(28))
	{
		func_634(28);
	}
	if (!bVar3)
	{
		if (func_631(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_635(iParam0) == -1447088266)
			{
				iVar1 = func_637(func_636(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_200() == -1)
					{
						func_580(iVar1);
					}
					if (func_638(0) && func_639(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_640(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_0x5C2EA6C44F515F34(iParam0);
				if (WEAPON::_0x1F7977C9101F807F(iVar1))
				{
					if (func_200() == -1)
					{
						func_580(iParam0);
					}
					if (func_638(0) && func_639(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_640(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_610(iParam0) == -427144552)
		{
			if (!func_641(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_610(iParam0) == 307971639 && func_642(iParam0))
		{
			if (!func_643(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_631(iParam0, 866047851))
		{
			func_644(iParam0);
		}
		else if (func_631(iParam0, 2000026003))
		{
			func_645(iParam0);
		}
		else if (func_631(iParam0, -103750053))
		{
			func_647(func_646(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_647(func_648(-717883113, 2091222383), iVar0);
		}
		else if (func_631(iParam0, -121341956) && !func_631(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_492(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_303(498, 0);
				}
			}
			if (func_631(iParam0, -2017733358) || func_631(iParam0, -1369131378))
			{
				func_649(iParam0);
			}
		}
		else if (func_631(iParam0, -136654233))
		{
			if (func_631(iParam0, -1021472396))
			{
			}
		}
		else if (func_631(iParam0, -1466706512) && func_631(iParam0, 1147021565))
		{
			func_303(484, 0);
		}
		else if (func_631(iParam0, 1147021565) && func_631(iParam0, -524514947))
		{
		}
		else if (func_631(iParam0, 554195525))
		{
		}
		else if (func_631(iParam0, 589988438))
		{
			if (func_650())
			{
				func_651(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_631(iParam0, 787083290) && func_631(iParam0, 949916894))
		{
			func_652(iParam0);
		}
		else if (func_631(iParam0, -1718133314))
		{
			func_653(iParam0);
		}
		else if (func_631(iParam0, -1738650224))
		{
			func_654(iParam0);
		}
		else if (func_631(iParam0, -1112814642) && func_631(iParam0, 949916894))
		{
			func_655(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_631(iParam0, 1841149704))
		{
			func_656();
		}
		else if (func_631(iParam0, 606799272))
		{
			func_657(iParam0, iParam1);
			func_658(iParam0);
		}
		else if (func_631(iParam0, -1112814642) && func_631(iParam0, -1697809989))
		{
			func_659(iParam0, 0, 0, 0);
		}
		else if (func_631(iParam0, -2017733358) || func_631(iParam0, -1369131378))
		{
			func_649(iParam0);
		}
		else if (func_631(iParam0, -1921346699))
		{
			if (func_200() != -1)
			{
				return 0;
			}
			func_660(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_631(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_288(215778062, 1, 0))
					{
						func_289(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 1334018438:
					if (!func_288(670273567, 1, 0))
					{
						func_289(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 1055480217:
					if (!func_288(-967317137, 1, 0))
					{
						func_289(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case -978159653:
					if (!func_288(526074061, 1, 0))
					{
						func_289(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 2100131425:
					if (!func_288(-1045488665, 1, 0))
					{
						func_289(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case -2041382104:
					if (!func_288(471514780, 1, 0))
					{
						func_289(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_631(iParam0, -839724752) && func_632(iParam0, 4))
		{
			if (!func_621(42))
			{
				func_661(iParam0);
			}
		}
		else if (func_631(iParam0, 1399091007))
		{
			func_662(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_631(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				
				case -1421669656:
					iVar8 = -59585102;
					break;
				
				case -830181022:
					iVar8 = 1018123892;
					break;
				
				case 917695895:
					iVar8 = -1455768246;
					break;
				
				case -1580595448:
					iVar8 = -921879912;
					break;
				
				case 1309992709:
					iVar8 = 982182330;
					break;
				
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_289(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			
			case -1185145312:
				func_634(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_663(PLAYER::PLAYER_PED_ID(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_664(&iVar9, 0))
				{
					func_639(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			
			case 1171350303:
				if (func_200() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_663(PLAYER::PLAYER_PED_ID(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			
			case -160924582:
				break;
			
			case 2131771850:
				func_303(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_665();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_666();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_667();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_668();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_669();
				break;
			
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			
			case -1937935584:
				func_670(499813453, 854119837, 0);
				func_671(499813453, 0);
				func_672(1);
				break;
			
			case 2127812557:
				func_670(499813453, -1292544588, 0);
				func_671(499813453, 0);
				func_672(2);
				break;
			
			case 808991383:
				func_670(499813453, -1003325394, 0);
				func_671(499813453, 0);
				func_672(4);
				break;
			
			case 1134518629:
				func_670(666607663, -335460405, 0);
				func_671(666607663, 0);
				func_673(1);
				break;
			
			case 902940106:
				func_670(666607663, 903797617, 0);
				func_671(666607663, 0);
				func_673(2);
				break;
			
			case -418174898:
				func_670(666607663, 669728650, 0);
				func_671(666607663, 0);
				func_673(4);
				break;
			
			case -648114971:
				func_670(-220219788, 1214120047, 0);
				func_671(-220219788, 0);
				func_674(1);
				break;
			
			case 211153747:
				func_670(-220219788, 655769340, 0);
				func_671(-220219788, 0);
				func_674(2);
				break;
			
			case -32876996:
				func_670(-220219788, 885316185, 0);
				func_671(-220219788, 0);
				func_674(4);
				break;
			
			case 1191437462:
				func_670(218622660, -1491419385, 0);
				func_671(218622660, 0);
				func_675(1);
				break;
			
			case 1119149048:
				func_670(218622660, 1809565830, 0);
				func_671(218622660, 0);
				func_675(2);
				break;
			
			case 506073827:
				func_670(390004462, -628873767, 0);
				func_671(390004462, 0);
				func_676(1);
				break;
			
			case -1876986168:
				func_670(390004462, -405421956, 0);
				func_671(390004462, 0);
				func_676(2);
				break;
			
			case 2142623221:
				func_670(390004462, -1108972386, 0);
				func_671(390004462, 0);
				func_676(4);
				break;
			
			case 1508215381:
				func_670(6410548, 1053716392, 0);
				func_671(6410548, 0);
				func_677(1);
				break;
			
			case -888935280:
				func_670(6410548, 806507056, 0);
				func_671(6410548, 0);
				func_677(2);
				break;
			
			case -1252474566:
				func_670(6410548, 1571925350, 0);
				func_671(6410548, 0);
				func_677(4);
				break;
			
			case -1465702449:
				func_670(6410548, 1330352282, 0);
				func_671(6410548, 0);
				func_677(8);
				break;
			
			case -21093309:
				func_679(242, func_678(-21093309), 0);
				break;
			
			case 204375141:
				func_679(240, func_678(204375141), 0);
				break;
			
			case -417963070:
				func_679(241, func_678(-417963070), 0);
				break;
			
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_680(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_680(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_680(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1976480343:
			case -953313786:
			case 730856618:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_680(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_680(595, -103579, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_680(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case 80178851:
				func_303(488, 0);
				break;
			
			case 1613651027:
				func_303(491, 0);
				break;
			
			case -885810591:
				func_303(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_289(func_681(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_289(func_682(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			
			case -601932535:
				if (func_633(1))
				{
					func_303(487, 0);
				}
				break;
			
			case -898386032:
				func_303(486, 0);
				break;
			
			case -2035110427:
				if (func_200() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			
			case 1510719693:
				func_303(496, 0);
				break;
			
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_683(&iVar10);
		if (!func_684(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_638(0))
		{
			return 1;
		}
		if (func_610(iParam0) == -1037537535)
		{
			func_685(iParam0);
		}
		if (func_631(iParam0, -1979000645))
		{
			func_686(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_638(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_289(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_687(iVar2, 0);
		}
	}
	Var35 = { func_688(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_689(iParam0);
	if (sParam6 > 0f)
	{
		if (func_631(iParam0, -839724752))
		{
			func_690(iParam0, sParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_691(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

int func_290(var uParam0)
{
	func_347();
	if (!func_79(&uLocal_145))
	{
		func_259(&uLocal_145);
	}
	if (!iLocal_144 && func_334(&uLocal_145) < 4f)
	{
		return 0;
	}
	func_317(uParam0);
	if (!func_206(&(iLocal_76[0]), 0) || !func_206(&(iLocal_76[1]), 0))
	{
		return 0;
	}
	if (func_308(uParam0) != 3)
	{
		func_309(uParam0, 3);
	}
	TASK::TASK_SMART_FLEE_PED(&(iLocal_76[0]), Global_35, 1000f, -1, 0, 3f, 0);
	TASK::TASK_SMART_FLEE_PED(&(iLocal_76[1]), Global_35, 1000f, -1, 0, 3f, 0);
	func_321();
	func_607(1);
	CAM::DO_SCREEN_FADE_IN(500);
	func_313(uParam0, Global_35, "Arthur", 1);
	iLocal_185 = 7;
	func_336();
	return 1;
}

int func_291(var uParam0)
{
	if (!func_357(uParam0))
	{
		return 0;
	}
	if (!iLocal_139)
	{
		func_282(uParam0, 1);
		iLocal_139 = 1;
	}
	if (!func_6(uParam0->f_172, 1))
	{
		return 0;
	}
	return 1;
}

int func_292()
{
	int iVar0;
	
	iVar0 = func_500();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_293(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case -40:
		case 40:
			return 1;
		
		case -80:
		case 80:
			return 2;
		
		case -120:
		case 120:
			return 3;
		
		case -160:
		case 160:
			return 4;
		
		case -200:
		case 200:
			return 5;
		
		case -240:
		case 240:
			return 6;
		
		case -280:
		case 280:
			return 7;
		
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

float func_294(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_295(var uParam0)
{
	if (!func_6(uParam0->f_172, 512))
	{
		if (!func_692(uParam0))
		{
			return 0;
		}
		func_210(&(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12), 128);
		if (func_239(uParam0))
		{
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_751);
			func_1(&(uParam0->f_172), 512);
		}
		return 0;
	}
	func_604(0, 1, 1, 1);
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_751) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_751, 0))
	{
		func_1(&(uParam0->f_172), 1024);
		func_2(&(uParam0->f_172), 256);
		return 1;
	}
	return 0;
}

void func_296()
{
	PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
	PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
	PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
	PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
	PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1938056823, false);
}

void func_297(var uParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
}

int func_298(var uParam0)
{
	if (uParam0->f_176 == 4)
	{
		if (!func_693(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_299(var uParam0, var uParam1)
{
	struct<8> Var0;
	
	if (func_183(uParam1, 32768))
	{
		Var0 = { func_531(uParam0) };
		func_243(uParam0, &Var0);
		if (func_183(uParam1, 131072))
		{
			func_330(uParam0, 268435456);
			if (func_244(uParam0->f_409))
			{
				uParam0->f_409 = { func_694(uParam1, uParam1->f_1580) };
			}
			if (func_244(uParam0->f_406))
			{
				uParam0->f_406 = { func_694(uParam1, uParam1->f_1580) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_406, &(uParam0->f_406.f_2), 0);
				uParam0->f_406.f_2 = (uParam0->f_406.f_2 + 0.5f);
			}
		}
		if (func_183(uParam1, 268435456))
		{
			func_695(&(uParam0->f_404), 16384);
		}
	}
	else if (func_183(uParam1, 524288))
	{
		func_330(uParam0, 67108864);
		func_696(uParam1, 524288);
	}
	if (func_697(uParam1, 128))
	{
		func_330(uParam0, 32);
	}
	if (uParam1->f_1799 != 0)
	{
		uParam0->f_416 = uParam1->f_1799;
		if (uParam1->f_1580 >= 0 && func_698(uParam1->f_912[uParam1->f_1580 /*41*/], 256))
		{
			func_695(&(uParam0->f_404), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1588)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_417), &(uParam1->f_1588), 16);
	}
}

void func_300(var uParam0, int iParam1)
{
	var uVar0;
	
	if (iParam1 || !func_6(uParam0->f_172, 16384))
	{
		MemCopy(&uVar0, {func_699(uParam0->f_174)}, 8);
		func_700(&uVar0, 15000, 0, 0, 0, 1);
		func_1(&(uParam0->f_172), 16384);
	}
}

int func_301(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = func_701();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return 0;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar1);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	bVar2 = false;
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	if (iVar3 > 0)
	{
		if (ITEMSET::IS_IN_ITEMSET(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_302()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383->f_393))
	{
		func_702();
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::_0xD2CB0FB0FDCB473D(iVar0, 0);
	func_703(-1);
	func_704(3);
	return 1;
}

void func_303(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	func_705(iParam0, &iVar0, &iVar1);
	if (!func_706(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_707(iVar0, iVar1);
}

int func_304(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	func_536(uParam4, &sParam0);
	if (func_535(uParam4, 2) && !func_535(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -842734359, false);
	}
	if (func_708(uParam4) != 1)
	{
		func_709(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_708(uParam4))
	{
		case 1:
			if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348) && ANIMSCENE::_0x477122B8D05E7968(uParam4->f_348, 1, 0))
			{
				if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam4->f_348, 0))
				{
					func_710(uParam4, &sParam0, uParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
				{
					func_711(uParam4, 4);
					return 0;
				}
				else
				{
					if (func_712(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_341);
					}
					func_713(uParam5);
				}
				func_711(uParam4, 3);
			}
			else if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_350)) && func_535(uParam4, 134217728))
				{
				}
				else
				{
					func_242(uParam4);
				}
				func_259(&(uParam4->f_1));
				func_711(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_546(uParam4);
				if (!func_79(&(uParam4->f_1)))
				{
					func_80(&(uParam4->f_1), 0);
				}
				else if (func_334(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_711(uParam4, 4);
				}
			}
			break;
		
		case 2:
			if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_348) || !ANIMSCENE::_0x477122B8D05E7968(uParam4->f_348, 1, 0))
			{
				if (func_246(uParam4, &sParam0, 1, 1))
				{
					if (!ANIMSCENE::_0x477122B8D05E7968(uParam4->f_348, 1, 0))
					{
						func_711(uParam4, 4);
					}
					else if (!func_244(func_537(uParam4)) && !func_714(Global_35, func_537(uParam4), 100f, 1, 1))
					{
						func_715(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_537(uParam4), 0f, 1, 1, 1, 0);
					}
				}
				else if (func_334(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					func_711(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					func_716(1, 0);
					func_710(uParam4, &sParam0, uParam5);
					func_711(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_334(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				func_711(uParam4, 4);
			}
			break;
		
		case 3:
			func_717(uParam4);
			if (func_712(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			func_713(uParam5);
			if ((ANIMSCENE::_0x25557E324489393C(uParam4->f_348) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam4->f_348, 0)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348) || func_535(uParam4, 512)))
			{
				if (!func_535(uParam4, 1024) && func_718(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_535(uParam4, 512))
				{
					func_259(&(uParam4->f_1));
					func_330(uParam4, 512);
					func_711(uParam4, 4);
				}
				else if (func_535(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_709(uParam4);
			}
			if (func_535(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_719(uParam4) - func_720(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (func_721(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_720(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_722(uParam4))
			{
				if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
				{
				}
				func_723(uParam4);
				func_724(uParam4);
				return 1;
			}
			else
			{
				if (func_535(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_348);
						}
						func_259(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_330(uParam4, 512);
						func_533(uParam4, 67108864, 1);
						func_711(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_535(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348)) && CAM::IS_SCREEN_FADED_OUT()) && func_720(uParam4) <= 5000) && func_720(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_535(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_725(&(uParam4->f_405), 0);
					func_330(uParam4, 536870912);
				}
				if (func_720(uParam4) >= 5000 && func_720(uParam4) <= (func_719(uParam4) - 5000))
				{
					func_726();
				}
			}
			break;
		
		case 6:
			if (func_722(uParam4))
			{
				func_723(uParam4);
				func_724(uParam4);
				return 1;
			}
			break;
		
		case 4:
			if (func_535(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
					{
						func_330(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348))
				{
					if (!ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 1);
						if (_NAMESPACE71::_0xC17F69E1418CD11F(9) != 0)
						{
							_NAMESPACE71::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_348))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					if (func_727(uParam5))
					{
						if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 0);
						}
						func_711(uParam4, 3);
					}
					else if (func_334(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_0x25557E324489393C(uParam4->f_348) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, 0);
						}
						func_711(uParam4, 3);
					}
				}
				if (func_708(uParam4) == 3)
				{
					if (func_535(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		
		case 5:
			func_711(uParam4, 4);
			break;
	}
	return 0;
}

void func_305(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4))
	{
		if (func_535(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_728(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_535(uParam0, 8))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_4);
		func_533(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_533(uParam0, 16, 1);
}

void func_306(int* iParam0)
{
	struct<367> Var0;
	
	Var0 = 1;
	Var0.f_13 = 27;
	Var0.f_338 = 1097859072;
	Var0.f_339 = 1101004800;
	Var0.f_366 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 434);
}

void func_307(var uParam0)
{
	func_729(&(uParam0->f_753));
	StringCopy(&(uParam0->f_2581), "", 32);
	uParam0->f_2571 = 0;
	func_2(&(uParam0->f_172), 262144);
	func_2(&(uParam0->f_172), 524288);
	func_2(&(uParam0->f_172), 1048576);
}

int func_308(var uParam0)
{
	return uParam0->f_169;
}

void func_309(var uParam0, int iParam1)
{
	uParam0->f_169 = iParam1;
}

void func_310(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
	{
		ENTITY::DETACH_ENTITY(*iParam0, true, true);
	}
	OBJECT::DELETE_OBJECT(iParam0);
}

void func_311(int iParam0)
{
	if (iLocal_187 != iParam0)
	{
		iLocal_187 = iParam0;
		switch (iLocal_187)
		{
			case 0:
				if (MAP::DOES_BLIP_EXIST(iLocal_24))
				{
					MAP::REMOVE_BLIP(&iLocal_24);
				}
				break;
			
			case 1:
				if (MAP::DOES_BLIP_EXIST(iLocal_24))
				{
					MAP::REMOVE_BLIP(&iLocal_24);
				}
				iLocal_24 = func_730(408396114, iLocal_41, 1);
				func_382(125, "HNTN5_OBJ0", 1, -1082130432, 0, 0, -1, -1, 0);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_24, "HNTN5_BLIP");
				if (!iLocal_82)
				{
					func_384("HNTN5_OBJ0", 7500, 0, 1, 0, 0, -1, -1, 0);
					iLocal_82 = 1;
				}
				break;
			
			case 3:
				if (MAP::DOES_BLIP_EXIST(iLocal_24))
				{
					MAP::REMOVE_BLIP(&iLocal_24);
				}
				iLocal_24 = func_731(408396114, 2282.49f, 1197.96f, 107.93f, 1);
				func_382(125, "HNTN5_OBJ1", 1, -1082130432, 0, 0, -1, -1, 0);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_24, "HNTN5_BLIP");
				break;
			
			case 2:
				if (MAP::DOES_BLIP_EXIST(iLocal_24))
				{
					MAP::REMOVE_BLIP(&iLocal_24);
				}
				iLocal_24 = func_731(408396114, vLocal_31, 1);
				func_382(125, "HNTN5_OBJ3", 1, -1082130432, 0, 0, -1, -1, 0);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_24, "HNTN5_BLIP");
				func_384("HNTN5_OBJ3", 7500, 0, 1, 0, 0, -1, -1, 0);
				break;
			
			case 4:
				if (MAP::DOES_BLIP_EXIST(iLocal_24))
				{
					MAP::REMOVE_BLIP(&iLocal_24);
				}
				func_382(125, "HNTN5_OBJ2", 1, -1082130432, 0, 0, -1, -1, 0);
				if (!bLocal_83)
				{
					func_384("HNTN5_OBJ2", 7500, 0, 1, 0, 0, -1, -1, 0);
					iLocal_82 = 1;
				}
				break;
		}
	}
}

int func_312(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	
	if (!func_609(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_732(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_691(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_288(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_688(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_612(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_612(iParam0, 0, 0) - iParam1) < 0)
		{
			func_312(iParam0, func_612(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_610(iParam0) == -427144552)
	{
		if (!func_733(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_734(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_638(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_691(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_735(iParam0, iParam1);
	return 1;
}

void func_313(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_736(&(uParam0->f_643), iParam1, sParam2, bParam3);
}

void func_314(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	switch (&Global_40.f_9536[iParam0])
	{
		case -1:
			Global_40.f_9536[iParam0] = 0;
			if (bParam1)
			{
				iVar0 = func_737();
				if (iVar0 != -1)
				{
					if ((Global_40.f_9479[iVar0 /*4*/])->f_1 == -1)
					{
						(Global_40.f_9479[iVar0 /*4*/])->f_1 = iParam0;
					}
					else if ((Global_40.f_9479[iVar0 /*4*/])->f_2 == -1)
					{
						(Global_40.f_9479[iVar0 /*4*/])->f_2 = iParam0;
					}
					else
					{
						(Global_40.f_9479[iVar0 /*4*/])->f_2 = (Global_40.f_9479[iVar0 /*4*/])->f_1;
						(Global_40.f_9479[iVar0 /*4*/])->f_1 = iParam0;
					}
				}
			}
			break;
		
		case 0:
			break;
		
		case 1:
			break;
	}
}

int func_315(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (func_183(uParam0, 32768))
	{
		return 1;
	}
	if (func_738(uParam0) >= 3)
	{
		uParam0->f_1792 = func_507(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630->f_40))
			{
				uParam0->f_1794 = Global_1935630->f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		func_739(uParam0);
	}
	if (func_738(uParam0) < 10)
	{
		if (func_738(uParam0) == 3)
		{
			func_740(uParam0, iParam5, bParam6);
		}
		else if (func_738(uParam0) > 3)
		{
			if (func_741(uParam0) == 0)
			{
				if (!func_183(uParam0, 524288))
				{
					func_742(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_743(uParam0, 4);
					func_744(uParam0, 10);
					func_745(uParam0, iParam5);
					return 1;
				}
			}
			if (!func_183(uParam0, 67108864) && !Global_1935630->f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!func_698(uParam0->f_912[uParam0->f_1580 /*41*/], 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
				PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
			}
			CAM::_0x8910C24B7E0046EC();
			func_746(0);
			func_747();
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1644850270, false);
			PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
			if (uParam0->f_1580 >= 0)
			{
				if (!func_698(uParam0->f_912[uParam0->f_1584 /*41*/], 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (func_748(uParam0, uParam0->f_1580))
				{
					if (func_749(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						func_750(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					func_750(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
				}
				func_751(uParam0);
			}
		}
	}
	bVar0 = func_752(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_183(uParam0, 268435456) && bVar1) && !func_183(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS((uParam0->f_912[uParam0->f_1580 /*41*/])->f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					iVar2 = 1;
				}
			}
			if (!bVar3 || iVar2)
			{
				func_753(uParam0, 131072);
				func_753(uParam0, 268435456);
			}
		}
		if (func_697(uParam0, 64) || (uParam0->f_1580 >= 0 && !func_698(uParam0->f_912[uParam0->f_1580 /*41*/], 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || func_741(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_738(uParam0) == 3 || func_183(uParam0, 131072))
	{
		func_754(uParam0);
		if (!func_183(uParam0, 262144))
		{
			if ((bVar0 && func_183(uParam0, 65536)) || func_183(uParam0, 131072))
			{
				func_753(uParam0, 32768);
				func_743(uParam0, 4);
				func_744(uParam0, 10);
				uParam0->f_1665 = 1;
				func_745(uParam0, iParam5);
				return 1;
			}
		}
	}
	if (func_738(uParam0) >= 3)
	{
		func_755(uParam0, iParam5);
		func_756(uParam0);
		if (!func_757(uParam0, 1))
		{
			func_758(uParam0);
		}
		func_759(uParam0);
	}
	switch (func_738(uParam0))
	{
		case 0:
			func_760(uParam0, Param1, iParam5);
			break;
		
		case 1:
			func_761(uParam0);
			break;
		
		case 2:
			func_762(uParam0);
			break;
		
		case 3:
			if (func_316(uParam0))
			{
				func_763(2);
				func_750(uParam0, (uParam0->f_912[uParam0->f_1580 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1580 /*22*/])->f_1, 1065353216);
				func_259(&(uParam0->f_1768));
				func_743(uParam0, 1);
				func_764();
				func_744(uParam0, 5);
			}
			break;
		
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!func_183(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (func_738(uParam0) == 5)
			{
				if (func_765(uParam0))
				{
					func_743(uParam0, 2);
					func_744(uParam0, 6);
				}
			}
			if (func_738(uParam0) == 6)
			{
				if (func_766(uParam0))
				{
					func_743(uParam0, 3);
					func_744(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || func_767(&(uParam0->f_1768)) >= 15f)
			{
				if (func_768(uParam0, iParam5))
				{
					if (func_769(uParam0))
					{
						uParam0->f_1581 = func_770(uParam0);
						func_259(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
						HUD::_0x8BC7C1F929D07BF3(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
						func_743(uParam0, 6);
						func_744(uParam0, 9);
					}
					else
					{
						func_743(uParam0, 4);
						func_744(uParam0, 10);
						func_745(uParam0, iParam5);
						return 1;
					}
				}
			}
			break;
		
		case 9:
			if (func_768(uParam0, iParam5))
			{
				func_745(uParam0, iParam5);
				func_744(uParam0, 10);
				return 1;
			}
			break;
		
		case 10:
			return 1;
	}
	return 0;
}

int func_316(var uParam0)
{
	if (uParam0->f_1666)
	{
		return 0;
	}
	return uParam0->f_1665;
}

void func_317(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_76[0])))
	{
		iLocal_76[0] = func_562(uParam0, iLocal_79, 2360.108f, 994.6215f, 72.5571f, 106.3565f, 1, 1, 0, 1, 1, 0, 1, 0);
		if (func_206(&(iLocal_76[0]), 0))
		{
			PED::_0x1902C4CFCC5BE57C(&(iLocal_76[0]), 177941887);
			PED::_0xCC8CA3E88256E58F(&(iLocal_76[0]), 0, 1, 1, 1, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(iLocal_76[0]), true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_76[1])))
	{
		iLocal_76[1] = func_562(uParam0, iLocal_79, 2361.315f, 994.1659f, 72.7961f, 163.9049f, 1, 1, 0, 1, 1, 0, 1, 0);
		if (func_206(&(iLocal_76[1]), 0))
		{
			PED::_0x1902C4CFCC5BE57C(&(iLocal_76[1]), 413714842);
			PED::_0xCC8CA3E88256E58F(&(iLocal_76[1]), 0, 1, 1, 1, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(iLocal_76[1]), true);
		}
	}
}

void func_318()
{
	float fVar0;
	
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_80))
	{
		return;
	}
	fVar0 = (MISC::GET_FRAME_TIME() * 30f);
	if (iLocal_162)
	{
		fLocal_161 = (fLocal_161 + (0.0001f * fVar0));
	}
	else
	{
		fLocal_161 = (fLocal_161 - (0.0002f * fVar0));
		if (fLocal_161 <= 0f)
		{
			GRAPHICS::ANIMPOSTFX_STOP(sLocal_80);
		}
	}
	fLocal_161 = func_771(fLocal_161, 0f, 0.1f);
	GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_80, fLocal_161);
}

void func_319(var uParam0)
{
	vector3 vVar0[6];
	int iVar19;
	
	if (iLocal_14 >= 6)
	{
		return;
	}
	*(vVar0[0 /*3*/]) = { 2296.231f, 1126.358f, 95.1132f };
	*(vVar0[1 /*3*/]) = { 2290.256f, 1124.123f, 95.2094f };
	*(vVar0[2 /*3*/]) = { 2286.089f, 1115.354f, 95.0734f };
	*(vVar0[3 /*3*/]) = { 2291.82f, 1111.791f, 94.648f };
	*(vVar0[4 /*3*/]) = { 2325.54f, 1137.172f, 95.2901f };
	*(vVar0[5 /*3*/]) = { 2318.726f, 1147.73f, 95.2956f };
	iVar19 = func_562(uParam0, 989669666, *(vVar0[iLocal_14 /*3*/]), 0, 1, 1, 0, 1, 1, 1, 1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar19))
	{
		PED::SET_PED_CONFIG_FLAG(iVar19, 38, true);
		func_772(iVar19, 1, 0);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar19);
		iLocal_14++;
	}
}

void func_320()
{
	switch (iLocal_179)
	{
		case 0:
			if ((iLocal_191 >= 8 && iLocal_191 != 10) && ANIMSCENE::_0x3FBC3F51BF12DFBF(&(iLocal_180[0])) > 0.4f)
			{
				if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					func_773(2280.789f, 1199.775f, 109.1544f, -4.4838f, 0f, -144.8411f, 51.282f, 5000, 1);
				}
				iLocal_179 = 1;
			}
			break;
		
		case 1:
			if (iLocal_191 >= 9 && ANIMSCENE::_0x3FBC3F51BF12DFBF(&(iLocal_180[0])) > 0.4f)
			{
				if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					func_773(2281.982f, 1197.776f, 109.1722f, -7.5516f, 0f, -147.5149f, 51.282f, 7500, 1);
				}
				func_259(&uLocal_107);
				iLocal_179 = 2;
			}
			break;
		
		case 2:
			if (!iLocal_110)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					func_606(Global_35, 1247405313, 1, 0, 0, 1056964608, 1065353216, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 1247405313, false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
					if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, 2283.037f, 1197.184f, 107.7035f, 1f, -1, 0.25f, false, 211.2172f);
						iLocal_110 = 1;
					}
					else
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
						MAP::DISPLAY_RADAR(true);
						iLocal_179 = 3;
					}
				}
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0.5f);
			}
			if (func_334(&uLocal_107) >= 7.5f)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0, 0, 1);
				MAP::DISPLAY_RADAR(true);
				iLocal_179 = 3;
			}
			break;
	}
}

void func_321()
{
	func_774();
	func_775();
	func_273(Global_1935630, 262144);
}

int func_322(int iParam0, int iParam1, char* sParam2)
{
	if (ANIMSCENE::_0x25557E324489393C(&(iLocal_180[iParam0])))
	{
		if (ANIMSCENE::_0x477122B8D05E7968(&(iLocal_180[iParam0]), 1, 0))
		{
			return 1;
		}
	}
	else
	{
		iLocal_180[iParam0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_776(iParam0), iParam1, sParam2, false, true);
		if (ANIMSCENE::_0x25557E324489393C(&(iLocal_180[iParam0])))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(&(iLocal_180[iParam0]));
		}
	}
	return 0;
}

void func_323()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_70))
	{
		if (iLocal_71 == 0)
		{
			iLocal_71 = ENTITY::_0x6F3068258A499E52(-287202633, 2326.65f, 1141.85f, 95.5f, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_71))
		{
			iLocal_70 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_71));
		}
	}
}

void func_324()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_69))
	{
		iLocal_69 = OBJECT::CREATE_OBJECT(-917358175, 2326.66f, 1141.35f, 95.62f, true, true, false, false, true);
	}
}

void func_325(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_25))
	{
		iLocal_25 = func_562(uParam0, iLocal_26, vLocal_27, fLocal_30, 1, 1, 0, 1, 1, 1, 1, 0);
		if (func_206(iLocal_25, 0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_25, true);
			ENTITY::SET_ENTITY_PROOFS(iLocal_25, 4, false);
		}
	}
}

void func_326()
{
	if (!func_204(Global_35, iLocal_42, 1, 0) || !func_467(8192))
	{
		if ((func_479(Global_35, 1, 0, 0) != 1247405313 && !func_777()) && !func_778())
		{
			if (!func_79(&uLocal_237) || func_334(&uLocal_237) > 2f)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 1247405313, false, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 1, false, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
				func_259(&uLocal_237);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
		PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
}

void func_327(var uParam0)
{
	if (iLocal_185 == 1)
	{
		if (!iLocal_94)
		{
			if (func_205(Global_35, 2293.51f, 1179.74f, 103.75f, 0) < 2f)
			{
				if (!func_339() && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					func_340(Global_35, "COUGH_SICK_SMALL", 1615046335, 0, 1, 0, 0, 1);
					iLocal_94 = 1;
				}
			}
		}
		else if (!iLocal_95)
		{
			if (func_205(Global_35, 2306.54f, 1158.24f, 98.92f, 0) < 2f)
			{
				if (!func_339() && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					func_340(Global_35, "COUGH_SICK_SMALL", 1615046335, 0, 1, 0, 0, 1);
					iLocal_95 = 1;
				}
			}
		}
		else if (!func_79(&uLocal_96))
		{
			func_80(&uLocal_96, 0);
		}
		else if (func_334(&uLocal_96) > 10f)
		{
			if (!func_339() && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				func_340(Global_35, "COUGH_SICK_SMALL", 1615046335, 0, 1, 0, 0, 1);
				func_230(&uLocal_96);
			}
		}
	}
	else
	{
		if (!iLocal_93)
		{
			if ((func_205(Global_35, 2289.202f, 1122.978f, 95.2071f, 0) < 10f && !func_339()) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				if (func_350())
				{
					func_423(uParam0, "PW5_MW_J", 0);
				}
				else
				{
					func_423(uParam0, "PW5_MW_A", 0);
				}
				func_230(&uLocal_99);
				iLocal_93 = 1;
			}
		}
		if (func_339())
		{
			func_259(&uLocal_165);
		}
		if (!func_339() && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			func_779(uParam0);
			if (!iLocal_207)
			{
				if (func_205(Global_35, 2330.756f, 1031.986f, 75.8819f, 1) < 3f)
				{
					if (func_334(&uLocal_165) > 1f)
					{
						if (func_350())
						{
							func_423(uParam0, "PW5_ML_J", 0);
						}
						else
						{
							func_423(uParam0, "PW5_ML_A", 0);
						}
						iLocal_207 = 1;
					}
				}
				else if (func_780())
				{
					if (!func_79(&uLocal_165) || func_334(&uLocal_165) > 12f)
					{
						if (func_350())
						{
							func_423(uParam0, "PW5_ME_J", 0);
						}
						else
						{
							func_423(uParam0, "PW5_ME_A", 0);
						}
						func_259(&uLocal_165);
					}
				}
			}
		}
	}
}

void func_328()
{
	if (!func_781(226))
	{
		func_782(226);
	}
	if (bLocal_16)
	{
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_15, sLocal_21))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_15, sLocal_21, 0);
		}
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_15, sLocal_22))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_15, sLocal_22, 1);
		}
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_15, sLocal_23))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_15, sLocal_23, 1);
		}
	}
}

int func_329()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 2313.655f, 1136.209f, 94.70643f, 2326.765f, 1144.775f, 99.09828f, 19.25f, false, true, 0))
	{
		if (!func_79(&uLocal_152))
		{
			func_259(&uLocal_152);
		}
		if (func_334(&uLocal_152) > 20f)
		{
			return 1;
		}
	}
	return 0;
}

void func_330(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

void func_331(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam1, iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar1, false, iParam2, false))
		{
			sParam3 = func_783(iVar1);
		}
	}
	func_784(uParam0, iVar0, sParam3, iParam4, iParam5, 1);
}

void func_332(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_784(&(uParam0->f_206), iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_333(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_785(&(uParam0->f_206), iParam1, sParam2, iParam3, iParam4, bParam5);
}

float func_334(var uParam0)
{
	if (!func_79(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_260(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_786() - uParam0->f_1);
}

int func_335()
{
	switch (iLocal_240)
	{
		case 0:
			if (func_322(1, 0, "pl_leadout"))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iLocal_180[1]), "poisonwellshaman", iLocal_25, 0);
				if (func_350())
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(&(iLocal_180[1]), "b_PlayerArthur", false, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iLocal_180[1]), "John", Global_35, 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(&(iLocal_180[1]), "b_PlayerArthur", true, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iLocal_180[1]), "Arthur", Global_35, 0);
				}
				ANIMSCENE::START_ANIM_SCENE(&(iLocal_180[1]));
				iLocal_240 = 1;
			}
			break;
		
		case 1:
			if (func_205(Global_35, 2313.07f, 1146.97f, 95.3f, 0) < 1.5f)
			{
				func_311(0);
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_poisoned_well_fog", 2311.82f, 1148.56f, 95.78f, 0f, 0f, 0f, 1f, false, false, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(&(iLocal_180[1]), "Loop_Base", true, false);
				ENTITY::SET_ENTITY_PROOFS(Global_35, 4, false);
				FIRE::ADD_EXPLOSION_WITH_USER_VFX(2310.94f, 1150.74f, 96.5f, 25, MISC::GET_HASH_KEY("EXP_VFXTAG_POISONED_WELL"), 1f, true, false, 1f);
				func_608();
				iLocal_240 = 2;
			}
			break;
		
		case 2:
			if (ANIMSCENE::_0x25557E324489393C(&(iLocal_180[1])) && ANIMSCENE::_0xCBFC7725DE6CE2E0(&(iLocal_180[1]), 0))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(&(iLocal_180[1])) > 3f)
				{
					func_607(1);
					iLocal_240 = 3;
				}
			}
			break;
		
		case 3:
			if (ANIMSCENE::_0xD8254CB2C586412B(&(iLocal_180[1]), 0) || ANIMSCENE::_0xCDC5512A407CF08D(&(iLocal_180[1])))
			{
				ENTITY::SET_ENTITY_PROOFS(Global_35, 0, false);
				return 1;
			}
			if ((func_350() && ANIMSCENE::_0xB89FCFF19DAFFF28(&(iLocal_180[1]), "John")) || (!func_350() && ANIMSCENE::_0xB89FCFF19DAFFF28(&(iLocal_180[1]), "Arthur")))
			{
				ENTITY::SET_ENTITY_PROOFS(Global_35, 0, false);
				return 1;
			}
			break;
	}
	return 0;
}

void func_336()
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_48))
	{
		iLocal_48 = VOLUME::_0x0EB78C2B156635B1(665633627, 2313.17f, 1146.89f, 95.57f, 0f, 0f, 0f, 1.1f, 1.1f, 3f);
	}
}

bool func_337(char* sParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0.f_1 = sParam0;
	return func_787(_NAMESPACE71::_0x4E88A65968A55C78(&Var0, iParam1));
}

var func_338(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_339()
{
	return func_788(1);
}

var func_340(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;
	
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_789(uParam0, &Var0);
}

void func_341(var uParam0)
{
	if (!iLocal_64)
	{
		if (!func_206(&(iLocal_72[0]), 0))
		{
			iLocal_72[0] = func_562(uParam0, iLocal_75, 2304.41f, 1131.24f, 95.38f, 0f, 1, 1, 0, 1, 1, 0, 0, 1);
		}
		if (!func_206(&(iLocal_72[1]), 0))
		{
			iLocal_72[1] = func_562(uParam0, iLocal_75, 2301.05f, 1124.08f, 95.37f, 0f, 1, 1, 0, 1, 1, 0, 0, 1);
		}
		if (func_206(&(iLocal_72[0]), 0) && func_206(&(iLocal_72[1]), 0))
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(&(iLocal_72[0]), true, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(&(iLocal_72[1]), true, true);
			PED::_0x1902C4CFCC5BE57C(&(iLocal_72[0]), 1858448252);
			PED::_0xCC8CA3E88256E58F(&(iLocal_72[0]), 0, 1, 1, 1, 0);
			PED::_0x1902C4CFCC5BE57C(&(iLocal_72[1]), 1602424055);
			PED::_0xCC8CA3E88256E58F(&(iLocal_72[1]), 0, 1, 1, 1, 0);
			func_790(&(iLocal_72[0]));
			func_791(&(iLocal_72[0]), 1);
			func_792(&(iLocal_72[0]), -1682377294, 1, 0);
			PED::_0x6569F31A01B4C097(&(iLocal_72[0]), 4, 0);
			func_790(&(iLocal_72[1]));
			func_791(&(iLocal_72[1]), 1);
			func_792(&(iLocal_72[1]), 495338160, 1, 0);
			PED::_0x6569F31A01B4C097(&(iLocal_72[1]), 4, 0);
			func_772(&(iLocal_72[0]), 1, 0);
			func_772(&(iLocal_72[1]), 1, 0);
			iLocal_64 = 1;
		}
	}
}

void func_342()
{
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 5, 1);
	if (!iLocal_159)
	{
		iLocal_157 = ENTITY::GET_ENTITY_HEALTH(Global_35);
		iLocal_158 = (iLocal_157 / 50);
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_80);
		GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_80, 0f);
		CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", 0.25f);
		if (!func_339() && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			func_340(Global_35, "COUGH_SICK_MEDIUM", 1615046335, 0, 1, 0, 0, 1);
		}
		iLocal_159 = 1;
		iLocal_162 = 1;
	}
	else
	{
		if (!func_79(&uLocal_99))
		{
			func_259(&uLocal_99);
		}
		else if (func_334(&uLocal_99) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(4, 6)))
		{
			PED::APPLY_DAMAGE_TO_PED(Global_35, iLocal_158, 1, -1, 0);
			PAD::SET_PAD_SHAKE(0, 100, 200);
			GRAPHICS::ANIMPOSTFX_PLAY("PlayerImpactFall");
			if (iLocal_102 == 1)
			{
				if (!func_339() && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					func_340(Global_35, "COUGH_SICK_SMALL", 1615046335, 0, 1, 0, 0, 1);
				}
				iLocal_102 = 0;
			}
			else
			{
				iLocal_102++;
			}
			func_230(&uLocal_99);
		}
		if (ENTITY::GET_ENTITY_HEALTH(Global_35) <= (iLocal_157 / 2))
		{
			if (!iLocal_160)
			{
				func_338("POISONEDWEL5_HLP2", 10000, 0, 0, 0, 1);
				if (!func_339() && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					func_340(Global_35, "COUGH_SICK_MEDIUM", 1615046335, 0, 1, 0, 0, 1);
				}
				iLocal_160 = 1;
			}
		}
	}
}

void func_343(var uParam0)
{
	if (func_205(Global_35, 2306.82f, 1138.46f, 95.34f, 1) < 5f || func_205(Global_35, 2304.6f, 1099.17f, 93.2f, 1) < 3.5f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	if (func_204(Global_35, iLocal_46, 1, 0) || func_204(Global_35, iLocal_47, 1, 0))
	{
		CAM::_0x1CFB749AD4317BDE();
		PAD::DISABLE_CONTROL_ACTION(0, -620139643, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
		if (!PED::_0xD5FE956C70FF370B(Global_35))
		{
			PED::_0x7DE9692C6F64CFE8(Global_35, true, 0, 0);
			iLocal_67 = 1;
		}
	}
	else if (iLocal_67)
	{
		if (PED::_0xD5FE956C70FF370B(Global_35))
		{
			PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
		}
		iLocal_67 = 0;
	}
	if (!iLocal_81 && func_204(Global_35, iLocal_46, 1, 0))
	{
		if (func_350())
		{
		}
		iLocal_81 = 1;
	}
}

void func_344()
{
	if (iLocal_65 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_72[0])) && func_793(Global_35, &(iLocal_72[0]), 1, 1) < 6f)
		{
			iLocal_65 = 1;
			PED::_0x6569F31A01B4C097(&(iLocal_72[0]), 4, 1);
		}
	}
	if (iLocal_66 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_72[1])) && func_793(Global_35, &(iLocal_72[1]), 1, 1) < 6f)
		{
			iLocal_66 = 1;
			PED::_0x6569F31A01B4C097(&(iLocal_72[1]), 4, 1);
		}
	}
}

void func_345(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_49) && VOLUME::_0x92A78D0BEDB332A3(iLocal_50))
	{
		switch (iLocal_188)
		{
			case 0:
				if (func_204(Global_35, iLocal_49, 1, 0))
				{
					iLocal_188 = 1;
				}
				if (func_204(Global_35, iLocal_50, 1, 0))
				{
					iLocal_188 = 3;
				}
				break;
			
			case 1:
				if (func_204(Global_35, iLocal_50, 1, 0) && BUILTIN::VDIST(Global_36, 2302.878f, 1131.437f, 95.1447f) < 4.6f)
				{
					func_313(uParam0, Global_35, "Arthur", 1);
					iLocal_188 = 2;
				}
				break;
			
			case 2:
				func_794(2302.97f, 1127.84f, 95.41f, &uLocal_51, 0f, 0f, 0f, 1106247680, 1092616192, 2000, 4000, 1000, 1);
				if (!iLocal_68 && func_334(&uLocal_165) > 1f)
				{
					if (func_795(&uLocal_51) || func_205(Global_35, 2304.15f, 1131.97f, 95.39f, 0) < 5f)
					{
						if (func_350())
						{
						}
						TASK::TASK_LOOK_AT_ENTITY(Global_35, &(iLocal_72[0]), 6000, 0, 51, 1);
						TASK::TASK_REACT(Global_35, &(iLocal_72[0]), 0f, 0f, 0f, "Default_Shocked", 2f, 10f, 4);
						func_340(Global_35, "GENERIC_CURSE_MED", 1506116031, 0, 1, 0, 1, 1);
						func_259(&uLocal_165);
						iLocal_68 = 1;
					}
				}
				break;
			
			case 3:
				break;
		}
	}
}

void func_346()
{
	int iVar0;
	
	if (!iLocal_91)
	{
		return;
	}
	if (iLocal_92)
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
	if (iVar0 > (ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0) / 2))
	{
		PED::_0x8B3CB08158E98481(Global_35, 0);
		iLocal_92 = 1;
	}
}

void func_347()
{
	if (iLocal_144)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_143))
	{
		func_796(&iLocal_143, 2380.35f, 986.24f, 72.97f, 237.0419f, 1, 1, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
	{
		if (func_206(iLocal_143, 1))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_143, 48, true);
			iLocal_144 = 1;
		}
	}
}

void func_348()
{
	if (func_350())
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(&(iLocal_180[3]), "b_PlayerArthur", false, false);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iLocal_180[3]), "JOHN", Global_35, 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(&(iLocal_180[3]), "b_playerArthur", true, false);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iLocal_180[3]), "ARTHUR", Global_35, 0);
	}
}

void func_349()
{
	if (func_206(&(iLocal_76[0]), 0) && func_206(&(iLocal_76[1]), 0))
	{
		if (func_322(2, 0, "pl_Base_Loop"))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iLocal_180[2]), "u_m_y_btckid_01", &(iLocal_76[0]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iLocal_180[2]), "u_m_y_btckid_01^1", &(iLocal_76[1]), 0);
			ANIMSCENE::START_ANIM_SCENE(&(iLocal_180[2]));
		}
	}
}

int func_350()
{
	if (func_200() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_351(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		switch (*iParam4)
		{
			case 0:
				if (iParam8 && PED::IS_PED_ON_MOUNT(iParam0))
				{
					vVar0 = { func_597(iParam0, iParam1, sParam2, sParam3, 0) };
					if (!func_244(vVar0))
					{
						if (func_797(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), vVar0))
						{
							iVar5 = 131072;
						}
						else
						{
							iVar5 = 262144;
						}
					}
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, iVar5, 0, 0, 0, 0);
					*iParam4 = 1;
				}
				else
				{
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					}
					if (PED::_0xA911EE21EDF69DAF(iParam0))
					{
						iVar6 = PED::_0xD806CD2A4F2C2996(iParam0);
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar6, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1073741824, 8);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432);
					func_798(iParam0, &iVar4, 0, 0, 1, 1);
					*iParam4 = 2;
				}
				break;
			
			case 1:
				if (!PED::IS_PED_ON_MOUNT(iParam0))
				{
					iVar3 = PED::_0x4C8B59171957BCF7(iParam0);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iVar3, iParam0, 6, 0, 4f, -1, 0);
					}
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432);
					func_798(iParam0, &iVar4, 0, 0, 1, 1);
					*iParam4 = 2;
				}
				break;
			
			case 2:
				if (bParam7)
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, iParam1))
					{
						return 1;
					}
				}
				else if (func_421(iParam0, 242628503))
				{
					if (!bParam6 || TASK::GET_SEQUENCE_PROGRESS(iParam0) > 0)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam1, sParam3))
						{
							if (!ANIMSCENE::_0x3B393716C3FD8237(iParam0) && ANIMSCENE::_0x337F1CC8EE895601(iParam1, sParam2))
							{
								*iParam4 = 3;
								return 1;
							}
						}
					}
				}
				break;
			
			case 3:
				return 1;
		}
	}
	return 0;
}

int func_352()
{
	if (func_350() && ANIMSCENE::_0xB89FCFF19DAFFF28(&(iLocal_180[3]), "JOHN"))
	{
		return 1;
	}
	else if (!func_350() && ANIMSCENE::_0xB89FCFF19DAFFF28(&(iLocal_180[3]), "ARTHUR"))
	{
		return 1;
	}
	if (ANIMSCENE::_0xB89FCFF19DAFFF28(&(iLocal_180[2]), "u_m_y_btckid_01") && ANIMSCENE::_0xB89FCFF19DAFFF28(&(iLocal_180[2]), "u_m_y_btckid_01^1"))
	{
		func_799();
	}
	if (ANIMSCENE::_0xCBFC7725DE6CE2E0(&(iLocal_180[3]), 0))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(&(iLocal_180[3]), "s_WalkThrough_Falls_p2", 1))
		{
			if (ANIMSCENE::GET_ANIM_SCENE_BOOL(&(iLocal_180[2]), "bBreakout") == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(&(iLocal_180[2]), "bBreakout", true, false);
			}
		}
	}
	return 0;
}

void func_353()
{
	if (func_467(8192))
	{
		if (func_479(Global_35, 1, 0, 0) == 1247405313)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
		}
	}
}

bool func_354(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_355(int iParam0)
{
	if (!func_354(iParam0))
	{
		return 0;
	}
	return func_369(iParam0, 8);
}

int func_356(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	int iVar0;
	
	iVar0 = MAP::_0x45F13B7E0A15C880(iParam0, vParam1, fParam4);
	if (bParam5)
	{
		MAP::_0x662D364ABF16DE2F(iVar0, 231194138);
	}
	return iVar0;
}

int func_357(var uParam0)
{
	if (iLocal_138)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_25))
	{
		iLocal_25 = func_562(uParam0, iLocal_26, 2533.717f, 782.3557f, 74.1361f, 327.8065f, 1, 1, 0, 1, 1, 1, 1, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_112))
	{
		iLocal_112 = func_562(uParam0, 68512371, 2534.128f, 783.5119f, 74.1261f, 151.2962f, 1, 1, 0, 1, 1, 1, 1, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_113))
	{
		iLocal_113 = func_562(uParam0, -1072715734, 2535.238f, 781.7057f, 74.1139f, 23.3477f, 1, 1, 0, 1, 1, 0, 1, 1);
		if (func_206(iLocal_113, 0))
		{
			func_800(iLocal_113, 896454262);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_114))
	{
		iLocal_114 = func_562(uParam0, -1072715734, 2535.525f, 782.6923f, 74.1248f, 68.6306f, 1, 1, 0, 1, 1, 0, 1, 1);
		if (func_206(iLocal_114, 0))
		{
			func_800(iLocal_114, 2086067277);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_115))
	{
		iLocal_115 = func_562(uParam0, 918898309, 2535.238f, 781.7057f, 74.1139f, 23.3477f, 1, 1, 0, 1, 1, 0, 1, 1);
		if (func_206(iLocal_115, 0))
		{
			func_800(iLocal_115, -2043399880);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_116))
	{
		iLocal_116 = func_562(uParam0, 918898309, 2535.525f, 782.6923f, 74.1248f, 68.6306f, 1, 1, 0, 1, 1, 0, 1, 1);
		if (func_206(iLocal_116, 0))
		{
			func_800(iLocal_116, -681946237);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_117))
	{
		iLocal_117 = func_562(uParam0, 918898309, 2535.525f, 782.6923f, 74.1248f, 68.6306f, 1, 1, 0, 1, 1, 0, 1, 1);
		if (func_206(iLocal_117, 0))
		{
			func_800(iLocal_117, -1263464911);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_118))
	{
		iLocal_118 = OBJECT::CREATE_OBJECT(1230724566, 2535.04f, 786.15f, 74.06f, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_119))
	{
		iLocal_119 = OBJECT::CREATE_OBJECT(-1443906703, 2534.02f, 785.1f, 74.2f, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_120))
	{
		iLocal_120 = OBJECT::CREATE_OBJECT(867074004, 2534.69f, 785.53f, 74.93f, true, true, false, false, true);
	}
	if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(1305348961))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1305348961, false);
	}
	if (((((((((func_206(iLocal_112, 0) && func_206(iLocal_25, 0)) && func_206(iLocal_113, 0)) && func_206(iLocal_114, 0)) && func_206(iLocal_115, 0)) && func_206(iLocal_116, 0)) && func_206(iLocal_117, 0)) && ENTITY::DOES_ENTITY_EXIST(iLocal_118)) && ENTITY::DOES_ENTITY_EXIST(iLocal_119)) && ENTITY::DOES_ENTITY_EXIST(iLocal_120))
	{
		func_801();
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_25, 0, 1);
		ENTITY::_0x203BEFFDBE12E96A(iLocal_25, 2534.85f, 786.48f, 75.53f, 177.57f, 1, false, 1);
		iLocal_138 = 1;
		return 1;
	}
	return 0;
}

int func_358(var uParam0)
{
	int iVar0;
	
	func_802();
	iVar0 = iLocal_177;
	if (BUILTIN::VDIST(vLocal_135, Global_36) < 30f)
	{
		if (func_308(uParam0) != 4)
		{
			func_309(uParam0, 4);
		}
	}
	if (func_595(Global_35))
	{
		if (!iLocal_151)
		{
			if (func_596(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_25, true, false), &uLocal_148, 50f, 30f, 20f, 10f, 2f, 0, 0, 1, 1, 1))
			{
				iLocal_151 = 1;
			}
		}
	}
	if (iLocal_177 < 4)
	{
		if ((func_803(&Global_35) && func_793(Global_35, iLocal_25, 1, 1) < 20f) || MISC::IS_BULLET_IN_AREA(2535.54f, 784.68f, 74.23f, 5f, true))
		{
			iLocal_177 = 4;
		}
	}
	switch (iLocal_177)
	{
		case 0:
			if (!ANIMSCENE::_0x25557E324489393C(iLocal_126))
			{
				iLocal_126 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@hntn@stage_06@leadin@int@leadin", 0, "pl_base", false, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_126, "poisonwellshaman", iLocal_25, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_126, "obediahhinton", iLocal_112, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_126, "A_F_M_BTCHILLBILLY_01", iLocal_113, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_126, "A_F_M_BTCHILLBILLY_01^1", iLocal_114, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_126, "A_M_M_BTCHILLBILLY_01", iLocal_115, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_126, "A_M_M_BTCHILLBILLY_01^1", iLocal_116, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_126, "A_M_M_BTCHILLBILLY_01^2", iLocal_117, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_126, "p_chair_crate02x", iLocal_118, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_126, "p_chair06x", iLocal_119, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_126, "p_cs_letter03x", iLocal_120, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_126);
			}
			else if (ANIMSCENE::_0x477122B8D05E7968(iLocal_126, 1, 0))
			{
				ANIMSCENE::START_ANIM_SCENE(iLocal_126);
				iLocal_177 = 1;
			}
			break;
		
		case 1:
			if (func_793(Global_35, iLocal_25, 1, 1) < 10f)
			{
				PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_25, "RC_HNTN6", 0f, 0f, 0f, 0, 0);
				iLocal_177 = 2;
			}
			else if (func_793(Global_35, iLocal_25, 1, 1) < 20f)
			{
				if (!iLocal_142)
				{
					func_359(&iLocal_140);
					iLocal_140 = MAP::_0x554D9D53F696D002(408396114, vLocal_135);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_140, "HNTN5_BLIP_B");
					iLocal_142 = 1;
				}
			}
			break;
		
		case 2:
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_126, "s_base", 1))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_126, "pl_leadin");
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_126, "pl_leadin"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_126, "pl_leadin", true);
					iLocal_177 = 3;
				}
			}
			break;
		
		case 3:
			if ((ANIMSCENE::_0xD8254CB2C586412B(iLocal_126, 0) || ANIMSCENE::_0xCDC5512A407CF08D(iLocal_126)) || func_804(iLocal_126, 100))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
				return 1;
			}
			break;
		
		case 4:
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_126, "pl_gunshot_react");
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_126, "pl_gunshot_react"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_126, "pl_gunshot_react", true);
				iLocal_177 = 5;
			}
			break;
		
		case 5:
			break;
	}
	if (iVar0 != iLocal_177)
	{
	}
	return 0;
}

void func_359(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

int func_360(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_409(iParam0);
}

int func_361(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_362(int iParam0)
{
	return iParam0 & 31;
}

int func_363(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_364(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

void func_365(var uParam0)
{
	*uParam0 = 0;
}

void func_366(int iParam0)
{
	if (func_805(179) || func_805(180))
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			if (((*Global_1347702)[iParam0 /*49*/])->f_37 == Global_1905944->f_5698)
			{
				func_806(1);
			}
		}
	}
	if (func_807(179))
	{
		func_808(179);
	}
	if (func_807(180))
	{
		func_808(180);
	}
}

void func_367(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!func_201(iParam0))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	func_366(iParam0);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		func_233(iParam0, func_417(iParam0), 0, 1);
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		func_233(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_233(iParam0, vParam2, 0, 0);
	}
	MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 724623647);
	func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
}

void func_368(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_248((*uParam1)[iVar0 /*16*/], 1048576))
		{
			switch (iParam0)
			{
				case 1:
				case 2:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 5)
					{
						func_255((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
				
				case 3:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 3)
					{
						func_255((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_369(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_370(int iParam0)
{
	if (!func_354(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

int func_371()
{
	return &Global_1899515;
}

void func_372(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_23117[iParam0 /*11*/])->f_2 = iParam1;
		return;
	}
	(Global_1058888->f_40615[iParam0 /*11*/])->f_2 = iParam1;
}

void func_373(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (Global_23117[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0 /*11*/] = (Global_1058888->f_40615[iParam0 /*11*/] || iParam1);
	}
}

void func_374(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

void func_375(int iParam0)
{
	if (!func_354(iParam0))
	{
		return;
	}
	if (func_213(iParam0))
	{
		func_809(iParam0);
	}
	else
	{
		func_810(iParam0);
	}
}

int func_376(int iParam0)
{
	iParam0 = func_396(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

int func_377(int iParam0)
{
	int iVar0;
	
	iParam0 = func_396(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_376(iParam0))
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_378(int iParam0)
{
	int iVar0;
	
	iParam0 = func_396(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_376(iParam0))
	{
		return;
	}
	iVar0 = func_130(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_379(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_201(iVar0))
		{
			if (func_120(iVar0, 4))
			{
				func_380(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_380(int iParam0, bool bParam1)
{
	if (!func_120(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_264(iParam0), func_265(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_264(iParam0), func_265(iParam0), 2, "");
		func_266(iParam0, 16);
	}
	else
	{
		if (func_120(iParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_264(iParam0), func_265(iParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_264(iParam0), func_265(iParam0), 0, "");
		}
		func_121(iParam0, 16);
	}
}

void func_381(int iParam0, bool bParam1)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_120(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_264(iParam0), func_265(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_120(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_264(iParam0), func_265(iParam0), 1, "");
		}
		func_266(iParam0, 8);
	}
	else
	{
		if (func_120(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_264(iParam0), func_265(iParam0), 0, "");
		}
		func_121(iParam0, 8);
	}
}

void func_382(int iParam0, char* sParam1, int iParam2, float fParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;
	
	sVar0 = func_567(iParam8, sParam1, sParam4, sParam5, sParam6, sParam7);
	if (iParam2 == 1)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	func_568(iParam0, sParam1, sVar0, fParam3);
}

int func_383(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return (func_811(sParam0, 0, 0, -1, -1, 0) && func_812());
}

int func_384(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;
	
	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_813(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_567(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_813(sVar0, iParam1, 0, 0, 1, 1);
}

int func_385()
{
	if (func_200() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_386(int iParam0, int iParam1, int iParam2)
{
	func_814(iParam0, iParam2);
	if (func_815(iParam0))
	{
		func_816(((*Global_1347702)[iParam0 /*49*/])->f_15);
	}
	if (iParam1 == 1)
	{
		if (func_174(((*Global_1347702)[iParam0 /*49*/])->f_15))
		{
			func_175(((*Global_1347702)[iParam0 /*49*/])->f_15, 0, 2);
		}
	}
}

void func_387(int iParam0)
{
	func_390();
	if (!func_201(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0 /*49*/];
}

int func_388(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 2097152))
		{
			if (func_492(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 256))
		{
			if (!func_492(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_817(iParam0);
}

int func_389(int iParam0)
{
	float fVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_43))
	{
		return 0;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_43))
	{
		return 0;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_28 != ((*Global_1347702)[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])->f_28)
	{
		return 0;
	}
	else if (Global_1347702[iParam0 /*49*/] != Global_1347702[((*Global_1347702)[iParam0 /*49*/])->f_35 /*49*/])
	{
		return 0;
	}
	else if (!func_818(iParam0))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(((*Global_1347702)[iParam0 /*49*/])->f_43, false, false), func_69(((*Global_1347702)[iParam0 /*49*/])->f_35));
	if (fVar0 > (7.5f * 7.5f))
	{
		return 0;
	}
	return 1;
}

void func_390()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (func_819(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < &Global_1347702)
		{
			if (func_201(iVar1) && Global_1347702[iVar1 /*49*/] == iVar0)
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iVar1 /*49*/])->f_37))
				{
					func_115(iVar1, 0);
					func_233(iVar1, func_69(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

void func_391(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 4))
	{
		iVar0 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar1 = 908516622;
	}
	else
	{
		iVar2 = func_566(iParam0, 1);
		iVar0 = iVar2;
		iVar1 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 67108864))
	{
		func_820("MISSION_COMPLETE", &(((*Global_1347702)[iParam0 /*49*/])->f_3), iVar1, iVar0, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, func_265(iParam0));
		func_821("MISSION_COMPLETE", &(((*Global_1347702)[iParam0 /*49*/])->f_3), iVar1, iVar0, 1433015236, "MISSION_COMPLETE_DETAILS", -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
}

var func_392(int iParam0)
{
	char[] cVar0[8];
	
	if (!func_57(iParam0))
	{
		return cVar0;
	}
	switch (func_110(iParam0))
	{
		case 1:
			cVar0 = ((*Global_1835011)[func_822(iParam0) /*74*/])->f_8;
			break;
		
		case 8:
			cVar0 = ((*Global_1347702)[func_111(iParam0) /*49*/])->f_3;
			break;
		
		case 11:
			if (iParam0 == func_496(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_393(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	if (!func_57(iParam0))
	{
		return;
	}
	if (func_360(iParam0) == 4)
	{
		func_823(iParam0, func_371());
		if (!func_409(iParam0) == 5 && !func_409(iParam0) == 6)
		{
			if (bParam3)
			{
				func_413(iParam0, 6);
			}
			else
			{
				func_413(iParam0, 5);
			}
			func_411(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_198(1);
	}
	iVar0 = func_110(iParam0);
	bVar1 = func_200() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_824(0, 2);
		if (!bVar1 && bParam1)
		{
			func_825();
		}
	}
	else
	{
		func_412(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_826(iParam0);
	}
	else
	{
		Var2 = { func_827(-1876607090) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_60(32768))
		{
			Var4 = { func_827(773573510) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_409(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_111(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[76 /*74*/])->f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_111(iParam0) /*74*/])->f_8), true);
						}
					}
					else if ((func_111(iParam0) != 95 && func_111(iParam0) != 82) && !func_31(((*Global_1347702)[func_111(iParam0) /*49*/])->f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1347702)[func_111(iParam0) /*49*/])->f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_111(iParam0) /*74*/])->f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_829(func_111(iParam0), iVar6, func_828());
	}
	else if (iVar0 == 8)
	{
		func_830(func_111(iParam0), iVar6, func_828(), func_385());
	}
	if (!func_409(iParam0) == 5 && !func_409(iParam0) == 6)
	{
		iVar9 = func_831(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_832(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_833(func_111(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_834((iVar10 - 20), 0, iVar10);
					iVar11 = func_834((iVar11 - 10), 0, iVar11);
				}
				func_414(1);
				func_415(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			
			case 4:
				func_415(45, 0, 1);
				break;
			
			case 8:
				iVar10 = func_835(func_111(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_834((iVar10 - 20), 0, iVar10);
					iVar11 = func_834((iVar11 - 10), 0, iVar11);
				}
				func_415(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				if (func_836(func_111(iParam0)))
				{
					func_837(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			
			case 9:
				func_415(120, 0, 1);
				break;
			
			case 2:
				func_415(120, 0, 1);
				break;
			
			case 6:
				func_415(func_838(func_112(iParam0)), 0, 1);
				break;
			
			case 5:
				func_415(120, 0, 1);
				break;
		}
	}
	func_444(iParam0, 1);
	func_823(iParam0, func_371());
	func_411(iParam0);
	if ((!func_409(iParam0) == 0 && bParam1) && func_200() == -1)
	{
		iVar12 = func_441(iParam0);
		if (iVar12 != -1)
		{
			func_442(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_443();
			if (iVar12 != -1)
			{
				func_442(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			
			case 6:
				switch (func_111(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			
			case 8:
				if (func_201(func_111(iParam0)) && func_31(((*Global_1347702)[func_111(iParam0) /*49*/])->f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_111(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_839();
				}
				break;
			
			case 8:
				if (func_111(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_839();
				}
				break;
		}
	}
	if (!func_409(iParam0) == 5 && !func_409(iParam0) == 6)
	{
		if (bParam3)
		{
			func_413(iParam0, 6);
		}
		else
		{
			func_413(iParam0, 5);
		}
		func_411(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_111(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					
					case 1:
						func_840();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					
					case 4:
						func_289(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_841(-1267972061);
						func_289(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_841(1619534881);
						func_289(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_841(-755457379);
						func_289(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_841(1015404643);
						func_289(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_841(-1724192342);
						func_289(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_841(1310680212);
						func_289(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_841(-566881549);
						func_289(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_841(-1753730528);
						func_289(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_841(147796381);
						func_289(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_841(-378547623);
						func_289(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_841(829545206);
						func_289(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_841(891318243);
						func_289(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_842();
						func_843(967523420);
						func_844();
						func_845();
						break;
					
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_846(10, 0)));
						break;
					
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131);
						break;
					
					case 15:
						func_289(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1231074654))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1231074654, true);
							func_303(449, 0);
						}
						break;
					
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1880205078))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1880205078, true);
							func_303(446, 0);
						}
						break;
					
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					
					case 18:
						func_847(304805134, 1, 1);
						if (!func_492(((*Global_1347702)[21 /*49*/])->f_15, 1))
						{
							func_393(((*Global_1347702)[21 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[21 /*49*/])->f_3)), iVar14);
						}
						break;
					
					case 20:
						func_848();
						break;
					
					case 26:
						func_849();
						break;
					
					case 17:
						func_850(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_851())
						{
							func_852(1905553950);
						}
						break;
					
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					
					case 33:
						if (!func_853(-514575035, -1))
						{
							iVar15 = func_371();
							func_854(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_855(-514575035, iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_851())
						{
							func_852(1529685685);
						}
						break;
					
					case 34:
						if (func_851())
						{
							func_852(-2082646505);
						}
						break;
					
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					
					case 31:
						func_856();
						break;
					
					case 37:
						func_857();
						if (func_858())
						{
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(2116153146, iVar14);
						}
						break;
					
					case 38:
						func_859();
						break;
					
					case 43:
						func_860();
						break;
					
					case 44:
						if (!func_492(((*Global_1347702)[82 /*49*/])->f_15, 1))
						{
							func_393(((*Global_1347702)[82 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[82 /*49*/])->f_3)), iVar14);
						}
						if (!func_492(((*Global_1347702)[83 /*49*/])->f_15, 1))
						{
							func_393(((*Global_1347702)[83 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[83 /*49*/])->f_3)), iVar14);
						}
						break;
					
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					
					case 52:
						break;
					
					case 47:
						func_861();
						break;
					
					case 59:
						func_862();
						break;
					
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					
					case 61:
						func_863();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					
					case 67:
						func_864();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1673898385))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1673898385, true);
							func_303(451, 0);
						}
						if (!func_865(-1992824800))
						{
							if (func_865(1520110311))
							{
								iVar16 = func_371();
								func_854(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_855(1937177603, iVar16, 1);
							}
						}
						if (func_497(4))
						{
							if (!func_288(684296857, 1, 0))
							{
								iVar17 = func_371();
								func_854(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_855(-1439688706, iVar17, 1);
							}
						}
						func_289(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_289(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_866(89200);
						func_866(2300);
						func_866(2300);
						break;
					
					case 68:
						func_867();
						break;
					
					case 76:
						if (Global_1425247->f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[108 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[69 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[70 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[7 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[22 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[23 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[65 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[7 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[8 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[36 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[48 /*74*/])->f_8)), iVar14);
						func_868();
						func_866(-139100);
						break;
					
					case 69:
						if (func_492(((*Global_1347702)[9 /*49*/])->f_15, 1))
						{
							func_866(-6000);
						}
						break;
					
					case 70:
						func_866(23400);
						func_866(1900);
						func_866(-15000);
						break;
					
					case 71:
						func_866(-5500);
						break;
				}
				break;
			
			case 8:
				switch (func_111(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -812886857);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444);
						break;
					
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411);
						break;
					
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -433459459);
						break;
					
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426);
						break;
					
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1851064008);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082);
						break;
					
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767);
						break;
					
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187);
						break;
					
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1595707554);
						break;
					
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516);
						break;
					
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 780151577);
						break;
					
					case 58:
						func_869();
						break;
					
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 727067922);
						break;
					
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_870();
						break;
					
					case 66:
						func_871();
						func_872();
						break;
					
					case 67:
						if (!func_873(6))
						{
							func_874(6);
						}
						if (!func_873(3))
						{
							func_874(3);
						}
						if (func_851())
						{
							func_852(1534638301);
						}
						break;
					
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1085773120);
						break;
					
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 753448360);
						break;
					
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833);
						break;
					
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 709011912);
						break;
					
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						break;
					
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 989551914);
						break;
					
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -480463506);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117);
						break;
					
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1841532568);
						break;
					
					case 9:
						if (func_492(((*Global_1835011)[69 /*74*/])->f_1, 1))
						{
							func_875(0);
							func_866(40500);
						}
						else
						{
							func_875(0);
							func_866(46500);
						}
						break;
				}
				break;
			
			case 6:
				switch (func_111(iParam0))
				{
					case 0:
						switch (func_112(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_876(iParam0);
		func_877();
		switch (iVar0)
		{
			case 1:
				switch (func_111(iParam0))
				{
					case 4:
						func_878(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					
					case 61:
					case 62:
					case 63:
						func_878(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					
					case 25:
						func_878(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					
					case 12:
						func_878(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 53:
						func_878(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					
					case 20:
						func_878(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 19:
						func_878(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					
					case 24:
						iVar18 = func_486(iParam0);
						func_878(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					
					case 28:
						func_878(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 34:
						func_878(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_288(-2046502963, 1, 0))
						{
							func_289(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					
					case 29:
						func_878(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					
					case 37:
						break;
					
					case 58:
						break;
					
					case 57:
						func_878(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					
					case 76:
						func_878(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					
					case 72:
						if (func_486(iParam0) == 0)
						{
							func_878(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_878(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			
			case 8:
				if (func_31(((*Global_1347702)[func_111(iParam0) /*49*/])->f_12, 536870912))
				{
					func_879(11, 1);
				}
				switch (func_111(iParam0))
				{
					case 109:
						func_878(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					
					case 55:
						func_879(8, 1);
						break;
					
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					
					case 94:
						func_878(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 63:
						func_878(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					
					case 37:
						func_878(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					
					case 116:
						func_878(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			
			case 11:
				if (iParam0 == func_496(0, 10, 11, 2116153146))
				{
					func_878(iParam0, func_486(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_496(0, 7, 11, -379687487))
				{
					func_878(iParam0, func_880(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_496(0, 8, 11, -1386089015))
				{
					func_878(iParam0, func_880(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_496(0, 11, 11, -1952009645))
				{
					func_878(iParam0, func_880(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_496(0, 12, 11, 2065895756))
				{
					func_878(iParam0, func_880(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_409(iParam0) == 0)
			{
				if (func_109(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(func_109(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_410(func_110(iParam0), func_109(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_111(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_881(func_392(Global_1879514->f_1));
						if (iVar0 == 8 && func_111(iParam0) == 58)
						{
							Global_1879514->f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					
					case 4:
						iVar20 = 2;
						break;
					
					case 6:
						iVar20 = 1;
						break;
					
					case 2:
						iVar20 = 9;
						break;
					
					case 8:
						if (func_201(func_111(iParam0)) && func_31(((*Global_1347702)[func_111(iParam0) /*49*/])->f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					
					case 7:
						iVar20 = 0;
						break;
					
					case 5:
						iVar20 = 12;
						break;
					
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			func_882(bParam2, iVar20);
		}
	}
	func_416(1);
	if ((bVar13 || func_839()) && (func_110(iParam0) == 1 || func_110(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_394(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (STATS::_0x01F4D242765C6B24(func_109(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_410(func_110(iParam0), func_109(iParam0), iVar0);
		if (func_60(32768))
		{
			iVar1 = func_110(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_496(0, 10, 11, 2116153146)))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_883();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_270(iParam0))
	{
		func_175(iParam0, 0, 2);
	}
	else if (func_174(iParam0))
	{
		if (!func_409(iParam0) == 5 && !func_409(iParam0) == 6)
		{
			if (bParam1)
			{
				func_413(iParam0, 6);
			}
			else
			{
				func_413(iParam0, 5);
			}
			func_411(iParam0);
		}
	}
	switch (func_110(iParam0))
	{
		case 1:
			switch (func_111(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514->f_12 = 1;
					break;
				
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
		
		case 8:
			switch (func_111(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514->f_12 = 1;
					break;
				
				case 9:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
	}
}

void func_395(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	char[] cVar4[8];
	int iVar5;
	int iVar6;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_264(iParam0);
	if (iVar0 == 1)
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_265(iParam0)))
		{
			UILOG::_UILOG_MARK_MISSION_COMPLETED(func_265(iParam0));
		}
		func_121(iParam0, 4);
		func_121(iParam0, 8);
		return;
	}
	else if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 4))
	{
		func_269(Global_1347702[iParam0 /*49*/]);
		func_267(iParam0);
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_265(iParam0)))
		{
			StringCopy(&vVar1, "", 24);
			cVar4 = func_567(0, &vVar1, 0, 0, -1, -1);
			func_568(iParam0, &vVar1, cVar4, -1082130432);
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar0, func_265(iParam0), MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE"), MISC::GET_HASH_KEY("hud_toasts"));
		}
		func_121(iParam0, 4);
		func_121(iParam0, 8);
		return;
	}
	iVar5 = 0;
	if (func_120(iParam0, 8))
	{
		iVar5 = 1;
	}
	iVar6 = 0;
	if (func_120(iParam0, 16))
	{
		iVar6 = 1;
	}
	func_269(Global_1347702[iParam0 /*49*/]);
	func_267(iParam0);
	MemCopy(&vVar1, {((*Global_1347702)[iParam0 /*49*/])->f_1}, 3);
	StringConCat(&vVar1, "_obj", 24);
	if (func_120(iParam0, 64))
	{
		StringConCat(&vVar1, "3", 24);
	}
	else if (func_120(iParam0, 32))
	{
		StringConCat(&vVar1, "2", 24);
	}
	if (HUD::DOES_TEXT_LABEL_EXIST(&vVar1))
	{
		cVar4 = func_567(0, &vVar1, 0, 0, -1, -1);
		func_568(iParam0, &vVar1, cVar4, -1082130432);
		if (func_120(iParam0, 16) || iVar6)
		{
			func_380(iParam0, 1);
		}
		if (func_120(iParam0, 8) || iVar5)
		{
			func_381(iParam0, 1);
		}
	}
	else
	{
		StringCopy(&vVar1, "", 24);
		cVar4 = func_567(0, &vVar1, 0, 0, -1, -1);
		func_568(iParam0, &vVar1, cVar4, -1082130432);
		func_381(iParam0, 1);
		if (func_120(iParam0, 16) || iVar6)
		{
			func_380(iParam0, 1);
		}
	}
}

int func_396(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

Vector3 func_397(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, float fParam9, int iParam10)
{
	vector3 vVar0;
	
	vVar0 = { func_884(vParam0, uParam3, uParam4, bParam5, bParam6, 1, iParam7, bParam8, fParam9, iParam10, -1, 1103626240) };
	if (func_244(vVar0))
	{
		vVar0 = { func_884(vParam0, uParam3, uParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_398(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = uParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_399(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

void func_400()
{
	func_885();
	func_886();
	func_887();
	SCRIPTS::_0x11B0A0B282FA9B10(0);
}

void func_401(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	
	if (func_200() == -1)
	{
		func_888();
	}
	else
	{
		return;
	}
	func_889();
	Global_40.f_9.f_14 = func_371();
	Global_40.f_9.f_20 = LAW::_0x54310AAB97B92816(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = _NAMESPACE59::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_890())
		{
			func_399(Global_1310720->f_1);
		}
		else if (func_891() == func_184(Global_36, 1) && func_892() != 2)
		{
			func_399(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_399(Global_36);
		}
		func_893(Global_36, &vVar0, &uVar4);
		if (!func_890())
		{
			if (func_894(vVar0, Global_36) < func_894(Global_40.f_9.f_7, Global_36))
			{
				func_399(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_184(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_893(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_273(Global_1935630, 8192);
	}
	func_895();
}

void func_402(struct<16> Param0, int iParam16)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_896(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_897(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			*((*Global_1934603)[iVar0 /*16*/]) = { Param0 };
			Global_1934603->f_161++;
			func_898(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_403(int iParam0)
{
	if (func_899())
	{
		Global_1357509 = 1;
	}
	if (func_900(-92416669))
	{
	}
	if (iParam0 && Global_1935630->f_44 == -1016714371)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1935630->f_44 = joaat("weapon_unarmed");
	}
}

bool func_404(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_405(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_406()
{
	return Global_1572864->f_12;
}

void func_407(bool bParam0)
{
	int iVar0;
	struct<16> Var1;
	
	if (func_901(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_902();
	Var1.f_3.f_3 = iVar0;
	if ((!func_903(Global_1347343->f_2) && !func_404(Global_1347343->f_11, 64)) || func_60(32768))
	{
		Var1.f_7 = func_904();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_404(Global_1347343->f_11, 1024) && !func_60(32768))
	{
		Var1.f_11 = func_905();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_404(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_906();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_907(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_908(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !ENTITY::IS_ENTITY_ATTACHED(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
	}
	func_405(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_405(&(Global_1347343->f_11), 1048576);
	}
	CAM::_0x16E9ABDD34DDD931();
}

void func_408(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_248((*uParam1)[iVar0 /*16*/], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 7)
					{
						func_255((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
				
				case 1:
				case 2:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 3)
					{
						func_255((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
				
				case 3:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 2)
					{
						func_255((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

int func_409(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_909(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_410(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_200() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_411(int iParam0)
{
	return func_911(func_910(iParam0));
}

int func_412(bool bParam0)
{
	if (!bParam0 && func_912(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_413(int iParam0, int iParam1)
{
	if (!func_57(iParam0))
	{
		return;
	}
	func_913(iParam0, iParam1);
}

void func_414(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 64);
	}
}

void func_415(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_914(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

void func_416(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

Vector3 func_417(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		
		case 33:
			return 905.92f, -421.19f, 88.23f;
		
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		
		case 38:
			return -329.32f, -366.6f, 87f;
		
		case 39:
			return 97.4f, -212.47f, 111.6f;
		
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		
		case 84:
			return -73.18f, -392.3f, 70.84f;
		
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		
		case 104:
			return 2407f, -585.32f, 40.66f;
		
		case 105:
			return -219.25f, 212.93f, 94.15f;
		
		case 116:
			return 211.99f, 512.98f, 126.54f;
		
		case 117:
			return -329.2f, 797.9f, 116.89f;
		
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
		
		case 133:
			return 2688.427f, -1121.766f, 49.6782f;
		
		case 135:
			return -576.08f, 524.9f, 97.86f;
		
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
		
		case 143:
			return 2954.45f, 523.05f, 44.47f;
		
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
		
		case 151:
			return 556.271f, 172.08f, 133.3435f;
		
		case 152:
			return 556.271f, 172.08f, 133.3435f;
		
		case 146:
			return -585.6761f, -347.216f, 81.28532f;
		
		default:
			break;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

bool func_418()
{
	return func_915();
}

int func_419()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_420(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_771(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, iParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

int func_421(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

char* func_422()
{
	char* sVar0;
	
	switch (iLocal_127)
	{
		case 0:
			sVar0 = "RHNTN_S6_IG1A";
			break;
		
		case 1:
			sVar0 = "RHNTN_S6_IG1B";
			break;
		
		case 2:
			sVar0 = "RHNTN_S6_IG1C";
			break;
		
		case 3:
			sVar0 = "RHNTN_S6_IG1D";
			break;
		
		case 4:
			sVar0 = "RHNTN_S6_IG1E";
			break;
		
		case 5:
			sVar0 = "RHNTN_S6_IG1F";
			break;
		
		case 6:
			sVar0 = "RHNTN_S6_IG1G";
			break;
		
		case 7:
			sVar0 = "RHNTN_S6_IG1H";
			break;
	}
	iLocal_127++;
	if (iLocal_127 > 7)
	{
		iLocal_127 = 0;
	}
	return sVar0;
}

bool func_423(var uParam0, char* sParam1, bool bParam2)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, sParam1, 24);
	return func_916(&(uParam0->f_643), cVar0, 0, -1, bParam2, 0);
}

void func_424()
{
	if (iLocal_171)
	{
		return;
	}
	if (CAM::DOES_CAM_EXIST(iLocal_105))
	{
		CAM::DESTROY_CAM(iLocal_105, false);
		CAM::DESTROY_CAM(iLocal_106, false);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
	func_125(Global_1935630, 262144);
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_80))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_80);
	}
	CAM::_0x4285804FD65D8066("DRUNK_SHAKE", 0);
	func_917();
	iLocal_171 = 1;
}

void func_425(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

void func_426(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 && !func_918(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_919(*iParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_920(iVar0);
	*iParam0 = 0;
}

void func_427(int* iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
	}
	if (bParam2)
	{
		OBJECT::_MARK_OBJECT_FOR_DELETION(*iParam0);
	}
	else
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_428()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_121[iVar0])))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iLocal_121[iVar0]);
		}
		iVar0++;
	}
}

struct<2> func_429(int iParam0)
{
	char cVar0[16];
	int iVar2;
	
	MemCopy(&cVar0, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 2);
	if (!(func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 2) && func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 4)))
	{
		iVar2 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0);
		StringCopy(&cVar0, HUD::_0xD8402B858F4DDD88(&cVar0, (iVar2 - 1)), 16);
	}
	return cVar0;
}

struct<2> func_430(int iParam0)
{
	struct<2> Var0;
	char* sVar2;
	int iVar3;
	
	Var0 = { func_429(iParam0) };
	sVar2 = func_921(&Var0);
	iVar3 = HUD::GET_LENGTH_OF_LITERAL_STRING(sVar2);
	sVar2 = HUD::_0x806862E5D266CF38(sVar2, 1, iVar3);
	StringCopy(&Var0, sVar2, 16);
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

int func_431(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

bool func_432(int iParam0)
{
	if (!func_431(iParam0))
	{
		return false;
	}
	if (!func_922(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_433(int iParam0)
{
	if (func_431(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_434(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!func_431(iParam0))
	{
		return;
	}
	if (func_922(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_512(iParam0, 56, 1);
		func_80(&(Global_1359489->f_40), 1);
	}
	func_435(iParam0, 0);
	func_923(iParam0, 4, 0);
	func_436(iParam0);
	func_924(iParam0);
	func_925(iParam0, 37, 1);
	bVar0 = func_206(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_926(iParam0, 0);
	bVar2 = _NAMESPACE48::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_509(iParam0, 64, 1))
	{
		func_925(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_925(iParam0, 33, 1);
		func_925(iParam0, 34, 1);
		func_927(iParam0, 1056964608, -1, 1061158912);
		func_928(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_512(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_512(iParam0, 35, 1);
			if (bParam8)
			{
				func_512(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_929(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		}
		if (bVar2)
		{
			_NAMESPACE48::_0xBB68908CD11AEBDC(iVar1);
		}
		func_925(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_512(iParam0, 33, 1);
		func_928(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_80(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_230(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_512(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_930(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_509(iParam0, 45, 1))
	{
		func_925(iParam0, 45, 1);
	}
	func_931(iParam0, 16, 1);
	func_925(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_206(func_932(iParam0), 0))
		{
			func_933(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_435(int iParam0, bool bParam1)
{
	if (!func_934(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_935(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_923(iParam0, 1, 0);
		}
	}
	func_923(iParam0, 16, bParam1);
}

void func_436(int iParam0)
{
	func_923(iParam0, 8, 0);
}

void func_437(int iParam0)
{
	vector3 vVar0;
	
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	func_936(vVar0, 0);
}

int func_438(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 143:
			*uParam2 = 1754500170;
			*uParam1 = 14;
			return 1;
		
		default:
			break;
	}
	*uParam2 = -1600776215;
	*uParam1 = -1;
	return 0;
}

int func_439(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_937(iParam0))
	{
		return 0;
	}
	if (!func_938(iParam1))
	{
		return 0;
	}
	if (bParam2)
	{
		return func_939(iParam0, iParam1);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_440(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_937(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			func_940(iParam0, (*Global_40.f_11206[iParam0 /*26*/])[iVar0 /*5*/]);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_441(int iParam0)
{
	int iVar0;
	int iVar1;
	
	switch (func_110(iParam0))
	{
		case 1:
			iVar0 = func_111(iParam0);
			return func_941(iVar0);
		
		case 8:
			iVar1 = func_111(iParam0);
			if (func_31(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_942(iVar1);
			}
			break;
	}
	return -1;
}

void func_442(bool bParam0)
{
	int iVar0;
	
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_200() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_943(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_944();
		Global_1898077->f_9 = func_945(Global_1894899->f_2);
		func_946(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_443()
{
	if (!func_492(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_492(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_492(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_492(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_492(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_492(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_492(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_444(int iParam0, bool bParam1)
{
	if (func_200() != -1)
	{
		return;
	}
	if (func_56(0) != iParam0)
	{
		return;
	}
	if (func_947(iParam0))
	{
		if (bParam1)
		{
			func_948(-525676072);
		}
		else
		{
			func_949(-525676072);
		}
	}
}

void func_445(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_446(var uParam0)
{
	if (func_950(uParam0->f_1, 3))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam0);
		uParam0->f_1 = 0;
	}
}

void func_447(var uParam0)
{
	if (func_950(uParam0->f_3, 3))
	{
		switch (uParam0->f_1)
		{
			case 2:
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(*uParam0))
				{
					TASK::REMOVE_WAYPOINT_RECORDING(*uParam0);
				}
				break;
			
			case 1:
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_2, *uParam0))
				{
					VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0->f_2, *uParam0);
				}
				break;
		}
		uParam0->f_3 = 0;
	}
}

void func_448(var uParam0)
{
	if (func_950(uParam0->f_1, 3))
	{
		STREAMING::REMOVE_ANIM_DICT(*uParam0);
		uParam0->f_1 = 0;
	}
}

void func_449(var uParam0)
{
	if (func_950(uParam0->f_1, 3))
	{
		STREAMING::REMOVE_CLIP_SET(*uParam0);
		uParam0->f_1 = 0;
	}
}

void func_450(int iParam0, int iParam1)
{
	iParam0 = func_396(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 - (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1));
}

void func_451()
{
	if (func_376(0))
	{
		func_951(0);
	}
	if (func_376(1))
	{
		func_951(1);
	}
	if (func_376(5))
	{
		func_951(5);
	}
	if (func_376(6))
	{
		func_952(6);
	}
}

int func_452(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	iVar0 = func_953(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0 /*51*/][iVar2];
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iVar4 /*35*/])->f_3))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar4 /*35*/])->f_3, vParam0))
				{
					switch (((*Global_1888801)[iVar4 /*35*/])->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

void func_453(var uParam0)
{
	func_459(uParam0, 0);
	func_461(uParam0, 0);
	func_456(uParam0, 1);
	func_954(uParam0, 1);
	func_955(uParam0, 0);
	func_956(uParam0, 1);
	func_957(uParam0, 1, 1, 1);
}

void func_454(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_958(&(uParam0->f_1), 4);
	}
	else
	{
		func_959(&(uParam0->f_1), 4);
	}
}

void func_455(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_958(&(uParam0->f_1), 2);
	}
	else
	{
		func_959(&(uParam0->f_1), 2);
	}
}

void func_456(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_958(&(uParam0->f_1), 256);
	}
	else
	{
		func_959(&(uParam0->f_1), 256);
	}
}

void func_457(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_958(&(uParam0->f_1), 1);
	}
	else
	{
		func_959(&(uParam0->f_1), 1);
	}
}

void func_458(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_958(&(uParam0->f_1), 8);
	}
	else
	{
		func_959(&(uParam0->f_1), 8);
	}
}

void func_459(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_958(&(uParam0->f_1), 16384);
	}
	else
	{
		func_959(&(uParam0->f_1), 16384);
	}
}

void func_460(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_958(&(uParam0->f_1), 16);
	}
	else
	{
		func_959(&(uParam0->f_1), 16);
	}
}

void func_461(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_958(&(uParam0->f_1), 2048);
	}
	else
	{
		func_959(&(uParam0->f_1), 2048);
	}
}

bool func_462(var uParam0)
{
	return *uParam0 != 0;
}

int func_463(var uParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*5*/]))
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0[iVar0 /*5*/], sParam1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_464(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!func_470((*uParam0)[iVar0 /*5*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_465(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_466(int iParam0, int iParam1)
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
}

int func_467(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_960(func_371());
	if (func_961(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_961(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_961(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_961(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_961(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_961(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_961(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_961(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_961(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_961(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_961(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_961(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_961(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_961(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_961(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_961(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_961(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_468(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_962(iParam0);
	if (func_963(iVar1))
	{
		iVar0 = ((*Global_1835011)[iVar1 /*74*/])->f_1;
	}
	else
	{
		iVar2 = func_964(iParam0);
		if (func_201(iVar2))
		{
			iVar0 = ((*Global_1347702)[iVar2 /*49*/])->f_15;
		}
		else if (iParam0 == 2116153146)
		{
			iVar0 = func_496(0, 10, 11, 2116153146);
		}
	}
	return iVar0;
}

int func_469(var uParam0)
{
	if (func_950(uParam0->f_1, 2))
	{
		return 1;
	}
	if (!func_950(uParam0->f_1, 1))
	{
		func_965(uParam0);
	}
	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		func_966(&(uParam0->f_1), 2);
		return 1;
	}
	return 0;
}

bool func_470(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

int func_471(var uParam0)
{
	if (func_950(uParam0->f_3, 2))
	{
		return 1;
	}
	if (!func_950(uParam0->f_3, 1))
	{
		func_967(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(*uParam0))
			{
				func_966(&(uParam0->f_3), 2);
				return 1;
			}
			break;
		
		case 1:
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_2, *uParam0))
			{
				func_966(&(uParam0->f_3), 2);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_472(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

int func_473(var uParam0)
{
	if (func_950(uParam0->f_1, 2))
	{
		return 1;
	}
	if (!func_950(uParam0->f_1, 1))
	{
		func_968(uParam0);
	}
	if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
	{
		func_966(&(uParam0->f_1), 2);
		return 1;
	}
	return 0;
}

bool func_474(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

int func_475(var uParam0)
{
	if (func_950(uParam0->f_1, 2))
	{
		return 1;
	}
	if (!func_950(uParam0->f_1, 1))
	{
		func_969(uParam0);
	}
	if (STREAMING::HAS_CLIP_SET_LOADED(*uParam0))
	{
		func_966(&(uParam0->f_1), 2);
		return 1;
	}
	return 0;
}

int func_476(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_429(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (HUD::_0x2C729F2B94CEA911(&Var0))
		{
			if (!HUD::_0xD0976CC34002DB57(&Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_477(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2573)))
	{
		if (HUD::_0x2C729F2B94CEA911(&(uParam0->f_2573)))
		{
			if (!HUD::_0xD0976CC34002DB57(&(uParam0->f_2573)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_478(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam1 == 7)
	{
		if (uParam0->f_177 == 10)
		{
			iVar0 = uParam0->f_750;
		}
		else if (func_6(uParam0->f_172, 8))
		{
			iVar0 = uParam0->f_749;
		}
		else
		{
			iVar0 = uParam0->f_748;
		}
	}
	else if (iParam1 == 1)
	{
		iVar0 = uParam0->f_748;
	}
	else if (iParam1 == 2)
	{
		iVar0 = uParam0->f_749;
	}
	else if (iParam1 == 4)
	{
		iVar0 = uParam0->f_750;
	}
	if (func_970(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_479(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_480(int iParam0, int iParam1)
{
	var uVar0;
	
	return func_971(&uVar0, iParam0, iParam1);
}

bool func_481(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

void func_482(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_481(iVar3) && WEAPON::_0x705BE297EEBDB95D(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) < WEAPON::_0xD3750CCC00635FC2(iVar3) * 4)
					{
						WEAPON::_0x106A811C6D3035F3(Global_35, WEAPON::_0x5C2EA6C44F515F34(iVar3), (WEAPON::_0xD3750CCC00635FC2(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3);
				if (iVar0 > WEAPON::_0xD3750CCC00635FC2(iVar3))
				{
					iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (iParam1 && PLAYER::_0x21091B4BEB6376EE(PLAYER::GET_PLAYER_INDEX()) == 0)
	{
		func_972(1);
	}
}

void func_483(int iParam0, vector3 vParam1, var uParam4)
{
	((*Global_2621440)[iParam0 /*12065*/])->f_9.f_7 = { vParam1 };
	((*Global_2621440)[iParam0 /*12065*/])->f_9.f_13 = uParam4;
	((*Global_2621440)[iParam0 /*12065*/])->f_9 = 5;
	((*Global_2621440)[iParam0 /*12065*/])->f_9.f_15 = func_184(vParam1, 1);
}

void func_484(var uParam0)
{
	if (!func_6(uParam0->f_172, 134217728))
	{
		func_1(&(uParam0->f_172), 134217728);
	}
}

bool func_485(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_486(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_973(iParam0);
}

int func_487(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

int func_488(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -589165916;
		
		case 1:
			return -1894360593;
		
		case 2:
			return 581819093;
		
		case 3:
			return 687859577;
		
		case 4:
			return -103573613;
		
		case 5:
			return 1202375449;
		
		case 6:
			return 2038046186;
		
		case 7:
			return -839878969;
		
		case 8:
			return -360730635;
		
		case 9:
			return 194099983;
		
		case 10:
			return -1891229662;
		
		case 11:
			return -668333238;
		
		case 12:
			return 99378894;
		
		case 13:
			return 673012160;
		
		case 14:
			return -1220302226;
		
		case 15:
			return 2061320468;
		
		case 16:
			return -709866131;
		
		case 17:
			return -1348173149;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

int func_489(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		
		case 5:
			return 4;
		
		case 6:
			return 79;
		
		case 0:
			return 43;
		
		case 2:
			return 98;
		
		case 4:
			return 58;
		
		case 1:
			return 71;
		
		case 3:
			return 9;
		
		case 7:
			return 22;
		
		case 8:
			return 37;
		
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

int func_490(int iParam0)
{
	if (func_110(iParam0) != 4)
	{
		return -1;
	}
	return func_111(iParam0);
}

int func_491(var uParam0, int iParam1)
{
	return 0;
}

int func_492(int iParam0, bool bParam1)
{
	switch (func_360(iParam0))
	{
		case 5:
			return 1;
		
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_493(int iParam0)
{
	return (Global_40.f_9052.f_21 && iParam0) != 0;
}

int func_494(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 25;
		
		case 4:
			return 105;
		
		case 8:
			return 78;
		
		case 16:
			return 51;
		
		case 32:
			return 41;
		
		case 64:
			return 108;
		
		case 128:
			return 44;
		
		case 256:
			return 53;
		
		case 512:
			return 84;
		
		case 1024:
			return 22;
		
		case 2048:
			return 73;
		
		case 4096:
			return 103;
		
		case 8192:
			return 18;
		
		case 16384:
			return 46;
		
		case 32768:
			return 0;
		
		case 65536:
			return 106;
		
		case 131072:
			return 47;
		
		case 262144:
			return 101;
		
		default:
			break;
	}
	return -1;
}

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 657250500;
		
		case 4:
			return -520696743;
		
		case 8:
			return -295901403;
		
		case 16:
			return -1445837674;
		
		case 32:
			return -75278298;
		
		case 64:
			return -675249331;
		
		case 128:
			return -1822243680;
		
		case 256:
			return -1307199059;
		
		case 512:
			return -17701163;
		
		case 1024:
			return -172170798;
		
		case 2048:
			return 1836682179;
		
		case 4096:
			return -67934460;
		
		case 8192:
			return 410776537;
		
		case 16384:
			return -240986174;
		
		case 32768:
			return 1505721140;
		
		case 65536:
			return 2023114891;
		
		case 131072:
			return -30217677;
		
		case 262144:
			return 653209800;
		
		default:
			break;
	}
	return 0;
}

int func_496(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1835011)[iParam0 /*74*/])->f_8));
				break;
			
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1347702)[iParam0 /*49*/])->f_3));
				break;
			
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			
			case 10:
				return -1;
			
			case 12:
				return -1;
			
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			
			case 8:
				return -1;
			
			case 7:
				return -1;
			
			case 6:
				return -1;
			
			default:
				return -1;
		}
	}
	if (iVar2 >= func_974())
	{
		iVar2 = func_974();
	}
	iVar5 = func_975(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_361(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_361(iVar6) == 0)
			{
				return func_976(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_361(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_361(iVar6) == 0)
			{
				return func_976(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == 0)
			{
				return func_976(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_497(int iParam0)
{
	return (Global_40.f_12018.f_4 && iParam0) != 0;
}

bool func_498(int iParam0)
{
	return (Global_40.f_12018.f_26 && iParam0) != 0;
}

int func_499(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -1;
	}
	return func_977(iParam0);
}

int func_500()
{
	return Global_40.f_11095.f_35;
}

void func_501(int iParam0, int iParam1)
{
	if (!func_57(iParam0))
	{
		return;
	}
	func_978(iParam0, iParam1);
}

int func_502(int iParam0)
{
	if (func_200() != -1)
	{
		return 0;
	}
	if (!func_201(iParam0))
	{
		return 0;
	}
	return func_492(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_503(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (func_200() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || ((*Global_1347702)[iVar0 /*49*/])->f_13 & 16384 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_504()
{
	int iVar0;
	int iVar1;
	
	if (BUILTIN::VDIST(Global_36, ((*Global_1347702)[112 /*49*/])->f_24) < 300f)
	{
		return 0;
	}
	else if (BUILTIN::VDIST(Global_36, ((*Global_1347702)[113 /*49*/])->f_24) < 300f)
	{
		return 0;
	}
	iVar0 = func_979(((*Global_1347702)[112 /*49*/])->f_15);
	func_854(&iVar0, 0, 0, 4, 0, 0, 0, 0);
	if (!func_980(func_371(), iVar0, 1))
	{
		return 0;
	}
	iVar1 = func_981(1);
	if (iVar1 > 1)
	{
		return 0;
	}
	return 1;
}

int func_505(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		return func_982(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_506(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_983(iParam1, 1);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return false;
	}
	iVar1 = func_984(iParam0, 1);
	if (iVar1 < 0 || iVar1 > 31)
	{
		return false;
	}
	return MISC::IS_BIT_SET(&(Global_1934765->f_302[iVar0]), iVar1);
}

int func_507(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_985(bParam1, iParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (iParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_508(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_934(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

bool func_509(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_934(iParam0))
		{
			return false;
		}
	}
	func_986(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

int func_510(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4, float fParam5)
{
	if (!bParam4)
	{
		if (CAM::IS_SCREEN_FADED_OUT() && !func_987())
		{
			return 1;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 1;
	}
	if (fParam1 == -1f)
	{
		fParam1 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		fParam2 = (fParam2 * fParam2);
		if (fParam5 != -1f)
		{
			fParam5 = (fParam5 * fParam5);
		}
	}
	if (fParam1 < fParam2)
	{
		return 0;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
		return iParam3;
	}
	else if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
	{
		return 1;
	}
	else if (fParam5 != -1f && fParam1 >= fParam5)
	{
		if (PED::_0x164CECC59E70DF86(iParam0, 75f))
		{
			return 0;
		}
	}
	else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_511(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!func_206(*uParam0, 1))
	{
		return 0;
	}
	if (PED::IS_PED_FLEEING(*uParam0))
	{
		return 0;
	}
	else if (PED::IS_PED_IN_COMBAT(*uParam0, 0))
	{
		return 0;
	}
	else if (func_988(*uParam0, 0, uParam1, iParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				func_989(uParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				func_990(uParam0, &Global_35, 1176256512, -1, 0, 1077936128, 1, 1, 0, 1, 0, 0);
			}
		}
		return 0;
	}
	return 1;
}

void func_512(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_934(iParam0))
		{
			return;
		}
	}
	func_986(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_513(int iParam0)
{
	if (!func_518(iParam0))
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 16 != 0)
		{
			if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1446646876);
				}
				func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
			{
				MAP::_0xB059D7BD3D78C16F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1446646876);
			}
			func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
		}
	}
}

int func_514(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 65:
		case 68:
		case 76:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_515(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_991(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_992(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_993(iVar0) < func_994(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_995(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_516(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	
	fVar0 = func_786();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

int func_517(int iParam0)
{
	int iVar0;
	
	iVar0 = -1337945352;
	if (!func_201(iParam0))
	{
		return iVar0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		iVar0 = 1673015813;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 512 != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
		{
			iVar0 = 2103462781;
		}
		else
		{
			iVar0 = -1337945352;
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
	{
		iVar0 = 2103462781;
	}
	else
	{
		iVar0 = -1337945352;
	}
	return iVar0;
}

int func_518(int iParam0)
{
	if (func_200() != -1)
	{
		return 0;
	}
	if (!func_201(iParam0))
	{
		return 0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 != 0)
	{
		return 0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
	{
		return 1;
	}
	return 0;
}

void func_519(int iParam0)
{
	switch (func_200())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_520(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1986290853);
		switch (iParam0)
		{
			case 140:
			case 142:
				MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 495758964);
				break;
		}
	}
}

int func_521(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

bool func_522(int iParam0)
{
	if (!func_996(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_997(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_998(iParam0)) < BUILTIN::VDIST(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_998(iParam0), false) <= func_999();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15, false) <= func_999();
	}
	return func_1000();
}

int func_523(int iParam0, int iParam1, int iParam2)
{
	if ((iParam1 && MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37)) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		return ((*Global_1347702)[iParam0 /*49*/])->f_27 == iParam2;
	}
	return 0;
}

void func_524(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_57(iParam0))
	{
		return;
	}
	switch (func_110(iParam0))
	{
		case 1:
			iVar0 = func_111(iParam0);
			if (func_1001(iVar0, bParam1, iParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_1002(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_1002(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if (((*Global_1835011)[iVar0 /*74*/])->f_28 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1835011)[iVar0 /*74*/])->f_27, iVar2);
				if (!func_1003(iVar0))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, -1986290853);
				}
				if (func_1004((*Global_1835011)[iVar0 /*74*/], 2))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, 724623647);
				}
				((*Global_1835011)[iVar0 /*74*/])->f_28 = iVar2;
			}
			break;
		
		case 8:
			iVar1 = func_111(iParam0);
			if (func_1005(iVar1, bParam1, iParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_517(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					
					case 2103462781:
						iVar2 = -1032930804;
						break;
					
					case -1485222547:
						iVar2 = 13700166;
						break;
					
					case 1673015813:
						iVar2 = -592708248;
						break;
					
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = func_517(iVar1);
			}
			if (((*Global_1347702)[iVar1 /*49*/])->f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1347702)[iVar1 /*49*/])->f_37, iVar2);
				func_520(iVar1);
				((*Global_1347702)[iVar1 /*49*/])->f_38 = iVar2;
			}
			break;
	}
}

int func_525(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

int func_526(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (fParam1 <= (func_1006(iParam0) * func_1006(iParam0)))
	{
		if (ITEMSET::IS_ITEMSET_VALID(((*Global_1347702)[iParam0 /*49*/])->f_21))
		{
			iVar0 = ITEMSET::GET_ITEMSET_SIZE(((*Global_1347702)[iParam0 /*49*/])->f_21);
			if (iVar0 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar0)
				{
					iVar4 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, ((*Global_1347702)[iParam0 /*49*/])->f_21);
					iVar5 = iVar4;
					if (ENTITY::DOES_ENTITY_EXIST(iVar5))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar5))
						{
							iVar1++;
							iVar6 = iVar5;
							if (ENTITY::IS_ENTITY_DEAD(iVar6))
							{
							}
							else
							{
								if (!PED::_0x5102307CE88798EB(iVar6))
								{
									PED::REQUEST_PED_VISIBILITY_TRACKING(iVar6);
								}
								if (!PED::IS_TRACKED_PED_VISIBLE(iVar6))
								{
								}
								else
								{
									bVar3 = true;
								}
								else
								{
									iVar2++;
								}
								if (iVar1 > 0)
								{
									if (!bVar3)
									{
										return 0;
									}
								}
								iVar2 = 0;
								while (iVar2 < iVar0)
								{
									iVar7 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, ((*Global_1347702)[iParam0 /*49*/])->f_21);
									iVar8 = iVar7;
									if (((ENTITY::DOES_ENTITY_EXIST(iVar8) && ENTITY::IS_ENTITY_A_PED(iVar8)) && !ENTITY::IS_ENTITY_DEAD(iVar8)) && PED::_0x5102307CE88798EB(iVar8))
									{
										PED::_0x3088634CF8C819CF(iVar8);
									}
									iVar2++;
								}
								return 1;
								Jump @310; //curOff = 292
								if (fParam1 < 10f)
								{
									return 1;
								}
								Jump @317; //curOff = 310
								return 1;
								return 0;
							}
						}
					}
				}
			}
		}
	}

bool func_527(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_200() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

int func_528()
{
	if (!func_1007() && func_1008(1))
	{
		return 1;
	}
	return 0;
}

void func_529(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	func_705(iParam0, &iVar0, &iVar1);
	if (!func_706(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1009(iParam0, 1024))
	{
		return;
	}
	func_707(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 3;
}

struct<8> func_530(int iParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "script@timelapse@", 64);
	StringConCat(&cVar0, &(((*Global_1347702)[iParam0 /*49*/])->f_3), 64);
	StringConCat(&cVar0, "_timelapse", 64);
	return cVar0;
}

struct<8> func_531(var uParam0)
{
	struct<8> Var0;
	
	Var0 = { func_1010(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_240() };
	}
	return Var0;
}

void func_532(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_350), sParam1, 64);
}

void func_533(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && iParam2) && ANIMSCENE::_0x25557E324489393C(uParam0->f_348)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_348);
	}
}

int func_534(var uParam0)
{
	return 0;
}

bool func_535(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_536(var uParam0, char* sParam1)
{
	int iVar0;
	
	if (func_535(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_344), {func_1011("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_344), {func_1011("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_330(uParam0, 8192);
}

Vector3 func_537(var uParam0)
{
	return uParam0->f_5;
}

Vector3 func_538(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;
	
	MemCopy(&uVar0, {func_1012(uParam0)}, 8);
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_349))
	{
		uParam0->f_349 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_344), 0, 0, false, true);
	}
	else if (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_349, 0))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_349, func_1013(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::_0xADF1D53F3B1FE0A7(uParam0->f_349, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_349);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_539(var uParam0, vector3 vParam1)
{
	if (func_244(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_540(var uParam0)
{
	return uParam0->f_339;
}

void func_541()
{
	struct<4> Var0;
	
	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_1014(Var0);
	}
}

void func_542(var uParam0)
{
	int iVar0;
	
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_348, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_366[iVar0 /*9*/]) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, uParam0->f_366[iVar0 /*9*/]) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_348, uParam0->f_366[iVar0 /*9*/])))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_348, uParam0->f_366[iVar0 /*9*/]);
		}
		(uParam0->f_366[iVar0 /*9*/])->f_8 = 0;
		iVar0++;
	}
}

float func_543(var uParam0)
{
	return uParam0->f_338;
}

void func_544(var uParam0)
{
	struct<8> Var0;
	
	Var0 = { func_1015() };
	func_532(uParam0, &Var0);
}

void func_545(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_535(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4) && !func_587(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_1016());
		func_330(uParam0, 8);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_1017(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::_0xC1799FAFD2FDF52B(uParam0->f_4, 0, 0, iParam2);
		func_330(uParam0, 16);
	}
}

void func_546(var uParam0)
{
	if ((!func_535(uParam0, 32768) && ANIMSCENE::_0x25557E324489393C(uParam0->f_348)) && ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_348, 0))
	{
		func_1018(uParam0);
		func_1019(uParam0, 0);
		if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_348, 1))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_348);
		}
		func_330(uParam0, 32768);
	}
}

bool func_547()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

void func_548(int iParam0)
{
	struct<4> Var0;
	
	if (func_1020(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1014(Var0);
}

int func_549(char* sParam0)
{
	return sParam0->f_9;
}

void func_550(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

int func_551(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if ((uParam0->f_177 == 6 && func_308(uParam0) == -1) || func_32(uParam0, 64))
			{
				return 1;
			}
			break;
		
		case 8:
			return uParam0->f_177 == 6;
		
		case 2:
			return uParam0->f_177 == 2;
		
		case 3:
			return uParam0->f_177 == 9;
		
		case 4:
			return func_316(&(uParam0->f_753));
		
		case 5:
			return uParam0->f_177 == 8;
		
		case 1:
		case 10:
		case 11:
			return uParam0->f_177 == 7;
	}
	return 0;
}

int func_552(char* sParam0)
{
	return sParam0->f_10;
}

int func_553(var uParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	
	uParam0->f_781 = 0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 1;
	}
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_776);
	if (!bVar0)
	{
		if (!DATAFILE::_0x4F9E3ED7617123AC(MISC::GET_HASH_KEY(sParam1)))
		{
			return 1;
		}
		if (!bParam4)
		{
			uParam0->f_776 = DATAFILE::_0xCA56DD6AB7A39F64(MISC::GET_HASH_KEY(sParam1));
		}
		else
		{
			uParam0->f_776 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
		}
	}
	uParam0->f_782 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_776);
	if (!uParam0->f_782)
	{
		if (!bParam4)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_1021(uParam0);
	uParam0->f_776.f_2 = 0;
	uParam0->f_789 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_776));
	uParam0->f_776.f_2 = 12;
	uParam0->f_791 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_776));
	uParam0->f_782 = 1;
	uParam0->f_790 = 0;
	uParam0->f_792 = 0;
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_554(var uParam0, int iParam1)
{
	uParam0->f_776.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_776.f_1), &(uParam0->f_776));
}

bool func_555(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, var uParam5)
{
	bool bVar0;
	
	if (iParam2 == -1)
	{
		if (func_556(uParam0, 2, iParam4))
		{
			*uParam5 = *iParam4;
		}
		if (func_556(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_556(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_556(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_556(uParam0, 2, iParam4))
	{
		*uParam5 = *iParam4;
	}
	if (func_556(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_556(uParam0, 5, iParam4))
	{
		cParam3->f_9 = *iParam4;
	}
	if (*uParam5 == 1 || *uParam5 == 3)
	{
		if (iParam1 == 0)
		{
			if ((cParam3->f_9 == 7 || cParam3->f_9 == 8) || cParam3->f_9 == 9)
			{
				bVar0 = true;
			}
		}
		else if (iParam1 == 1 || iParam1 == 2)
		{
			if (cParam3->f_9 == 3 || cParam3->f_9 == 5)
			{
				bVar0 = true;
			}
		}
		if ((bVar0 && !uParam0->f_784) || (!bVar0 && cParam3->f_11 == iParam2))
		{
			if (func_556(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_556(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_556(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_776.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_INT(iParam2, &(uParam0->f_776));
}

bool func_557(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_776.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_STRING(cParam2, &(uParam0->f_776));
}

int func_558(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_248((*uParam0)[iVar0 /*16*/], 1048576) && MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0 /*16*/], sParam1)) && ((*uParam0)[iVar0 /*16*/])->f_9 == sParam1->f_9) && ((*uParam0)[iVar0 /*16*/])->f_10 == sParam1->f_10)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_559(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(uParam0->f_776);
	uParam0->f_776 = 0;
	uParam0->f_782 = 0;
}

void func_560(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_786() - fParam1);
	func_1022(uParam0, 1);
	func_1023(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_561(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	
	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_562(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	
	if (func_6(uParam0->f_172, 64) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	iVar0 = func_1024(iParam1, vParam2, fParam5, bParam6, bParam7, iParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_1025(iParam1))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
			ENTITY::SET_ENTITY_PROOFS(iVar0, 127, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 169, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 179, true);
			PED::_0xAE6004120C18DF97(iVar0, 0, 0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar0, 270583);
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			func_1(&(uParam0->f_172), 64);
		}
	}
	return iVar0;
}

int func_563()
{
	if (bLocal_16)
	{
		return 1;
	}
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_15))
	{
		iLocal_15 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vLocal_17, sLocal_20);
	}
	else
	{
		if (!INTERIOR::IS_INTERIOR_READY(iLocal_15))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_15);
		}
		if (INTERIOR::IS_INTERIOR_READY(iLocal_15))
		{
			bLocal_16 = true;
			return 1;
		}
	}
	return 0;
}

void func_564(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_1026(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_565()
{
	if (func_781(226))
	{
		func_1027(226);
	}
	if (bLocal_16)
	{
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_15, sLocal_21))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_15, sLocal_21, 1);
		}
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_15, sLocal_22))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_15, sLocal_22, 0);
		}
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_15, sLocal_23))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_15, sLocal_23, 0);
		}
	}
}

int func_566(int iParam0, int iParam1)
{
	if (iParam0 == 22 || iParam0 == 23)
	{
		return 332378857;
	}
	else if (iParam0 == 26)
	{
		return -1744398657;
	}
	else if ((iParam0 == 30 || iParam0 == 33) || iParam0 == 36)
	{
		return -622951465;
	}
	else if (iParam0 == 53 || iParam0 == 55)
	{
		return 877823184;
	}
	else if (iParam0 == 58)
	{
		return -1739686743;
	}
	else if (iParam0 == 60 || iParam0 == 61)
	{
		return 2145479193;
	}
	else if ((iParam0 == 71 || iParam0 == 74) || iParam0 == 75)
	{
		return -1610853131;
	}
	else if (iParam0 == 77)
	{
		return -434412386;
	}
	else if (iParam0 == 82 || iParam0 == 83)
	{
		return -1489164512;
	}
	else if (iParam0 == 89)
	{
		return 1970061205;
	}
	else if (iParam0 == 101)
	{
		return -1259688762;
	}
	else if (iParam0 == 115)
	{
		return 1079956634;
	}
	else if ((iParam0 == 117 || iParam0 == 118) || iParam0 == 119)
	{
		return -1280269885;
	}
	else if (iParam0 == 121)
	{
		if (iParam1 || func_492(((*Global_1347702)[iParam0 /*49*/])->f_15, 1))
		{
			return 415367144;
		}
	}
	else if (iParam0 == 127)
	{
		return -1962480616;
	}
	else if (iParam0 == 136)
	{
		return 194953189;
	}
	else if (iParam0 == 143)
	{
		return 825960713;
	}
	else if (iParam0 == 147)
	{
		if (iParam1 || func_492(((*Global_1347702)[iParam0 /*49*/])->f_15, 1))
		{
			return 1770336866;
		}
	}
	if (iParam0 == 151)
	{
		return -1176045274;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_36;
}

char* func_567(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_921(sParam1));
}

void func_568(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	int iVar0;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_264(iParam0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_265(iParam0)))
	{
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(iVar0, func_265(iParam0), MISC::GET_HASH_KEY(sParam1), sParam2, fParam3 >= 0.9f, 0, 0);
}

void func_569(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;
	
	if (!func_963(iParam0))
	{
		return;
	}
	uVar0 = ((*Global_1835011)[iParam0 /*74*/])->f_8;
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(1, iVar1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { ((*Global_1835011)[iParam0 /*74*/])->f_18 };
	MemCopy(&Var5, {((*Global_1835011)[iParam0 /*74*/])->f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	UILOG::_UILOG_ADD_ENTRY_HASH(1, iVar1, vVar2, ((*Global_1835011)[iParam0 /*74*/])->f_26, MISC::GET_HASH_KEY(&Var13), iVar21);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(1, iVar1, ((*Global_1835011)[iParam0 /*74*/])->f_26, 676312963);
}

void func_570(int iParam0)
{
	if (!func_57(iParam0))
	{
		return;
	}
	func_1029(iParam0, func_1028(iParam0) + 1);
}

int func_571(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_910(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164->f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164->f_162;
	func_1030(iParam0, iVar0);
	Global_1898164->f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164->f_162)
	{
		return iVar0;
	}
	func_1031(iVar0, iParam1);
	return iParam1;
}

void func_572(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_573(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_574(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_575(bool bParam0)
{
	func_1032(bParam0);
	func_1033(bParam0);
	func_1034(bParam0);
	func_1035(bParam0);
	func_1036(bParam0);
	func_1037(bParam0);
	func_1038(bParam0);
	func_1039(bParam0);
}

void func_576(bool bParam0)
{
	if (func_200() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_303(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_303(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_1040(1, bParam0, 1);
	func_669();
	Global_40.f_11095.f_43 = bParam0;
}

void func_577(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_200() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 2;
	Global_1898077->f_2 = 0;
	Global_1898077->f_3 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_1041(Global_1898077->f_7, Global_1898077->f_3);
}

void func_578(int iParam0)
{
	int iVar0;
	
	if (Global_1898077->f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_200() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 5;
	Global_1898077->f_2 = 0;
	Global_1898077->f_4 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_1042(Global_1898077->f_7, Global_1898077->f_4);
}

int func_579(int iParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_580(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_481(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_581(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	
	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_0x89CF5FF3D363311E(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_481(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_481(iVar4) && iVar4 != bVar0)
							{
								bVar0 = iVar4;
							}
						}
						else if (iVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_200() == -1 && !func_579(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == bVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				bVar0 = 379542007;
				break;
			
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_579(-183018591))
				{
					bVar0 = -183018591;
				}
				else
				{
					bVar0 = 379542007;
				}
				break;
			
			default:
				bVar0 = 379542007;
				break;
		}
	}
	else if (bVar0 == -164645981 && iParam0 == Global_35)
	{
		bVar0 = 1247405313;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_481(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_639(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1043(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_1044(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

void func_582(float fParam0)
{
	func_1045(10, fParam0);
}

void func_583()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

void func_584(var uParam0)
{
	int iVar0;
	
	iVar0 = func_1046(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	SCRIPTS::_0x50B72A754EE64A71(iVar0);
}

void func_585(var uParam0)
{
	int iVar0;
	
	iVar0 = func_1046(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	SCRIPTS::_0x7D654266025E921B(iVar0);
}

int func_586()
{
	return Global_1572864->f_10;
}

bool func_587(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_588(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	char[] cVar0[8];
	
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_110(iParam0) == 1)
	{
		cVar0 = func_1047(func_822(iParam0));
		TELEMETRY::_0x8EC7890D446BD9C1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_110(iParam0) == 8)
	{
		cVar0 = func_699(func_152(iParam0));
		TELEMETRY::_0x8EC7890D446BD9C1(&cVar0, 0, Global_1572864->f_9);
	}
	func_133(1, 1);
	func_483(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_155(0);
	func_156(0);
	func_158(1f);
}

void func_589(var uParam0)
{
	if (func_479(Global_35, 1, 0, 0) != 1247405313)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 1247405313, true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 1, false, false);
	}
	if (func_535(uParam0, 512))
	{
	}
	if (func_1048(uParam0, Global_35, 0, 0, 1, 1))
	{
		func_310(&iLocal_141);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 1247405313, true, 0, false, false);
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("RCM_HNTN5_ASSIST2", 1, 1065353216, 0.5f, 1);
		func_1049(-530524, 2000, 0, 1, 1, 0, 0, 0);
		func_259(&uLocal_88);
	}
	if (func_718(uParam0, 1))
	{
	}
}

void func_590(var uParam0, int iParam1)
{
	func_1050(&(uParam0->f_206), iParam1);
}

void func_591(var uParam0, vector3 vParam1)
{
	if (!func_244(vParam1))
	{
		uParam0->f_206.f_5 = { vParam1 };
	}
	else
	{
		uParam0->f_206.f_5 = { func_69(uParam0->f_174) };
	}
}

void func_592(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	if (func_350())
	{
		StringCopy(&sVar0, "JOHN", 8);
	}
	else
	{
		StringCopy(&sVar0, "ARTHUR", 8);
	}
	func_785(&(uParam0->f_206), Global_35, &sVar0, iParam1, iParam2, bParam3);
}

void func_593(var uParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	uParam0->f_409 = { vParam1 };
	uParam0->f_412 = fParam4;
	if (func_244(vParam1))
	{
		func_533(uParam0, 2048, 1);
	}
	else
	{
		func_330(uParam0, 2048);
		if (bParam5)
		{
			func_330(uParam0, -2147483648);
		}
	}
}

void func_594(var uParam0)
{
	func_802();
	if (func_535(uParam0, 512))
	{
	}
	if (func_1048(uParam0, Global_35, 0, 0, 1, 1))
	{
	}
	if (func_1048(uParam0, iLocal_112, 0, 0, 1, 1))
	{
		func_23(&iLocal_112);
	}
	if (func_1048(uParam0, iLocal_113, "A_F_M_BTCHILLBILLY_01", 0, 1, 1))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_113, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_113, 0f, 15f, 0f), 1f, -1, 5f, false, 40000f);
		PED::FORCE_PED_MOTION_STATE(iLocal_113, -668482597, false, 1, false);
		PED::SET_PED_KEEP_TASK(iLocal_113, true);
		func_169(&iLocal_113, 1, 0, 1);
	}
	if (func_1048(uParam0, iLocal_114, "A_F_M_BTCHILLBILLY_01^1", 0, 1, 1))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_114, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_114, 0f, 15f, 0f), 1f, -1, 5f, false, 40000f);
		PED::FORCE_PED_MOTION_STATE(iLocal_114, -668482597, false, 1, false);
		PED::SET_PED_KEEP_TASK(iLocal_114, true);
		func_169(&iLocal_114, 1, 0, 1);
	}
	if (func_1048(uParam0, iLocal_115, "A_M_M_BTCHILLBILLY_01", 0, 1, 1))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_115, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_115, 0f, 15f, 0f), 1f, -1, 5f, false, 40000f);
		PED::FORCE_PED_MOTION_STATE(iLocal_115, -668482597, false, 1, false);
		PED::SET_PED_KEEP_TASK(iLocal_115, true);
		func_169(&iLocal_115, 1, 0, 1);
	}
	if (func_1048(uParam0, iLocal_116, "A_M_M_BTCHILLBILLY_01^1", 0, 1, 1))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_116, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_116, 0f, 15f, 0f), 1f, -1, 5f, false, 40000f);
		PED::FORCE_PED_MOTION_STATE(iLocal_116, -668482597, false, 1, false);
		PED::SET_PED_KEEP_TASK(iLocal_116, true);
		func_169(&iLocal_116, 1, 0, 1);
	}
	if (func_1048(uParam0, iLocal_117, "A_M_M_BTCHILLBILLY_01^2", 0, 1, 1))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_117, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_117, 0f, 15f, 0f), 1f, -1, 5f, false, 40000f);
		PED::FORCE_PED_MOTION_STATE(iLocal_117, -668482597, false, 1, false);
		PED::SET_PED_KEEP_TASK(iLocal_117, true);
		func_169(&iLocal_117, 1, 0, 1);
	}
	if (func_718(uParam0, 1))
	{
	}
}

bool func_595(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_596(int iParam0, vector3 vParam1, var uParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	func_1051(iParam0, vParam1, 0, fParam5, fParam6, fParam7, fParam8, iParam12, iParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar4 = func_205(iParam0, vParam1, 1);
	if (!func_79(uParam4))
	{
		if (fVar4 <= fParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				func_80(uParam4, 0);
			}
		}
	}
	else if (iParam10 && fVar4 > fParam8)
	{
		func_230(uParam4);
	}
	if (func_79(uParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::_0xEA44E97849E9F3DD(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_0xA8BA0BAE0173457B(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_0x0C3F0F7F92CA847C(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (func_334(uParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_1052(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !func_1052(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return 1;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return 0;
}

Vector3 func_597(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	vector3 vVar0;
	
	if (!bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!ANIMSCENE::_0x25557E324489393C(iParam1))
	{
		return 0f, 0f, 0f;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1, sParam2, &vVar0, true, sParam3, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

int func_598(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1053(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1054(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

bool func_599(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_918(iParam0))
	{
		return false;
	}
	iVar0 = func_919(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_600()
{
	if (func_79(&uLocal_195))
	{
		if (!ANIMSCENE::_0x1F0E401031E20146(&(iLocal_180[0]), "pl_hard_pull_loop"))
		{
			if (func_334(&uLocal_195) < 0.5f)
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(&(iLocal_180[0]), "pl_hard_pull_loop");
				if (ANIMSCENE::_0x23E33CB9F4A3F547(&(iLocal_180[0]), "pl_hard_pull_loop"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(iLocal_180[0]), "pl_hard_pull_loop", true);
				}
			}
		}
		else if (func_334(&uLocal_195) > 0.5f)
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(&(iLocal_180[0]), "pl_struggle_loop");
			if (ANIMSCENE::_0x23E33CB9F4A3F547(&(iLocal_180[0]), "pl_struggle_loop"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(iLocal_180[0]), "pl_struggle_loop", true);
			}
		}
	}
}

int func_601(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (func_244(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1053(iVar0, 2))
		{
			if (func_1055(vParam2, ((*Global_1945938)[iVar0 /*18*/])->f_6, 0.01f, 1) && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1054(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, iParam15, bParam16);
		return iVar1;
	}
	return 0;
}

float func_602(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	struct<4> Var0;
	
	if (!bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return 0f;
	}
	if (!ANIMSCENE::_0x25557E324489393C(iParam1))
	{
		return 0f;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1, sParam2, &Var0, true, sParam3, 2))
	{
		return Var0.f_3.f_2;
	}
	return 0f;
}

bool func_603(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_918(iParam0))
	{
		return false;
	}
	iVar0 = func_919(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_604(int iParam0, int iParam1, int iParam2, int iParam3)
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	if (iParam0 == 1 && !CAM::_0xA24C1D341C6E0D53(0, 0, 1))
	{
		PAD::ENABLE_CONTROL_ACTION(0, -1450761377, true);
		PAD::ENABLE_CONTROL_ACTION(0, -771458680, true);
	}
	else
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
	}
	if (iParam2 == 1)
	{
		PAD::ENABLE_CONTROL_ACTION(0, -668070958, true);
		PAD::ENABLE_CONTROL_ACTION(0, 1250966545, true);
	}
	if (iParam1 == 1)
	{
		HUD::_0xC9CAEAEEC1256E54(724769646);
	}
	if (iParam3 == 0)
	{
		func_1056();
	}
}

int func_605(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_485(*iParam1, 128))
	{
		if (!func_421(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_485(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_1057(iVar2))
			{
				return 0;
			}
			if (!func_421(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_1058(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_485(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_961(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_0x4C8B59171957BCF7(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_0xD806CD2A4F2C2996(PED::_0x4C8B59171957BCF7(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_0xD806CD2A4F2C2996(PED::_0x4C8B59171957BCF7(iParam0)));
			func_1059(iParam1, 128);
			return 0;
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_485(*iParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return 0;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, 0, 1);
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_485(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_1057(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_961(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_961(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam3, 0);
				if (func_961(iParam2, 8192))
				{
					HUD::_0x8BC7C1F929D07BF3(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return 0;
		}
		if (func_485(*iParam1, 2336))
		{
			if (!func_1057(iVar2))
			{
			}
			if (func_1060(iVar2, *iParam1))
			{
				func_1061(iParam1, 32);
				func_1061(iParam1, 256);
				func_1061(iParam1, 2048);
				func_1059(iParam1, 512);
				func_1059(iParam1, 1024);
				func_1059(iParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_485(*iParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			if (!func_1057(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return 0;
			}
			else
			{
				func_1061(iParam1, 64);
			}
		}
		if (func_961(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return 1;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_961(iParam2, 1024))) || func_961(iParam2, 8)) && !func_485(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_1059(iParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_961(iParam2, 4096)) && !func_485(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_1059(iParam1, 2048);
			func_1059(iParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_961(iParam2, 32)) && !func_485(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_1059(iParam1, 256);
			func_1059(iParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_1059(iParam1, 64);
		}
		else if (!func_961(iParam2, 1))
		{
			if (!func_961(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_1058(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_485(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			func_1059(iParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_1059(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_961(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_1059(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	else if (!func_961(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_1059(iParam1, 8);
	}
	return 0;
}

bool func_606(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = func_1062(iParam3, 1);
	bVar1 = func_1062(iParam3, 2);
	bVar2 = !func_1062(iParam3, 4);
	bVar3 = func_1062(iParam3, 8);
	bVar4 = !func_1062(iParam3, 16);
	bVar5 = func_1062(iParam3, 32);
	bVar6 = func_1062(iParam3, 64);
	return func_581(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_607(bool bParam0)
{
	if (bParam0)
	{
		func_565();
	}
	else if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_15, sLocal_23))
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_15, sLocal_23, 0);
	}
}

void func_608()
{
	int iVar0;
	
	if (iLocal_91)
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
	PED::APPLY_DAMAGE_TO_PED(Global_35, (iVar0 - (iVar0 / 4)), 1, -1, 0);
	PED::_0x8B3CB08158E98481(Global_35, 1);
	iLocal_91 = 1;
}

bool func_609(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_610(int iParam0)
{
	vector3 vVar0;
	
	if (!func_609(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_611(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	
	if (!func_609(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_732(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1063("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1064(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_481(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_1065(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_1065(iVar1);
	}
	return 0;
}

int func_612(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_609(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_610(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_732(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1066(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_1067(bParam2), iParam0, 0);
	return iVar2;
}

int func_613(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_200() == -1)
	{
		if (func_1068(iParam0) && func_1069(iParam0))
		{
			func_1070(iParam0, iParam1, 1, &iParam2, iParam3);
			return 0;
		}
	}
	else if (iParam0 == 1259508039)
	{
		iParam2 = 1;
	}
	else if (iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_614(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	*uParam1 = iParam2;
	func_1071(iParam0, uParam1);
	Var0 = { func_1072(iParam0, 0, 1) };
	iVar5 = func_1073(iParam0, &Var0, 0, 0);
	iVar6 = func_1074(iParam0, 0);
	if ((iVar5 > 1 && !func_839()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_631(iParam0, -2051813666))
		{
			func_303(583, 1);
		}
		else
		{
			func_303(582, 0);
		}
	}
	if (func_1075(iParam0, &Var0, *uParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*uParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_615(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_1076(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

bool func_616(int iParam0)
{
	if (func_200() != -1)
	{
		return false;
	}
	return func_617(iParam0) != 0;
}

int func_617(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < func_1077())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_1078(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_618(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_619(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < func_1077())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_618(iVar0))
		{
			if (func_288(func_1078(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_620(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_1079(48);
	func_882(0, -1);
}

int func_621(int iParam0)
{
	if (func_200() != -1)
	{
		return 0;
	}
	return func_492(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_622(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_623(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_624()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_625(int iParam0)
{
	if (func_200() != -1)
	{
		return 0;
	}
	return func_492(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_626(int iParam0)
{
	if (func_200() != -1)
	{
		return 0;
	}
	if (!func_201(iParam0))
	{
		return 0;
	}
	return func_174(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_627()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_288(func_1080(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_628(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_624() && (func_626(38) || func_621(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		
		case 39:
			if (func_624() && (func_626(39) || func_621(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_1081(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		
		case 41:
			if (func_624() && (func_626(41) || func_621(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		
		case 49:
			if (func_624() && (func_626(49) || func_621(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_1081(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1082(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_1083(iParam0, iVar13, iVar14))
	{
	}
	if (func_1084(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1085(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1086(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1087(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1088(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_629(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_630(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_624() && (func_626(38) || func_621(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_624() && (func_626(39) || func_621(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_624() && (func_626(49) || func_621(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_624() && (func_626(38) || func_621(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_821(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_821(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_820(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_1089(func_623(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_821(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_821(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_624() && (func_626(39) || func_621(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_821(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_821(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_624() && (func_626(49) || func_621(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_821(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_821(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_821(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_821(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_631(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_632(int iParam0, int iParam1)
{
	if (!func_609(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_633(int iParam0)
{
	if (!func_1090(iParam0))
	{
		return 0;
	}
	return func_1091(iParam0);
}

void func_634(int iParam0)
{
	if (!func_1090(iParam0))
	{
		return;
	}
	func_1092(iParam0);
	func_1093(iParam0);
}

int func_635(int iParam0)
{
	struct<2> Var0;
	
	if (!func_609(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_636(int iParam0, bool bParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		
		case 1222378998:
			iVar0 = -764310200;
			break;
		
		case 2074469742:
			iVar0 = -764310200;
			break;
		
		case 480079517:
			iVar0 = -1504859554;
			break;
		
		case 840671577:
			iVar0 = -1504859554;
			break;
		
		case joaat("ammo_molotov"):
			iVar0 = 1885857703;
			break;
		
		case -2006166057:
			iVar0 = 1885857703;
			break;
		
		case 1235846615:
			iVar0 = -1511427369;
			break;
		
		case -228768324:
			iVar0 = 2133046983;
			break;
		
		case -1411922943:
			iVar0 = -1511427369;
			break;
		
		case -834103244:
			iVar0 = -1511427369;
			break;
		
		case 424030678:
			iVar0 = 165751297;
			break;
		
		case 446901936:
			iVar0 = 710736342;
			break;
		
		case -1092841802:
			iVar0 = -462374995;
			break;
		
		case -1452241321:
			iVar0 = 567069252;
			break;
		
		case -1188697038:
			iVar0 = -281894307;
			break;
		
		case 1671758975:
			iVar0 = -1127860381;
			break;
		
		case -893514737:
			iVar0 = -1894785522;
			break;
		
		case -2063089161:
			iVar0 = 469927692;
			break;
		
		case -452897925:
			iVar0 = 1960591597;
			break;
		
		default:
			break;
	}
	if (func_609(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1094(iVar0) || func_579(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_637(int iParam0, bool bParam1)
{
	if (!func_609(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

int func_638(bool bParam0)
{
	if (func_200() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_1067(bParam0));
}

int func_639(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	
	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
	{
		Var0 = { func_1072(bParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1095((375 + iVar28), 1);
			if (func_1096(bParam0, &Var0, iVar5, 0))
			{
				if (func_1097(bParam0, &Var6, iVar5))
				{
					Var29 = { func_1098(bParam0, Var0, iVar5, 0) };
					func_1099(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_638(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
					{
						return 0;
					}
					func_640(WEAPON::_0x5C2EA6C44F515F34(bParam0), iParam1, iParam6);
					func_1100(bParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

int func_640(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_642(iParam0))
	{
		return 0;
	}
	if (!func_638(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

int func_641(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	
	iVar0 = func_637(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_200() == -1)
		{
			func_580(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1101(iVar0);
			}
		}
		if (!func_1075(iParam0, &uVar1, 1, 0, 0))
		{
			func_1070(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1102(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_639(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_639(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_639(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == 494733111 && !func_350())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_1044(iVar0))
				{
					func_639(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_639(iVar0, WEAPON::_0xD3750CCC00635FC2(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_1103(Global_35, 2, 0, 1);
				if ((((func_481(iVar7) && !Global_43890) && iVar7 != iVar0) && !func_288(-1185145312, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_481(iVar7) && func_288(-1185145312, 1, 0))
				{
					if (!func_639(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_639(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_639(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_303(480, 1);
	}
	return 1;
}

bool func_642(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_643(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!func_642(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_481(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == -2002235300)
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_288(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_679(func_1104(iParam0), func_678(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_200() == -1)
		{
			if (func_492(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_303(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_638(0))
	{
		if (func_640(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_684(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_644(int iParam0)
{
	var uVar0;
	
	if ((iParam0 == -615217896 && !func_858()) || iParam0 != -615217896)
	{
		if (func_1105(Global_35, iParam0, &uVar0))
		{
			func_663(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_669();
			break;
		
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_669();
			break;
		
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_669();
			break;
		
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_667();
			break;
		
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_665();
			break;
	}
}

void func_645(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_665();
			break;
		
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_666();
			break;
		
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_667();
			break;
		
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_668();
			break;
		
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_669();
			break;
		
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1106();
			break;
		
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1107();
			break;
		
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_646(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_1 = iParam0;
	return Var0;
}

void func_647(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

struct<2> func_648(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_649(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_631(iParam0, -2017733358);
	if (func_1108() < 3)
	{
		if (bVar0)
		{
			if (func_1110(func_1109(iParam0), iParam0))
			{
				func_679(79, func_678(func_1109(iParam0)), 1);
			}
			else
			{
				func_679(78, func_678(func_1109(iParam0)), 1);
			}
		}
		else
		{
			func_679(80, func_678(func_1111(iParam0)), 1);
		}
	}
}

int func_650()
{
	if (((((func_1112(839908568, 400) || func_1112(-1134030454, 400)) || func_1112(623353496, 400)) || func_1112(-344413337, 400)) || func_1112(-1664948962, 400)) || func_1112(1795228059, 400))
	{
		return 1;
	}
	return 0;
}

int func_651(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1113(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1114(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_1115(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_652(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_628(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_630(51, 0, 0, 0, 0, -1, 0);
			func_1116(8192);
			break;
		
		case 581047644:
			func_628(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_630(51, 0, 0, 0, 0, -1, 0);
			func_1116(524288);
			break;
		
		case -644199619:
			func_628(39, 0, 0, 0, 0, 0, 1, 0);
			func_630(39, 0, 0, 0, 0, -1, 0);
			func_1117(16);
			break;
		
		case 684296857:
			func_628(41, 0, 0, 0, 0, 0, 1, 0);
			func_630(41, 0, 0, 0, 0, -1, 0);
			func_1118(8);
			break;
		
		case 466137807:
			func_628(49, 0, 0, 0, 0, 0, 1, 0);
			func_630(49, 0, 0, 0, 0, -1, 0);
			func_1119(16);
			break;
		
		case -1087522507:
			func_628(43, 0, 0, -1791518714, func_1120(1), 0, -1, 0);
			func_1121(1);
			break;
		
		case -405829000:
			func_628(43, 0, 0, -2087881550, func_1120(2), 0, -1, 0);
			func_1121(2);
			break;
		
		case 378660860:
			func_628(43, 0, 0, 1908068621, func_1120(4), 0, -1, 0);
			func_1121(4);
			break;
		
		case 1566111097:
			func_628(43, 0, 0, 1611247019, func_1120(8), 0, -1, 0);
			func_1121(8);
			break;
		
		case 1276007140:
			func_628(43, 0, 0, 1319635688, func_1120(16), 0, -1, 0);
			func_1121(16);
			break;
	}
}

void func_653(int iParam0)
{
	if (func_1122() == 1)
	{
		if (func_621(39))
		{
			func_303(342, 0);
		}
		else
		{
			func_303(343, 0);
			func_1117(1);
		}
	}
	if (func_1122() >= 30)
	{
		func_303(344, 0);
	}
	func_628(39, 0, 0, 0, 0, 0, -1, 0);
	func_630(39, 0, 0, func_1122(), 30, 1, 0);
}

void func_654(int iParam0)
{
	if (func_1123() == 1)
	{
		if (func_621(49))
		{
			func_303(409, 0);
		}
		else
		{
			func_303(410, 0);
			func_1119(1);
		}
	}
	if (func_1123() >= 10)
	{
		func_303(411, 0);
	}
	func_628(49, 0, 0, 0, 0, 0, -1, 0);
	func_630(49, 0, 0, func_1123(), 10, 1, 0);
}

void func_655(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1369162587:
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_303(437, 0);
			func_303(440, 0);
			func_1124(-949689219, 444160793, &iVar0, 1, 0, 0);
			func_628(51, 0, 0, -949689219, iVar0, 0, -1, 0);
			func_630(51, 0, 0, iVar0, func_1081(-949689219, 20), 1, 0);
			func_1116(1);
			func_1125(-748969569, 0, 0);
			break;
		
		case 1610047510:
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_1124(-1248968496, -1969404854, &iVar0, 1, 0, 0);
			func_628(51, 0, 0, -1248968496, iVar0, 0, -1, 0);
			func_630(51, 0, 0, iVar0, func_1081(-1248968496, 20), 1, 0);
			func_1116(8);
			break;
		
		case 1317879106:
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_1124(1706369307, -832850511, &iVar0, 1, 0, 0);
			func_628(51, 0, 0, 1706369307, iVar0, 0, -1, 0);
			func_630(51, 0, 0, iVar0, func_1081(1706369307, 20), 1, 0);
			func_1116(64);
			break;
		
		case 1062444751:
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_1124(1520110311, -100913452, &iVar0, 1, 0, 0);
			func_628(51, 0, 0, 1520110311, iVar0, 0, -1, 0);
			func_630(51, 0, 0, iVar0, func_1081(1520110311, 20), 1, 0);
			func_1116(512);
			break;
		
		case 754186760:
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_303(438, 0);
			func_1124(-1992824800, 905173572, &iVar0, 1, 0, 0);
			func_628(51, 0, 0, -1992824800, iVar0, 0, -1, 0);
			func_630(51, 0, 0, iVar0, func_1081(-1992824800, 20), 1, 0);
			func_1116(32768);
			break;
		
		default:
			func_303(439, 0);
			break;
	}
}

void func_656()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_657(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (func_200() == -1)
	{
		if (!func_621(43))
		{
			if (iParam0 == 281887510)
			{
				func_303(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_303(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_303(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_303(400, 0);
			}
		}
		else if (func_631(iParam0, 412399755))
		{
			func_1126(-1791518714);
			if (func_1127() == 0)
			{
				func_882(0, 10);
				iVar1 = func_1128(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1129(iParam0) < func_1130(iParam0))
					{
						func_628(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_630(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_621(44))
		{
			if (iParam0 == -222563712)
			{
				func_303(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_303(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_303(401, 0);
			}
		}
		else if (func_631(iParam0, 709057512))
		{
			func_1126(-2087881550);
			if (func_1127() == 1)
			{
				func_882(0, 10);
				iVar1 = func_1128(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1129(iParam0) < func_1130(iParam0))
					{
						func_628(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_630(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_621(45))
		{
			if (iParam0 == 2116770557)
			{
				func_303(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_303(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_303(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_303(398, 0);
			}
		}
		else if (func_631(iParam0, -1478961327))
		{
			func_1126(1908068621);
			if (func_1127() == 2)
			{
				func_882(0, 10);
				iVar1 = func_1128(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1131(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_1132(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_1079(48);
					}
					if (func_1129(iParam0) < func_1130(iParam0))
					{
						func_628(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_630(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1129(iParam0) < func_1130(iParam0))
					{
						func_628(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_630(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_621(46))
		{
			if (iParam0 == 2085530337)
			{
				func_303(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_303(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_303(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_303(406, 0);
			}
		}
		else if (func_631(iParam0, -1238404098))
		{
			func_1126(1611247019);
			if (func_1127() == 3)
			{
				func_882(0, 10);
				iVar1 = func_1128(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1129(iParam0) < func_1130(iParam0))
					{
						func_628(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_630(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_621(47))
		{
			if (iParam0 == -1521783510)
			{
				func_303(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_303(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_303(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_303(403, 0);
			}
		}
		else if (func_631(iParam0, 1160548794))
		{
			func_1126(1319635688);
			if (func_1127() == 4)
			{
				func_882(0, 10);
				iVar1 = func_1128(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1129(iParam0) < func_1130(iParam0))
					{
						func_628(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_630(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_658(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 2116770557)
	{
		if (!func_1131(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_1132(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_1079(48);
		}
	}
}

void func_659(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_288(func_1133(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1134(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1135(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_660(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_200() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_651(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_651(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1394529493:
			func_651(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1262623627:
			func_651(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1124867377:
			func_651(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1790920086:
			func_651(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -2001202686:
			func_651(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1111063991:
			func_651(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1576210101:
			func_651(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 675090918:
			func_651(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 355838765:
			func_651(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -343824903:
			func_651(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1142684684:
			func_651(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1243851340:
			if (!func_1136())
			{
				func_651(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		
		case -525490740:
			func_651(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1736635264:
			func_651(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1302860970:
			func_651(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1027115192:
			func_651(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1064332555:
			func_651(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1954478446:
			func_651(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -518592739:
			func_651(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -2010073778:
			func_651(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -700133011:
			func_651(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1415414735:
			func_651(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case 2045548742:
			func_651(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case 830381058:
			func_651(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_661(int iParam0)
{
	if (func_621(41))
	{
		func_303(363, 0);
	}
	else
	{
		func_303(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1137(-1865241121);
			func_1138(-642026005);
			func_1139(-642026005);
			func_882(0, 10);
			break;
		
		case -2108314374:
			func_1137(2117142684);
			func_1138(-940584364);
			func_1139(-940584364);
			func_882(0, 10);
			break;
		
		case -1193798153:
			func_1137(-1409326024);
			func_1138(1972645282);
			func_1139(1972645282);
			func_882(0, 10);
			break;
		
		case -787702678:
			func_1137(-641744968);
			func_1138(1667205433);
			func_1139(1667205433);
			func_882(0, 10);
			break;
		
		case -804542901:
			func_1137(-946988203);
			func_1138(1362715885);
			func_1139(1362715885);
			func_882(0, 10);
			break;
		
		case -1696275132:
			func_1137(-646136018);
			func_1138(1053540370);
			func_1139(1053540370);
			func_882(0, 10);
			break;
		
		case -161595323:
			func_1137(-955835837);
			func_1138(-1100103852);
			func_1139(-1100103852);
			func_882(0, 10);
			break;
		
		case -1114363619:
			func_1137(-179276075);
			func_1138(-1409869209);
			func_1139(-1409869209);
			func_882(0, 10);
			break;
		
		case -368407134:
			func_1137(-492711560);
			func_1138(-1760235357);
			func_1139(-1760235357);
			func_882(0, 10);
			break;
		
		case 1997759228:
			func_1137(1764383959);
			func_1138(-138366827);
			func_1139(-138366827);
			func_882(0, 10);
			break;
		
		case 1265573293:
			func_1137(317501533);
			func_1138(-1261163843);
			func_1139(-1261163843);
			func_882(0, 10);
			break;
		
		case -1030441283:
			func_1137(817753087);
			func_1138(-963523016);
			func_1139(-963523016);
			func_882(0, 10);
			break;
		
		case -1490884871:
			func_1137(576606016);
			func_1138(560825326);
			func_1139(560825326);
			func_882(0, 10);
			break;
		
		case -395458616:
			func_1137(814934957);
			func_1138(858269539);
			func_1139(858269539);
			break;
	}
}

void func_662(int iParam0, int iParam1)
{
	var uVar0;
	
	func_1140(iParam0, iParam1, &uVar0);
}

int func_663(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	
	if (iParam3 == -358215195)
	{
		Var0 = { func_1072(iParam1, 1, 0) };
		iParam3 = func_1141(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1143(iParam1, iParam2, func_1142(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1144(1, (func_200() == -1 && iParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (iParam8 && iParam1 != &Global_1946804->f_57[func_1142(iParam3, 1) /*11*/])
			{
				func_1145(31, 0, 0, 0, 0);
			}
			break;
		
		case 1108822547:
			if (func_1146(32768) && iParam1 != &Global_1946804->f_57[func_1142(iParam3, 1) /*11*/])
			{
				func_1147();
				func_1145(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1145(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1148(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_1145(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_548(0);
			func_1149(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1145(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_664(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;
	
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*uParam0 = 0;
	iVar18 = func_1103(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_1103(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_1063("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1064(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*uParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_1065(iVar0);
						if (*uParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_665()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_666()
{
	float fVar0;
	float fVar1;
	
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_667()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_668()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_669()
{
	func_1150();
	func_1151();
	func_1152();
}

void func_670(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;
	
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, 1);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_671(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_821(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_672(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_673(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_674(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_675(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_676(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_677(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_678(int iParam0)
{
	if (!func_609(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_679(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	func_705(iParam0, &iVar0, &iVar1);
	if (!func_706(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1009(iParam0, 1024))
	{
		return;
	}
	func_707(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_680(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	func_705(iParam0, &iVar0, &iVar1);
	if (!func_706(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1009(iParam0, 1024))
	{
		return;
	}
	func_707(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

int func_681()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_1077())
	{
		return func_682();
	}
	iVar4 = (func_1077() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1077())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_1153(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1078(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_682()
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_1077());
	return func_1078(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_683(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		
		case 998010398:
			*iParam0 = -324053813;
			break;
		
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

int func_684(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	
	if (!func_609(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_1072(iParam0, 0, 1) };
	Var5 = { func_1098(iParam0, Var0, Var0.f_4, 0) };
	return func_1154(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_685(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_200() != -1)
	{
		return;
	}
	switch (func_635(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1155(81053684, 0) <= 0)
			{
				func_1145(32, iParam0, 0, 0, 0);
			}
			break;
		
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_1145(32, iParam0, 0, 0, 0);
			}
			break;
		
		case -999503751:
			iVar0 = func_1156(iParam0);
			if (func_1157(iVar0))
			{
				func_1158(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_1145(30, iParam0, 0, 0, 0);
			}
			if (func_1159() == -2125499975 || func_1159() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_1145(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_1159() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_1145(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		
		case -525676072:
			if (!func_1160(-525676072, 0))
			{
				if (func_1161(-525676072, &iVar1))
				{
					func_1145(33, iVar1, 0, 0, 0);
				}
			}
			func_1145(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1162(99217379))
		{
			func_663(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_634(24);
		if (func_664(&iVar2, 0))
		{
			func_639(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_686(int iParam0)
{
	if (func_631(iParam0, 943695443))
	{
		func_1163(0, iParam0);
	}
	else if (func_631(iParam0, -2096528786))
	{
		func_1163(1, iParam0);
	}
	else if (func_631(iParam0, -1094167013))
	{
		func_1163(2, iParam0);
	}
	else if (func_631(iParam0, 1936654645))
	{
		func_1163(3, iParam0);
	}
	else if (func_631(iParam0, 1306489306))
	{
		func_1163(4, iParam0);
	}
	else if (func_631(iParam0, 435762317))
	{
		func_1163(5, iParam0);
	}
	else if (func_631(iParam0, 1259363210))
	{
		func_1163(6, iParam0);
	}
	else if (func_631(iParam0, 881398259))
	{
		func_1163(7, iParam0);
	}
	else if (func_631(iParam0, -541549214))
	{
		func_1163(8, iParam0);
	}
	else if (func_631(iParam0, 130796156))
	{
		func_1163(-1, iParam0);
	}
}

int func_687(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;
	
	Var4.f_1 = 10;
	func_1164(&Var4, 1356624740);
	return func_1165(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_688(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!func_609(iParam0, 0))
	{
		return Var0;
	}
	if (func_631(iParam0, -305066475))
	{
		if (func_200() == -1)
		{
			if (func_631(iParam0, -537818634))
			{
				return func_827(189951448);
			}
			else
			{
				return func_827(1176172851);
			}
		}
	}
	else if (func_631(iParam0, -537818634))
	{
		return func_827(-963660207);
	}
	if (func_631(iParam0, 2084895747))
	{
		return func_827(1694039471);
	}
	return Var2;
}

void func_689(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_200() == -1)
			{
				if (func_492(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_303(109, 1);
				}
			}
			break;
	}
}

void func_690(int iParam0, char* sParam1)
{
	char* sVar0;
	
	sVar0 = func_1167(func_1166(0));
	func_1169(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1168(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_691(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;
	
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_609(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_1170())
	{
		func_1171(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_1172(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1172(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_632(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_610(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1173(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_1174(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_678(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_631(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_678(iParam0));
	}
	func_1169(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_692(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 128))
	{
		return 1;
	}
	fVar0 = BUILTIN::VDIST2(((*Global_1347702)[uParam0->f_174 /*49*/])->f_24, Global_36);
	fVar1 = 3f;
	if (uParam0->f_744 > 0f)
	{
		fVar1 = uParam0->f_744;
	}
	func_604(0, 1, 1, 1);
	if (fVar0 <= (fVar1 * fVar1))
	{
		if (func_421(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		}
		if (!func_421(Global_35, -982327190))
		{
			TASK::TASK_STAND_STILL(Global_35, 2200);
			func_80(&(uParam0->f_2588), 1);
		}
		if (TASK::IS_PED_STILL(Global_35) || func_767(&(uParam0->f_2588)) > 2f)
		{
			func_230(&(uParam0->f_2588));
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			return 1;
		}
	}
	else
	{
		if (!func_79(&(uParam0->f_2588)))
		{
			func_80(&(uParam0->f_2588), 1);
		}
		else if (func_767(&(uParam0->f_2588)) > 5f)
		{
			func_230(&(uParam0->f_2588));
			if (func_421(Global_35, 713668775))
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			}
			return 1;
		}
		if (!func_421(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			if (!TASK::IS_MOVE_BLEND_RATIO_WALKING(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)) && !TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)))
			{
				PED::FORCE_PED_MOTION_STATE(Global_35, -668482597, false, 1, false);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_24, 1f, 7500, 0.25f, false, 40000f);
		}
		if (func_206(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43, 0))
		{
			if (!PED::IS_PED_HEADTRACKING_PED(Global_35, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_43, -1, 0, 51, 0);
			}
		}
	}
	return 0;
}

int func_693(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (func_31(((*Global_1347702)[uParam0->f_174 /*49*/])->f_12, 128))
	{
		return 1;
	}
	fVar0 = BUILTIN::VDIST2(uParam0->f_206.f_5, Global_36);
	fVar1 = 3f;
	if (uParam0->f_744 > 0f)
	{
		fVar1 = uParam0->f_744;
	}
	func_604(0, 1, 1, 1);
	if (fVar0 <= (fVar1 * fVar1))
	{
		func_230(&(uParam0->f_2588));
		if (func_421(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		}
		return 1;
	}
	else
	{
		if (!func_79(&(uParam0->f_2588)))
		{
			func_80(&(uParam0->f_2588), 1);
		}
		else if (func_767(&(uParam0->f_2588)) > 5f)
		{
			func_230(&(uParam0->f_2588));
			if (func_421(Global_35, 713668775))
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			}
			return 1;
		}
		if (!func_421(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			if (!TASK::IS_MOVE_BLEND_RATIO_WALKING(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)) && !TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)))
			{
				PED::FORCE_PED_MOTION_STATE(Global_35, -668482597, false, 1, false);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, uParam0->f_206.f_5, 1f, 7500, 0.25f, false, 40000f);
		}
		if (func_206(((*Global_1347702)[uParam0->f_174 /*49*/])->f_43, 0))
		{
			if (!PED::IS_PED_HEADTRACKING_PED(Global_35, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_43))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, ((*Global_1347702)[uParam0->f_174 /*49*/])->f_43, -1, 0, 51, 0);
			}
		}
	}
	return 0;
}

Vector3 func_694(var uParam0, int iParam1)
{
	vector3 vVar0[2];
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	
	switch (&uParam0->f_912[iParam1 /*41*/])
	{
		case 0:
			vVar7 = { (uParam0->f_912[iParam1 /*41*/])->f_4 - (uParam0->f_912[iParam1 /*41*/])->f_1 };
			vVar10 = { vVar7.y, (vVar7.x * -1f), 0f };
			vVar10 = { func_1175(vVar10) * Vector(2f, 2f, 2f) };
			*(vVar0[0 /*3*/]) = { (uParam0->f_912[iParam1 /*41*/])->f_1 + (uParam0->f_912[iParam1 /*41*/])->f_4 / Vector(2f, 2f, 2f) + vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(*(vVar0[0 /*3*/]), &((vVar0[0 /*3*/])->f_2), 0);
			*(vVar0[1 /*3*/]) = { (uParam0->f_912[iParam1 /*41*/])->f_1 + (uParam0->f_912[iParam1 /*41*/])->f_4 / Vector(2f, 2f, 2f) - vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(*(vVar0[1 /*3*/]), &((vVar0[1 /*3*/])->f_2), 0);
			if (!func_244(*(vVar0[0 /*3*/])))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(*(vVar0[0 /*3*/]), (uParam0->f_912[iParam1 /*41*/])->f_7, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(*(vVar0[1 /*3*/]), (uParam0->f_912[iParam1 /*41*/])->f_7, true))
				{
					return *(vVar0[1 /*3*/]);
				}
				else
				{
					return *(vVar0[0 /*3*/]);
				}
			}
			break;
		
		case 1:
			fVar13 = 0f;
			if ((uParam0->f_912[iParam1 /*41*/])->f_13 < (uParam0->f_912[iParam1 /*41*/])->f_12)
			{
				fVar13 = (((uParam0->f_912[iParam1 /*41*/])->f_12 + ((uParam0->f_912[iParam1 /*41*/])->f_13 + 360f)) / 2f);
			}
			else
			{
				fVar13 = (((uParam0->f_912[iParam1 /*41*/])->f_12 + (uParam0->f_912[iParam1 /*41*/])->f_13) / 2f);
			}
			*(vVar0[0 /*3*/]) = { (uParam0->f_912[iParam1 /*41*/])->f_1 + Vector(0f, (BUILTIN::COS(fVar13) * ((uParam0->f_912[iParam1 /*41*/])->f_11 + 5f)), (BUILTIN::SIN(fVar13) * ((uParam0->f_912[iParam1 /*41*/])->f_11 + 5f))) };
			(vVar0[0 /*3*/])->f_2 = ((vVar0[0 /*3*/])->f_2 + 10f);
			MISC::GET_GROUND_Z_FOR_3D_COORD(*(vVar0[0 /*3*/]), &((vVar0[0 /*3*/])->f_2), 0);
			if (!func_244(*(vVar0[0 /*3*/])))
			{
				return *(vVar0[0 /*3*/]);
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_695(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_696(var uParam0, int iParam1)
{
	uParam0->f_1560 = (uParam0->f_1560 - (uParam0->f_1560 && iParam1));
}

bool func_697(var uParam0, int iParam1)
{
	return (uParam0->f_1562.f_1 && iParam1) != 0;
}

bool func_698(var uParam0, int iParam1)
{
	return func_1176(uParam0->f_27, iParam1);
}

var func_699(int iParam0)
{
	var uVar0;
	
	if (!func_201(iParam0))
	{
		return uVar0;
	}
	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return uVar0;
}

var func_700(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = uParam0;
	uVar15 = _NAMESPACE71::_0x2024F4F333095FB1(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_701()
{
	return Global_1900383->f_393;
}

void func_702()
{
	int iVar0;
	
	iVar0 = func_701();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_1177(0);
}

void func_703(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_704(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_705(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_706(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_1178(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_1179(iParam0))
	{
		return 0;
	}
	if (func_1180(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_1009(iParam0, 1)) || func_60(32768))
	{
		if (!func_1009(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_1181())
	{
		return 0;
	}
	return 1;
}

void func_707(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_708(var uParam0)
{
	return *uParam0;
}

void func_709(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (((!ANIMSCENE::_0x25557E324489393C(uParam0->f_348) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_348, 0)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348)) || func_535(uParam0, 512))
	{
		if (!func_1182(uParam0->f_405, 128))
		{
			func_1183();
		}
		return;
	}
	if ((func_721(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, func_1013(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_348, func_1013(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_348))
	{
		if (!func_1182(uParam0->f_405, 128))
		{
			func_1183();
		}
		return;
	}
	iVar0 = 1;
	iVar1 = _NAMESPACE71::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (func_787(iVar1))
		{
			if (func_1184(Global_43800, 0))
			{
				iVar0 = 0;
			}
		}
	}
	bVar2 = false;
	if (func_1182(uParam0->f_405, 512))
	{
		bVar2 = true;
	}
	if (func_1185(iVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_348);
		func_1183();
	}
}

void func_710(var uParam0, char* sParam1, var uParam2)
{
	struct<8> Var0;
	char cVar8[32];
	
	func_1186(uParam2);
	if (!func_535(uParam0, 301989888))
	{
		func_1187(uParam0, &(uParam2->f_753));
	}
	if (func_708(uParam0) == 2 && (func_1188(uParam0->f_404, 16384) || func_535(uParam0, 268435456)))
	{
		Var0 = { func_531(uParam0) };
		func_243(uParam0, &Var0);
	}
	func_1189(uParam0, sParam1);
	if (func_535(uParam0, 131072))
	{
		func_1190(uParam0, 0);
	}
	if (func_1191())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		func_1192();
	}
	if (func_899())
	{
		func_403(1);
	}
	func_545(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_1193(uParam0, cVar8);
	func_716(1, 0);
	func_542(uParam0);
	if (func_712(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_340);
	}
	func_1194(uParam0);
	func_1019(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_348);
	Global_43799 = uParam0->f_348;
	StringCopy(&Global_43801, sParam1, 24);
}

void func_711(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_259(&(uParam0->f_1));
}

bool func_712(var uParam0, int iParam1)
{
	return (uParam0->f_343 && iParam1) != 0;
}

void func_713(var uParam0)
{
	if (func_32(uParam0, 4))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_641);
	}
}

int func_714(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_894(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_715(int iParam0)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), iParam0, 0, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
}

void func_716(bool bParam0, int iParam1)
{
	if (func_1195())
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_915())
		{
			func_1196(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, iParam1, 0);
}

void func_717(var uParam0)
{
	vector3 vVar0;
	
	if (!func_535(uParam0, 4))
	{
		if (func_1188(uParam0->f_404, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_1197(uParam0) };
		if (!func_1188(uParam0->f_404, 524288))
		{
			func_1198(&(uParam0->f_416));
		}
		func_1199(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_1200(uParam0, 0f, 0f, 0f);
		func_1201(uParam0);
		func_1202(uParam0);
		func_593(uParam0, 0f, 0f, 0f, 0, 0);
		func_1203(uParam0);
		func_330(uParam0, 4);
		func_1204(uParam0, 0);
		func_1205(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_417)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_417));
		}
	}
}

int func_718(var uParam0, int iParam1)
{
	if (func_535(uParam0, 262144))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, "ExportCamera"))
	{
		return 0;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_348, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_348, "ExportCamera") && iParam1)) || ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_348))
	{
		func_330(uParam0, 262144);
		func_1204(uParam0, 1);
		return 1;
	}
	return 0;
}

int func_719(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_348, 0))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_0x49F1D143ADE32656(uParam0->f_348) * 1000f));
}

int func_720(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_348, 0))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) * 1000f));
}

int func_721(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1) && func_1206(uParam0->f_13[iVar0 /*12*/], iParam2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_722(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
	{
		return 1;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_348, 0))
	{
		if (func_535(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return 1;
	}
	if (ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_348) && func_535(uParam0, 1048576))
	{
		return 1;
	}
	return 0;
}

void func_723(var uParam0)
{
	if (((func_535(uParam0, 1073741824) && !func_535(uParam0, 524288)) && func_535(uParam0, 512)) && CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
}

void func_724(var uParam0)
{
	if (!func_535(uParam0, 536870912))
	{
		func_1204(uParam0, 1);
		func_725(&(uParam0->f_405), uParam0->f_416);
		func_541();
		func_330(uParam0, 536870912);
	}
	if (func_535(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_1207(uParam0);
	func_711(uParam0, 1);
	func_305(uParam0);
	func_1208(uParam0);
	func_1209(uParam0);
	func_1210(uParam0, 4);
	func_544(uParam0);
	func_1190(uParam0, 1);
	func_542(uParam0);
	func_230(&(uParam0->f_1));
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_348) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_348))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
	}
	func_1211(!func_1182(uParam0->f_405, 128));
	if (!func_1182(uParam0->f_405, 128))
	{
		func_1183();
	}
}

void func_725(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1212(2000);
	Global_16 = 0;
	func_1213();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_1182(*uParam0, 8));
	if (!func_1182(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_1182(*uParam0, 2) || func_1182(*uParam0, 4))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!func_1182(*uParam0, 16))
	{
		func_1214(1);
	}
	if (func_1182(*uParam0, 32))
	{
		func_663(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1215(-1623728698, 0);
	}
	func_1205(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_726()
{
	Global_1935630->f_52 = 1;
}

int func_727(var uParam0)
{
	if (func_32(uParam0, 8))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_642);
		if (StackVal)
		{
			return 1;
		}
		return 0;
	}
	else
	{
		Stack.Push(!func_712(&(uParam0->f_206), 4));
		Stack.Push(&(uParam0->f_206));
		Call_Loc(uParam0->f_206.f_342);
		if (StackVal || StackVal)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_728(var uParam0)
{
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
}

void func_729(var uParam0)
{
	func_1216(uParam0);
	func_1217(uParam0, 0);
	uParam0->f_1 = 0;
	func_1218();
}

int func_730(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = MAP::_0xA6EF0C54A3443E70(iParam0, iParam1);
	if (bParam2)
	{
		MAP::_0x662D364ABF16DE2F(iVar0, 231194138);
	}
	return iVar0;
}

int func_731(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	
	iVar0 = MAP::_0x554D9D53F696D002(iParam0, vParam1);
	if (bParam4)
	{
		MAP::_0x662D364ABF16DE2F(iVar0, 231194138);
	}
	return iVar0;
}

int func_732(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!func_609(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_610(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_631(iParam0, 1399091007))
	{
		func_1140(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_733(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;
	
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1219(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1221(&Var0, func_1220(0));
	}
	if (!func_1222(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_1064(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1099(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1065(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_734(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;
	
	if (!func_609(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_1072(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1223(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1098(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1099(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_735(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_631(iParam0, 606799272))
		{
			func_1224(iParam0, iParam1);
		}
		if (func_631(iParam0, -1112814642) && func_631(iParam0, -1697809989))
		{
			func_659(iParam0, iParam1, 1, 0);
		}
	}
}

void func_736(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_1225(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

int func_737()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (&Global_40.f_9479[iVar0 /*4*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_738(var uParam0)
{
	return uParam0->f_1;
}

void func_739(var uParam0)
{
	bool bVar0;
	
	if (!func_183(uParam0, 134217728))
	{
		bVar0 = true;
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(-1181125641);
		if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(-1181125641))
		{
			bVar0 = false;
		}
		STREAMING::REQUEST_ANIM_DICT(func_1226(1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_1226(1)))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_753(uParam0, 134217728);
		}
	}
}

void func_740(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!func_183(uParam0, 65536))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231->f_4)
	{
		return;
	}
	if (!func_183(uParam0, 4096) && uParam0->f_1792)
	{
		return;
	}
	if (!func_183(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_751(uParam0);
	func_1227(uParam0, uParam0->f_1793, uParam0->f_1795);
	func_1228(uParam0);
	if (uParam0->f_1796 && !uParam0->f_1795)
	{
		if (((((uParam0->f_1791 >= 0 && (uParam0->f_912[uParam0->f_1791 /*41*/])->f_17 > 0f) && uParam0->f_1584 >= 0) && !func_714(Global_35, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, ((uParam0->f_912[uParam0->f_1791 /*41*/])->f_17 + 5f), 1, 1)) && !func_183(uParam0, 33554432)) && !func_183(uParam0, 4))
		{
			func_1229(uParam0, uParam0->f_1793);
			return;
		}
	}
	if (!func_183(uParam0, 4))
	{
		if (func_1230(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1580 = uParam0->f_1584;
				func_753(uParam0, 8);
				return;
			}
		}
		else
		{
			func_1229(uParam0, uParam0->f_1793);
		}
		if ((uParam0->f_912[uParam0->f_1586 /*41*/])->f_29)
		{
			fVar0 = func_1231(uParam0, uParam0->f_1586);
			if (fVar0 < 0f || (uParam0->f_1793 && fVar0 < 1f))
			{
				uParam0->f_1584 = uParam0->f_1586;
				if (!bParam2)
				{
					uParam0->f_1580 = uParam0->f_1586;
					func_753(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1585 == -1f || fVar0 <= uParam0->f_1585) || uParam0->f_1586 == uParam0->f_1584)
				{
					if (uParam0->f_1586 != uParam0->f_1584)
					{
					}
					uParam0->f_1584 = uParam0->f_1586;
					uParam0->f_1585 = fVar0;
					func_753(uParam0, 16);
					if (((!func_183(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, true) < ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_11 + 5f))
					{
						func_1232(uParam0);
						func_753(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1584 == uParam0->f_1586)
			{
				func_696(uParam0, 16);
			}
		}
		if (uParam0->f_1586 + 1 >= 8)
		{
			uParam0->f_1586 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1586 + 1;
			while (iVar2 <= 7)
			{
				if ((uParam0->f_912[iVar2 /*41*/])->f_29)
				{
					uParam0->f_1586 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1586 = 0;
			}
		}
		if (uParam0->f_1584 < 0)
		{
			return;
		}
		if (func_698(uParam0->f_912[uParam0->f_1584 /*41*/], 2) && uParam0->f_1793)
		{
			return;
		}
	}
	if (func_183(uParam0, 16))
	{
		fVar4 = func_205(Global_35, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, 1);
		if (uParam0->f_1793 && fVar4 <= ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
		}
		fVar5 = func_1233(Global_36, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= (uParam0->f_912[uParam0->f_1584 /*41*/])->f_17 || VOLUME::_0xF256A75210C5C0EB(uParam0->f_1771, uParam0->f_1775))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1.f_2 && Global_36.f_2 <= ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_1.f_2 + (uParam0->f_912[uParam0->f_1584 /*41*/])->f_10))
			{
				func_750(uParam0, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_27, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, fVar6);
			}
			if ((uParam0->f_1795 && VOLUME::_0xF256A75210C5C0EB(uParam0->f_1771, uParam0->f_1775)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1797) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1797))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1797, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1797))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
			}
		}
		else if ((uParam0->f_1793 && fVar4 <= ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1794))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1794, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
		}
	}
	if (((uParam0->f_1793 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1794) > 1.25f) || func_183(uParam0, 4))
	{
		if (((VOLUME::_0xF256A75210C5C0EB(uParam0->f_1771, uParam0->f_1775) && func_1231(uParam0, uParam0->f_1584) < 10000f) && func_183(uParam0, 16)) || func_183(uParam0, 4))
		{
			if (!func_183(uParam0, 4))
			{
				func_753(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!func_748(uParam0, uParam0->f_1584))
			{
				iVar7 |= 2048;
			}
			if (func_605(Global_35, &(uParam0->f_1582), iVar7, 0, 0, 1084227584, 100, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_7, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
				uParam0->f_1582 = 0;
				func_696(uParam0, 4);
			}
		}
	}
	else if (func_183(uParam0, 4))
	{
		func_696(uParam0, 4);
	}
}

int func_741(var uParam0)
{
	return *uParam0;
}

void func_742(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (func_183(uParam0, 512))
	{
		return;
	}
	if (func_767(&(uParam0->f_1768)) < 2f)
	{
		return;
	}
	if (func_1185(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		func_753(uParam0, 524288);
	}
}

void func_743(var uParam0, int iParam1)
{
	uParam0->f_1579 = iParam1;
}

void func_744(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_745(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_697(uParam0, 4))
	{
		return 1;
	}
	switch (iParam1)
	{
		case 1:
			HUD::_0x8BC7C1F929D07BF3(-1679307491);
			HUD::_0x8BC7C1F929D07BF3(474191950);
			break;
		
		default:
			if (func_1234())
			{
				if (!func_183(uParam0, 524288))
				{
					HUD::_0x4CC5F2FC1332577F(-1679307491);
				}
				HUD::_0x8BC7C1F929D07BF3(474191950);
			}
			break;
	}
	if (func_1234())
	{
		func_696(uParam0, 512);
		func_1235(uParam0, 128);
		PED::_0xCB9401F918CB0F75(Global_35, "PlayLeadin", 0, -1);
		if (func_1236(uParam0->f_912[uParam0->f_1580 /*41*/], 4))
		{
			PED::_0xCB9401F918CB0F75(Global_35, func_1237((uParam0->f_912[uParam0->f_1580 /*41*/])->f_39), 0, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	func_1218();
	func_1238(uParam0, 1, 0);
	func_26(uParam0);
	if (func_183(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	}
	func_1235(uParam0, 4);
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1771))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_1771);
	}
	if (func_697(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(func_1239()))
	{
		CAM::_0x798BE43C9393632B(func_1239());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1241[iVar0 /*22*/])->f_2)) && !MISC::ARE_STRINGS_EQUAL(&((uParam0->f_1241[iVar0 /*22*/])->f_2), func_1239())) && CAM::_0xDD0B7C5AE58F721D(&((uParam0->f_1241[iVar0 /*22*/])->f_2)))
		{
			if ((uParam0->f_1241[iVar0 /*22*/])->f_21)
			{
				CAM::_0x798BE43C9393632B(&((uParam0->f_1241[iVar0 /*22*/])->f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (func_183(uParam0, 524288) || iParam1 == 1)
	{
		func_1183();
	}
	if (func_697(uParam0, 16))
	{
		if (func_741(uParam0) == 0)
		{
			if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
			{
			}
		}
		else if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
		}
	}
	func_1240();
	if (func_697(uParam0, 32))
	{
		TASK::_0x3AD8EFF9703BE657(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797))
	{
		if (!func_183(uParam0, 8192))
		{
			if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1797) != 50f)
			{
				VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1797, 50f);
			}
		}
		if (VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1797))
		{
			VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
		}
	}
	func_758(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1817))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1817);
	}
	return 1;
}

void func_746(bool bParam0)
{
	if (bParam0)
	{
		func_1241(4);
	}
	func_1241(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

void func_747()
{
	Global_1905944->f_5695 = 1;
}

int func_748(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (((uParam0->f_371[iVar0 /*18*/])->f_17 == 1 && (uParam0->f_371[iVar0 /*18*/])->f_2 == 4) && &uParam0->f_371[iVar0 /*18*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_749(var uParam0)
{
	return uParam0->f_2;
}

void func_750(var uParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_1176(uParam1, 8))
	{
		iVar0 |= 8;
	}
	if (func_1176(uParam1, 8192))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_1793)
	{
		fParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_1794, 214, true);
	}
	if (uParam0->f_1792 && func_183(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (func_1176(uParam1, 262144) && Global_1935630->f_44 == 2055893578)
	{
		iVar0 |= 16;
	}
	func_1242(&iVar1, uParam2);
	func_1243(&(uParam0->f_1800), iVar0, iVar1, fParam3);
	if (!Global_1935630->f_12)
	{
		if (!func_183(uParam0, 67108864))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}
	func_1244();
	func_1245(uParam0, 1);
}

void func_751(var uParam0)
{
	int iVar0;
	bool bVar1;
	struct<16> Var2;
	bool bVar18;
	int iVar19;
	vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	float fVar27;
	float fVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	
	iVar0 = uParam0->f_1584;
	if (iVar0 >= 0 && !func_757(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_912[iVar0 /*41*/])->f_1, true) <= (uParam0->f_912[iVar0 /*41*/])->f_16;
		Var2 = { uParam0->f_1588 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1241[iVar0 /*22*/])->f_2)))
			{
				StringCopy(&(uParam0->f_1588), func_1246((uParam0->f_1241[iVar0 /*22*/])->f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1588), func_1239(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1241[iVar0 /*22*/])->f_10)))
			{
				StringCopy(&(uParam0->f_1588.f_8), func_1246((uParam0->f_1241[iVar0 /*22*/])->f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1588.f_8), func_1247(), 64);
			}
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam0->f_1588)) || !MISC::ARE_STRINGS_EQUAL(&(Var2.f_8), &(uParam0->f_1588.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_0x927B810E43E99932(&Var2))
			{
				CAM::_0x0A5A4F1979ABB40E(&Var2);
			}
		}
		if (bVar1 && !&uParam0->f_1241[iVar0 /*22*/])
		{
			if (!func_1248((uParam0->f_1241[iVar0 /*22*/])->f_1, 8))
			{
				if (!func_1248((uParam0->f_1241[iVar0 /*22*/])->f_1, 8))
				{
					func_1242(&iVar19, (uParam0->f_1241[iVar0 /*22*/])->f_1);
					func_1249(&(uParam0->f_1800), iVar19);
				}
			}
			else
			{
				vVar20 = { (uParam0->f_912[iVar0 /*41*/])->f_1 };
				iVar24 = -1;
				if ((uParam0->f_1241[iVar0 /*22*/])->f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 27)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST((uParam0->f_3[iVar25 /*13*/])->f_2))
						{
							if ((uParam0->f_1241[iVar0 /*22*/])->f_20 == (uParam0->f_3[iVar25 /*13*/])->f_3)
							{
								iVar23 = (uParam0->f_3[iVar25 /*13*/])->f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (func_1248((uParam0->f_1241[iVar0 /*22*/])->f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = (uParam0->f_3[(uParam0->f_1241[iVar0 /*22*/])->f_20 /*13*/])->f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798) || iVar26 != uParam0->f_1798))
									{
										if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
										{
											CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
											func_1235(uParam0, 16);
										}
										return;
									}
								}
								if ((uParam0->f_1241[iVar0 /*22*/])->f_18 != 0f || (uParam0->f_1241[iVar0 /*22*/])->f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_1250(Global_35, iVar23, 1), (uParam0->f_1241[iVar0 /*22*/])->f_18, 0f, (uParam0->f_1241[iVar0 /*22*/])->f_19) };
								}
							}
							else if ((uParam0->f_1241[iVar0 /*22*/])->f_18 != 0f || (uParam0->f_1241[iVar0 /*22*/])->f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_1233(Global_36, (uParam0->f_912[iVar0 /*41*/])->f_1, 1), (uParam0->f_1241[iVar0 /*22*/])->f_18, 0f, (uParam0->f_1241[iVar0 /*22*/])->f_19) };
							}
							fVar27 = (uParam0->f_912[iVar0 /*41*/])->f_16;
							fVar28 = (uParam0->f_912[iVar0 /*41*/])->f_14;
							bVar29 = func_1248((uParam0->f_1241[iVar0 /*22*/])->f_1, 2);
							bVar30 = (func_1248((uParam0->f_1241[iVar0 /*22*/])->f_1, 1) && !bVar29);
							bVar31 = func_1248((uParam0->f_1241[iVar0 /*22*/])->f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1588));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									func_1251(0, 0);
								}
								bVar32 = true;
								func_1235(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1588), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1604.f_16 != iVar23);
								bVar32 = (bVar32 || !func_1055(uParam0->f_1604.f_17, vVar20, 1056964608, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1604.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1604.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1604.f_22 != bVar30);
								uParam0->f_1604.f_16 = iVar23;
								uParam0->f_1604.f_17 = { vVar20 };
								uParam0->f_1604.f_20 = fVar27;
								uParam0->f_1604.f_21 = fVar28;
								uParam0->f_1604.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1604 = { uParam0->f_1588 };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_1604));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1588), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1627.f_16 != iVar23);
								bVar32 = (bVar32 || !func_1055(uParam0->f_1627.f_17, vVar20, 1056964608, 1));
								bVar32 = (bVar32 || uParam0->f_1627.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1627.f_21 != bVar30);
								uParam0->f_1627.f_16 = iVar23;
								uParam0->f_1627.f_17 = { vVar20 };
								uParam0->f_1627.f_20 = !bVar31;
								uParam0->f_1627.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1627 = { uParam0->f_1588 };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_1627));
								}
							}
							Jump @1466; //curOff = 1420
							if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
							}
							StringCopy(&(uParam0->f_1588), "", 64);
							StringCopy(&(uParam0->f_1588.f_8), "", 64);
							func_1252(uParam0, 2);
						}
					}
				}
			}
		}
	}

int func_752(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (func_1253(uParam0, &iVar0))
	{
		func_1254(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_753(var uParam0, int iParam1)
{
	uParam0->f_1560 = (uParam0->f_1560 || iParam1);
}

void func_754(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	vector3 vVar6;
	int iVar9;
	
	if (func_741(uParam0) != 0)
	{
		return;
	}
	iVar0 = uParam0->f_1584;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 >= 0)
	{
		if (Global_36.f_2 < (uParam0->f_912[iVar0 /*41*/])->f_1.f_2)
		{
			return;
		}
		fVar1 = (uParam0->f_912[iVar0 /*41*/])->f_15;
		if (fVar1 <= 0f)
		{
			fVar1 = (uParam0->f_912[iVar0 /*41*/])->f_14;
		}
		if (fVar1 <= 0f)
		{
			return;
		}
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_912[iVar0 /*41*/])->f_1, false);
		fVar3 = MISC::ABSF((Global_36.f_2 - (uParam0->f_912[iVar0 /*41*/])->f_1.f_2));
		bVar4 = VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1771);
		if (bVar4)
		{
			vVar6 = { VOLUME::_0xF70F00013A62F866(uParam0->f_1771) };
			fVar5 = MISC::ABSF((vVar6.z - (uParam0->f_912[iVar0 /*41*/])->f_1.f_2));
		}
		if (fVar2 <= fVar1 && (fVar3 <= (uParam0->f_912[iVar0 /*41*/])->f_10 || (bVar4 && fVar5 <= (uParam0->f_912[iVar0 /*41*/])->f_10)))
		{
			iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS((uParam0->f_912[iVar0 /*41*/])->f_1);
			if (!INTERIOR::IS_VALID_INTERIOR(iVar9) || !INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798))
			{
				func_753(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1798 == iVar9)
			{
				func_753(uParam0, 65536);
				return;
			}
		}
		func_696(uParam0, 65536);
	}
}

void func_755(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = 0;
	if (func_738(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1790)
		{
			if ((uParam0->f_371[iVar0 /*18*/])->f_7)
			{
				func_1255(uParam0, iVar0, iParam1);
			}
			else if ((uParam0->f_371[iVar0 /*18*/])->f_6)
			{
				bVar1 = func_1256(uParam0, iVar0);
				if (bVar1)
				{
					func_1257(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!func_748(uParam0, uParam0->f_1580))
		{
			func_1258(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1587;
	while (iVar0 <= (uParam0->f_1790 - 1))
	{
		if ((uParam0->f_371[iVar0 /*18*/])->f_7)
		{
			func_1255(uParam0, iVar0, iParam1);
		}
		else if ((uParam0->f_371[iVar0 /*18*/])->f_6)
		{
			bVar1 = func_1256(uParam0, iVar0);
			if (bVar1)
			{
				func_1257(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1587 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1587 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_756(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1817))
	{
		iVar1 = ITEMSET::GET_ITEMSET_SIZE(uParam0->f_1817);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, uParam0->f_1817);
			if (MISC::_0xBDC6E364C9C78178(iVar2))
			{
				PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_0xEE04C0AFD4EFAF0E(iVar2)), 184, true);
			}
			iVar0++;
		}
	}
}

bool func_757(var uParam0, int iParam1)
{
	return (uParam0->f_1561 && iParam1) != 0;
}

void func_758(var uParam0)
{
	func_1259(&(uParam0->f_1800));
}

void func_759(var uParam0)
{
	uParam0->f_1561 = 0;
}

void func_760(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	func_1260(uParam0, 4);
	if (func_1261(uParam0, &sParam1, iParam5))
	{
		func_744(uParam0, 1);
	}
}

void func_761(var uParam0)
{
	if (!func_1262(uParam0))
	{
		return;
	}
	if (!func_183(uParam0, 4194304))
	{
		func_1263(uParam0);
		func_753(uParam0, 4194304);
	}
	if (func_1264(uParam0))
	{
		func_1265(uParam0);
		func_1266(uParam0);
		func_744(uParam0, 2);
	}
}

void func_762(var uParam0)
{
	uParam0->f_1581 = -1;
	func_743(uParam0, 0);
	func_744(uParam0, 3);
	func_1267(uParam0, 0);
	func_230(&(uParam0->f_1765));
	func_1268(uParam0);
	func_230(&(uParam0->f_1768));
}

void func_763(int iParam0)
{
	int iVar0;
	
	if (func_200() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_206(func_1269(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_1269(iVar0), func_1270(), 1))
			{
				func_1271(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_764()
{
	Global_18 = 1;
	Global_43883 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_765(var uParam0)
{
	if (uParam0->f_1580 >= 0)
	{
		if (func_205(Global_35, (uParam0->f_912[uParam0->f_1580 /*41*/])->f_1, 0) < (uParam0->f_912[uParam0->f_1580 /*41*/])->f_14)
		{
			return 1;
		}
		else if ((uParam0->f_912[uParam0->f_1580 /*41*/])->f_14 >= (uParam0->f_912[uParam0->f_1580 /*41*/])->f_11)
		{
			return 1;
		}
	}
	return 0;
}

int func_766(var uParam0)
{
	if (uParam0->f_1580 >= 0)
	{
		if (func_205(Global_35, (uParam0->f_912[uParam0->f_1580 /*41*/])->f_1, 0) < (uParam0->f_912[uParam0->f_1580 /*41*/])->f_15)
		{
			return 1;
		}
		else if ((uParam0->f_912[uParam0->f_1580 /*41*/])->f_15 >= (uParam0->f_912[uParam0->f_1580 /*41*/])->f_11)
		{
			return 1;
		}
	}
	return 0;
}

float func_767(var uParam0)
{
	if (!func_79(uParam0))
	{
		return 0f;
	}
	if (func_260(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_786() - uParam0->f_1);
}

int func_768(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (uParam0->f_1581 < 0)
	{
		return 1;
	}
	switch ((uParam0->f_371[uParam0->f_1581 /*18*/])->f_2)
	{
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, 1) == 8)
			{
				return 1;
			}
			else if (func_334(&(uParam0->f_1768)) >= 15f)
			{
				func_753(uParam0, 32768);
				return 1;
			}
			break;
		
		case 9:
			if (!uParam0->f_1664)
			{
				if (func_334(&(uParam0->f_1768)) >= 15f)
				{
					func_753(uParam0, 32768);
					return 1;
				}
				if (ANIMSCENE::_0x25557E324489393C(func_1272(uParam0)) && ANIMSCENE::_0xCBFC7725DE6CE2E0(func_1272(uParam0), 0))
				{
					uParam0->f_1664 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::_0x3FBC3F51BF12DFBF(func_1272(uParam0));
				bVar1 = ANIMSCENE::_0xD8254CB2C586412B(func_1272(uParam0), 0);
				bVar2 = ANIMSCENE::_0xCDC5512A407CF08D(func_1272(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		
		case 11:
			return 1;
		
		default:
			return func_334(&(uParam0->f_1768)) >= 15f;
	}
	return 0;
}

int func_769(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_371[iVar0 /*18*/])->f_17 == 2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_770(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_371[iVar0 /*18*/])->f_17 == 2 && func_1273(uParam0->f_371[iVar0 /*18*/], 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_771(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_772(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

void func_773(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7, int iParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	if (!CAM::DOES_CAM_EXIST(iLocal_105))
	{
		iLocal_105 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_106))
	{
		iLocal_106 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
		vVar0 = { CAM::GET_GAMEPLAY_CAM_COORD() };
		vVar3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		fVar6 = CAM::GET_GAMEPLAY_CAM_FOV();
	}
	else
	{
		vVar0 = { CAM::GET_CAM_COORD(iLocal_106) };
		vVar3 = { CAM::GET_CAM_ROT(iLocal_106, 2) };
		fVar6 = CAM::GET_CAM_FOV(iLocal_106);
	}
	CAM::SET_CAM_PARAMS(iLocal_105, vVar0, vVar3, fVar6, 0, 1, 1, 2, 1, 0);
	CAM::SET_CAM_ACTIVE(iLocal_105, true);
	CAM::SET_CAM_PARAMS(iLocal_106, vParam0, vParam3, fParam6, 0, 1, 1, 2, 1, 0);
	CAM::SET_CAM_ACTIVE(iLocal_106, true);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_106, iLocal_105, iParam7, iParam8, 1);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_774()
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_87))
	{
		iLocal_87 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2285.26f, 1193.398f, 107.795f, 9.5f, 0f, 32.2f, 2.4f, 3f, 2.2f, "vEntryCheck");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_49))
	{
		iLocal_49 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2309.537f, 1141.006f, 96.15419f, 0f, 0f, 39.75143f, 2.84289f, 3.053514f, 3.099572f, "vEnterCave1");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_50))
	{
		iLocal_50 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2305.504f, 1136.426f, 96.67413f, 0f, 0f, -39.45682f, 7.622685f, 3.969822f, 3.178566f, "vEnterCave2");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_62))
	{
		iLocal_62 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2352.992f, 1009.977f, 75.56128f, -0.4890257f, 3.601223f, 3.234052f, 7.67916f, 9.392141f, 6.954768f, "vExitTunnel");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_60))
	{
		iLocal_60 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2303.451f, 1097.167f, 92.71465f, 0f, 0f, 0f, 2.774209f, 2.54644f, 4.101694f, "vMidPoint");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_61))
	{
		iLocal_61 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2305.73f, 1101.522f, 93.89236f, 0f, 0f, -20.53038f, 4.18543f, 1f, 3.489369f, "MidPointReturn");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_45))
	{
		iLocal_43 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2301.825f, 1165.876f, 102.2458f, 11.33852f, 0f, 31.4489f, 26.87992f, 54.66166f, 5.391244f, "vTubeVolume1");
		iLocal_44 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2285.556f, 1192.849f, 108.0405f, 0f, 10.10948f, -60.71905f, 11.58409f, 4.299529f, 4.437871f, "vTubeVolume2");
		iLocal_45 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("vAggregateTube");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_45, iLocal_43);
		VOLUME::_0x6E0D3C3F828DA773(iLocal_45, iLocal_44);
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_40))
	{
		iLocal_40 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2323.322f, 1138.168f, 98.06773f, 0f, 0f, -55.27944f, 27.38839f, 24.36657f, 9.249007f, "vCavernVolume");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_41))
	{
		iLocal_41 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2320.122f, 1140.557f, 98.06773f, 0f, 0f, -57.70654f, 17.93936f, 15.16312f, 9.249007f, "vCavernBlipVolume");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_42))
	{
		iLocal_42 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2299.207f, 1073.833f, 97.05527f, 0f, 0f, 0f, 34f, 25f, 20f, "volBigCavern");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_46))
	{
		iLocal_46 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2308.198f, 1139.822f, 96.54983f, 0f, 0f, -51.16512f, 1.978752f, 3.105461f, 1.355656f, "vFirstCrouchVolume");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_47))
	{
		iLocal_47 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2304.41f, 1099.143f, 93.6842f, 0f, 0f, -24.96894f, 2.199639f, 3.691123f, 1.459757f, "vSecondCrouchVolume");
	}
}

void func_775()
{
	*(Local_208[0 /*4*/]) = { 2304.839f, 1119.376f, 95.5099f };
	*(Local_208[1 /*4*/]) = { 2265.823f, 1114.02f, 95.3682f };
	*(Local_208[2 /*4*/]) = { 2322.617f, 1095.9f, 92.9977f };
	*(Local_208[3 /*4*/]) = { 2326.17f, 1072.31f, 92.57f };
	*(Local_208[4 /*4*/]) = { 2272.08f, 1061.09f, 77.25f };
	*(Local_208[5 /*4*/]) = { 2296.44f, 1028.47f, 81.08f };
	*(Local_208[6 /*4*/]) = { 2309.42f, 1040.39f, 72.48f };
}

char* func_776(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@hntn@stage_05@ig@ig1_openmine@ig1_openmine";
		
		case 1:
			return "script@rcm@hntn@stage_05@leadout@mcs1@leadout";
		
		case 2:
			return "script@rcm@hntn@stage_05@ig@ig2_exitwaterfall@ig2_exitwaterfall_kids";
		
		case 3:
			return "script@rcm@hntn@stage_05@ig@ig2_exitwaterfall@ig2_exitwaterfall_player";
	}
	return "";
}

int func_777()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::_0x038B1F1674F0E242(Global_35))
	{
		return 1;
	}
	return 0;
}

bool func_778()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

void func_779(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!(Local_208[iVar0 /*4*/])->f_3)
		{
			if (func_205(Global_35, *(Local_208[iVar0 /*4*/]), 1) < 5f)
			{
				if (func_334(&uLocal_165) > 2f)
				{
					if (func_350())
					{
						func_423(uParam0, "PW5_MD_J", 0);
					}
					else
					{
						func_423(uParam0, "PW5_MD_A", 0);
					}
					func_259(&uLocal_168);
					(Local_208[iVar0 /*4*/])->f_3 = 1;
				}
			}
		}
		else if (func_205(Global_35, *(Local_208[iVar0 /*4*/]), 1) > 15f)
		{
			(Local_208[iVar0 /*4*/])->f_3 = 0;
		}
		iVar0++;
	}
}

int func_780()
{
	int iVar0;
	
	if (iLocal_68 == 0 && iLocal_188 == 2)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_205(Global_35, *(Local_208[iVar0 /*4*/]), 1) > 2f || (Local_208[iVar0 /*4*/])->f_3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_781(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_1934765->f_21[iVar1]), iVar2);
}

void func_782(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_1934765->f_21[iVar1], iVar2);
}

char* func_783(int iParam0)
{
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case -2055158210:
			return "w_pistol_mauser01";
		
		case 1701864918:
			return "w_pistol_semiauto01";
		
		case 34411519:
			return "w_pistol_volcanic01";
		
		case -183018591:
			return "w_repeater_carbine-1";
		
		case -1783478894:
			return "w_repeater_henry01";
		
		case -1471716628:
			return "w_repeater_winchester01";
		
		case 379542007:
			return "w_revolver_cattleman01";
		
		case 127400949:
			return "w_revolver_doubleaction01";
		
		case 2075992054:
			return "w_revolver_schofield01";
		
		case 1999408598:
			return "w_rifle_boltaction01";
		
		case 1676963302:
			return "w_revolver_springfield01";
		
		case -570967010:
			return "w_repeater_pumpaction01";
		
		case 834124286:
			return "w_shotgun_pumpAction01";
		
		case 1845102363:
			return "w_shotgun_doublebarrel01";
		
		case 1674213418:
			return "w_shotgun_repeating01";
		
		case 392538360:
			return "w_shotgun_sawed01";
		
		case 1838922096:
			return "w_shotgun_semiauto01";
		
		case 1402226560:
			return "w_rifle_carcano01";
		
		case -506285289:
			return "w_rifle_rollingBlock01";
		
		case -2002235300:
		case -1504859554:
		case -618550132:
		case -281894307:
		case -164645981:
		case 165751297:
		case 680856689:
		case 1742487518:
		case 2055893578:
			break;
	}
	return "";
}

void func_784(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_1274(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1275(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2))
		{
		}
		else if ((uParam0->f_13[iVar0 /*12*/])->f_9 != iParam3)
		{
		}
		else if ((uParam0->f_13[iVar0 /*12*/])->f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_1276(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_1277(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1278(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2, 64);
		(uParam0->f_13[iVar0 /*12*/])->f_9 = iParam3;
		(uParam0->f_13[iVar0 /*12*/])->f_10 = iParam4;
		if (bParam5)
		{
			func_1279(uParam0->f_13[iVar0 /*12*/], 2);
		}
		else
		{
			func_1280(uParam0->f_13[iVar0 /*12*/], 2);
		}
	}
}

void func_785(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_784(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

float func_786()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_787(int iParam0)
{
	int iVar0;
	
	if (func_901(iParam0))
	{
		iVar0 = _NAMESPACE71::_0x59FA676177DBE4C9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return 0;
}

bool func_788(int iParam0)
{
	return AUDIO::_0xFE5C6177064BD390(iParam0);
}

var func_789(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

void func_790(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 7, 1);
}

void func_791(int iParam0, int iParam1)
{
	func_1281(iParam0, iParam1);
}

void func_792(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_1282(iParam0);
		func_1283(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

float func_793(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

void func_794(vector3 vParam0, var uParam3, vector3 vParam4, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	if (func_1284(&(uParam3->f_3), 1))
	{
		func_1285(uParam3);
		if (func_1286(vParam0, fParam8, 2.5f, iParam12, 1084227584))
		{
			func_1287();
		}
	}
	if (func_1288(vParam0, uParam3, fParam8))
	{
		if (func_1284(&(uParam3->f_3), 128))
		{
			func_1289(uParam3, vParam0, fParam7, iParam10);
		}
		CAM::SET_GAMEPLAY_COORD_HINT(vParam0 + vParam4, iParam9, iParam10, iParam11, 0);
		if (!func_1284(&(uParam3->f_3), 128))
		{
			func_1289(uParam3, vParam0, fParam7, iParam10);
		}
	}
}

int func_795(var uParam0)
{
	if (!func_1290(*uParam0, uParam0->f_4))
	{
		return 0;
	}
	return 1;
}

int func_796(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;
	
	Var0.f_10 = 7;
	Var0 = bParam5;
	Var0.f_1 = 1;
	Var0.f_4 = iParam7;
	Var0.f_3 = iParam8;
	Var0.f_6 = { vParam1 };
	if (fParam4 == -1f)
	{
		Var0.f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		Var0.f_9 = fParam4;
	}
	if (bParam5)
	{
		Var0.f_2 = 1;
	}
	else if (!bParam6)
	{
		Var0.f_2 = 0;
	}
	iVar11 = 0;
	*iParam0 = func_1291(&iVar11, &Var0);
	if (iVar11 == 0)
	{
		return 0;
	}
	else if (iVar11 == 1)
	{
		return 0;
	}
	else if (iVar11 == 2)
	{
		if (!func_206(*iParam0, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_797(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_798(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

void func_799()
{
	int iVar0;
	
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
	if (func_206(&(iLocal_76[0]), 0) && !func_421(&(iLocal_76[0]), 242628503))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PAUSE(0, 500);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_37, 3f, -1, 3f, true, 40000f);
		TASK::TASK_SMART_FLEE_COORD(0, vLocal_34, 1000f, -1, false, 1077936128);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(&(iLocal_76[0]), iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
	if (func_206(&(iLocal_76[1]), 0) && !func_421(&(iLocal_76[1]), 242628503))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_37, 3f, -1, 3f, true, 40000f);
		TASK::TASK_SMART_FLEE_COORD(0, vLocal_34, 1000f, -1, false, 1077936128);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(&(iLocal_76[1]), iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

void func_800(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1292(iParam0, iParam1))
		{
			if (func_1293(iParam0, iParam1))
			{
				if (func_1294(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1295(iParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_801()
{
	vector3 vVar0[2];
	vector3 vVar7[2];
	int iVar14;
	
	*(vVar0[0 /*3*/]) = { 2534.57f, 785.64f, 74.932f };
	*(vVar0[1 /*3*/]) = { 2534.45f, 785.53f, 74.932f };
	*(vVar7[0 /*3*/]) = { 0f, 0f, 46.41f };
	*(vVar7[1 /*3*/]) = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_121[iVar14])))
		{
			iLocal_121[iVar14] = OBJECT::CREATE_OBJECT(-1281909308, *(vVar0[iVar14 /*3*/]), true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(&(iLocal_121[iVar14]), *(vVar7[iVar14 /*3*/]), 2, true);
			TASK::_0x78B4567E18B54480(&(iLocal_121[iVar14]));
		}
		iVar14++;
	}
}

void func_802()
{
	if (iLocal_172)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_120))
	{
		return;
	}
	TXD::REQUEST_STREAMED_TEXTURE_DICT("UI_DOC_POISONWELL", false);
	if (TXD::_0xBE72591D1509FFE4(-1556359848))
	{
		DECORATOR::DECOR_SET_INT(iLocal_120, "letter_item", 190329422);
		OBJECT::_0xE124889AE0521FCF(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iLocal_120), -1556359848, 0, 0);
		iLocal_172 = 1;
	}
}

bool func_803(var uParam0)
{
	if (!func_206(*uParam0, 0))
	{
		return false;
	}
	return PED::IS_PED_SHOOTING(*uParam0);
}

bool func_804(int iParam0, int iParam1)
{
	return (func_1296(iParam0) || (ANIMSCENE::_0x49F1D143ADE32656(iParam0) - ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam0)) <= (BUILTIN::TO_FLOAT(iParam1) * 0.001f));
}

int func_805(int iParam0)
{
	int iVar0;
	
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return iVar0 == (Global_1905944->f_22[iParam0 /*9*/])->f_1;
	}
	return 0;
}

void func_806(int iParam0)
{
	func_1196(1);
}

bool func_807(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_705(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_808(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_705(iParam0, &iVar0, &iVar1);
	func_1297(iVar0, iVar1);
}

void func_809(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	
	StringCopy(&cVar0, func_1298(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1246(cVar0);
	MAP::_0x563FCB6620523917(MISC::GET_HASH_KEY(sVar8), -1482012664);
}

void func_810(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;
	
	StringCopy(&cVar0, func_1298(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1246(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_0xE38450DBCBC70E3D(iVar9, -1305340593) || MAP::_0xE38450DBCBC70E3D(iVar9, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iVar9);
	}
}

bool func_811(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5)
{
	sParam0 = func_567(iParam5, sParam0, sParam1, sParam2, sParam3, sParam4);
	return MISC::ARE_STRINGS_EQUAL(sParam0, func_1299());
}

var func_812()
{
	return UILOG::_UILOG_HAS_DISPLAYED_CACHED_OBJECTIVE();
}

var func_813(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	
	Var0 = -2;
	Var0 = uParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0xCEDBF17EFCC0E4A4(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_814(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2);
			VOLUME::_0x748C5F51A18CB8F0(0);
			func_1300(iParam0, 1, 1, iParam1, 32);
			VOLUME::_0x748C5F51A18CB8F0(1);
			iVar1 = (Global_40.f_1094 - 1);
			if (iVar0 < iVar1)
			{
				if (func_201(&(Global_40.f_450[iVar1])))
				{
					Global_40.f_450[iVar0] = &Global_40.f_450[iVar1];
					Global_40.f_450[iVar1] = -1;
				}
			}
			else
			{
				Global_40.f_450[iVar0] = -1;
			}
			Global_40.f_1094 = (Global_40.f_1094 - 1);
			return;
		}
		iVar0++;
	}
}

int func_815(int iParam0)
{
	if (func_200() != -1)
	{
		return 0;
	}
	if (!func_201(iParam0))
	{
		return 0;
	}
	return func_270(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

void func_816(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_57(iParam0))
	{
		return;
	}
	if (func_270(iParam0))
	{
		func_175(iParam0, 0, 2);
	}
	iVar0 = func_1301(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1898329 > 1)
	{
		(*Global_1898330)[iVar1] = Global_1898330[(&Global_1898329 - 1)];
		*((*Global_1898346)[iVar1 /*6*/]) = { *((*Global_1898346)[(&Global_1898329 - 1) /*6*/]) };
		(*Global_1898330)[(&Global_1898329 - 1)] = -1;
		*((*Global_1898346)[(&Global_1898329 - 1) /*6*/]) = { Var2 };
	}
	else
	{
		(*Global_1898330)[iVar1] = -1;
		*((*Global_1898346)[iVar1 /*6*/]) = { Var2 };
	}
	Global_1898329 = (&Global_1898329 - 1);
	if (&Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

int func_817(int iParam0)
{
	int iVar0;
	
	if (func_502(iParam0))
	{
		return 0;
	}
	if (func_503(iParam0, 0))
	{
		func_1302(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (&Global_40.f_450[iVar0] == -1)
			{
				func_1302(iParam0);
				Global_40.f_450[iVar0] = iParam0;
				Global_40.f_1094++;
				Global_1430257 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_818(int iParam0)
{
	int iVar0;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_48 == -1)
	{
		return 1;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_47 == 0)
	{
		return 1;
	}
	iVar0 = func_1303(iParam0);
	return func_1304(iVar0, 1);
}

bool func_819(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 81);
}

var func_820(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;
	
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

var func_821(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;
	
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

int func_822(int iParam0)
{
	if (func_110(iParam0) == 1)
	{
		return func_111(iParam0);
	}
	return -1;
}

void func_823(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_6 = iParam1;
}

int func_824(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!bParam0 && func_912(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (LAW::_0x76CF93D4B416B288(752193127) < 2)
	{
		iVar0 = (LAW::_0x76CF93D4B416B288(752193127) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	LAW::_0xF19706B1F8FFA88F(752193127, iVar0);
	func_412(bParam0);
	return 1;
}

void func_825()
{
	struct<15> Var0;
	int iVar17;
	int iVar18;
	
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_431(iVar17))
		{
			iVar18 = func_1269(iVar17);
			if (ENTITY::DOES_ENTITY_EXIST(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_230(&(Global_1359489->f_55));
	if (func_505(1777191912, 1))
	{
		func_1305(1777191912, 1, 0);
	}
}

void func_826(int iParam0)
{
	if (!func_57(iParam0))
	{
		return;
	}
	func_1029(iParam0, (func_1028(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

struct<2> func_827(int iParam0)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	return Var0;
}

bool func_828()
{
	return func_500() > 0;
}

void func_829(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 67:
			func_1306(-1032423150, iParam1);
			break;
		
		case 18:
			func_1306(294066959, iParam1);
			func_1306(-1925639563, iParam1);
			func_1306(-378582304, iParam1);
			func_1306(-338306437, iParam1);
			break;
		
		case 20:
			func_1306(437270255, iParam1);
			break;
		
		case 2:
			func_1306(-304000413, iParam1);
			func_1306(-533612796, iParam1);
			func_1306(48036954, iParam1);
			break;
		
		case 23:
			func_1306(193108691, iParam1);
			func_1306(491732588, iParam1);
			func_1306(671962088, iParam1);
			func_1307(1);
			break;
		
		case 16:
			func_1306(-1836056650, iParam1);
			func_1306(-754657922, iParam1);
			func_1306(-1752355838, iParam1);
			func_1306(-1375324510, iParam1);
			break;
		
		case 59:
			func_1306(-514392105, iParam1);
			func_1306(-822060246, iParam1);
			if (func_1308(146))
			{
				func_1306(1372748575, iParam1);
			}
			func_1307(1);
			break;
		
		case 76:
			func_1306(1991352213, iParam1);
			if (func_1309() == 0)
			{
				func_1306(1852488616, iParam1);
			}
			else
			{
				func_1306(-9866350, iParam1);
			}
			break;
		
		case 44:
			func_1306(863852599, iParam1);
			func_1306(1228374935, iParam1);
			func_1306(1517889050, iParam1);
			func_1306(830657578, iParam1);
			func_1306(1901354958, iParam1);
			break;
		
		case 46:
			func_1306(-582805654, iParam1);
			func_1306(250378940, iParam1);
			func_1306(-2143265426, iParam1);
			break;
		
		case 17:
			func_1306(-941494139, iParam1);
			func_1306(1641489521, iParam1);
			break;
		
		case 19:
			func_1306(-1829423531, iParam1);
			func_1306(-1590504752, iParam1);
			func_1306(1357221321, iParam1);
			break;
		
		case 21:
			func_1306(-1037992610, iParam1);
			func_1306(-1286414399, iParam1);
			func_1307(0);
			break;
		
		case 15:
			func_1306(-1014460309, iParam1);
			func_1306(-1030502825, iParam1);
			break;
		
		case 33:
			func_1306(479388090, iParam1);
			func_1306(-1396342239, iParam1);
			func_1306(-619618632, iParam1);
			break;
		
		case 34:
			func_1306(1193561641, iParam1);
			break;
		
		case 64:
			func_1306(1363960851, iParam1);
			break;
		
		case 60:
			func_1306(-1232453926, iParam1);
			func_1306(-882833584, iParam1);
			break;
		
		case 73:
			func_1306(2023205767, iParam1);
			break;
		
		case 74:
			func_1306(-2135286513, iParam1);
			if (func_1309() == 0)
			{
				func_1306(33799444, iParam1);
			}
			else
			{
				func_1306(-161343203, iParam1);
			}
			break;
		
		case 8:
			func_1306(841639693, iParam1);
			func_1306(358952323, iParam1);
			break;
		
		case 36:
			func_1306(852538149, iParam1);
			func_1306(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_1306(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1306(1116039310, iParam1);
			}
			break;
		
		case 27:
			func_1306(107633428, iParam1);
			func_1306(335902282, iParam1);
			func_1306(575673055, iParam1);
			func_1306(-425944207, iParam1);
			break;
		
		case 28:
			func_1306(-1941530250, iParam1);
			func_1306(1399269304, iParam1);
			func_1306(1839684664, iParam1);
			func_1306(923168503, iParam1);
			func_1306(-1485078322, iParam1);
			break;
		
		case 29:
			func_1306(574995900, iParam1);
			func_1306(-1691275407, iParam1);
			func_1306(-1725307861, iParam1);
			break;
		
		case 31:
			func_1306(-2108383238, iParam1);
			func_1306(-1321828931, iParam1);
			func_1306(-1632118592, iParam1);
			func_1306(334938948, iParam1);
			break;
		
		case 4:
			func_1306(115823701, iParam1);
			func_1306(-1896939736, iParam1);
			func_1306(-1830746356, iParam1);
			func_1306(-1235169781, iParam1);
			func_1307(0);
			break;
		
		case 6:
			func_1306(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1306(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1306(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1306(-384176140, iParam1);
			}
			break;
		
		case 25:
			func_1306(1056132658, iParam1);
			break;
		
		case 24:
			if (&Global_1357515 == -1)
			{
				func_1306(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1306(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1306(-1374849484, iParam1);
			}
			break;
		
		case 48:
			func_1306(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1306(217772674, iParam1);
			}
			else
			{
				func_1306(2071798160, iParam1);
			}
			if (func_1310(51))
			{
				func_1306(-792802286, iParam1);
			}
			break;
		
		case 49:
			func_1306(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_1306(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1306(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_1306(1402120602, iParam1);
			}
			break;
		
		case 58:
			func_1306(-1661934591, iParam1);
			break;
		
		case 50:
			func_1306(-1713759426, iParam1);
			break;
		
		case 52:
			func_1306(-314799932, iParam1);
			func_1306(-462260432, iParam1);
			func_1306(822929377, iParam1);
			if (iParam2 == 1)
			{
				func_1306(345256028, iParam1);
				func_1306(-1635084094, iParam1);
			}
			else
			{
				func_1306(114267347, iParam1);
			}
			break;
		
		case 32:
			func_1306(615304157, iParam1);
			break;
		
		case 47:
			func_1306(415434835, iParam1);
			break;
		
		case 69:
			func_1306(1373465877, iParam1);
			if (func_492(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				func_1306(-2058273527, iParam1);
			}
			break;
		
		case 70:
			func_1306(451334985, iParam1);
			if (func_1309() == 0)
			{
				func_1306(-224150200, iParam1);
			}
			else
			{
				func_1306(289012628, iParam1);
			}
			break;
		
		case 71:
			if (func_1309() == 0)
			{
				func_1306(-41692120, iParam1);
			}
			else
			{
				func_1306(1537840678, iParam1);
			}
			break;
		
		case 37:
			func_1306(1520478365, iParam1);
			break;
		
		case 9:
			if (&Global_1357515 == -1)
			{
				func_1306(1842132550, iParam1);
			}
			else
			{
				func_1306(-785735240, iParam1);
			}
			func_1306(-1605690566, iParam1);
			break;
		
		case 13:
			func_1306(-731367459, iParam1);
			func_1306(224176585, iParam1);
			func_1306(-14545580, iParam1);
			break;
		
		case 53:
			func_1306(1095274522, iParam1);
			break;
		
		case 54:
			func_1306(-572027988, iParam1);
			break;
		
		case 56:
			func_1306(1339307101, iParam1);
			func_1306(2102267732, iParam1);
			break;
		
		case 57:
			func_1306(710102686, iParam1);
			break;
		
		case 22:
			func_1306(-1754368482, iParam1);
			func_1306(-2071408557, iParam1);
			break;
		
		case 12:
			func_1306(-181334543, iParam1);
			break;
		
		case 0:
			func_1306(-2134669864, iParam1);
			func_1306(-548289709, iParam1);
			func_1306(-911271922, iParam1);
			func_1306(-604455775, iParam1);
			break;
		
		case 1:
			func_1307(1);
			break;
		
		case 3:
			if (func_858())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1478534115))
				{
					func_1306(-1286192062, iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1286192062))
			{
				func_1306(-1478534115, iParam1);
			}
			break;
		
		default:
			break;
	}
}

void func_830(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_1306(-145926707, iParam1);
			func_1306(-604922090, iParam1);
			func_1306(-848690769, iParam1);
			break;
		
		case 1:
			func_1306(-1477631591, iParam1);
			break;
		
		case 2:
			func_1306(76112544, iParam1);
			break;
		
		case 9:
			func_1306(1396404308, iParam1);
			func_1306(-1357381228, iParam1);
			if (func_492(((*Global_1835011)[69 /*74*/])->f_1, 1))
			{
				func_1306(1902679064, iParam1);
			}
			else
			{
				func_1306(-2146422425, iParam1);
			}
			break;
		
		case 22:
			func_1306(-1534761730, iParam1);
			break;
		
		case 26:
			if (bParam3 == 1)
			{
				func_1306(-1934184559, iParam1);
				func_1306(1281755988, iParam1);
			}
			else
			{
				func_1306(-1745220872, iParam1);
				func_1306(-1044976796, iParam1);
			}
			break;
		
		case 29:
			if (bParam3 == 1)
			{
				func_1306(-1641504538, iParam1);
				func_1306(-988014485, iParam1);
			}
			else if (func_1308(26))
			{
				func_1306(-343043950, iParam1);
				func_1306(-640062214, iParam1);
			}
			else
			{
				func_1306(-1272028496, iParam1);
			}
			break;
		
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_1306(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1306(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_1306(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_1306(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_1306(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_1306(1301690984, iParam1);
				}
			}
			else
			{
				func_1306(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_1306(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1306(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_1306(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_1306(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_1306(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_1306(-1868882771, iParam1);
				}
			}
			break;
		
		case 35:
			if (bParam3 == 1)
			{
				func_1306(-754570528, iParam1);
			}
			else
			{
				func_1306(1690083163, iParam1);
			}
			break;
		
		case 36:
			if (bParam3 == 1)
			{
				func_1306(-2072125821, iParam1);
			}
			else
			{
				func_1306(270040030, iParam1);
			}
			break;
		
		case 37:
			func_1306(-870030001, iParam1);
			break;
		
		case 53:
			if (bParam3 == 1)
			{
				func_1306(-505314737, iParam1);
				func_1306(-1853052860, iParam1);
			}
			else
			{
				func_1306(-1975624994, iParam1);
				func_1306(1648135852, iParam1);
			}
			break;
		
		case 54:
			if (bParam3 == 1)
			{
				func_1306(1690231002, iParam1);
			}
			else
			{
				func_1306(517031924, iParam1);
			}
			break;
		
		case 55:
			if (bParam3 == 1)
			{
				func_1306(1225386280, iParam1);
			}
			else if (func_1308(54))
			{
				func_1306(-283235773, iParam1);
			}
			else
			{
				func_1306(701962369, iParam1);
			}
			break;
		
		case 38:
			if (bParam3 == 1)
			{
				func_1306(1355398007, iParam1);
			}
			else
			{
				func_1306(-1900349467, iParam1);
			}
			break;
		
		case 39:
			if (bParam3 == 1)
			{
				func_1306(574636806, iParam1);
			}
			else
			{
				func_1306(-196256251, iParam1);
			}
			break;
		
		case 40:
			if (bParam3 == 1)
			{
				func_1306(821118338, iParam1);
			}
			else if (func_1308(39))
			{
				func_1306(846829260, iParam1);
			}
			else
			{
				func_1306(-1212247553, iParam1);
			}
			break;
		
		case 43:
			if (bParam3 == 1)
			{
				if (func_486(((*Global_1835011)[33 /*74*/])->f_1) == 1)
				{
					func_1306(1422779093, iParam1);
				}
				else
				{
					func_1306(-1769536986, iParam1);
				}
			}
			else
			{
				func_1306(-600786233, iParam1);
			}
			break;
		
		case 45:
			if (bParam3 == 1)
			{
				func_1306(352134789, iParam1);
			}
			else if (func_1308(43))
			{
				func_1306(260723113, iParam1);
			}
			else
			{
				func_1306(1080243038, iParam1);
			}
			break;
		
		case 41:
			if (bParam3 == 1)
			{
				func_1306(-457958799, iParam1);
			}
			else
			{
				func_1306(2076458086, iParam1);
			}
			break;
		
		case 42:
			if (func_1308(41))
			{
				func_1306(-546824600, iParam1);
			}
			else
			{
				func_1306(-308364587, iParam1);
			}
			break;
		
		case 49:
			if (bParam3 == 1)
			{
				func_1306(1297261593, iParam1);
			}
			else
			{
				func_1306(1940089142, iParam1);
			}
			break;
		
		case 50:
			if (bParam3 == 1)
			{
				func_1306(2068484886, iParam1);
			}
			else if (func_1308(49))
			{
				func_1306(-1489080639, iParam1);
				func_1306(-2102244050, iParam1);
			}
			else
			{
				func_1306(-1863040467, iParam1);
			}
			break;
		
		case 51:
			func_1306(-2055943209, iParam1);
			break;
		
		case 58:
			if (func_492(((*Global_1347702)[23 /*49*/])->f_15, 1))
			{
				func_1306(1650066845, iParam1);
			}
			else
			{
				func_1306(151370023, iParam1);
			}
			func_1306(1426057961, iParam1);
			func_1306(476379584, iParam1);
			break;
		
		case 59:
			func_1306(-1638117866, iParam1);
			break;
		
		case 62:
			func_1306(199541730, iParam1);
			break;
		
		case 63:
			func_1306(1703485804, iParam1);
			func_1306(-800449045, iParam1);
			break;
		
		case 65:
			func_1306(-1678210868, iParam1);
			func_1306(-1448238026, iParam1);
			func_1306(-1200864845, iParam1);
			func_1306(1473511536, iParam1);
			break;
		
		case 66:
			func_1306(-1774490051, iParam1);
			func_1306(-34645921, iParam1);
			func_1306(174027075, iParam1);
			func_1306(-1155999, iParam1);
			func_1307(1);
			break;
		
		case 67:
			func_1306(701612593, iParam1);
			func_1306(-1069631343, iParam1);
			func_1306(1673428882, iParam1);
			break;
		
		case 68:
			func_1306(-739133286, iParam1);
			func_1306(-2130089358, iParam1);
			func_1306(2056190391, iParam1);
			func_1306(1941753817, iParam1);
			func_1307(0);
			break;
		
		case 70:
			func_1306(-1217555753, iParam1);
			break;
		
		case 71:
			func_1306(697048821, iParam1);
			break;
		
		case 73:
			func_1306(-553148661, iParam1);
			break;
		
		case 75:
			func_1306(1349250531, iParam1);
			break;
		
		case 77:
			if (bParam3 == 1)
			{
				func_1306(1414263863, iParam1);
			}
			else
			{
				func_1306(-1772294468, iParam1);
			}
			break;
		
		case 79:
			if (bParam3 == 1)
			{
				func_1306(1835465936, iParam1);
				func_1306(523715611, iParam1);
			}
			else if (func_1308(78))
			{
				func_1306(1420338873, iParam1);
			}
			else
			{
				func_1306(-46362051, iParam1);
			}
			break;
		
		case 80:
			if (bParam3 == 1)
			{
				func_1306(10180941, iParam1);
			}
			else if (func_1308(79))
			{
				func_1306(768420635, iParam1);
			}
			else
			{
				func_1306(-1734012650, iParam1);
			}
			break;
		
		case 85:
			if (bParam3 == 1)
			{
				func_1306(-383601523, iParam1);
			}
			else
			{
				func_1306(1004812390, iParam1);
			}
			break;
		
		case 86:
			if (bParam3 == 1)
			{
				func_1306(1606472408, iParam1);
			}
			else
			{
				func_1306(1405690220, iParam1);
			}
			break;
		
		case 87:
			if (bParam3 == 1)
			{
				func_1306(-203571927, iParam1);
			}
			else
			{
				func_1306(640033630, iParam1);
			}
			break;
		
		case 88:
			if (bParam3 == 1)
			{
				func_1306(729886222, iParam1);
			}
			else
			{
				func_1306(-158717807, iParam1);
			}
			break;
		
		case 89:
			if (bParam3 == 1)
			{
				func_1306(-714816362, iParam1);
			}
			else
			{
				func_1306(1160146336, iParam1);
			}
			break;
		
		case 92:
			if (bParam3 == 1)
			{
				func_1306(-932932179, iParam1);
				func_1306(-1458537240, iParam1);
			}
			else
			{
				func_1306(-1764383885, iParam1);
				func_1306(894349517, iParam1);
			}
			break;
		
		case 93:
			if (bParam3 == 1)
			{
				func_1306(1741466706, iParam1);
			}
			else
			{
				func_1306(1405815775, iParam1);
			}
			break;
		
		case 94:
			func_1306(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1306(1905280979, iParam1);
			}
			else
			{
				func_1306(-1966245299, iParam1);
			}
			func_1306(721468880, iParam1);
			break;
		
		case 99:
			func_1306(800644248, iParam1);
			break;
		
		case 101:
			if (bParam3 == 1)
			{
				func_1306(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_1306(-1117781095, iParam1);
				}
				else
				{
					func_1306(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_1306(141494548, iParam1);
			}
			else
			{
				func_1306(-633957459, iParam1);
			}
			break;
		
		case 102:
			if (bParam3 == 1)
			{
				func_1306(-369525697, iParam1);
			}
			else if (func_1308(101))
			{
				func_1306(1595015219, iParam1);
			}
			else
			{
				func_1306(-321486961, iParam1);
			}
			break;
		
		case 103:
			func_1306(1422724221, iParam1);
			break;
		
		case 104:
			if (bParam3 == 1)
			{
				func_1306(793460477, iParam1);
				func_1306(-1610242176, iParam1);
			}
			else if (func_1308(103))
			{
				func_1306(1830897187, iParam1);
			}
			else
			{
				func_1306(1419017828, iParam1);
			}
			break;
		
		case 105:
			if (bParam3 == 1)
			{
				func_1306(1528309077, iParam1);
			}
			else if (func_1308(104))
			{
				func_1306(1864966105, iParam1);
			}
			else
			{
				func_1306(-103336013, iParam1);
			}
			break;
		
		case 108:
			func_1306(1175579551, iParam1);
			break;
		
		case 109:
			if (bParam3 == 1)
			{
				func_1306(-1123227713, iParam1);
				func_1306(-889574341, iParam1);
			}
			else
			{
				func_1306(2065385917, iParam1);
				func_1306(780305039, iParam1);
			}
			break;
		
		case 110:
			if (bParam3 == 1)
			{
				func_1306(-887421691, iParam1);
			}
			else if (func_1308(109))
			{
				func_1306(-1318117949, iParam1);
			}
			else
			{
				func_1306(1632244327, iParam1);
			}
			break;
		
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_1306(284822762, iParam1);
				}
				else
				{
					func_1306(-1425017554, iParam1);
				}
			}
			else if (func_1308(110))
			{
				if (&Global_1357515 == 0)
				{
					func_1306(553087292, iParam1);
				}
				else
				{
					func_1306(-1766870331, iParam1);
					func_1306(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_1306(-1980598735, iParam1);
			}
			else
			{
				func_1306(-442732098, iParam1);
				func_1306(1955756409, iParam1);
			}
			break;
		
		case 115:
			func_1306(394303528, iParam1);
			func_1306(-2040171028, iParam1);
			break;
		
		case 143:
			if (bParam3 == 1)
			{
				func_1306(1182403394, iParam1);
			}
			else
			{
				func_1306(-2116547899, iParam1);
			}
			break;
		
		case 144:
			if (bParam3 == 1)
			{
				func_1306(924445424, iParam1);
			}
			else
			{
				func_1306(1227062271, iParam1);
			}
			break;
		
		case 117:
			if (bParam3 == 1)
			{
				func_1306(430755273, iParam1);
				func_1306(-1473879802, iParam1);
			}
			else
			{
				func_1306(1121266049, iParam1);
			}
			break;
		
		case 118:
			if (bParam3 == 1)
			{
				func_1306(73885747, iParam1);
			}
			else if (func_1308(117))
			{
				func_1306(1559707913, iParam1);
			}
			else
			{
				func_1306(926897873, iParam1);
			}
			break;
		
		case 119:
			if (bParam3 == 1)
			{
				func_1306(-2103887972, iParam1);
			}
			else if (func_1308(118))
			{
				func_1306(-435828462, iParam1);
			}
			else
			{
				func_1306(-516020583, iParam1);
			}
			break;
		
		case 121:
			if (bParam3 == 1)
			{
				func_1306(2054486196, iParam1);
			}
			else
			{
				func_1306(1809320262, iParam1);
			}
			break;
		
		case 122:
			if (bParam3 == 1)
			{
				func_1306(-570086056, iParam1);
			}
			else if (func_1308(121))
			{
				func_1306(32337856, iParam1);
			}
			else
			{
				func_1306(-206811842, iParam1);
			}
			break;
		
		case 124:
			if (bParam3 == 1)
			{
				func_1306(813493663, iParam1);
			}
			else if (func_1308(122))
			{
				func_1306(-2132763590, iParam1);
			}
			else
			{
				func_1306(477901035, iParam1);
			}
			break;
		
		case 125:
			if (bParam3 == 1)
			{
				func_1306(-66240572, iParam1);
				func_1306(1563075046, iParam1);
			}
			else
			{
				func_1306(-787011772, iParam1);
				func_1306(-1523377438, iParam1);
			}
			break;
		
		case 127:
			func_1306(61020800, iParam1);
			break;
		
		case 129:
			func_1306(428985222, iParam1);
			break;
		
		case 131:
			func_1306(-1393851036, iParam1);
			break;
		
		case 133:
			func_1306(1559531342, iParam1);
			break;
		
		case 134:
			func_1306(-718846442, iParam1);
			break;
		
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_1306(-1374407408, iParam1);
				}
				else
				{
					func_1306(471210931, iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(1732474719) && HUD::_JOURNAL_CAN_WRITE_ENTRY(801682048)) && HUD::_JOURNAL_CAN_WRITE_ENTRY(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_1306(-472672138, iParam1);
				}
				else
				{
					func_1306(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_1306(-1678710489, iParam1);
			}
			else
			{
				func_1306(1522210661, iParam1);
			}
			break;
		
		case 136:
			if (bParam3 == 1)
			{
				func_1306(1717582460, iParam1);
			}
			else
			{
				func_1306(343644664, iParam1);
			}
			break;
		
		case 137:
			if (bParam3 == 1)
			{
				func_1306(1568112362, iParam1);
				func_1306(1388317526, iParam1);
			}
			else if (func_1308(136))
			{
				func_1306(-1597534828, iParam1);
				func_1306(-1207918353, iParam1);
			}
			else
			{
				func_1306(-1940891082, iParam1);
				func_1306(-598277294, iParam1);
			}
			break;
		
		case 142:
			if (iParam2 == 1)
			{
				func_1306(448334530, iParam1);
				func_1306(2145375502, iParam1);
			}
			else
			{
				func_1306(-1891994685, iParam1);
			}
			break;
		
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_1306(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1306(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_1306(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1306(848633571, iParam1);
			}
			break;
		
		case 147:
			if (bParam3 == 1)
			{
				func_1306(-66616327, iParam1);
			}
			else
			{
				func_1306(1978361607, iParam1);
			}
			break;
		
		case 148:
			if (bParam3 == 1)
			{
				func_1306(1862916706, iParam1);
			}
			else if (func_1308(147))
			{
				func_1306(675105199, iParam1);
			}
			else
			{
				func_1306(-1993800776, iParam1);
			}
			break;
		
		case 149:
			if (bParam3 == 1)
			{
				func_1306(174409701, iParam1);
			}
			else if (func_1308(148))
			{
				func_1306(-1730895475, iParam1);
			}
			else
			{
				func_1306(-342396910, iParam1);
			}
			break;
		
		case 150:
			if (bParam3 == 1)
			{
				func_1306(1295237052, iParam1);
			}
			else if (func_1308(149))
			{
				func_1306(-788577684, iParam1);
			}
			else
			{
				func_1306(1527015024, iParam1);
			}
			break;
		
		default:
			break;
	}
}

int func_831(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 1137976064;
	*uParam2 = -1;
	iVar0 = func_110(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_822(iParam0);
			switch (iVar1)
			{
				case 0:
					return -1340559426;
				
				case 1:
					return -694047360;
				
				case 2:
					return -757336127;
				
				case 3:
					return -164763388;
				
				case 4:
					*uParam1 = -2060316038;
					return -2030965067;
				
				case 5:
					return 2030928096;
				
				case 6:
					return -332258016;
				
				case 10:
					return 1817180056;
				
				case 13:
					return 545240164;
				
				case 15:
					return 1141344854;
				
				case 8:
					return 1796786552;
				
				case 25:
					return 1783253542;
				
				case 14:
					return -2129915369;
				
				case 7:
					return -1393633441;
				
				case 9:
					if (func_486(((*Global_1835011)[9 /*74*/])->f_1) == 0)
					{
						return 1819621703;
					}
					else
					{
						return 1456958671;
					}
					break;
				
				case 11:
					return 278608719;
				
				case 12:
					return -561040434;
				
				case 16:
					return 95619635;
				
				case 17:
					return 1185998732;
				
				case 53:
					return -221923309;
				
				case 18:
					return -620369863;
				
				case 19:
					return -1738185394;
				
				case 20:
					return -637873918;
				
				case 22:
					return 561912024;
				
				case 23:
					return 951007010;
				
				case 24:
					return -1512720465;
				
				case 21:
					return 920901415;
				
				case 26:
					return -1664107227;
				
				case 27:
					return -1934704933;
				
				case 28:
					return -582523927;
				
				case 29:
					return -259827569;
				
				case 30:
					return -1633236438;
				
				case 31:
					return -1396074730;
				
				case 32:
					return -248683070;
				
				case 33:
					return 1454698172;
				
				case 34:
					return -1548165899;
				
				case 35:
					return -1486701482;
				
				case 36:
					return 1249990864;
				
				case 37:
					return -164125056;
				
				case 38:
					return -1198456774;
				
				case 39:
					return -820014425;
				
				case 40:
					return -2071373019;
				
				case 41:
					return -162152912;
				
				case 42:
					return -532430534;
				
				case 43:
					return -695655810;
				
				case 44:
					return -1238376790;
				
				case 45:
					return 1927460276;
				
				case 46:
					return 1824331150;
				
				case 47:
					return 1888528254;
				
				case 48:
					return 1971155641;
				
				case 49:
					return -1757085331;
				
				case 50:
					return 1264235360;
				
				case 51:
					return 1157034909;
				
				case 52:
					return 512067206;
				
				case 54:
					return -258855820;
				
				case 55:
					return 2143139308;
				
				case 56:
					return -18183703;
				
				case 57:
					return 692218123;
				
				case 58:
					return 127002552;
				
				case 59:
					return 1769573516;
				
				case 60:
					return 501194998;
				
				case 61:
					return -219249641;
				
				case 62:
					return 1935952956;
				
				case 63:
					return 121222228;
				
				case 64:
					return -1381943684;
				
				case 65:
					return -1417145007;
				
				case 66:
					return -314300362;
				
				case 67:
					return -445710060;
				
				case 68:
					return 122725574;
				
				case 69:
					return -935212592;
				
				case 70:
					return -597010176;
				
				case 71:
					return 534386033;
				
				case 72:
					return -330340613;
				
				case 73:
					return 1425403638;
				
				case 74:
					return 124507607;
				
				case 75:
					return 747937920;
				
				case 76:
					return 1636680094;
			}
			break;
		
		case 8:
			iVar2 = func_111(iParam0);
			switch (iVar2)
			{
				case 120:
					return -895048976;
				
				case 0:
					return -172442174;
				
				case 63:
					return 569547151;
				
				case 97:
					return 1150653348;
				
				case 98:
					return -2075517304;
				
				case 94:
					return -1048889581;
				
				case 59:
					return 2137967386;
				
				case 61:
					return -1955429862;
				
				case 62:
					return 1899640864;
				
				case 112:
					return 1469701481;
				
				case 113:
					return -954047483;
				
				case 114:
					return -1868521635;
				
				case 66:
					*uParam1 = -2060316038;
					return -402973141;
				
				case 76:
					return 281905065;
				
				case 134:
					return 1132574871;
				
				case 3:
					return 709886296;
				
				case 5:
					return -1646431667;
				
				case 21:
					return 2143106360;
				
				case 37:
					return 1073595144;
				
				case 138:
					return -1582252733;
				
				case 67:
					*uParam1 = -2060316038;
					return 1415827953;
				
				case 106:
					return 195634974;
				
				case 107:
					return 1508162848;
				
				case 115:
					return -1971110347;
				
				case 116:
					return 446631778;
				
				case 22:
					return 1909655985;
				
				case 23:
					return -303175962;
				
				case 82:
					return 437096661;
				
				case 68:
					*uParam1 = -2060316038;
					return 1046168872;
				
				case 140:
					return 1593516439;
				
				case 142:
					return 1234351222;
				
				case 58:
					return -1988547710;
				
				case 64:
					return 98434060;
				
				case 65:
					return 1937922313;
				
				case 108:
					return -713369135;
				
				case 8:
					return -1538781541;
				
				case 10:
					return -925475803;
				
				case 2:
					return -1479860879;
				
				case 96:
					return -1025265051;
				
				case 52:
					return -270246276;
				
				default:
					break;
			}
			break;
		
		case 11:
			iVar3 = func_111(iParam0);
			switch (iVar3)
			{
				case 581819093:
					return -1202860612;
				
				case -1220302226:
					return 703663141;
				
				case -839878969:
					return 1534808110;
				
				case -360730635:
					return -742985447;
				
				case 687859577:
					return -331451824;
				
				case 1202375449:
					return 1344816618;
				
				case -1891229662:
					return 597768834;
				
				case -668333238:
					return -120359954;
				
				case 99378894:
					return -290258665;
				
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_832(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_1311(iParam0);
	uVar3 = func_1312(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_2 = uParam1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_3 = uVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_371();
				func_854(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_1313(iParam0, 1);
			if (func_1314(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_1315(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_1316(1, iParam0);
				}
				else
				{
					func_1317(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_833(int iParam0, var uParam1)
{
	*uParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*uParam1 = 35;
			return 70;
		
		case 76:
			*uParam1 = 35;
			return 70;
		
		case 70:
			*uParam1 = 35;
			return 70;
		
		case 73:
			*uParam1 = 35;
			return 70;
		
		case 19:
			*uParam1 = 25;
			return 50;
		
		case 21:
			*uParam1 = 35;
			return 70;
		
		case 60:
			*uParam1 = 35;
			return 70;
		
		case 61:
			*uParam1 = 35;
			return 70;
		
		case 62:
			*uParam1 = 35;
			return 70;
		
		case 63:
			*uParam1 = 35;
			return 70;
		
		case 64:
			*uParam1 = 35;
			return 70;
		
		case 65:
			*uParam1 = 35;
			return 70;
		
		case 66:
			*uParam1 = 35;
			return 70;
		
		case 67:
			*uParam1 = 35;
			return 70;
		
		case 32:
			*uParam1 = 35;
			return 70;
		
		case 48:
			*uParam1 = 35;
			return 70;
		
		case 49:
			*uParam1 = 35;
			return 70;
		
		case 47:
			*uParam1 = 30;
			return 60;
		
		case 58:
			*uParam1 = 30;
			return 60;
		
		case 27:
			*uParam1 = 30;
			return 60;
		
		case 29:
			*uParam1 = 40;
			return 100;
		
		case 30:
			*uParam1 = 50;
			return 100;
		
		case 33:
			*uParam1 = 30;
			return 60;
		
		case 23:
			*uParam1 = 30;
			return 60;
		
		case 10:
			*uParam1 = 30;
			return 60;
		
		case 5:
			*uParam1 = 45;
			return 60;
		
		case 11:
			*uParam1 = 35;
			return 70;
		
		case 9:
			*uParam1 = 45;
			return 70;
		
		case 15:
			*uParam1 = 15;
			return 35;
		
		case 35:
			*uParam1 = 50;
			return 70;
		
		case 8:
			*uParam1 = 50;
			return 100;
		
		case 36:
			*uParam1 = 40;
			return 80;
		
		case 22:
			*uParam1 = 25;
			return 45;
		
		case 39:
		case 41:
		case 42:
		case 43:
			*uParam1 = 20;
			return 40;
	}
	return 120;
}

int func_834(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_835(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		
		case 60:
			*iParam1 = 0;
			return 0;
		
		case 74:
			*iParam1 = 45;
			return 75;
		
		case 119:
			*iParam1 = 45;
			return 75;
		
		case 84:
			*iParam1 = 45;
			return 75;
		
		case 85:
			*iParam1 = 45;
			return 75;
		
		case 106:
			*iParam1 = 20;
			return 35;
		
		case 107:
			*iParam1 = 20;
			return 35;
		
		case 8:
			*iParam1 = 45;
			return 75;
		
		case 9:
			*iParam1 = 45;
			return 75;
		
		case 10:
			*iParam1 = 45;
			return 75;
		
		case 98:
			*iParam1 = 30;
			return 50;
		
		case 82:
			*iParam1 = 30;
			return 50;
		
		case 83:
			*iParam1 = 30;
			return 50;
		
		case 99:
			*iParam1 = 30;
			return 50;
		
		case 138:
			*iParam1 = 30;
			return 50;
		
		case 139:
			*iParam1 = 30;
			return 50;
		
		case 140:
			*iParam1 = 30;
			return 50;
		
		case 141:
			*iParam1 = 30;
			return 50;
		
		case 142:
			*iParam1 = 30;
			return 50;
		
		case 21:
			*iParam1 = 30;
			return 50;
		
		case 136:
			*iParam1 = 30;
			return 50;
		
		case 137:
			*iParam1 = 40;
			return 80;
		
		case 124:
			*iParam1 = 30;
			return 50;
		
		case 125:
			*iParam1 = 30;
			return 50;
		
		case 127:
			*iParam1 = 30;
			return 50;
		
		case 128:
			*iParam1 = 30;
			return 50;
		
		case 131:
			*iParam1 = 30;
			return 50;
		
		case 133:
			*iParam1 = 30;
			return 50;
		
		case 105:
			*iParam1 = 30;
			return 50;
		
		case 89:
			*iParam1 = 30;
			return 50;
		
		case 93:
			*iParam1 = 30;
			return 50;
		
		case 75:
			*iParam1 = 30;
			return 50;
		
		case 5:
			*iParam1 = 50;
			return 100;
		
		case 6:
			*iParam1 = 30;
			return 50;
		
		case 77:
			*iParam1 = 30;
			return 50;
		
		case 78:
			*iParam1 = 30;
			return 50;
		
		case 30:
			*iParam1 = 30;
			return 50;
		
		case 31:
			*iParam1 = 30;
			return 50;
		
		case 32:
			*iParam1 = 30;
			return 50;
		
		case 33:
			*iParam1 = 30;
			return 50;
		
		case 34:
			*iParam1 = 30;
			return 50;
		
		case 35:
			*iParam1 = 30;
			return 50;
		
		case 36:
			*iParam1 = 30;
			return 50;
		
		case 24:
			*iParam1 = 30;
			return 50;
		
		case 25:
			*iParam1 = 30;
			return 50;
		
		case 26:
			*iParam1 = 30;
			return 50;
		
		case 27:
			*iParam1 = 30;
			return 50;
		
		case 28:
			*iParam1 = 30;
			return 50;
		
		case 66:
			*iParam1 = 30;
			return 50;
		
		case 67:
			*iParam1 = 50;
			return 100;
		
		case 146:
			*iParam1 = 30;
			return 50;
		
		case 38:
			*iParam1 = 30;
			return 45;
		
		case 39:
			*iParam1 = 30;
			return 45;
		
		case 40:
			*iParam1 = 30;
			return 45;
		
		case 41:
			*iParam1 = 30;
			return 45;
		
		case 42:
			*iParam1 = 30;
			return 45;
		
		case 43:
			*iParam1 = 30;
			return 45;
		
		case 44:
			*iParam1 = 30;
			return 45;
		
		case 45:
			*iParam1 = 30;
			return 45;
		
		case 46:
			*iParam1 = 30;
			return 45;
		
		case 47:
			*iParam1 = 30;
			return 45;
		
		case 48:
			*iParam1 = 30;
			return 45;
		
		case 49:
			*iParam1 = 30;
			return 45;
		
		case 50:
			*iParam1 = 30;
			return 45;
		
		case 51:
			*iParam1 = 30;
			return 45;
		
		case 112:
			*iParam1 = 10;
			return 20;
		
		case 113:
			*iParam1 = 25;
			return 45;
		
		case 114:
			*iParam1 = 10;
			return 20;
		
		case 59:
			*iParam1 = 15;
			return 35;
		
		case 61:
			*iParam1 = 15;
			return 35;
		
		case 97:
			*iParam1 = 15;
			return 35;
		
		case 94:
			*iParam1 = 20;
			return 30;
		
		case 0:
			*iParam1 = 45;
			return 75;
		
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

int func_836(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return 1;
	}
	return 0;
}

void func_837(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_200() != -1)
	{
		return;
	}
	if ((Global_36615 && func_1318(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_1319(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_1320(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_1321(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_1320(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_838(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

int func_839()
{
	if (func_200() != -1)
	{
		return 0;
	}
	if (!func_624())
	{
		return 0;
	}
	if (!func_492(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_492(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_492(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_492(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_492(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_492(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_492(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_492(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_492(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_492(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_492(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_492(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_492(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_492(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_492(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_492(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_492(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_492(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_492(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_492(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_492(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_492(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_492(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_492(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_492(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_492(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_840()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1322(13);
		(*Global_1898441)[iVar0 /*38*/] = 13;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_WIN2_COM", 24);
	}
}

void func_841(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;
	
	if (func_631(iParam0, 1989861793))
	{
		iVar0 = func_1076(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_1323(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_1324(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_1325(iVar14, iVar1);
					if (iVar15 != iParam0 && func_609(iVar15, 0))
					{
						if (func_1326(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_1327(iVar1);
				if (bVar13)
				{
					func_1328(iParam0);
				}
				else
				{
					func_303(306, 0);
				}
			}
		}
	}
}

void func_842()
{
	if (func_200() != -1)
	{
		return;
	}
	func_1329();
	func_1330();
	func_1331();
	func_1332();
	func_1333();
	func_1334();
	func_1335();
}

void func_843(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	
	func_312(iParam0, 1, 1, -142743235, 1);
	if (func_1336(iParam0))
	{
		func_1337(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_1142(func_1338(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_1339(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1 /*11*/];
		*(Global_1946804->f_1616.f_1[iVar1 /*3*/]) = { vVar4 };
		(Global_1946804->f_1616.f_1[iVar1 /*3*/])->f_2 = ((Global_1946804->f_1497.f_1[iVar1 /*3*/])->f_2 || (Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_2);
		iVar1++;
	}
	if (func_1159() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_1340(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_1340(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_1341(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_1341(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_1341(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_1341(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_1341(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_1341(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_1341(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_1341(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_1341(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_1342(iVar8, iVar0))
				{
					func_1343(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_1342(iVar8, iVar0))
		{
			func_1343(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
			{
				*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
		{
			*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
		if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar1 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar1 /*3*/]) };
		iVar1++;
	}
}

void func_844()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1342(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_1159() == -2125499975 || func_1159() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_1343(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_1343(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = -2018863109;
	vVar2.f_1 = 1530758430;
	if (&Global_1946804->f_57[iVar5 /*11*/] == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/] || 0 == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/])
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/]) = { vVar2 };
	}
}

void func_845()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1322(14);
		(*Global_1898441)[iVar0 /*38*/] = 14;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_846(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		
		case 1:
			return "COMP_JOHN";
		
		case 2:
			return "COMP_JAVIER";
		
		case 3:
			return "COMP_BILL";
		
		case 4:
			return "COMP_UNCLE";
		
		case 5:
			return "COMP_HOSEA";
		
		case 6:
			return "COMP_MICAH";
		
		case 7:
			return "COMP_CHARLES";
		
		case 8:
			return "COMP_SEAN";
		
		case 9:
			return "COMP_LENNY";
		
		case 10:
			return "COMP_KIERAN";
		
		case 23:
			return "COMP_TRELAWNY";
		
		case 17:
			return "COMP_PEARSON";
		
		case 18:
			return "COMP_STRAUSS";
		
		case 13:
			return "COMP_ABIGAIL";
		
		case 14:
			return "COMP_JACK";
		
		case 16:
			return "COMP_MOLLY_OSHEA";
		
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		
		case 15:
			return "COMP_MARY_BETH";
		
		case 20:
			return "COMP_KAREN";
		
		case 22:
			return "COMP_TILLY";
		
		case 11:
			return "COMP_SADIE";
		
		case 24:
			return "COMP_CLEET";
		
		case 25:
			return "COMP_JOE";
		
		case 26:
			return "COMP_EAGLE_FLIES";
		
		case 12:
			if ((func_492(((*Global_1835011)[59 /*74*/])->f_1, 1) || func_492(((*Global_1347702)[1 /*49*/])->f_15, 1)) || func_174(((*Global_1347702)[1 /*49*/])->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_505(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_847(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1142(iParam0, 1);
	func_1344(Global_1946804->f_1497.f_1[iVar0 /*3*/], 2, 6);
	func_1344(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
		(Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1 = 0;
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		if (bParam2)
		{
			func_1145(17, iParam0, 0, 0, 0);
		}
	}
	if (func_200() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1344((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1344((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_848()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1322(17);
		(*Global_1898441)[iVar0 /*38*/] = 17;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA2_COM", 24);
	}
}

void func_849()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1322(18);
		(*Global_1898441)[iVar0 /*38*/] = 18;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA3_COM", 24);
	}
}

int func_850(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	struct<5> Var0;
	
	if (iParam3 == -358215195)
	{
		Var0 = { func_1072(iParam1, 1, 0) };
		iParam3 = func_1141(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_1345(iParam3);
	return func_663(iParam0, iParam1, iParam2, iParam3, bParam4, iParam5, 1, 0, 1, 0);
}

bool func_851()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

void func_852(int iParam0)
{
	int iVar0;
	
	if (!func_481(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_VISIBLE(iVar0, true);
}

int func_853(int iParam0, int iParam1)
{
	if (!func_1346(iParam0))
	{
		return 0;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_1347(iParam0);
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	return func_1348(Global_40.f_9910[iParam1 /*6*/], 4);
}

void func_854(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_1349(*iParam0);
	iVar1 = func_1350(*iParam0);
	iVar2 = func_1351(*iParam0);
	iVar3 = func_960(*iParam0);
	iVar4 = func_1352(*iParam0);
	iVar5 = func_1353(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_1354(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1354(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_1355(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_855(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_1346(iParam0))
	{
		return;
	}
	if (!func_1356(iParam1))
	{
		return;
	}
	if (func_1304(iParam1, 1))
	{
		return;
	}
	iVar0 = func_1347(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_853(iParam0, -1))
	{
		return;
	}
	else
	{
		func_1357(Global_40.f_9910[iVar0 /*6*/], 2);
	}
	(Global_40.f_9910[iVar0 /*6*/])->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_146(0, 0, 1))
		{
			func_882(0, 17);
		}
	}
}

void func_856()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1322(19);
		(*Global_1898441)[iVar0 /*38*/] = 19;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MOB5_COM", 24);
	}
}

void func_857()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1322(20);
		(*Global_1898441)[iVar0 /*38*/] = 20;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_858()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

void func_859()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1322(21);
		(*Global_1898441)[iVar0 /*38*/] = 21;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA1_COM", 24);
	}
}

void func_860()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1322(22);
		(*Global_1898441)[iVar0 /*38*/] = 22;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA3_COM", 24);
	}
}

void func_861()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1322(24);
		(*Global_1898441)[iVar0 /*38*/] = 24;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ODR5_COM", 24);
	}
}

void func_862()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1322(25);
		(*Global_1898441)[iVar0 /*38*/] = 25;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN1_COM", 24);
	}
}

void func_863()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1322(27);
		(*Global_1898441)[iVar0 /*38*/] = 27;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MAR51_COM", 24);
	}
}

void func_864()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1322(28);
		(*Global_1898441)[iVar0 /*38*/] = 28;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_865(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

void func_866(int iParam0)
{
	if (func_60(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_1169(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_1169(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_867()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1322(29);
		(*Global_1898441)[iVar0 /*38*/] = 29;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BEE22_COM", 24);
	}
}

void func_868()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1322(26);
		(*Global_1898441)[iVar0 /*38*/] = 26;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN2_COM", 24);
	}
}

void func_869()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1322(23);
		(*Global_1898441)[iVar0 /*38*/] = 23;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOC_COM", 24);
	}
}

void func_870()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1322(15);
		(*Global_1898441)[iVar0 /*38*/] = 15;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOW3_COM", 24);
	}
}

void func_871()
{
	int iVar0;
	
	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1322(16);
		(*Global_1898441)[iVar0 /*38*/] = 16;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DUT1_COM", 24);
	}
}

void func_872()
{
	if (func_1358() > 1)
	{
		func_1359();
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-707360575))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-707360575, true);
			func_303(444, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-1201174711))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-1201174711, true);
			func_303(447, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(151582343))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(151582343, true);
			func_303(448, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-642492359))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-642492359, true);
			func_303(450, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(5171247))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(5171247, true);
			func_303(452, 1);
		}
	}
}

bool func_873(int iParam0)
{
	return func_508(iParam0, 4, 1);
}

void func_874(int iParam0)
{
	func_1360(iParam0, 4, 1);
}

void func_875(int iParam0)
{
	struct<2> Var0;
	
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_827(-160912108) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_876(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_60(32768))
	{
		return;
	}
	if (!func_57(iParam0))
	{
		return;
	}
	func_273(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_110(iParam0))
	{
		case 1:
			func_647(func_648(909007663, -587839005), 1);
			iVar0 = func_111(iParam0);
			func_647(func_827(-634848880), 1);
			switch (func_941(iVar0))
			{
				case 0:
					func_647(func_648(909007663, 1325140787), 1);
					break;
				
				case 1:
					func_647(func_648(909007663, 2101241783), 1);
					break;
				
				case 2:
					func_647(func_648(909007663, -1296936294), 1);
					break;
				
				case 3:
					func_647(func_648(909007663, -798388728), 1);
					break;
				
				case 4:
					func_647(func_648(909007663, -1787586531), 1);
					break;
				
				case 5:
					func_647(func_648(909007663, -1002834519), 1);
					break;
				
				case 6:
					func_647(func_648(909007663, -50600144), 1);
					break;
				
				case 7:
					func_647(func_648(909007663, -348503123), 1);
					break;
				
				case 8:
					func_647(func_648(909007663, -528798161), 1);
					break;
				
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_647(func_648(909007663, -406093146), 1);
			}
			if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8))))
			{
				func_647(func_648(909007663, 532323983), 1);
			}
			break;
		
		case 8:
			iVar1 = func_111(iParam0);
			if (func_31(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				func_647(func_827(-634848880), 1);
			}
			if (func_31(((*Global_1347702)[iVar1 /*49*/])->f_12, 4) || iVar1 == 59)
			{
				if (func_31(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
				{
					func_647(func_648(909007663, -587839005), 1);
				}
				else
				{
					func_647(func_648(909007663, -2049243343), 1);
				}
			}
			if (func_31(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				switch (func_942(iVar1))
				{
					case 0:
						func_647(func_648(909007663, 1325140787), 1);
						break;
					
					case 1:
						func_647(func_648(909007663, 2101241783), 1);
						break;
					
					case 2:
						func_647(func_648(909007663, -1296936294), 1);
						break;
					
					case 3:
						func_647(func_648(909007663, -798388728), 1);
						break;
					
					case 4:
						func_647(func_648(909007663, -1787586531), 1);
						break;
					
					case 5:
						func_647(func_648(909007663, -1002834519), 1);
						break;
					
					case 6:
						func_647(func_648(909007663, -50600144), 1);
						break;
					
					case 7:
						func_647(func_648(909007663, -348503123), 1);
						break;
					
					case 8:
						func_647(func_648(909007663, -528798161), 1);
						break;
					
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar1 /*49*/])->f_3))))
				{
					func_647(func_648(909007663, 532323983), 1);
				}
			}
			else if (func_31(((*Global_1347702)[iVar1 /*49*/])->f_12, 4))
			{
				if (func_31(((*Global_1347702)[iVar1 /*49*/])->f_12, 4194304))
				{
				}
				else if (!func_31(((*Global_1347702)[iVar1 /*49*/])->f_12, 512))
				{
					func_647(func_648(909007663, 551192206), 1);
				}
				else
				{
					func_647(func_648(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_877()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	if (func_200() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575->f_2)
	{
		return;
	}
	if (!func_83(64))
	{
		return;
	}
	else if (func_90(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_146(0, 0, 1) || func_1361()) || func_839())
	{
		return;
	}
	iVar0 = func_443();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1362(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_820(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_820(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_1363(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_882(0, -1);
	}
	if (iVar2 > 0)
	{
		func_338("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_1364(1, 0);
	Global_1956575->f_2 = 1;
}

void func_878(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_60(32768))
	{
		return;
	}
	func_1365(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-843169622))
		{
			Global_1879514->f_12 = 1;
		}
		else
		{
			Global_1879514->f_12 = 0;
		}
		func_1366(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_879(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_1367(iParam0))
	{
		return 0;
	}
	if (!func_624())
	{
		return 0;
	}
	if (!func_1368(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

int func_880(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_1113(1330954593, 0, -1);
		
		case 1:
			return func_1113(1330954593, 0, -1);
		
		case 2:
			return func_1113(1330954593, 0, -1) * 2;
		
		case 4:
			return func_1113(1330954593, 0, -1);
		
		case 5:
			return func_1113(1330954593, 0, -1);
		
		case 6:
			return func_1113(1330954593, 0, -1) * 2;
		
		case 12:
			return 75000;
		
		case 8:
			return func_1113(1330954593, 0, -1) * 3;
		
		case 9:
			return func_1113(1330954593, 0, -1) * 3;
		
		case 10:
			return func_1113(1330954593, 0, -1) * 3;
		
		case 11:
			return func_1113(1330954593, 0, -1);
		
		default:
			break;
	}
	return 0;
}

void func_881(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!Global_1879514->f_11)
	{
		iVar0 = func_883();
		iVar1 = MISC::GET_HASH_KEY(&uParam0);
		if (MISSIONDATA::_0x57E798B54C45EE1A(iVar1) != 5 && iVar0 == 5)
		{
			if (func_110(Global_1879514->f_1) == 1)
			{
				func_879(5, 1);
			}
			else if (func_110(Global_1879514->f_1) == 8 && (func_31(((*Global_1347702)[func_111(Global_1879514->f_1) /*49*/])->f_12, 1) || func_31(((*Global_1347702)[func_111(Global_1879514->f_1) /*49*/])->f_12, 33554432)))
			{
				func_879(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), 3);
	}
}

void func_882(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_572(&Global_0, 8);
	}
	if (!func_624() || func_200() != -1)
	{
		return;
	}
	func_572(&Global_0, 1);
}

int func_883()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_1369(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_1370(iVar0))
	{
		if (Global_1879514->f_18)
		{
			return Global_1879514->f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(iVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

Vector3 func_884(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9, float fParam10, int iParam11, int iParam12, float fParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;
	
	fVar2 = 9999999f;
	func_1371(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1372() == 0 && !func_1373(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1374(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		iVar10 = func_1375();
		if (VOLUME::_0x92A78D0BEDB332A3(iVar10))
		{
		}
	}
	if (!func_1376(Global_1310720->f_21))
	{
		fParam10 = iParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { func_1377(iVar0, iVar1) };
			bVar11 = func_1378(iVar0, iVar1);
			fVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((fVar3 < fVar2 && fVar3 > fParam10) && !func_244(vVar7)) && func_1379(iVar0, uParam8, iParam12)) && !func_1380(iVar0)) || bVar11)
			{
				if (func_1381(vVar7, iVar0, iVar1, bParam5, bParam6, bVar14, iVar10, bParam9, fParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*uParam3 = iVar0;
					*uParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}

void func_885()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(1);
}

void func_886()
{
}

void func_887()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(2);
}

void func_888()
{
	if (func_200() != -1)
	{
		return;
	}
	if (!func_624())
	{
		return;
	}
	func_1382(&(Global_40.f_40));
}

void func_889()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar0 /*373*/])->f_1))
		{
			(Global_40.f_11029[iVar0 /*5*/])->f_1 = { VEHICLE::_0x1E8A921112891651(((*Global_1425371)[iVar0 /*373*/])->f_1) };
			(Global_40.f_11029[iVar0 /*5*/])->f_4 = VEHICLE::_0x67995318F5FAA496(((*Global_1425371)[iVar0 /*373*/])->f_1);
		}
		iVar0++;
	}
}

bool func_890()
{
	return !func_244(Global_1310720->f_1);
}

int func_891()
{
	return Global_40.f_4283.f_1;
}

int func_892()
{
	return Global_40.f_4283.f_4;
}

void func_893(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_1383())
	{
		fVar0 = func_1384(vParam0, Global_40.f_6);
	}
	if (func_1385(33554432))
	{
		if (!func_1055(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_1384(vParam0, Global_40.f_2);
		}
	}
	if (fVar1 > 150f && fVar0 > 150f)
	{
		*uParam3 = { Global_36 };
		*uParam4 = 6;
		return;
	}
	if (fVar0 < fVar1)
	{
		*uParam3 = { Global_40.f_6 };
		*uParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 };
		*uParam4 = 3;
	}
}

float func_894(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_895()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	
	if (!func_90(&Global_1935630, 8192))
	{
		return;
	}
	if (func_60(32768))
	{
		return;
	}
	func_125(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_1386(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * BUILTIN::TO_FLOAT(func_1386(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * BUILTIN::TO_FLOAT(func_1386(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * BUILTIN::TO_FLOAT(func_1386(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_1386(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * BUILTIN::TO_FLOAT(func_1386(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * BUILTIN::TO_FLOAT(func_1386(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * BUILTIN::TO_FLOAT(func_1386(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * BUILTIN::TO_FLOAT(func_1386(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_1387(10f, BUILTIN::TO_FLOAT(func_1386(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_1387(5f, BUILTIN::TO_FLOAT(func_1386(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_1387(25f, BUILTIN::TO_FLOAT(func_1388(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_1387(1f, BUILTIN::TO_FLOAT(func_1388(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_1387(6f, BUILTIN::TO_FLOAT(func_1388(64058978)))));
	fVar0 = (fVar0 + (3f * func_1387(1f, BUILTIN::TO_FLOAT(func_1388(795577402)))));
	iVar1 = func_1389();
	fVar0 = (fVar0 + (0.1111111f * func_1387(9f, BUILTIN::TO_FLOAT(iVar1))));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1665658745)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1665658745)));
	fVar2 = func_1390(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -263938772)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -263938772))));
	fVar2 = func_1390(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 228647253)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 228647253))));
	fVar2 = func_1390(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1695604435)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1695604435))));
	fVar2 = func_1390(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -379038926)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -379038926))));
	fVar2 = func_1390(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1597499323)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1597499323))));
	fVar2 = func_1390(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -278663717)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -278663717))));
	fVar2 = func_1390(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 586249988)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 586249988))));
	fVar2 = func_1390(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -419800938)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -419800938))));
	fVar2 = func_1390(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -1362069171)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -1362069171))));
	fVar2 = func_1390(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -740350755)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -740350755))));
	fVar2 = func_1390(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1511070393)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_1387(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_1387(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(func_1391()))));
	if (func_502(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_502(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_502(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_502(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_502(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 499813453)));
	fVar2 = func_1390(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 666607663))));
	fVar2 = func_1390(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, -220219788))));
	fVar2 = func_1390(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 218622660))));
	fVar2 = func_1390(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 390004462))));
	fVar2 = func_1390(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_1387(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_1387(5f, BUILTIN::TO_FLOAT(func_1388(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_1387(5f, BUILTIN::TO_FLOAT(func_1386(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1392(COMPENDIUM::_0x729D52F61A5A9E22(1979337996), 50)) / BUILTIN::TO_FLOAT(50)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1392(COMPENDIUM::_0x729D52F61A5A9E22(-2125891426), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1392(COMPENDIUM::_0x729D52F61A5A9E22(1630085303), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + COMPENDIUM::_0x725D52F21A5E9E22(-1658238931));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1392(COMPENDIUM::_0x729D52F61A5A9E22(1807539419), 20)) / BUILTIN::TO_FLOAT(20)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1392(COMPENDIUM::_0x729D52F61A5A9E22(717108105), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1392(COMPENDIUM::_0x729D52F61A5A9E22(-2143405780), 48)) / BUILTIN::TO_FLOAT(48)));
	func_1393(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_1387((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_1387(1f, BUILTIN::TO_FLOAT(func_1394(-2116919750)))));
	fVar5 = BUILTIN::TO_FLOAT(func_1395());
	fVar0 = (fVar0 + ((3f * fVar5) / BUILTIN::TO_FLOAT(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_1387(1f, BUILTIN::TO_FLOAT(func_1386(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1387(1f, BUILTIN::TO_FLOAT(func_1386(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1387(1f, BUILTIN::TO_FLOAT(func_1386(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1387(1f, BUILTIN::TO_FLOAT(func_1386(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_1387(5f, BUILTIN::TO_FLOAT(func_1388(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_1387(1f, BUILTIN::TO_FLOAT(func_1388(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_1387(1f, BUILTIN::TO_FLOAT(func_1388(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_1387(1f, BUILTIN::TO_FLOAT(func_1388(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1387(1f, BUILTIN::TO_FLOAT(func_1386(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1387(1f, BUILTIN::TO_FLOAT(func_1386(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1387(1f, BUILTIN::TO_FLOAT(func_1386(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1387(1f, BUILTIN::TO_FLOAT(func_1386(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1387(1f, BUILTIN::TO_FLOAT(func_1386(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1387(1f, BUILTIN::TO_FLOAT(func_1386(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1387(1f, BUILTIN::TO_FLOAT(func_1386(978382515, joaat("coach"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1387(1f, BUILTIN::TO_FLOAT(func_1386(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1387(1f, BUILTIN::TO_FLOAT(func_1386(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1387(1f, BUILTIN::TO_FLOAT(func_1386(978382515, 1015970717)))));
	Var6 = { func_827(joaat("total_progress_made")) };
	fVar8 = func_1396(Var6);
	STATS::_0xE141F6B40B1E3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_57(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_57(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_409(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_816(Global_1898330[iVar61]);
				}
				else
				{
					func_1397(iVar61, 0);
					if (func_110(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_109(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (&Global_40.f_450[iVar63] > -1 && &Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_109(((*Global_1347702)[&Global_40.f_450[iVar63] /*49*/])->f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_0x51EC204A6E5B5A1A(func_109(&Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}

bool func_896(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_897(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(((*Global_1934603)[iVar0 /*16*/])->f_10), sParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_898(var uParam0)
{
	if (func_896(uParam0, 1))
	{
		func_1398(1);
	}
}

int func_899()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		return 1;
	}
	return 0;
}

int func_900(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			func_1399(iVar0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_901(int iParam0)
{
	return iParam0 != 0;
}

int func_902()
{
	return -1904156936;
}

int func_903(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_57(iParam0))
	{
		return 0;
	}
	switch (func_110(iParam0))
	{
		case 1:
			iVar0 = func_111(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		
		case 8:
			iVar1 = func_111(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return 0;
}

int func_904()
{
	return 166188472;
}

int func_905()
{
	return 2015838421;
}

int func_906()
{
	return 207908017;
}

var func_907(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;
	
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _NAMESPACE76::_0x9F2CC2439A04E7BA(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_908(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	var uVar3;
	
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _NAMESPACE76::_0x815C4065AE6E6071(uParam0, &Var0, iParam3);
	return uVar3;
}

int func_909(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_910(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_911(int iParam0)
{
	struct<5> Var0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*(Global_1898164->f_1[0 /*5*/]) = { Var0 };
		return 1;
	}
	*(Global_1898164->f_1[iParam0 /*5*/]) = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_1031(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_912(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_1026(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_913(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1400(iParam0);
	}
	else
	{
		func_1401(iParam0, iParam1);
	}
	func_1402();
}

void func_914(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_1403(iParam0, iParam1, bParam2);
}

bool func_915()
{
	int iVar0;
	
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

bool func_916(var uParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	
	if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_1404(cParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

void func_917()
{
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_48))
	{
		VOLUME::_0x43F867EF5C463A53(iLocal_48);
	}
}

bool func_918(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

int func_919(int iParam0)
{
	return iParam0;
}

void func_920(int iParam0)
{
	if (!func_1405(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

char* func_921(char* sParam0)
{
	return sParam0;
}

bool func_922(int iParam0)
{
	return func_508(iParam0, 16, 1);
}

void func_923(int iParam0, int iParam1, bool bParam2)
{
	if (!func_934(iParam0))
	{
		return;
	}
	func_1406(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_924(int iParam0)
{
	func_512(iParam0, 36, 1);
}

void func_925(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_934(iParam0))
		{
			return;
		}
	}
	func_986(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_926(int iParam0, bool bParam1)
{
	if (!func_431(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_1407(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

void func_927(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_431(iParam0))
	{
		iVar1 = func_1269(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_1408(iParam0);
		}
	}
	if (func_509(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_1269(iParam0), 137, true);
	}
}

void func_928(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_934(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_925(iParam0, 50, 1);
		func_925(iParam0, 48, 1);
		func_925(iParam0, 49, 1);
		func_925(iParam0, 51, 1);
		func_925(iParam0, 52, 1);
		func_925(iParam0, 54, 1);
		func_925(iParam0, 55, 1);
	}
	else
	{
		func_512(iParam0, 50, 1);
		func_512(iParam0, 48, 1);
		func_512(iParam0, 49, 1);
		func_512(iParam0, 51, 1);
		if (bParam3)
		{
			func_512(iParam0, 54, 1);
		}
		else
		{
			func_925(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_512(iParam0, 52, 1);
			if (bParam3)
			{
				func_512(iParam0, 55, 1);
			}
		}
		else
		{
			func_925(iParam0, 52, 1);
			if (!bParam3)
			{
				func_925(iParam0, 55, 1);
			}
		}
	}
}

void func_929(int iParam0, bool bParam1)
{
	if (!func_934(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_1269(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_1269(iParam0), 204, false);
	}
}

void func_930(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	
	if (!func_431(iParam0))
	{
		return;
	}
	if (func_922(iParam0))
	{
		if (!func_432(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_509(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_926(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_1269(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_1409(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::_0x0C3CB2E600C8977D(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 1, 1);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_512(iParam0, 2, 1);
	}
	else
	{
		func_1410(iParam0);
		func_512(iParam0, 1, 1);
	}
}

void func_931(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_431(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_932(int iParam0)
{
	if (!func_431(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

void func_933(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_934(iParam1))
	{
		return;
	}
	iVar0 = func_932(iParam1);
	if (func_1411(iParam1))
	{
		if (!func_1412(iParam1))
		{
			return;
		}
	}
	func_925(iParam1, 39, 1);
	func_1413(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_1413(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_1413(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_512(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1414(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_934(int iParam0)
{
	return iParam0 > -1;
}

bool func_935(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_936(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	if (func_244(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_1055(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

int func_937(int iParam0)
{
	if (iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_938(int iParam0)
{
	if (iParam0 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_939(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_937(iParam0))
	{
		return false;
	}
	func_1415(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1935183->f_73[iParam0 /*7*/][iVar0], iVar1);
}

void func_940(int iParam0, var uParam1)
{
	if (!func_937(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1416(iParam0, *uParam1, 0);
	func_1417(uParam1);
	Global_1935183->f_24 = 1;
}

int func_941(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		
		case 59:
			return 6;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_942(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		
		case 115:
		case 116:
			return 3;
		
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_943(int iParam0, var uParam1)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_944()
{
	float fVar0;
	
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_945(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 112;
		
		case 2:
			return 113;
		
		case 3:
			return 2;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 8:
			return 7;
		
		case 9:
			return 8;
		
		case 10:
			return 9;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 15:
			return 12;
		
		case 16:
			return 13;
		
		case 17:
			return 15;
		
		case 19:
			return 17;
		
		case 20:
			return 18;
		
		case 21:
			return 19;
		
		case 22:
			return 20;
		
		case 23:
			return 21;
		
		case 25:
			return 23;
		
		case 26:
			return 25;
		
		case 27:
			return 26;
		
		case 28:
			return 62;
		
		case 29:
			return 27;
		
		case 49:
			return 28;
		
		case 30:
			return 29;
		
		case 31:
			return 30;
		
		case 32:
			return 31;
		
		case 120:
			return 32;
		
		case 124:
			return 33;
		
		case 125:
			return 34;
		
		case 33:
			return 35;
		
		case 83:
			return 40;
		
		case 35:
			return 42;
		
		case 36:
			return 43;
		
		case 89:
			return 44;
		
		case 115:
			return 46;
		
		case 37:
			return 47;
		
		case 38:
			return 48;
		
		case 39:
			return 49;
		
		case 40:
			return 50;
		
		case 50:
			return 51;
		
		case 42:
			return 52;
		
		case 52:
			return 53;
		
		case 43:
			return 54;
		
		case 45:
			return 57;
		
		case 48:
			return 61;
		
		case 56:
			return 63;
		
		case 57:
			return 64;
		
		case 58:
			return 65;
		
		case 59:
			return 66;
		
		case 60:
			return 67;
		
		case 61:
			return 68;
		
		case 126:
			return 69;
		
		case 127:
			return 70;
		
		case 62:
			return 71;
		
		case 77:
			return 72;
		
		case 64:
			return 73;
		
		case 65:
			return 74;
		
		case 67:
			return 76;
		
		case 68:
			return 78;
		
		case 69:
			return 79;
		
		case 70:
			return 80;
		
		case 71:
			return 81;
		
		case 72:
			return 82;
		
		case 75:
			return 84;
		
		case 76:
			return 85;
		
		case 117:
			return 86;
		
		case 78:
			return 87;
		
		case 79:
			return 88;
		
		case 80:
			return 90;
		
		case 81:
			return 91;
		
		case 82:
			return 92;
		
		case 87:
			return 96;
		
		case 88:
			return 97;
		
		case 91:
			return 98;
		
		case 92:
			return 99;
		
		case 93:
			return 100;
		
		case 94:
			return 101;
		
		case 95:
			return 102;
		
		case 96:
			return 103;
		
		case 97:
			return 104;
		
		case 98:
			return 105;
		
		case 99:
			return 106;
		
		case 100:
			return 107;
		
		case 104:
			return 114;
		
		case 105:
			return 115;
		
		case 107:
			return 118;
		
		case 109:
			return 119;
		
		case 110:
			return 120;
		
		case 111:
			return 121;
		
		case 112:
			return 122;
		
		case 128:
			return 123;
		
		default:
			break;
	}
	return 0;
}

void func_946(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

int func_947(int iParam0)
{
	if (!func_57(iParam0))
	{
		return 0;
	}
	switch (func_110(iParam0))
	{
		case 1:
			switch (func_111(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return 1;
			}
			break;
		
		case 8:
			switch (func_111(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return 1;
			}
			break;
	}
	return 0;
}

void func_948(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_1067(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_635(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1419(func_1418(iParam0), 6);
}

void func_949(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_1067(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_635(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1420(func_1418(iParam0), 6);
}

bool func_950(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_951(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_130(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return;
	}
	if (func_1421(iParam0, 64))
	{
		func_952(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && !MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_633(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
		}
		if (iVar0 == PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
			{
				((*Global_1900383)[iParam0 /*45*/])->f_27 = MAP::_0x23F74C2FDA6E7C61(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(((*Global_1900383)[iParam0 /*45*/])->f_27, -1327110633, true);
				func_1422(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && bVar4)
	{
		func_952(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_1423(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
			{
				MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		((*Global_1900383)[iParam0 /*45*/])->f_26 = MAP::_0x23F74C2FDA6E7C61(iVar5, iVar0);
		((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
		func_1424(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1421(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_1425(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = func_1384(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1426(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 3)
		{
			iVar17 = -401963276;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_0xEBE89623EB861271(iVar0, 1);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 4)
		{
			iVar17 = -1380599892;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 2)
		{
			iVar17 = 1313031610;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 1)
		{
			iVar17 = -1012863186;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_1427(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_1428(((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar18);
	}
	if ((PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	if (func_1429(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar20);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 561559387);
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, -201249929);
	}
	iVar21 = func_1423(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			
			case 1:
				iVar22 = 13992470;
				break;
			
			case 2:
				iVar22 = 396341162;
				break;
			
			case 3:
				iVar22 = 623069873;
				break;
			
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			
			case 1:
				iVar22 = 489732756;
				break;
			
			case 2:
				iVar22 = 195204984;
				break;
			
			case 3:
				iVar22 = -103418913;
				break;
			
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

void func_952(int iParam0)
{
	iParam0 = func_396(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
}

int func_953(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = func_1430(vParam0, 0f, 0f, 0, 2);
	return func_1430(vParam0, ((*Global_1894052)[iVar0 /*3*/])->f_1, ((*Global_1894052)[iVar0 /*3*/])->f_2, Global_1894052[iVar0 /*3*/], 4);
}

void func_954(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_959(uParam0, 16);
	}
	else
	{
		func_958(uParam0, 67108864);
		func_958(uParam0, 16);
	}
}

void func_955(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_958(&(uParam0->f_1), 128);
	}
	else
	{
		func_959(&(uParam0->f_1), 128);
	}
}

void func_956(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_959(uParam0, 256);
	}
	else
	{
		func_958(uParam0, 256);
	}
}

void func_957(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_959(uParam0, 268435456);
	}
	else
	{
		func_958(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_959(uParam0, 1073741824);
	}
	else
	{
		func_958(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_959(uParam0, 536870912);
	}
	else
	{
		func_958(uParam0, 536870912);
	}
}

void func_958(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_959(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_960(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_961(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_962(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1835011)
	{
		if (MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_963(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_964(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar0 /*49*/])->f_3)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_965(var uParam0)
{
	if (!func_950(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
		func_966(&(uParam0->f_1), 1);
	}
}

void func_966(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_967(var uParam0)
{
	if (!func_950(uParam0->f_3, 1))
	{
		switch (uParam0->f_1)
		{
			case 2:
				TASK::REQUEST_WAYPOINT_RECORDING(*uParam0);
				break;
			
			case 1:
				VEHICLE::REQUEST_VEHICLE_RECORDING(uParam0->f_2, *uParam0);
				break;
			
			default:
				break;
		}
		func_966(&(uParam0->f_3), 1);
	}
}

void func_968(var uParam0)
{
	if (!func_950(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_ANIM_DICT(*uParam0);
		func_966(&(uParam0->f_1), 1);
	}
}

void func_969(var uParam0)
{
	if (!func_950(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_CLIP_SET(*uParam0);
		func_966(&(uParam0->f_1), 1);
	}
}

int func_970(int iParam0)
{
	if (PED::_0x5C16855277819BBF() >= iParam0)
	{
		return 1;
	}
	return 0;
}

int func_971(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1431(uParam1, 128);
	if (func_1063("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1064(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_481(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_0xD955FEE4B87AFA07(Var4.f_4) && (!WEAPON::_0xC75386174ECE95D5(Var4.f_4) || func_1431(uParam1, 32))) && (!WEAPON::_0xDDC64F5E31EEDAB6(Var4.f_4) || !func_1431(uParam1, 8192))) && (!WEAPON::_0xC212F1D05A8232BB(Var4.f_4) || !func_1431(uParam1, 16384)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_1065(iVar1);
	}
	if (func_481(iVar0))
	{
	}
	return iVar0;
}

void func_972(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

int func_973(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

int func_974()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

var func_975(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_976(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	
	if (!func_1432(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_974())
	{
		return -1;
	}
	uVar0 = func_975(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_913(iVar1, 0);
	func_1029(iVar1, 0);
	func_1433(iVar1, 0);
	func_978(iVar1, 0);
	func_1434(iVar1, uVar0);
	if (iParam4 != 0)
	{
		func_1435(iVar1, iParam4);
	}
	return iVar1;
}

int func_977(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_4;
	}
	return 0;
}

void func_978(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

int func_979(int iParam0)
{
	if (!func_57(iParam0))
	{
		return -15;
	}
	return func_1436(iParam0);
}

bool func_980(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1356(iParam1) || !func_1356(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_981(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])
				{
					case 987244216:
						iVar1 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])->f_2;
						if (func_31(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
						{
							iVar0++;
						}
						break;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						if (!bParam0)
						{
							iVar0++;
						}
						else
						{
							iVar2 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])->f_2;
							if (func_963(iVar2) && !func_1437(iVar2))
							{
								iVar0++;
							}
						}
						break;
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

bool func_982(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_1438(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

int func_983(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1368127279:
			return 3;
		
		case -1324765740:
			return 4;
		
		case -1119640448:
			return 6;
		
		case -1015925347:
			return 8;
		
		case -857562377:
			return 7;
		
		case -579939614:
			return 10;
		
		case -193557170:
			return 9;
		
		case 0:
			return 13;
		
		case 15:
			return 14;
		
		case 54488187:
			return 2;
		
		case 100010212:
			return 11;
		
		case 679418883:
			return 0;
		
		case 880414984:
			return 12;
		
		case 1077154516:
			return 1;
		
		case 1620037762:
			return 5;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_984(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1721991356:
			return 2;
		
		case -1439599467:
			return 23;
		
		case -1317052143:
			return 12;
		
		case -1233681761:
			return 19;
		
		case -1148613331:
			return 9;
		
		case -702816767:
			return 3;
		
		case -416908843:
			return 13;
		
		case -273223690:
			return 15;
		
		case -173507739:
			return 6;
		
		case 0:
			return 22;
		
		case 212278652:
			return 14;
		
		case 433385945:
			return 10;
		
		case 603685163:
			return 17;
		
		case 669657108:
			return 0;
		
		case 725623432:
			return 21;
		
		case 821931868:
			return 1;
		
		case 839715153:
			return 7;
		
		case 1420204096:
			return 11;
		
		case 1500834021:
			return 8;
		
		case 1632247697:
			return 18;
		
		case 1679686673:
			return 16;
		
		case 1974067816:
			return 5;
		
		case 2082228755:
			return 20;
		
		case 2137137442:
			return 4;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_985(bool bParam0, var uParam1, var uParam2)
{
	if (Global_1935630->f_18)
	{
		if ((uParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (uParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (uParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (uParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_986(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

bool func_987()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0;
}

int func_988(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5)
{
	int iVar0;
	
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_1439(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_1440(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_1441(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_1442(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_1441(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_1443(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_1441(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_1444(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_1441(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_507(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_1441(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_1445(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_1446(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_1441(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_1447(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_1441(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_1448(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_1441(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_1448(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_1441(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_1449(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_1441(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_1450(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_1441(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_1451(uParam2, 4000))
				{
					if ((func_1452(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_1453(uParam2, iParam0)) && func_1454(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_1441(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_1452(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_1453(uParam2, iParam0)) && func_1454(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_1441(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_1455(iParam0, Global_1935630->f_41))
							{
								func_1456();
								*uParam3 = 2;
								func_1441(iParam0, uParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_1455(iParam0, Global_1935630->f_41))
						{
							func_1456();
							*uParam3 = 2;
							func_1441(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_1457(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_261() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_1456();
						*uParam3 = 2;
						func_1441(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_1458())
					{
						if (func_1455(iParam0, Global_1935630->f_42))
						{
							func_1456();
							*uParam3 = 2;
							func_1441(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_1459(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_1441(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_1460(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_1441(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_1461(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_1441(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_1462(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_1441(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_1463(uParam2, 4000))
				{
					if (func_1464(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_1441(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_1465(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_1441(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_1466(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_1441(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_989(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_206(*uParam0, 1))
	{
		return;
	}
	if (!func_206(*uParam1, 1))
	{
		return;
	}
	if (iParam4 == 1)
	{
		TASK::CLEAR_PED_TASKS(*uParam0, 1, 0);
	}
	if (iParam5 == 1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
	}
	if (iParam8 == 1)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, true);
	}
	if (!func_421(*uParam0, 780511057))
	{
		TASK::TASK_COMBAT_PED(*uParam0, *uParam1, iParam2, iParam3);
	}
	PED::SET_PED_KEEP_TASK(*uParam0, bParam7);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bParam6);
}

void func_990(var uParam0, var uParam1, float fParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	
	if (!func_206(*uParam0, 1))
	{
		return;
	}
	if (!func_206(*uParam1, 1))
	{
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
	{
		PED::_0xEEED8FAFEC331A70(*uParam0, ENTITY::GET_ENTITY_COORDS(*uParam1, false, false), 1);
	}
	else if (iParam6 == 1)
	{
		TASK::CLEAR_PED_TASKS(*uParam0, 1, 0);
	}
	if (iParam7 == 1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
	}
	if (iParam11 == -1)
	{
		iVar0 = 33346;
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iVar0, false);
	}
	else
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iParam11, false);
	}
	if (iParam10 == -1)
	{
		iVar0 = 0;
		iVar0 = 132;
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iVar0, true);
	}
	else
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, iParam10, true);
	}
	if (!func_421(*uParam0, 518218985))
	{
		TASK::TASK_SMART_FLEE_PED(*uParam0, *uParam1, fParam2, iParam3, iParam4, fParam5, 0);
	}
	PED::SET_PED_KEEP_TASK(*uParam0, bParam9);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bParam8);
}

bool func_991(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

bool func_992(int iParam0)
{
	if (!func_1467(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

int func_993(int iParam0)
{
	if (func_1467(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_994(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		
		case 1:
			fVar2 = 1f;
			break;
		
		case 2:
			fVar2 = 2f;
			break;
		
		case 3:
			fVar2 = 3f;
			break;
		
		case 4:
			fVar2 = 4f;
			break;
		
		case 5:
			fVar2 = 6f;
			break;
		
		case 6:
			fVar2 = 8f;
			break;
		
		case 7:
			fVar2 = 12f;
			break;
		
		case 8:
			fVar3 = 1f;
			break;
		
		case 9:
			fVar3 = 2f;
			break;
		
		case 10:
			fVar3 = 3f;
			break;
		
		case 11:
			fVar3 = 4f;
			break;
		
		case 12:
			fVar3 = 5f;
			break;
		
		case 13:
			fVar3 = 6f;
			break;
		
		case 14:
			fVar3 = 7f;
			break;
		
		case 15:
			fVar3 = 8f;
			break;
		
		case 16:
			fVar3 = 10f;
			break;
		
		case 17:
			fVar3 = 12f;
			break;
		
		case 18:
			fVar3 = 15f;
			break;
		
		case 19:
			fVar3 = 18f;
			break;
		
		case 20:
			fVar3 = 20f;
			break;
		
		case 21:
			fVar3 = 25f;
			break;
		
		case 22:
			fVar2 = -1f;
			break;
		
		case 23:
			fVar3 = -5f;
			break;
		
		case 24:
			fVar3 = -7f;
			break;
		
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

void func_995(int iParam0, int iParam1, float fParam2, var uParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		
		case 1:
			fVar2 = 1f;
			break;
		
		case 2:
			fVar2 = 2f;
			break;
		
		case 3:
			fVar2 = 3f;
			break;
		
		case 4:
			fVar2 = 4f;
			break;
		
		case 5:
			fVar2 = 6f;
			break;
		
		case 6:
			fVar2 = 8f;
			break;
		
		case 7:
			fVar2 = 12f;
			break;
		
		case 8:
			fVar3 = 1f;
			break;
		
		case 9:
			fVar3 = 2f;
			break;
		
		case 10:
			fVar3 = 3f;
			break;
		
		case 11:
			fVar3 = 4f;
			break;
		
		case 12:
			fVar3 = 5f;
			break;
		
		case 13:
			fVar3 = 6f;
			break;
		
		case 14:
			fVar3 = 7f;
			break;
		
		case 15:
			fVar3 = 8f;
			break;
		
		case 16:
			fVar3 = 10f;
			break;
		
		case 17:
			fVar3 = 12f;
			break;
		
		case 18:
			fVar3 = 15f;
			break;
		
		case 19:
			fVar3 = 18f;
			break;
		
		case 20:
			fVar3 = 20f;
			break;
		
		case 21:
			fVar3 = 25f;
			break;
		
		case 22:
			fVar2 = -1f;
			break;
		
		case 23:
			fVar3 = -5f;
			break;
		
		case 24:
			fVar3 = -7f;
			break;
		
		case 25:
			fVar3 = -8f;
			break;
	}
	func_1468(iParam0, uParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

int func_996(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 0;
	}
	return 1;
}

int func_997(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
	}
	return 0;
}

Vector3 func_998(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_15;
}

float func_999()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}
	return 25f;
}

bool func_1000()
{
	return Global_1894899 & 2 != 0;
}

int func_1001(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	if (!bParam1 && func_1469(iParam0, uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_1002(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return 0;
	}
	if (func_1470(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return 0;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return 1;
	}
	return 0;
}

bool func_1003(int iParam0)
{
	return func_1437(iParam0);
}

bool func_1004(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

int func_1005(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!bParam1 && func_523(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

float func_1006(int iParam0)
{
	return (((*Global_1347702)[iParam0 /*49*/])->f_18 / 2f);
}

int func_1007()
{
	int iVar0;
	
	if (func_1471())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_1905944[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1008(bool bParam0)
{
	if (func_1472())
	{
		return 0;
	}
	if (HUD::_0x7EC0D68233E391AC(5) == 2)
	{
		return 0;
	}
	if ((!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!func_1007())
		{
			return 0;
		}
	}
	if (Global_16)
	{
		return 0;
	}
	if (!func_1181())
	{
		return 0;
	}
	if (MISC::_0xF236C84C6ADFCB2F())
	{
		return 0;
	}
	if (func_1473())
	{
		return 0;
	}
	return 1;
}

bool func_1009(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

struct<8> func_1010(var uParam0)
{
	return uParam0->f_358;
}

struct<8> func_1011(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> Var18;
	
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

struct<4> func_1012(var uParam0)
{
	return uParam0->f_344;
}

char* func_1013(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == 11966224)
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_1474(iVar0);
}

void func_1014(struct<4> Param0)
{
	int iVar0;
	int iVar1;
	
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1475(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_1475(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1476(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1477(8);
}

struct<8> func_1015()
{
	char cVar0[64];
	
	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

char* func_1016()
{
	return "unnamed";
}

void func_1017(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
	uParam0->f_4 = iParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = PED::_0x4C39C95AE5DB1329(iParam1, bParam2, iVar0);
}

void func_1018(var uParam0)
{
	int iVar0;
	
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_348))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_348, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) || func_1206(uParam0->f_13[iVar0 /*12*/], 2))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
			{
				func_1279(uParam0->f_13[iVar0 /*12*/], 1);
			}
		}
		iVar0++;
	}
}

void func_1019(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) || func_1206(uParam0->f_13[iVar0 /*12*/], 2))
		{
			if (func_1206(uParam0->f_13[iVar0 /*12*/], 1) || ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
			{
				func_1478(uParam0, &((uParam0->f_13[iVar0 /*12*/])->f_1), &(uParam0->f_13[iVar0 /*12*/]), (uParam0->f_13[iVar0 /*12*/])->f_9);
				if (iParam1 && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_13[iVar0 /*12*/])))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/]));
					if (iVar1 != Global_35 && !func_1206(uParam0->f_13[iVar0 /*12*/], 16))
					{
						func_1479(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_1020(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1021(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_776, iVar0, func_1480(iVar0));
		iVar0++;
	}
}

void func_1022(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1023(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1024(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	
	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_1481(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_1025(int iParam0)
{
	switch (iParam0)
	{
		case -1398443261:
		case -1297016068:
		case -1134756023:
		case -900222268:
		case -592887111:
		case -26529079:
		case 264503396:
		case 286955722:
		case 462409959:
		case 501744437:
		case 953896601:
		case 958101616:
		case 1594496117:
		case 1912073755:
		case 1960786232:
		case 1976314726:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_1026(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		
		case -2106214197:
			return 104;
		
		case -2101264851:
			return 195;
		
		case -2073072369:
			return 59;
		
		case -2069570138:
			return 25;
		
		case -2066272360:
			return 357;
		
		case -2058120606:
			return 197;
		
		case -2038424081:
			return 49;
		
		case -2034257789:
			return 92;
		
		case -2022369555:
			return 265;
		
		case -2021582629:
			return 112;
		
		case -2020023971:
			return 278;
		
		case -1957523409:
			return 208;
		
		case -1952856164:
			return 165;
		
		case -1949204933:
			return 276;
		
		case -1925798111:
			return 41;
		
		case -1861414976:
			return 353;
		
		case -1852605133:
			return 10;
		
		case -1847672446:
			return 376;
		
		case -1840704908:
			return 289;
		
		case -1838712533:
			return 26;
		
		case -1838352012:
			return 57;
		
		case -1835851517:
			return 56;
		
		case -1831552326:
			return 123;
		
		case -1825294305:
			return 266;
		
		case -1824738758:
			return 277;
		
		case -1818850842:
			return 253;
		
		case -1799960545:
			return 257;
		
		case -1764522338:
			return 372;
		
		case -1763509974:
			return 141;
		
		case -1741667789:
			return 64;
		
		case -1738165526:
			return 3;
		
		case -1718674470:
			return 23;
		
		case -1717960576:
			return 61;
		
		case -1711895055:
			return 13;
		
		case -1706438978:
			return 233;
		
		case -1700452710:
			return 53;
		
		case -1674179981:
			return 55;
		
		case -1666278201:
			return 33;
		
		case -1612662716:
			return 201;
		
		case -1610966108:
			return 322;
		
		case -1582926490:
			return 146;
		
		case -1579419919:
			return 147;
		
		case -1558439474:
			return 301;
		
		case -1556423728:
			return 218;
		
		case -1532284567:
			return 116;
		
		case -1530132748:
			return 311;
		
		case -1524512402:
			return 209;
		
		case -1523910291:
			return 155;
		
		case -1455998786:
			return 338;
		
		case -1447311849:
			return 215;
		
		case -1436021162:
			return 172;
		
		case -1433686245:
			return 12;
		
		case -1425209566:
			return 32;
		
		case -1419919497:
			return 22;
		
		case -1414537028:
			return 73;
		
		case -1405998267:
			return 105;
		
		case -1344601768:
			return 314;
		
		case -1340339190:
			return 331;
		
		case -1329135070:
			return 140;
		
		case -1318987693:
			return 222;
		
		case -1311865656:
			return 37;
		
		case -1296807958:
			return 320;
		
		case -1283202000:
			return 321;
		
		case -1282804314:
			return 270;
		
		case -1278074582:
			return 171;
		
		case -1271608261:
			return 98;
		
		case -1257057567:
			return 21;
		
		case -1241340344:
			return 300;
		
		case -1236261996:
			return 235;
		
		case -1232809834:
			return 113;
		
		case -1230112817:
			return 170;
		
		case -1223121209:
			return 126;
		
		case -1215445344:
			return 131;
		
		case -1209597203:
			return 333;
		
		case -1206122982:
			return 156;
		
		case -1187950766:
			return 45;
		
		case -1179948750:
			return 136;
		
		case -1170496998:
			return 46;
		
		case -1164215952:
			return 234;
		
		case -1151084372:
			return 124;
		
		case -1145519186:
			return 100;
		
		case -1124061431:
			return 242;
		
		case -1123615607:
			return 29;
		
		case -1080627546:
			return 378;
		
		case -1077783786:
			return 194;
		
		case -1063147448:
			return 151;
		
		case -1062490780:
			return 79;
		
		case -1060078174:
			return 239;
		
		case -1056767524:
			return 176;
		
		case -1053549743:
			return 58;
		
		case -1029225159:
			return 106;
		
		case -1014145132:
			return 288;
		
		case -978957786:
			return 251;
		
		case -959357075:
			return 36;
		
		case -950054349:
			return 152;
		
		case -939420910:
			return 44;
		
		case -939114198:
			return 221;
		
		case -919512195:
			return 40;
		
		case -911126844:
			return 336;
		
		case -897750037:
			return 334;
		
		case -895073533:
			return 356;
		
		case -879507474:
			return 236;
		
		case -868076593:
			return 84;
		
		case -857964358:
			return 83;
		
		case -853383233:
			return 65;
		
		case -851626677:
			return 339;
		
		case -828139293:
			return 260;
		
		case -811637947:
			return 245;
		
		case -796902762:
			return 88;
		
		case -792853067:
			return 254;
		
		case -789397228:
			return 262;
		
		case -785605431:
			return 250;
		
		case -781631220:
			return 345;
		
		case -764163380:
			return 228;
		
		case -748969569:
			return 78;
		
		case -741351766:
			return 60;
		
		case -736853952:
			return 366;
		
		case -734416508:
			return 340;
		
		case -699277634:
			return 4;
		
		case -693828600:
			return 323;
		
		case -683458244:
			return 80;
		
		case -666014935:
			return 157;
		
		case -664512648:
			return 67;
		
		case -664252410:
			return 191;
		
		case -644722288:
			return 261;
		
		case -640663440:
			return 214;
		
		case -639037538:
			return 185;
		
		case -628542779:
			return 71;
		
		case -622554983:
			return 370;
		
		case -618620429:
			return 187;
		
		case -545450213:
			return 377;
		
		case -538889627:
			return 175;
		
		case -538880323:
			return 174;
		
		case -534215902:
			return 130;
		
		case -524787708:
			return 352;
		
		case -524145696:
			return 117;
		
		case -523522517:
			return 364;
		
		case -515561750:
			return 238;
		
		case -503955743:
			return 249;
		
		case -502473159:
			return 343;
		
		case -502324015:
			return 8;
		
		case -491981251:
			return 186;
		
		case -468693731:
			return 111;
		
		case -464836488:
			return 268;
		
		case -460024530:
			return 316;
		
		case -434590080:
			return 225;
		
		case -404698347:
			return 205;
		
		case -397760715:
			return 143;
		
		case -389056691:
			return 272;
		
		case -360036154:
			return 368;
		
		case -356975260:
			return 103;
		
		case -355531636:
			return 337;
		
		case -351362068:
			return 220;
		
		case -350863510:
			return 162;
		
		case -349064220:
			return 362;
		
		case -334729750:
			return 69;
		
		case -333135263:
			return 361;
		
		case -330120947:
			return 360;
		
		case -306246697:
			return 375;
		
		case -299522880:
			return 213;
		
		case -270094635:
			return 267;
		
		case -261141318:
			return 30;
		
		case -259123672:
			return 244;
		
		case -254562075:
			return 132;
		
		case -238080464:
			return 121;
		
		case -233743613:
			return 273;
		
		case -223469678:
			return 204;
		
		case -220282381:
			return 139;
		
		case -191424539:
			return 149;
		
		case -182889087:
			return 177;
		
		case -154581735:
			return 309;
		
		case -150493654:
			return 97;
		
		case -144653976:
			return 219;
		
		case -129643890:
			return 11;
		
		case -108780030:
			return 317;
		
		case -108307814:
			return 28;
		
		case -99303535:
			return 167;
		
		case -86199844:
			return 145;
		
		case -80522843:
			return 154;
		
		case -76237062:
			return 373;
		
		case -75024673:
			return 258;
		
		case -63926460:
			return 89;
		
		case -61411516:
			return 325;
		
		case -35658630:
			return 24;
		
		case -25901845:
			return 290;
		
		case -9438024:
			return 129;
		
		case -1:
			return 0;
		
		case 0:
			return 1;
		
		case 2639906:
			return 153;
		
		case 8924991:
			return 297;
		
		case 26054262:
			return 248;
		
		case 26245360:
			return 237;
		
		case 38162571:
			return 74;
		
		case 52706132:
			return 243;
		
		case 54073871:
			return 76;
		
		case 74872959:
			return 348;
		
		case 93964309:
			return 358;
		
		case 94263042:
			return 291;
		
		case 106479759:
			return 101;
		
		case 141950038:
			return 114;
		
		case 153152452:
			return 86;
		
		case 168171957:
			return 183;
		
		case 171107021:
			return 381;
		
		case 171499483:
			return 283;
		
		case 187862543:
			return 16;
		
		case 192515737:
			return 14;
		
		case 198200492:
			return 241;
		
		case 210001842:
			return 62;
		
		case 224551212:
			return 142;
		
		case 227918160:
			return 182;
		
		case 229371495:
			return 344;
		
		case 235928616:
			return 286;
		
		case 249726958:
			return 164;
		
		case 269047710:
			return 54;
		
		case 273461605:
			return 81;
		
		case 280705402:
			return 95;
		
		case 282809459:
			return 119;
		
		case 299694527:
			return 275;
		
		case 300221584:
			return 138;
		
		case 302205488:
			return 216;
		
		case 311708813:
			return 198;
		
		case 320943355:
			return 133;
		
		case 330026330:
			return 66;
		
		case 345808947:
			return 287;
		
		case 356365161:
			return 47;
		
		case 371850993:
			return 281;
		
		case 373691918:
			return 188;
		
		case 374115931:
			return 90;
		
		case 405586984:
			return 34;
		
		case 407136781:
			return 173;
		
		case 409602249:
			return 293;
		
		case 417081698:
			return 17;
		
		case 417525590:
			return 303;
		
		case 420709909:
			return 42;
		
		case 426191476:
			return 15;
		
		case 434558613:
			return 199;
		
		case 439465264:
			return 108;
		
		case 440043364:
			return 31;
		
		case 442317566:
			return 302;
		
		case 449774763:
			return 227;
		
		case 459290420:
			return 52;
		
		case 469053995:
			return 231;
		
		case 473295046:
			return 2;
		
		case 476714362:
			return 232;
		
		case 478884033:
			return 148;
		
		case 479419429:
			return 305;
		
		case 509781469:
			return 350;
		
		case 514932331:
			return 246;
		
		case 522677506:
			return 279;
		
		case 526003171:
			return 355;
		
		case 527226204:
			return 159;
		
		case 544152906:
			return 115;
		
		case 559573222:
			return 252;
		
		case 582380806:
			return 326;
		
		case 588987611:
			return 179;
		
		case 618699440:
			return 77;
		
		case 630808005:
			return 128;
		
		case 651395116:
			return 294;
		
		case 657241756:
			return 189;
		
		case 664571177:
			return 312;
		
		case 665676602:
			return 296;
		
		case 682839815:
			return 327;
		
		case 689024866:
			return 134;
		
		case 689930684:
			return 207;
		
		case 704802028:
			return 178;
		
		case 723021499:
			return 264;
		
		case 747514327:
			return 354;
		
		case 753127042:
			return 48;
		
		case 757752139:
			return 109;
		
		case 784360470:
			return 330;
		
		case 791041526:
			return 18;
		
		case 817925178:
			return 240;
		
		case 868326136:
			return 285;
		
		case 885203519:
			return 379;
		
		case 885378256:
			return 351;
		
		case 929582877:
			return 335;
		
		case 931649776:
			return 224;
		
		case 932909855:
			return 298;
		
		case 945612176:
			return 247;
		
		case 965986934:
			return 19;
		
		case 976539083:
			return 310;
		
		case 1010885152:
			return 7;
		
		case 1015669983:
			return 122;
		
		case 1050128548:
			return 284;
		
		case 1064154891:
			return 110;
		
		case 1067254646:
			return 319;
		
		case 1074873669:
			return 144;
		
		case 1140218954:
			return 27;
		
		case 1151197909:
			return 256;
		
		case 1159471771:
			return 329;
		
		case 1160698568:
			return 135;
		
		case 1164928979:
			return 158;
		
		case 1166612791:
			return 347;
		
		case 1167397384:
			return 307;
		
		case 1177464213:
			return 38;
		
		case 1186594126:
			return 230;
		
		case 1193080109:
			return 184;
		
		case 1203043430:
			return 274;
		
		case 1205826474:
			return 85;
		
		case 1207048789:
			return 169;
		
		case 1213993593:
			return 160;
		
		case 1216784232:
			return 269;
		
		case 1221801385:
			return 374;
		
		case 1238086793:
			return 313;
		
		case 1250636944:
			return 259;
		
		case 1302228510:
			return 315;
		
		case 1306158345:
			return 202;
		
		case 1321892118:
			return 324;
		
		case 1350371763:
			return 20;
		
		case 1350391819:
			return 75;
		
		case 1352699670:
			return 271;
		
		case 1358491857:
			return 263;
		
		case 1360745816:
			return 82;
		
		case 1376646519:
			return 223;
		
		case 1399676951:
			return 210;
		
		case 1410198831:
			return 217;
		
		case 1433244935:
			return 166;
		
		case 1441416901:
			return 211;
		
		case 1446719356:
			return 380;
		
		case 1453909576:
			return 125;
		
		case 1466547629:
			return 120;
		
		case 1478132521:
			return 367;
		
		case 1485195808:
			return 50;
		
		case 1485494263:
			return 102;
		
		case 1488286867:
			return 295;
		
		case 1488453464:
			return 212;
		
		case 1497516462:
			return 5;
		
		case 1500064347:
			return 72;
		
		case 1509509592:
			return 35;
		
		case 1512816328:
			return 168;
		
		case 1517904467:
			return 206;
		
		case 1522511407:
			return 280;
		
		case 1549124796:
			return 342;
		
		case 1557082963:
			return 163;
		
		case 1582370975:
			return 359;
		
		case 1583012985:
			return 304;
		
		case 1591451572:
			return 365;
		
		case 1607768502:
			return 9;
		
		case 1609506757:
			return 107;
		
		case 1626481264:
			return 118;
		
		case 1643531967:
			return 127;
		
		case 1649996811:
			return 181;
		
		case 1660024373:
			return 150;
		
		case 1665756137:
			return 93;
		
		case 1672143046:
			return 383;
		
		case 1691618738:
			return 68;
		
		case 1698972798:
			return 318;
		
		case 1703398561:
			return 332;
		
		case 1703426636:
			return 43;
		
		case 1708045337:
			return 346;
		
		case 1713221411:
			return 137;
		
		case 1743048395:
			return 226;
		
		case 1744443559:
			return 349;
		
		case 1766284049:
			return 94;
		
		case 1776302352:
			return 363;
		
		case 1804403874:
			return 382;
		
		case 1822001510:
			return 200;
		
		case 1846061697:
			return 99;
		
		case 1850082804:
			return 196;
		
		case 1867912207:
			return 70;
		
		case 1884271742:
			return 51;
		
		case 1926308480:
			return 96;
		
		case 1932172605:
			return 328;
		
		case 1944170089:
			return 161;
		
		case 1947931439:
			return 229;
		
		case 1952610440:
			return 203;
		
		case 1954026328:
			return 371;
		
		case 1982676972:
			return 91;
		
		case 2008888900:
			return 180;
		
		case 2016141805:
			return 6;
		
		case 2019386373:
			return 190;
		
		case 2024121624:
			return 193;
		
		case 2024383613:
			return 369;
		
		case 2024769126:
			return 308;
		
		case 2037589949:
			return 63;
		
		case 2051822093:
			return 299;
		
		case 2077022393:
			return 306;
		
		case 2080210939:
			return 282;
		
		case 2091701359:
			return 39;
		
		case 2109952320:
			return 192;
		
		case 2113625508:
			return 341;
		
		case 2127577956:
			return 255;
		
		case 2136753624:
			return 87;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_1027(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(Global_1934765->f_21[iVar1], iVar2);
}

int func_1028(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_2;
	}
	return -1;
}

void func_1029(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_1030(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	if (iParam0 == -1 || iParam0 == 0)
	{
		*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
	}
	else
	{
		Global_1898164->f_1[iParam1 /*5*/] = iParam0;
		(Global_1898164->f_1[iParam1 /*5*/])->f_1 = func_361(iParam0);
		func_1482((Global_1898164->f_1[iParam1 /*5*/])->f_1, &((Global_1898164->f_1[iParam1 /*5*/])->f_3), &((Global_1898164->f_1[iParam1 /*5*/])->f_4), &((Global_1898164->f_1[iParam1 /*5*/])->f_2));
	}
}

void func_1031(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1483((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1483(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_57(&(Global_1898164->f_1[0 /*5*/])))
	{
		func_413(&(Global_1898164->f_1[0 /*5*/]), 3);
	}
}

void func_1032(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if ((Global_1914319->f_15936[iVar0 /*6*/])->f_5)
		{
			(Global_1914319->f_15936[iVar0 /*6*/])->f_5 = 0;
		}
		func_1484(Global_1914319->f_15936[iVar0 /*6*/], bParam0);
		iVar0++;
	}
}

void func_1033(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_1484(Global_1934051->f_23[iVar0], bParam0);
		iVar0++;
	}
}

void func_1034(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_1484(Global_1899778->f_34[iVar0], bParam0);
		(*Global_1899778)[iVar0] = 0;
		iVar0++;
	}
}

void func_1035(bool bParam0)
{
	func_1484(Global_1956612, bParam0);
}

void func_1036(bool bParam0)
{
	func_1484(&(Global_1415412->f_3), bParam0);
}

void func_1037(bool bParam0)
{
	if (func_521(Global_1934051->f_33))
	{
		func_1485(Global_1934051->f_33, 7148155);
	}
	func_1484(&(Global_1934051->f_33), bParam0);
}

void func_1038(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_1487(func_1486(iVar0));
		if (iVar1 != 0)
		{
			func_1485(Global_1934051[iVar0 /*2*/], iVar1);
		}
		if (((*Global_1934051)[iVar0 /*2*/])->f_1)
		{
			((*Global_1934051)[iVar0 /*2*/])->f_1 = 0;
		}
		func_1484((*Global_1934051)[iVar0 /*2*/], bParam0);
		iVar0++;
	}
}

void func_1039(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		func_1488(iVar0, -1);
		func_1489(iVar0, 0);
		func_1490(iVar0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
		{
			if (bParam0)
			{
				MAP::SET_RADAR_ZOOM(&(Global_36307[iVar0]));
			}
			MAP::REMOVE_BLIP(Global_36307[iVar0]);
		}
		iVar0++;
	}
}

void func_1040(int iParam0, bool bParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, iParam2);
}

void func_1041(var uParam0, var uParam1)
{
	struct<2> Var0;
	
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(2, &Var0, 2, 2);
}

void func_1042(var uParam0, var uParam1)
{
	struct<2> Var0;
	
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(5, &Var0, 2, 2);
}

void func_1043(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == 383145463 || *iParam1 == -169598849) || *iParam1 == 600245965) || *iParam1 == 38266755) || *iParam1 == -510274983) || *iParam1 == 1252941818) || *iParam1 == 575725904) || *iParam1 == 1311933014)
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case -1273613561:
		case -776789570:
		case -763072541:
		case -486390692:
		case 50483426:
		case 215164947:
		case 247176142:
		case 347599949:
		case 852072701:
		case 861896523:
		case 1017000466:
		case 1245530084:
		case 1336863290:
		case 1485366395:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		
		case 363815774:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		
		case -1910990966:
		case -1421951598:
		case 1921874948:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		
		case -1090280091:
		case -1076294934:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		
		case -1011228908:
		case -1008616424:
		case 424175505:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		
		case -1208814201:
		case -390289284:
		case 1112571710:
		case 1478983280:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_1044(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

void func_1045(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_1172(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_1491(1, bVar1, 1, sVar2);
		func_1492(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_1493(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_669();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_1493(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_1493(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

int func_1046(var uParam0)
{
	switch (uParam0->f_752)
	{
		case 0:
			return -1203766680;
		
		case 1:
			return -1442882073;
		
		case 2:
			return -1342838312;
		
		case 3:
			return -1579201109;
		
		case 4:
			return 1325967359;
		
		case 5:
			return 1026098240;
		
		case 6:
			return 176660218;
		
		case 7:
			return 1555579742;
		
		case 8:
			return 637359589;
		
		case 9:
			return 1557025440;
		
		case 10:
			return -899076624;
		
		case 11:
			return -1213233027;
		
		case 12:
			return 617571003;
		
		case 13:
			return 336380214;
		
		case 14:
			return -2137810390;
		
		case 15:
			return -280594546;
		
		case 16:
			return -601894591;
		
		case 17:
			return -1158115597;
		
		case 18:
			return 934021212;
		
		case 19:
			return 717122929;
		
		case 20:
			return -544418033;
		
		case 21:
			return -834587528;
		
		case 22:
			return -179764601;
		
		case 23:
			return 1672863587;
		
		case 24:
			return 419547640;
	}
	return 0;
}

var func_1047(int iParam0)
{
	var uVar0;
	
	if (!func_963(iParam0))
	{
		return uVar0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_8;
}

bool func_1048(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	return func_1494(uParam0, iParam1, sParam2, iParam3, iParam4, iParam5);
}

void func_1049(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	
	if (Global_1935630->f_12)
	{
		return;
	}
	fVar0 = 1f;
	switch (iParam0)
	{
		case -1871534317:
		case 1140525470:
			fVar0 = 0f;
			break;
		
		case -1415276238:
		case 1823606944:
			fVar0 = 1.5f;
			break;
		
		case -530524:
		case 898879241:
			fVar0 = 2f;
			break;
		
		case -1115154469:
			fVar0 = 3f;
			break;
		
		case -668482597:
		case 147004056:
			break;
	}
	PED::FORCE_PED_MOTION_STATE(Global_35, iParam0, bParam2, iParam3, false);
	if (bParam4)
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), fVar0, iParam1, ENTITY::GET_ENTITY_HEADING(Global_35), bParam6, bParam7);
	}
	else
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), fVar0, iParam1, fParam5, bParam6, bParam7);
	}
}

void func_1050(var uParam0, var uParam1)
{
	uParam0->f_341 = uParam1;
	func_1495(uParam0, 2);
}

void func_1051(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, var uParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return;
	}
	if (func_587(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar3 = func_205(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if ((func_1496() && !ENTITY::IS_ENTITY_DEAD(iVar1)) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
			if (iParam9 == 1)
			{
				if (PED::_0x33FA048675821DA7(iVar0, 3))
				{
					PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1f);
					if (iParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (PED::_0x33FA048675821DA7(iVar0, 3))
							{
								PED::_0x06D26A96CA1BCA75(iVar2, 3, 0f, 0);
							}
						}
					}
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !func_1052(iParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_1052(iParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, iParam12);
			}
		}
	}
}

int func_1052(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_1053(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_1054(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;
	
	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_1497(iParam0, 1);
	func_1498(iParam0, 1);
	func_1499(iParam0, 128);
}

int func_1055(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1056()
{
	PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
	func_1500(0);
	Global_1935689->f_6 = 1;
}

int func_1057(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_0xB676EFDA03DADA52(iParam0, 0) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 308778731, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1002303471, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
	if (func_421(iParam0, 1041577989))
	{
		return 0;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_1058(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_797(vVar0, vVar3, vParam1);
}

void func_1059(int iParam0, int iParam1)
{
	func_1501(iParam0, iParam1);
}

int func_1060(int iParam0, int iParam1)
{
	float fVar0;
	
	if (!func_421(iParam0, 1041577989))
	{
		return 1;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(iParam0, 1041577989);
	if (func_485(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return 1;
		}
		return 0;
	}
	if (func_485(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return 1;
		}
		return 0;
	}
	if (func_485(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_1061(int iParam0, int iParam1)
{
	func_1502(iParam0, iParam1);
}

bool func_1062(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_1063(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_1067(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1064(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_1065(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_1066(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;
	
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1219(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1221(&Var0, func_1220(0));
	}
	if (!func_1222(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1065(iVar14);
	return uVar15;
}

int func_1067(bool bParam0)
{
	if (func_200() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_1068(int iParam0)
{
	return func_610(iParam0) == -427144552;
}

int func_1069(int iParam0)
{
	var uVar0;
	
	if (func_200() != -1)
	{
		return 0;
	}
	if (func_632(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_1075(iParam0, &uVar0, 1, 0, 0);
	}
	return func_288(iParam0, 1, 0);
}

void func_1070(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;
	
	if (func_610(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_637(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (iParam2 || !func_579(iVar0))
	{
		if (func_200() == -1)
		{
			func_580(iVar0);
		}
		if (iParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 0) && func_612(iParam0, 0, 0) == 0))
		{
			if (!*uParam3 && !iParam4 == 1248274121)
			{
				func_691(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}
}

void func_1071(int iParam0, var uParam1)
{
	int iVar0;
	
	if (func_631(iParam0, 58855631))
	{
		func_1503(iParam0, -915411861, &iVar0, 1);
		*uParam1 = (*uParam1 * iVar0);
	}
}

struct<5> func_1072(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	
	Var0 = { func_1504(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_610(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_1098(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		
		case -427144552:
			Var0 = { func_1220(bParam1) };
			if (iParam2 && func_1505(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1096(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1096(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1097(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_1506(bParam1) };
			switch (func_635(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		
		case -2130996531:
			if (func_1507(iParam0, -1823706425))
			{
				Var0 = { func_1098(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_1507(iParam0, -1483207246))
			{
				Var0 = { func_1098(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_1508(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_1073(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_609(iParam0, 0))
	{
		return 0;
	}
	if (!func_638(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_1067(bParam3), iParam0);
}

int func_1074(int iParam0, bool bParam1)
{
	if (func_642(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_1067(bParam1), iParam0, 0);
}

int func_1075(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;
	
	func_1509(&iParam0);
	if (!func_609(iParam0, 0))
	{
		return 0;
	}
	if (!func_638(0))
	{
		bParam3 = true;
	}
	if (func_1068(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
		{
			Var0 = { func_1220(0) };
			Var4.f_9 = -1591664384;
			if (!func_1096(iParam0, &Var0, 1728382685, 0))
			{
				return 0;
			}
			else if (func_1097(iParam0, &Var4, 1728382685))
			{
				return 0;
			}
			if (func_1505(iParam0, 1))
			{
				if (!func_1096(iParam0, &Var0, -649335959, 0))
				{
					return 0;
				}
				else if (func_1097(iParam0, &Var4, -649335959))
				{
					return 0;
				}
			}
		}
		else if (!func_1510(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_1073(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return 0;
	}
	else if (iVar27 == 0)
	{
		return 1;
	}
	if (bParam3)
	{
		iVar28 = func_1511(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_1067(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_1076(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

int func_1077()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_1078(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_1079(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (func_200() != -1)
	{
		return;
	}
	iVar0 = func_1512(iParam0);
	fVar1 = func_1513(iParam0);
	if ((Global_1347477->f_117 || !func_633(31)) || !func_1514(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1515(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_1516(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_1169(MISC::_CREATE_VAR_STRING(6, func_1517(iParam0), fVar1), "itemtype_textures", func_1518(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1080(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		
		case 1:
			return -1021394391;
		
		case 2:
			return -987306668;
		
		case 3:
			return -1028735103;
		
		case 4:
			return 515229791;
		
		case 5:
			return -1230863414;
		
		case 6:
			return 232875659;
		
		case 7:
			return 1423129537;
		
		case 8:
			return -435742319;
		
		case 9:
			return -1854702679;
		
		case 10:
			return 1265323898;
		
		case 11:
			return -479775696;
		
		default:
			break;
	}
	return 0;
}

int func_1081(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	
	if (!func_1374(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_1082(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_627() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1519(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1520(), 12);
			}
			break;
		
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_1122() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1521(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_1122(), 30);
			}
			break;
		
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1522(), 13);
			}
			break;
		
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_1123() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1523(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_1123(), 10);
			}
			break;
		
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1081(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_1083(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 578982838))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 349797279))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 1974744712))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 1974744712);
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return 1;
}

int func_1084(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_1085(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_1086(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1524(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_288(iVar2, 1, 0) || func_1526(func_1525(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1089(func_1524(iVar0))), func_1089(func_1524(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1122() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1527(iVar0)), func_1527(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1521() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1527(iVar0)), func_1527(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1527(iVar0)), func_1527(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1133(iParam3, func_1528(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1129(iVar2) - iParam7) >= func_1081(iParam3, func_1529(iVar0));
				}
				else
				{
					bVar1 = func_1129(iVar2) >= func_1081(iParam3, func_1529(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1129(iVar2) + iParam7) >= func_1081(iParam3, func_1529(iVar0));
			}
			else
			{
				bVar1 = func_1129(iVar2) >= func_1081(iParam3, func_1529(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1530(iVar2)), func_1530(iVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1531(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1532(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1532(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1123() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1533(iVar0)), func_1533(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1523() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1533(iVar0)), func_1533(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1533(iVar0)), func_1533(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1133(iParam3, func_1528(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1129(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1534(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1534(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1535(iVar2)), func_1535(iVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_1087(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam3 == 8)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1522() >= 13)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 0;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam2 == 678508515)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", iVar0, 1, 0);
	}
	return 1;
}

int func_1088(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_57(func_56(0)) && ((func_487(0) == 1 || func_487(0) == 8) || func_487(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return 1;
}

char* func_1089(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		
		case -1021394391:
			return "COL_CC_ART_SET";
		
		case -987306668:
			return "COL_CC_LND_SET";
		
		case -1028735103:
			return "COL_CC_GRL_SET";
		
		case 515229791:
			return "COL_CC_PLT_SET";
		
		case -1230863414:
			return "COL_CC_ACT_SET";
		
		case 232875659:
			return "COL_CC_AML_SET";
		
		case 1423129537:
			return "COL_CC_VEH_SET";
		
		case -435742319:
			return "COL_CC_SPT_SET";
		
		case -1854702679:
			return "COL_CC_INV_SET";
		
		case 1265323898:
			return "COL_CC_HOR_SET";
		
		case -479775696:
			return "COL_CC_PAM_SET";
		
		default:
			break;
	}
	return "";
}

int func_1090(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_1091(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1092(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1093(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			break;
		
		case 11:
			func_1536(1);
			break;
		
		case 14:
			break;
		
		case 15:
			break;
		
		case 16:
			break;
		
		case 17:
			break;
		
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_1537(1);
			break;
		
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1537(2);
			break;
		
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1537(3);
			break;
		
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		
		case 31:
			break;
		
		case 10:
			break;
		
		case 12:
			break;
		
		case 13:
			break;
		
		case 32:
			break;
		
		case 33:
			func_1538(1);
			break;
		
		case 34:
			func_1539(1);
			break;
		
		case 35:
			func_1540(1);
			break;
		
		case 36:
			break;
		
		case 37:
			func_1541(0);
			break;
		
		case 38:
			func_1542(0);
			break;
		
		case 39:
			func_1543(0);
			break;
		
		case 40:
			break;
		
		case 41:
			break;
		
		case 42:
			break;
		
		case 43:
			break;
		
		case 1:
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		
		case 2:
			if ((!&Global_1879534 && func_624()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_820("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			func_303(586, 0);
			break;
		
		case 3:
			if ((!&Global_1879534 && func_624()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_820("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			func_303(587, 0);
			break;
		
		case 4:
			if ((!&Global_1879534 && func_624()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_820("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			func_303(588, 0);
			break;
		
		case 5:
			if ((!&Global_1879534 && func_624()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_820("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 5);
			func_303(589, 0);
			break;
		
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_200() == -1)
			{
				if (!func_1162(99217379) || func_1544(99217379) == 2110595215)
				{
					if (func_350())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_288(iVar0, 1, 0))
					{
						func_684(iVar0, 1, 752097756);
					}
					func_663(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		
		case 48:
			if (func_200() == -1)
			{
				if (!func_288(1013902307, 1, 0))
				{
					func_684(1013902307, 1, 752097756);
				}
			}
			break;
		
		case 50:
			if (func_200() == -1)
			{
				if (!func_288(1013902307, 1, 0))
				{
					func_684(1013902307, 1, 752097756);
				}
				if (!func_288(142640135, 1, 0))
				{
					func_684(142640135, 1, 752097756);
				}
			}
			break;
		
		case 49:
			if (func_200() == -1)
			{
				if (!func_288(786809402, 1, 0))
				{
					func_684(786809402, 1, 752097756);
				}
			}
			break;
		
		case 51:
			if (func_200() == -1)
			{
				if (!func_288(786809402, 1, 0))
				{
					func_684(786809402, 1, 752097756);
				}
				if (!func_288(-518019409, 1, 0))
				{
					func_684(-518019409, 1, 752097756);
				}
			}
			break;
		
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		
		case 25:
			break;
		
		case 26:
			break;
		
		case 27:
			break;
		
		case 28:
			break;
		
		case 29:
			break;
		
		case 30:
			break;
		
		case 44:
			break;
		
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1935630->f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		
		case 46:
			func_1545();
			break;
		
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_1094(int iParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_1095(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		
		case 1:
			return 1704602624;
		
		case 2:
			return 1214181762;
		
		case 3:
			return -430578371;
		
		case 4:
			return -730381952;
		
		case 5:
			return -253503777;
		
		case 6:
			return 1352275534;
		
		case 7:
			return 1666399168;
		
		case 8:
			return -1911121386;
		
		case 9:
			return 1756656691;
		
		case 10:
			return -1774867076;
		
		case 11:
			return -421952220;
		
		case 12:
			return -1087003323;
		
		case 13:
			return 1231618917;
		
		case 14:
			return -1183777174;
		
		case 15:
			return -841767082;
		
		case 16:
			return 1043717005;
		
		case 17:
			return 142663787;
		
		case 18:
			return 1718143051;
		
		case 19:
			return -6605744;
		
		case 20:
			return 953047564;
		
		case 21:
			return 769706682;
		
		case 22:
			return 1635590003;
		
		case 23:
			return -2047978619;
		
		case 24:
			return -586319254;
		
		case 25:
			return 249896112;
		
		case 26:
			return -1060513333;
		
		case 27:
			return 1317351007;
		
		case 28:
			return -500478573;
		
		case 29:
			return -806573802;
		
		case 30:
			return -1109949204;
		
		case 31:
			return -740156546;
		
		case 32:
			return -684532710;
		
		case 33:
			return 1158805436;
		
		case 34:
			return -559473670;
		
		case 35:
			return -797147251;
		
		case 36:
			return -382216265;
		
		case 37:
			return 1419177114;
		
		case 38:
			return 1704297235;
		
		case 39:
			return -1139016418;
		
		case 40:
			return 897705377;
		
		case 41:
			return 17961769;
		
		case 42:
			return 205582207;
		
		case 43:
			return 900740963;
		
		case 44:
			return -1369589344;
		
		case 45:
			return -1695823795;
		
		case 46:
			return -41453074;
		
		case 47:
			return 539767227;
		
		case 48:
			return 1210490314;
		
		case 49:
			return -399684751;
		
		case 50:
			return 2138893455;
		
		case 51:
			return -1617010487;
		
		case 52:
			return -832377028;
		
		case 53:
			return -428040245;
		
		case 54:
			return 1279288897;
		
		case 55:
			return -594897905;
		
		case 56:
			return -1360459240;
		
		case 57:
			return 1838428396;
		
		case 58:
			return -1467846997;
		
		case 59:
			return -490610263;
		
		case 60:
			return -1885413079;
		
		case 61:
			return 708884155;
		
		case 62:
			return -134459952;
		
		case 63:
			return -1912136700;
		
		case 64:
			return -1268031552;
		
		case 65:
			return 1177953227;
		
		case 66:
			return 2130805296;
		
		case 67:
			return 38093490;
		
		case 68:
			return -269153218;
		
		case 69:
			return -1995068011;
		
		case 70:
			return -164284834;
		
		case 71:
			return 1446463345;
		
		case 72:
			return 1501315823;
		
		case 73:
			return -750379482;
		
		case 74:
			return -929560937;
		
		case 75:
			return 608323241;
		
		case 76:
			return 1030796013;
		
		case 77:
			return 1915057434;
		
		case 78:
			return -1582276476;
		
		case 79:
			return 692059311;
		
		case 80:
			return 2062839241;
		
		case 81:
			return -1884531872;
		
		case 82:
			return -866434534;
		
		case 83:
			return -1252192421;
		
		case 84:
			return 1243288963;
		
		case 85:
			return -1953772189;
		
		case 86:
			return 754411745;
		
		case 87:
			return 545309006;
		
		case 88:
			return -1089810811;
		
		case 89:
			return 1957869400;
		
		case 90:
			return -241412332;
		
		case 91:
			return -1548010959;
		
		case 92:
			return 550150488;
		
		case 93:
			return 946565453;
		
		case 94:
			return 434443248;
		
		case 95:
			return -1709914938;
		
		case 96:
			return 366686112;
		
		case 97:
			return -1370063350;
		
		case 98:
			return 2126829550;
		
		case 99:
			return 226552910;
		
		case 100:
			return 721193431;
		
		case 101:
			return -315672460;
		
		case 102:
			return 623544501;
		
		case 103:
			return 259556714;
		
		case 104:
			return -2125361825;
		
		case 105:
			return 1078230356;
		
		case 106:
			return 1885364811;
		
		case 107:
			return 1630382737;
		
		case 108:
			return 1738245512;
		
		case 109:
			return 1540262216;
		
		case 110:
			return 1016871472;
		
		case 111:
			return 13829069;
		
		case 112:
			return 737051352;
		
		case 113:
			return 1734614610;
		
		case 114:
			return -208715295;
		
		case 115:
			return 1435062936;
		
		case 116:
			return 1483055553;
		
		case 117:
			return 380335002;
		
		case 118:
			return -1079385677;
		
		case 119:
			return 676610411;
		
		case 120:
			return 2145419552;
		
		case 121:
			return 657238733;
		
		case 122:
			return 1850579281;
		
		case 123:
			return -1923957384;
		
		case 124:
			return -1142828108;
		
		case 125:
			return -1400618531;
		
		case 126:
			return -1433857135;
		
		case 127:
			return 209987206;
		
		case 128:
			return 1686943047;
		
		case 129:
			return -59178517;
		
		case 130:
			return 2134884601;
		
		case 131:
			return 651707517;
		
		case 132:
			return -633788535;
		
		case 133:
			return 116394463;
		
		case 134:
			return -1196973875;
		
		case 135:
			return 801752086;
		
		case 136:
			return 184475332;
		
		case 137:
			return -1880922659;
		
		case 138:
			return -898138634;
		
		case 139:
			return -2107418444;
		
		case 140:
			return -679970099;
		
		case 141:
			return -1531392549;
		
		case 142:
			return 1612483376;
		
		case 143:
			return 463930900;
		
		case 144:
			return -632148238;
		
		case 145:
			return 55303249;
		
		case 146:
			return 2108322089;
		
		case 147:
			return -1358896714;
		
		case 148:
			return 74475632;
		
		case 149:
			return -28710953;
		
		case 150:
			return -1791599168;
		
		case 151:
			return 1605938169;
		
		case 152:
			return 1255242276;
		
		case 153:
			return 636467727;
		
		case 154:
			return -1567688525;
		
		case 155:
			return -77886679;
		
		case 156:
			return -1057900679;
		
		case 157:
			return -1960888134;
		
		case 158:
			return -1719717295;
		
		case 159:
			return -1779244911;
		
		case 160:
			return -670540863;
		
		case 161:
			return 223362311;
		
		case 162:
			return 1150824567;
		
		case 163:
			return 974471191;
		
		case 164:
			return 1989683968;
		
		case 165:
			return 254804477;
		
		case 166:
			return 192057609;
		
		case 167:
			return 1553957817;
		
		case 168:
			return 2099829015;
		
		case 169:
			return -840300007;
		
		case 170:
			return -1948423372;
		
		case 171:
			return 981083654;
		
		case 172:
			return 1283289876;
		
		case 173:
			return -606884489;
		
		case 174:
			return -100418572;
		
		case 175:
			return 663645231;
		
		case 176:
			return 1442217033;
		
		case 177:
			return 1410986244;
		
		case 178:
			return 847409839;
		
		case 179:
			return 923926911;
		
		case 180:
			return 109995826;
		
		case 181:
			return -747412737;
		
		case 182:
			return 1114341727;
		
		case 183:
			return -539456939;
		
		case 184:
			return 45887121;
		
		case 185:
			return 913271624;
		
		case 186:
			return -1652812715;
		
		case 187:
			return -1791365775;
		
		case 188:
			return -979299941;
		
		case 189:
			return 713062001;
		
		case 190:
			return -575045963;
		
		case 191:
			return 1852965262;
		
		case 192:
			return -1398836354;
		
		case 193:
			return -1829885298;
		
		case 194:
			return -1773850357;
		
		case 195:
			return -564258009;
		
		case 196:
			return 2016532685;
		
		case 197:
			return -1070563798;
		
		case 198:
			return -1619221343;
		
		case 199:
			return -345571691;
		
		case 200:
			return 544288390;
		
		case 201:
			return 159578294;
		
		case 202:
			return -76852849;
		
		case 203:
			return 1110295244;
		
		case 204:
			return 2104563477;
		
		case 205:
			return 1947827651;
		
		case 206:
			return -933072766;
		
		case 207:
			return 2104388648;
		
		case 208:
			return -1677140601;
		
		case 209:
			return -2133097881;
		
		case 210:
			return -826678792;
		
		case 211:
			return -513522325;
		
		case 212:
			return 1970588249;
		
		case 213:
			return -2080032591;
		
		case 214:
			return 1758847745;
		
		case 215:
			return 895010282;
		
		case 216:
			return 1786352060;
		
		case 217:
			return -833319691;
		
		case 218:
			return 1591329969;
		
		case 219:
			return 2123222014;
		
		case 220:
			return -1578397674;
		
		case 221:
			return 1473261684;
		
		case 222:
			return -241855024;
		
		case 223:
			return 12999093;
		
		case 224:
			return -6796437;
		
		case 225:
			return -268116367;
		
		case 226:
			return -636470867;
		
		case 227:
			return 1737668280;
		
		case 228:
			return 892807236;
		
		case 229:
			return -733247890;
		
		case 230:
			return 24047176;
		
		case 231:
			return -1561999014;
		
		case 232:
			return -2052774042;
		
		case 233:
			return -997150586;
		
		case 234:
			return -1189569496;
		
		case 235:
			return 46488141;
		
		case 236:
			return 1046566686;
		
		case 237:
			return 325139909;
		
		case 238:
			return -1585141069;
		
		case 239:
			return 802754820;
		
		case 240:
			return 1415981582;
		
		case 241:
			return -1886147520;
		
		case 242:
			return 654877947;
		
		case 243:
			return -415648720;
		
		case 244:
			return 1221327846;
		
		case 245:
			return 923162715;
		
		case 246:
			return 625423581;
		
		case 247:
			return 326668608;
		
		case 248:
			return 669530755;
		
		case 249:
			return 429759982;
		
		case 250:
			return -2111934838;
		
		case 251:
			return 1886178087;
		
		case 252:
			return 1587783573;
		
		case 253:
			return -279722001;
		
		case 254:
			return 1310070322;
		
		case 255:
			return 724026534;
		
		case 256:
			return 137387616;
		
		case 257:
			return -653439684;
		
		case 258:
			return 1376835592;
		
		case 259:
			return -1824203570;
		
		case 260:
			return -1654197998;
		
		case 261:
			return 798987653;
		
		case 262:
			return 976923323;
		
		case 263:
			return 1167442289;
		
		case 264:
			return 986998820;
		
		case 265:
			return -2119169513;
		
		case 266:
			return -2015960939;
		
		case 267:
			return -1287636759;
		
		case 268:
			return -706917073;
		
		case 269:
			return -2166805;
		
		case 270:
			return -1391602433;
		
		case 271:
			return 1782075221;
		
		case 272:
			return 1282544585;
		
		case 273:
			return 1732594027;
		
		case 274:
			return -1058817012;
		
		case 275:
			return 1090546265;
		
		case 276:
			return -1783120823;
		
		case 277:
			return -1535745896;
		
		case 278:
			return -2086922122;
		
		case 279:
			return -1675198649;
		
		case 280:
			return 1189497682;
		
		case 281:
			return -1565675519;
		
		case 282:
			return -268973591;
		
		case 283:
			return 1039159916;
		
		case 284:
			return 1111816631;
		
		case 285:
			return 405591388;
		
		case 286:
			return 897456793;
		
		case 287:
			return 104187473;
		
		case 288:
			return 773808542;
		
		case 289:
			return -1120669954;
		
		case 290:
			return -1389278274;
		
		case 291:
			return 552979403;
		
		case 292:
			return -1571578784;
		
		case 293:
			return -708312114;
		
		case 294:
			return 688823508;
		
		case 295:
			return -1622147240;
		
		case 296:
			return 830292162;
		
		case 297:
			return 226276782;
		
		case 298:
			return -678416628;
		
		case 299:
			return -1098528034;
		
		case 300:
			return 316207340;
		
		case 301:
			return -1909200748;
		
		case 302:
			return -939652363;
		
		case 303:
			return -1990194462;
		
		case 304:
			return -375447933;
		
		case 305:
			return 537014919;
		
		case 306:
			return 1784584921;
		
		case 307:
			return 1084182731;
		
		case 308:
			return -1045471300;
		
		case 309:
			return 1617414719;
		
		case 310:
			return -787761753;
		
		case 311:
			return -490616606;
		
		case 312:
			return 1491346514;
		
		case 313:
			return -1311702610;
		
		case 314:
			return -904250715;
		
		case 315:
			return 1034665895;
		
		case 316:
			return -101524555;
		
		case 317:
			return 1419152594;
		
		case 318:
			return -451359317;
		
		case 319:
			return -1915385310;
		
		case 320:
			return 1315162488;
		
		case 321:
			return -361152079;
		
		case 322:
			return -2041626192;
		
		case 323:
			return -2077812539;
		
		case 324:
			return -1371514637;
		
		case 325:
			return 1730017037;
		
		case 326:
			return 892816668;
		
		case 327:
			return -1994943603;
		
		case 328:
			return 603133554;
		
		case 329:
			return -30160144;
		
		case 330:
			return -1248299493;
		
		case 331:
			return 727393558;
		
		case 332:
			return 755611221;
		
		case 333:
			return -170255458;
		
		case 334:
			return 1011151573;
		
		case 335:
			return 1122339631;
		
		case 336:
			return 454815308;
		
		case 337:
			return 990701735;
		
		case 338:
			return -246340825;
		
		case 339:
			return -1410671073;
		
		case 340:
			return 1547608292;
		
		case 341:
			return -714132970;
		
		case 342:
			return 732290690;
		
		case 343:
			return 971340545;
		
		case 344:
			return -234132662;
		
		case 345:
			return -2143057988;
		
		case 346:
			return -993947465;
		
		case 347:
			return -486552269;
		
		case 348:
			return -1156317860;
		
		case 349:
			return 1229625803;
		
		case 350:
			return -388596167;
		
		case 351:
			return -1204639465;
		
		case 352:
			return -1384685096;
		
		case 353:
			return -2026728113;
		
		case 354:
			return -1228057307;
		
		case 355:
			return 1835126290;
		
		case 356:
			return 1890833594;
		
		case 357:
			return -751549960;
		
		case 358:
			return -1682270750;
		
		case 359:
			return -1839865333;
		
		case 360:
			return -1990383629;
		
		case 361:
			return 1712094016;
		
		case 362:
			return 1532953697;
		
		case 363:
			return 1620318083;
		
		case 364:
			return -307230331;
		
		case 365:
			return -1034549620;
		
		case 366:
			return -1293064293;
		
		case 367:
			return -1540142553;
		
		case 368:
			return -1769886012;
		
		case 369:
			return -1983081126;
		
		case 370:
			return -1106117124;
		
		case 371:
			return -1873108338;
		
		case 372:
			return -2097543219;
		
		case 373:
			return 155413195;
		
		case 374:
			return -1162387149;
		
		case 375:
			return 1728382685;
		
		case 376:
			return -649335959;
		
		case 377:
			return -1876502240;
		
		case 378:
			return -2107032155;
		
		case 379:
			return 619103418;
		
		case 380:
			return 1355448197;
		
		case 381:
			return 1681762005;
		
		case 382:
			return 1026887814;
		
		case 383:
			return 354352628;
		
		case 384:
			return 1519366642;
		
		case 385:
			return -82757515;
		
		case 386:
			return 386306655;
		
		case 387:
			return 1243962119;
		
		case 388:
			return 756214903;
		
		case 389:
			return -718417579;
		
		case 390:
			return -1445516411;
		
		case 391:
			return -672392892;
		
		case 392:
			return 1465341584;
		
		case 393:
			return -427758369;
		
		case 394:
			return -735647142;
		
		case 395:
			return 1535838048;
		
		case 396:
			return -602272282;
		
		case 397:
			return 2051264661;
		
		case 398:
			return 487172188;
		
		case 399:
			return 282270687;
		
		case 400:
			return 1607708943;
		
		case 401:
			return 1686264939;
		
		case 402:
			return 314786149;
		
		case 403:
			return 1402841185;
		
		case 404:
			return 1099170772;
		
		case 405:
			return 2125676786;
		
		case 406:
			return -363896735;
		
		case 407:
			return -468790222;
		
		case 408:
			return -1779133048;
		
		case 409:
			return 1732537631;
		
		case 410:
			return 1755095401;
		
		case 411:
			return 835771095;
		
		case 412:
			return 1963317232;
		
		case 413:
			return 259627919;
		
		case 414:
			return 1299075397;
		
		case 415:
			return -1509094230;
		
		case 416:
			return 61132362;
		
		case 417:
			return 1549741908;
		
		case 418:
			return 288484254;
		
		case 419:
			return -1877032947;
		
		case 420:
			return -1395676456;
		
		case 421:
			return 1136146715;
		
		case 422:
			return 468034421;
		
		case 423:
			return 1079459546;
		
		case 424:
			return -140369351;
		
		case 425:
			return 1822341990;
		
		case 426:
			return 1219701681;
		
		case 427:
			return 1601295268;
		
		case 428:
			return -1692460667;
		
		case 429:
			return 1471419228;
		
		case 430:
			return 907446160;
		
		case 431:
			return -1126482585;
		
		case 432:
			return 1911050315;
		
		case 433:
			return -1343525599;
		
		case 434:
			return 1261891225;
		
		case 435:
			return 763162704;
		
		case 436:
			return 1335861197;
		
		case 437:
			return 526744654;
		
		case 438:
			return -1177461517;
		
		case 439:
			return -241638635;
		
		case 440:
			return 1024262875;
		
		case 441:
			return 853355463;
		
		case 442:
			return -337288221;
		
		case 443:
			return 361381308;
		
		case 444:
			return -1264898804;
		
		case 445:
			return -585289073;
		
		case 446:
			return 1423542233;
		
		case 447:
			return -948489286;
		
		case 448:
			return 2063859257;
		
		case 449:
			return -1652627327;
		
		case 450:
			return -1959697839;
		
		case 451:
			return -1532267859;
		
		case 452:
			return -1410062763;
		
		case 453:
			return -901428716;
		
		case 454:
			return -1628873469;
		
		case 455:
			return 144855571;
		
		case 456:
			return -617589883;
		
		case 457:
			return -1306457086;
		
		case 458:
			return 1713542477;
		
		case 459:
			return -305542365;
		
		case 460:
			return 1985390213;
		
		case 461:
			return -2145069367;
		
		case 462:
			return -1674390752;
		
		case 463:
			return -2117214398;
		
		case 464:
			return 1880805647;
		
		case 465:
			return -62390436;
		
		case 466:
			return 1815288415;
		
		case 467:
			return 196214097;
		
		case 468:
			return -201958220;
		
		case 469:
			return 1400281261;
		
		case 470:
			return 1601515402;
		
		case 471:
			return -940704970;
		
		case 472:
			return -548371721;
		
		case 473:
			return -1022384613;
		
		case 474:
			return -357406394;
		
		case 475:
			return 1077068189;
		
		case 476:
			return -782241404;
		
		case 477:
			return 1669853467;
		
		case 478:
			return 1592019450;
		
		case 479:
			return 635273153;
		
		case 480:
			return -1559225678;
		
		case 481:
			return -266425508;
		
		case 482:
			return 1117400455;
		
		case 483:
			return 454332195;
		
		case 484:
			return -1328061889;
		
		case 485:
			return 561650932;
		
		case 486:
			return 256105670;
		
		case 487:
			return 1976779618;
		
		case 488:
			return -269095126;
		
		case 489:
			return 2145617267;
		
		case 490:
			return 1150213537;
		
		case 491:
			return 1598825281;
		
		case 492:
			return -712527121;
		
		case 493:
			return 1308553072;
		
		case 494:
			return 852866398;
		
		case 495:
			return -1794417972;
		
		case 496:
			return 293062146;
		
		case 497:
			return 95360094;
		
		case 498:
			return 807631773;
		
		case 499:
			return 1603958275;
		
		case 500:
			return 860052020;
		
		case 501:
			return -1885979781;
		
		case 502:
			return 746147970;
		
		case 503:
			return 666663006;
		
		case 504:
			return -2096186453;
		
		case 505:
			return 859409444;
		
		case 506:
			return -671427187;
		
		case 507:
			return 100192478;
		
		case 508:
			return 307812616;
		
		case 509:
			return 1670843243;
		
		case 510:
			return 899615863;
		
		case 511:
			return -298901850;
		
		case 512:
			return 1379186917;
		
		case 513:
			return -817206030;
		
		case 514:
			return -1150323212;
		
		case 515:
			return -247466821;
		
		case 516:
			return 427124242;
		
		case 517:
			return 855418120;
		
		case 518:
			return -777015093;
		
		case 519:
			return -722462870;
		
		case 520:
			return -937454324;
		
		case 521:
			return -339438116;
		
		case 522:
			return 2135639035;
		
		case 523:
			return 1254273765;
		
		case 524:
			return -792172668;
		
		case 525:
			return 1905987493;
		
		case 526:
			return 495693044;
		
		case 527:
			return -1693422950;
		
		case 528:
			return -205873076;
		
		case 529:
			return -2143114654;
		
		case 530:
			return -1420574021;
		
		case 531:
			return -1959250381;
		
		case 532:
			return -1088328663;
		
		case 533:
			return 513602003;
		
		case 534:
			return 359221401;
		
		case 535:
			return 1005272;
		
		case 536:
			return 1583044470;
		
		case 537:
			return 348853959;
		
		case 538:
			return 1045621973;
		
		case 539:
			return 1084576580;
		
		case 540:
			return 1651573695;
		
		case 541:
			return 1463321587;
		
		case 542:
			return -997505963;
		
		case 543:
			return -1649851713;
		
		case 544:
			return -386012962;
		
		case 545:
			return 1386101789;
		
		case 546:
			return 1227915917;
		
		case 547:
			return -218846335;
		
		case 548:
			return -352578118;
		
		case 549:
			return 1426626782;
		
		case 550:
			return -714081520;
		
		case 551:
			return 74547781;
		
		case 552:
			return 1271463052;
		
		case 553:
			return 1983140194;
		
		case 554:
			return 677262775;
		
		case 555:
			return -832337898;
		
		case 556:
			return -319249747;
		
		case 557:
			return -16955722;
		
		case 558:
			return -1360128126;
		
		case 559:
			return -1535425646;
		
		case 560:
			return -1063641743;
		
		case 561:
			return -1041133401;
		
		case 562:
			return 1380479304;
		
		case 563:
			return 600890828;
		
		case 564:
			return 733333190;
		
		case 565:
			return 1843035435;
		
		case 566:
			return -304127320;
		
		case 567:
			return 122470371;
		
		case 568:
			return 0;
		
		case 569:
			return -1591664384;
		
		case 570:
			return -673000374;
		
		case 571:
			return -1150938404;
		
		case 572:
			return -1756997214;
		
		case 573:
			return -813824107;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_1096(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1511(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_1097(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	
	if (func_1546(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_1098(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!func_609(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_1067(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_1099(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1547(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1508(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_638(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_1067(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_1100(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_1392(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_1101(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_371();
	func_854(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_1102(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_1548(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_0xD3750CCC00635FC2(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_0x5C2EA6C44F515F34(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

int func_1103(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1104(int iParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_633(50))
			{
				if (!func_633(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_633(51))
			{
				if (!func_633(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

int func_1105(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!func_609(iParam1, 0))
	{
		return 0;
	}
	if (func_610(iParam1) != -1037537535)
	{
		return 0;
	}
	bVar1 = func_200() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_635(iParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_1338(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_631(iParam1, 866047851))
	{
		iVar5 = func_1142(iVar4, 1);
		if (func_1549(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256;
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_0x5FF9A878C3D115B8(iVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(iParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_635(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return 0;
			}
			break;
		
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_631(iParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return 0;
			}
			break;
		
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return 0;
			}
			if (PED::_0xFB4891BD7578CDC1(iParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return 0;
			}
			break;
		
		case -1505978566:
			if (func_1550(1868067663, &uVar0))
			{
				*uParam2 = 939463734;
				return 0;
			}
		
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_0x90403E8107B60E81(iParam0);
				iVar10 = func_1551(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1551(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_635(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_631(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*uParam2 = -357399012;
					return 0;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return 0;
					}
				}
			}
			*uParam2 = 0;
			return 1;
		}

void func_1106()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1107()
{
	float fVar0;
	float fVar1;
	
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xFECA17CF3343694B(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), (1f - fVar1));
}

int func_1108()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_288(func_1552(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1109(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		
		case 1566949660:
			return -121629511;
	}
	return 0;
}

int func_1110(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903;
				iVar1 = -1217729597;
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238;
				iVar1 = -1217729597;
			}
			else
			{
				iVar0 = 425319238;
				iVar1 = 363594903;
			}
			break;
		
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981;
				iVar1 = 446659922;
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664;
				iVar1 = 446659922;
			}
			else
			{
				iVar0 = -1540119664;
				iVar1 = 2100194981;
			}
			break;
		
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851;
				iVar1 = -757567246;
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951;
				iVar1 = -757567246;
			}
			else
			{
				iVar0 = -390982951;
				iVar1 = -1018798851;
			}
			break;
		
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099;
				iVar1 = -585121677;
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073;
				iVar1 = -585121677;
			}
			else
			{
				iVar0 = -2054602073;
				iVar1 = -378441099;
			}
			break;
	}
	if (func_288(iVar0, 1, 0) && func_288(iVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_1111(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		
		case -649219937:
			return 1289585739;
		
		case -858567048:
			return -269048282;
		
		case -718162726:
			return 1441506783;
		
		case -1284282080:
			return 780305678;
		
		case -725003445:
			return 1811977508;
		
		case -1445630104:
			return -935153695;
		
		case 580970876:
			return 1299744282;
		
		case 967601061:
			return 1631240196;
		
		case 1946030891:
			return 517396587;
		
		case -1511404982:
			return 1620353486;
		
		case -944465290:
			return 1816443627;
		
		case -1701098855:
			return -127011478;
		
		default:
			break;
	}
	return 0;
}

int func_1112(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_1553(iParam0);
	if (iVar0 != -15)
	{
		func_854(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_1304(iVar0, 1);
	}
	return 0;
}

int func_1113(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;
	
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (iParam1 && func_288(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_609(iVar25, 0) && func_631(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_1114(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1169(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_1115(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1554())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1169(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1555(iVar0);
			func_1556(iVar0, 0, 0);
		}
		func_1169(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_647(func_827(1644987397), iVar1);
	}
}

void func_1116(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1117(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1118(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1119(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1120(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_1129(iVar9);
	iVar2 = func_1129(iVar10);
	iVar3 = func_1129(iVar11);
	iVar5 = func_1130(iVar9);
	iVar6 = func_1130(iVar10);
	iVar7 = func_1130(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1129(iVar12);
		iVar8 = func_1130(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_1121(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1122()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1557(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1123()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_1124(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1534(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1534(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1534(iVar0))
		{
			*iParam2++;
		}
		if (func_1534(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1534(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1534(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1534(iVar0))
		{
			*iParam2++;
		}
		if (func_1534(iVar1))
		{
			*iParam2++;
		}
		if (func_1534(iVar0) && func_1534(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1534(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1534(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1534(iVar0))
		{
			*iParam2++;
		}
		if (func_1534(iVar1))
		{
			*iParam2++;
		}
		if (func_1534(iVar2))
		{
			*iParam2++;
		}
		if ((func_1534(iVar0) && func_1534(iVar1)) && func_1534(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1534(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1534(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1534(iVar0))
		{
			*iParam2++;
		}
		if (func_1534(iVar1))
		{
			*iParam2++;
		}
		if (func_1534(iVar2))
		{
			*iParam2++;
		}
		if (func_1534(iVar3))
		{
			*iParam2++;
		}
		if (((func_1534(iVar0) && func_1534(iVar1)) && func_1534(iVar2)) && func_1534(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_1125(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1558(1497516462);
			func_564(2016141805);
			func_564(1010885152);
			func_564(-502324015);
			break;
		
		case 2016141805:
			func_564(1497516462);
			func_1558(2016141805);
			func_564(1010885152);
			func_564(-502324015);
			break;
		
		case 1010885152:
			func_564(1497516462);
			func_564(2016141805);
			func_1558(1010885152);
			func_564(-502324015);
			break;
		
		case -502324015:
			func_564(1497516462);
			func_564(2016141805);
			func_564(1010885152);
			func_1558(-502324015);
			break;
		
		case -1056767524:
		case -538889627:
		case -538880323:
			func_564(-538889627);
			func_564(-538880323);
			func_564(-1056767524);
			func_1558(iParam0);
			break;
		
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1559();
			func_1558(iParam0);
			break;
		
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_1560();
			func_1558(iParam0);
			break;
		
		case 2019386373:
			func_564(-664252410);
			func_564(2109952320);
			func_1558(2019386373);
			break;
		
		case -664252410:
			func_564(2019386373);
			func_564(2109952320);
			func_1558(-664252410);
			break;
		
		case 2109952320:
			func_564(2019386373);
			func_564(-664252410);
			func_1558(2109952320);
			break;
		
		case -1674179981:
			func_564(-1835851517);
			func_564(-1838352012);
			func_1558(-1674179981);
			break;
		
		case -1835851517:
			func_564(-1674179981);
			func_564(-1838352012);
			func_1558(-1835851517);
			break;
		
		case -1838352012:
			func_564(-1674179981);
			func_564(-1835851517);
			func_1558(-1838352012);
			break;
		
		case -1717960576:
			func_564(210001842);
			func_1558(-1717960576);
			break;
		
		case 210001842:
			func_564(-1717960576);
			func_1558(210001842);
			break;
		
		case -150493654:
			func_564(-1271608261);
			func_564(1846061697);
			func_564(-1145519186);
			func_1558(-150493654);
			break;
		
		case -1271608261:
			func_564(-150493654);
			func_564(1846061697);
			func_564(-1145519186);
			func_1558(-1271608261);
			break;
		
		case 1846061697:
			func_564(-150493654);
			func_564(-1271608261);
			func_564(-1145519186);
			func_1558(1846061697);
			break;
		
		case -1145519186:
			func_564(-150493654);
			func_564(-1271608261);
			func_564(1846061697);
			func_1558(-1145519186);
			break;
		
		case 1766284049:
			func_564(280705402);
			func_564(1926308480);
			func_1558(1766284049);
			break;
		
		case 280705402:
			func_564(1766284049);
			func_564(1926308480);
			func_1558(280705402);
			break;
		
		case 1926308480:
			func_564(1766284049);
			func_564(280705402);
			func_1558(1926308480);
			break;
		
		case 1609506757:
			if (bParam1)
			{
				func_564(439465264);
				func_1558(1609506757);
			}
			else
			{
				func_564(1609506757);
				func_564(439465264);
			}
			break;
		
		case 439465264:
			if (func_912(1609506757))
			{
				if (bParam1)
				{
					func_1558(439465264);
				}
				else
				{
					func_564(439465264);
				}
			}
			break;
		
		case 1822001510:
			func_564(-1612662716);
			func_1558(1822001510);
			break;
		
		case -1612662716:
			func_564(1822001510);
			func_1558(-1612662716);
			break;
		
		case 1306158345:
			func_564(1952610440);
			func_564(-223469678);
			func_564(-404698347);
			func_564(1517904467);
			func_1558(1306158345);
			break;
		
		case 1952610440:
			func_564(1306158345);
			func_564(-223469678);
			func_564(-404698347);
			func_564(1517904467);
			func_1558(1952610440);
			break;
		
		case -223469678:
			func_564(1306158345);
			func_564(1952610440);
			func_564(-404698347);
			func_564(1517904467);
			func_1558(-223469678);
			break;
		
		case -404698347:
			func_564(1306158345);
			func_564(1952610440);
			func_564(-223469678);
			func_564(1517904467);
			func_1558(-404698347);
			break;
		
		case 1517904467:
			func_564(1306158345);
			func_564(1952610440);
			func_564(-223469678);
			func_564(-404698347);
			func_1558(1517904467);
			break;
		
		case 1376646519:
			func_564(931649776);
			func_564(-434590080);
			func_564(1743048395);
			func_564(449774763);
			func_1558(1376646519);
			break;
		
		case 931649776:
			func_564(1376646519);
			func_564(-434590080);
			func_564(1743048395);
			func_564(449774763);
			func_1558(931649776);
			break;
		
		case -434590080:
			func_564(1376646519);
			func_564(931649776);
			func_564(1743048395);
			func_564(449774763);
			func_1558(-434590080);
			break;
		
		case 1743048395:
			func_564(1376646519);
			func_564(931649776);
			func_564(-434590080);
			func_564(449774763);
			func_1558(1743048395);
			break;
		
		case 449774763:
			func_564(1376646519);
			func_564(931649776);
			func_564(-434590080);
			func_564(1743048395);
			func_1558(449774763);
			break;
		
		case -1414537028:
			func_564(38162571);
			func_564(1350391819);
			func_564(54073871);
			func_1558(-1414537028);
			break;
		
		case 38162571:
			func_564(-1414537028);
			func_564(1350391819);
			func_564(54073871);
			func_1558(38162571);
			break;
		
		case 1350391819:
			func_564(-1414537028);
			func_564(38162571);
			func_564(54073871);
			func_1558(1350391819);
			break;
		
		case 54073871:
			func_564(-1414537028);
			func_564(38162571);
			func_564(1350391819);
			func_1558(54073871);
			break;
		
		case 198200492:
			func_1558(198200492);
			func_564(-1124061431);
			func_564(52706132);
			func_564(-259123672);
			break;
		
		case -1124061431:
			func_564(198200492);
			func_1558(-1124061431);
			func_564(52706132);
			func_564(-259123672);
			break;
		
		case 52706132:
			func_564(198200492);
			func_564(-1124061431);
			func_1558(52706132);
			func_564(-259123672);
			break;
		
		case -259123672:
			func_564(198200492);
			func_564(-1124061431);
			func_564(52706132);
			func_1558(-259123672);
			break;
		
		case -919512195:
			func_1558(-919512195);
			func_564(-1925798111);
			func_564(420709909);
			func_564(1703426636);
			break;
		
		case -1925798111:
			func_1558(-1925798111);
			func_564(-919512195);
			func_564(420709909);
			func_564(1703426636);
			break;
		
		case 420709909:
			func_1558(420709909);
			func_564(-919512195);
			func_564(-1925798111);
			func_564(1703426636);
			break;
		
		case 1703426636:
			func_1558(1703426636);
			func_564(-919512195);
			func_564(-1925798111);
			func_564(420709909);
			break;
		
		case -1223121209:
			func_1558(-1223121209);
			func_564(630808005);
			break;
		
		case 630808005:
			func_1558(630808005);
			func_564(-1223121209);
			break;
		
		case 1453909576:
			func_1558(1453909576);
			func_564(1643531967);
			break;
		
		case 1643531967:
			func_1558(1643531967);
			func_564(1453909576);
			break;
		
		case 0:
			func_1558(0);
			func_564(473295046);
			func_564(-1738165526);
			break;
		
		case 473295046:
			func_1558(473295046);
			func_564(0);
			func_564(-1738165526);
			break;
		
		case -1738165526:
			func_1558(-1738165526);
			func_564(0);
			func_564(473295046);
			break;
		
		case 932909855:
			func_1558(932909855);
			func_564(2051822093);
			break;
		
		case 2051822093:
			func_1558(2051822093);
			func_564(932909855);
			break;
		
		case 405586984:
			func_1558(405586984);
			func_564(1509509592);
			func_564(-959357075);
			func_564(-1311865656);
			break;
		
		case 1509509592:
			func_1558(1509509592);
			func_564(405586984);
			func_564(-959357075);
			func_564(-1311865656);
			break;
		
		case -959357075:
			func_1558(-959357075);
			func_564(1509509592);
			func_564(405586984);
			func_564(-1311865656);
			break;
		
		case -1311865656:
			func_1558(-1311865656);
			func_564(1509509592);
			func_564(-959357075);
			func_564(405586984);
			break;
		
		case -524145696:
			if (bParam1)
			{
				func_1558(-524145696);
			}
			else
			{
				func_564(-524145696);
			}
			func_564(1626481264);
			func_564(282809459);
			break;
		
		case 282809459:
			func_1558(282809459);
			func_564(1626481264);
			func_564(-524145696);
			break;
		
		case 1626481264:
			func_1558(1626481264);
			func_564(-524145696);
			func_564(282809459);
			break;
		
		case 885203519:
			if (bParam1)
			{
				func_1558(885203519);
			}
			else
			{
				func_564(885203519);
			}
			break;
		
		case -1080627546:
			if (bParam1)
			{
				func_1558(-1080627546);
			}
			else
			{
				func_564(-1080627546);
			}
			break;
		
		default:
			if (bParam1)
			{
				if (!func_912(iParam0))
				{
					func_1558(iParam0);
				}
			}
			else if (func_912(iParam0))
			{
				func_564(iParam0);
			}
			break;
	}
}

void func_1126(int iParam0)
{
	if (!func_1561(iParam0))
	{
		func_1563(func_1562(iParam0));
	}
}

int func_1127()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1561(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1128(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_1129(iVar9);
	iVar2 = func_1129(iVar10);
	iVar3 = func_1129(iVar11);
	iVar5 = func_1130(iVar9);
	iVar6 = func_1130(iVar10);
	iVar7 = func_1130(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1129(iVar12);
		iVar8 = func_1130(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_1129(int iParam0)
{
	int iVar0;
	
	if (func_288(iParam0, 1, 0))
	{
		iVar0 = func_612(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1130(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		
		case -164081697:
			return 5;
		
		case -1161319399:
			return 5;
		
		case 728781265:
			return 15;
		
		case -222563712:
			return 20;
		
		case 1794857344:
			return 7;
		
		case 1952409553:
			return 10;
		
		case 2116770557:
			return 25;
		
		case -651064726:
			return 3;
		
		case -404270094:
			return 7;
		
		case 2093126853:
			return 5;
		
		case 2085530337:
			return 30;
		
		case -150591160:
			return 5;
		
		case -323969289:
			return 10;
		
		case 1504361882:
			return 5;
		
		case -1521783510:
			return 5;
		
		case 1714875242:
			return 5;
		
		case 1019229063:
			return 5;
		
		case 927763737:
			return 10;
		
		default:
			break;
	}
	return 0;
}

int func_1131(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_1132(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_1133(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	
	if (!func_1374(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_1134(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1133(iParam1, 5) || iParam0 == func_1133(iParam1, 6)) || iParam0 == func_1133(iParam1, 7)) || iParam0 == func_1133(iParam1, 8)) || iParam0 == func_1133(iParam1, 9))
	{
		func_1124(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_628(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_630(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1135(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 1;
	if ((((iParam0 == func_1133(iParam1, 5) || iParam0 == func_1133(iParam1, 6)) || iParam0 == func_1133(iParam1, 7)) || iParam0 == func_1133(iParam1, 8)) || iParam0 == func_1133(iParam1, 9))
	{
		if (func_1124(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_628(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_630(51, 0, 0, iVar0, func_1081(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_628(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_630(51, 0, 0, iVar0, func_1081(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_1136()
{
	if (func_174(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

void func_1137(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_1138(int iParam0)
{
	if (!func_1564(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_1139(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_1140(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

int func_1141(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_1565(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_1142(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		
		case -1889597427:
			return 0;
		
		case -1884748965:
			return 32;
		
		case -1586649372:
			return 33;
		
		case -1506259487:
			return 5;
		
		case -1505978566:
			return 22;
		
		case -1489346253:
			return 38;
		
		case -1364808185:
			return 19;
		
		case -1292426046:
			return 8;
		
		case -1197751823:
			return 20;
		
		case -1176744536:
			return 24;
		
		case -1130865351:
			return 31;
		
		case -1130352927:
			return 1;
		
		case -893163968:
			return 17;
		
		case -735900586:
			return 28;
		
		case -676503695:
			return 6;
		
		case -450913544:
			return 18;
		
		case -426430150:
			return 29;
		
		case -358215195:
			return 39;
		
		case -338487716:
			return 11;
		
		case -207860920:
			return 26;
		
		case 99217379:
			return 27;
		
		case 304805134:
			return 21;
		
		case 383349088:
			return 7;
		
		case 389988485:
			return 2;
		
		case 673166414:
			return 25;
		
		case 788010710:
			return 34;
		
		case 1108822547:
			return 10;
		
		case 1145151482:
			return 23;
		
		case 1250092473:
			return 16;
		
		case 1367443060:
			return 4;
		
		case 1422688607:
			return 9;
		
		case 1600962399:
			return 13;
		
		case 1672288269:
			return 15;
		
		case 1742327865:
			return 12;
		
		case 1780904876:
			return 3;
		
		case 1788623170:
			return 30;
		
		case 1849504272:
			return 14;
		
		case 1900541263:
			return 37;
		
		case 1958421083:
			return 35;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_1143(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	func_1566();
	if (iParam2 == 39)
	{
		Var0 = { func_1072(iParam0, 1, 0) };
		iParam2 = func_1142(func_1141(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_631(iParam0, 866047851) && func_1549(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_1146(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_1567(func_1565(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1568(iParam2);
	func_1569(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_1570(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_1570(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_1571(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_1572(iParam0, iParam2, iParam1, func_200() != -1);
	if (bParam4)
	{
		func_1573(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1573(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_1574(func_1565(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_1144(bool bParam0, bool bParam1, bool bParam2)
{
	func_1575(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_1145(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	
	if (bParam4)
	{
		func_1477(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1576(Var0);
}

bool func_1146(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1147()
{
	func_1577(&(Global_1946804->f_2776));
	func_1578(32768);
	func_1574(1108822547, 8, 6);
}

int func_1148(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_1142(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_1149(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1014(Var0);
}

float func_1150()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	
	if (func_1579())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1580(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1580(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1581();
	fVar2 = func_1582();
	fVar3 = func_1583();
	fVar4 = func_1584();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1585()));
	fVar7 = (func_1580(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1586(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1587(3, fVar9, fVar9 > 100f);
	return func_771(fVar7, -100f, 100f);
}

float func_1151()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	
	if (func_1579())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1580(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1580(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1581();
	fVar2 = func_1582();
	fVar3 = func_1583();
	fVar4 = func_1584();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1585()));
	fVar7 = (func_1580(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1586(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1587(2, fVar9, fVar9 > 100f);
	return func_771(fVar7, -100f, 100f);
}

float func_1152()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	
	if (func_1579())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1580(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1588())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1589())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1580(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1581();
	fVar2 = func_1582();
	fVar3 = func_1583();
	fVar4 = func_1584();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1585()));
	fVar7 = (func_1580(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1586(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1587(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1580(0);
	}
	return func_771(fVar7, -100f, 100f);
}

bool func_1153(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1154(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_609(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_1075(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_638(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_1067(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1155(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		
		case 81053684:
			return Global_1946804->f_2657.f_23;
		
		case -525676072:
			return Global_1946804->f_2657.f_22;
		
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		
		case -413129408:
			return Global_1946804->f_2657.f_25;
		
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_1590();
			}
			break;
	}
	return 0;
}

int func_1156(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		
		case 1661121390:
			return 6;
		
		case 1164374808:
			return 7;
		
		case 624063935:
			return 9;
		
		case -1476781101:
			return 10;
		
		case 1560492757:
			return 15;
		
		case -769081407:
			return 16;
		
		case 688004210:
			return 20;
		
		case 166243423:
			return 0;
		
		case -1826731591:
			return 24;
		
		case 2119049229:
			return 25;
		
		case 1352942778:
			return 26;
		
		case 1964379549:
			return 27;
		
		case 1201189539:
			return 28;
		
		case 1351927599:
			return 21;
		
		case 2032023096:
			return 22;
		
		case 1784889667:
			return 13;
		
		case 1160643979:
			return 8;
		
		case 1383300684:
			return 1;
		
		case 2051441678:
			return 2;
		
		case 162509669:
			return 3;
		
		case 635948769:
			return 4;
		
		case 274995506:
			return 5;
		
		case 1902428294:
			return 17;
		
		case -2114499732:
			return 18;
		
		case 800827126:
			return 19;
		
		case 294553332:
			return 11;
		
		case 1788874135:
			return 12;
		
		case -1243402388:
			return 66;
		
		case 65931886:
			return 67;
		
		case 1371678229:
			return 68;
		
		case 2102263084:
			return 69;
		
		case -272211555:
			return 61;
		
		case -55563408:
			return 64;
		
		case -1914506115:
			return 71;
		
		case 802495462:
			return 75;
		
		case 842905332:
			return 77;
		
		case 1511551084:
			return 79;
		
		case -1725704631:
			return 81;
		
		case 1257427489:
			return 83;
		
		case -659341240:
			return 85;
		
		case 2038771525:
			return 87;
		
		case -535599244:
			return 89;
		
		case -389591806:
			return 73;
		
		case -1205612021:
			return 70;
		
		case 890706995:
			return 93;
		
		case 1156438275:
			return 90;
		
		case -1611873049:
			return 91;
		
		case 594312243:
			return 92;
		
		case -978578725:
			return 94;
		
		case -361635024:
			return 62;
		
		case -1951220140:
			return 78;
		
		case 1460520700:
			return 76;
		
		case 523337834:
			return 80;
		
		case -19271249:
			return 82;
		
		case 214175524:
			return 84;
		
		case -1303643297:
			return 86;
		
		case 411856831:
			return 88;
		
		case -926815459:
			return 72;
		
		case -1300731953:
			return 74;
		
		case -409616653:
			return 65;
		
		case 509954990:
			return 29;
		
		case -445916744:
			return 30;
		
		case -866249154:
			return 31;
		
		case -2077063704:
			return 32;
		
		case 205207539:
			return 33;
		
		case -1033657275:
			return 34;
		
		case 1806002837:
			return 35;
		
		case 705324896:
			return 36;
		
		case -1541763703:
			return 37;
		
		case 387052410:
			return 38;
		
		case -361288914:
			return 39;
		
		case -911054515:
			return 40;
		
		case 1084200963:
			return 41;
		
		case 1847948074:
			return 42;
		
		case -1212526764:
			return 43;
		
		case 1851440270:
			return 44;
		
		case -2028985700:
			return 45;
		
		case 1074435214:
			return 46;
		
		case -883015675:
			return 47;
		
		case -1047155604:
			return 48;
		
		case 1123231221:
			return 49;
		
		case 1866989210:
			return 50;
		
		case 478183719:
			return 51;
		
		case -1698955868:
			return 52;
		
		case -2029378634:
			return 53;
		
		case 1339864416:
			return 54;
		
		case 890998115:
			return 55;
		
		case -1376288999:
			return 56;
		
		case -1041123771:
			return 57;
		
		case 1389254668:
			return 58;
		
		case -346112633:
			return 59;
		
		case 773309172:
			return 60;
		
		case -291256376:
			return 23;
		
		default:
			break;
	}
	return -1;
}

int func_1157(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

void func_1158(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_1157(iParam0))
	{
		return;
	}
	if (func_1591(iParam0))
	{
		return;
	}
	if (!func_1592(iParam0))
	{
		func_1593(iParam0, 1, 0);
	}
	iVar0 = func_1594(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1595(iParam0, 512))
		{
			func_1145(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_915() && !bParam1) && !func_146(0, 0, 1))
	{
		func_338(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1596(iParam0, 6);
	if (bParam2)
	{
		if (!func_146(0, 0, 1))
		{
			func_882(1, 4);
		}
	}
}

int func_1159()
{
	return Global_1946804->f_1;
}

bool func_1160(int iParam0, bool bParam1)
{
	return func_1155(iParam0, 0) < func_1597(iParam0, bParam1);
}

int func_1161(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_635(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1162(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_1142(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_1142(iParam0, 1) /*11*/];
}

void func_1163(int iParam0, int iParam1)
{
	if (func_631(iParam1, 130796156))
	{
		func_1598(iParam1, 0);
	}
	else if (func_631(iParam1, 930141731))
	{
		func_1598(iParam1, 1);
		func_1599(iParam0);
	}
}

void func_1164(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_1165(int iParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	struct<14> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_1600(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = uParam3;
	Var1.f_2 = { *uParam1 };
	func_1601(uParam2, iParam0, Var1);
	return 1;
}

int func_1166(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1167(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		
		case 7:
			return "PROVISION_FISH_MUSKIE";
		
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		
		case 9:
			return "PROVISION_FISH_PERCH";
		
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_1168(int iParam0)
{
	var uVar0;
	
	if (!func_1602(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_1169(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;
	
	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_1603(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_1170()
{
	return !&Global_1911774;
}

void func_1171(int iParam0, int iParam1, var uParam2, var uParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = iParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = iParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = uParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = uParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_1172(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_1173(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;
	
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_1174(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

Vector3 func_1175(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_1176(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1177(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

bool func_1178(int iParam0, int iParam1)
{
	if (func_200() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_1179(int iParam0)
{
	if (func_200() != -1)
	{
		if (func_1009(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_1009(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_1180(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_1009(iParam0, 65536) && !func_1009(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1009(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_1009(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_1181()
{
	return Global_1905944->f_5694;
}

bool func_1182(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1183()
{
	if (func_918(Global_43800))
	{
		func_426(&Global_43800, 0, 0);
	}
}

bool func_1184(int iParam0, int iParam1)
{
	if (iParam1 && !func_918(iParam0))
	{
		return false;
	}
	return !func_1053(iParam0, 4);
}

int func_1185(int iParam0, bool bParam1)
{
	if (!func_918(Global_43800))
	{
		Global_43800 = func_598("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		((*Global_1945938)[Global_43800 /*18*/])->f_16 = &Global_23[3];
		func_1604(Global_43800, 0, 1);
		func_1605(Global_43800, 6, 1);
		if (bParam1)
		{
			func_1605(Global_43800, 14, 1);
		}
	}
	else
	{
		if (!func_1184(Global_43800, 0))
		{
			func_1606(Global_43800, 1, 1);
		}
		if (func_1607(Global_43800, 1) != 0f && iParam0)
		{
			func_1604(Global_43800, 1, 1);
		}
		else
		{
			func_1604(Global_43800, 0, 1);
		}
		return func_599(Global_43800, 1);
	}
	return 0;
}

void func_1186(var uParam0)
{
	if (func_32(uParam0, 2))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_640);
	}
}

int func_1187(var uParam0, var uParam1)
{
	if (uParam1->f_1580 < 0 || uParam1->f_1580 >= 8)
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam1->f_912[uParam1->f_1580 /*41*/])->f_30)))
	{
		if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_348, &((uParam1->f_912[uParam1->f_1580 /*41*/])->f_30)))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_348, &((uParam1->f_912[uParam1->f_1580 /*41*/])->f_30)))
			{
				func_243(uParam0, &((uParam1->f_912[uParam1->f_1580 /*41*/])->f_30));
				func_330(uParam0, 2097152);
				return 1;
			}
		}
	}
	return 0;
}

bool func_1188(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1189(var uParam0, var uParam1)
{
	if (((!func_535(uParam0, 32) || func_1608(uParam0)) || func_535(uParam0, 268435456)) && !func_535(uParam0, 65536))
	{
		func_695(&(uParam0->f_404), 256);
	}
}

void func_1190(var uParam0, int iParam1)
{
	var uVar0;
	
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 9, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 9, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 7, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 7, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 8, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 8, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 10, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 10, iParam1);
	}
}

bool func_1191()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(130487986) > 0;
}

void func_1192()
{
	int iVar0;
	
	SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	while (SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		if (SCRIPTS::_GET_HASH_OF_THREAD(iVar0) == 130487986)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 265, true);
			}
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, 1);
			return;
		}
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	}
}

void func_1193(var uParam0, char[16] cParam1)
{
	uParam0->f_344 = { cParam1 };
}

void func_1194(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_366[iVar0 /*9*/]))
		{
			func_1609(uParam0, uParam0->f_366[iVar0 /*9*/]);
		}
		iVar0++;
	}
	Var1 = { func_1015() };
	func_1609(uParam0, &Var1);
	Var1 = { func_531(uParam0) };
	func_1609(uParam0, &Var1);
}

bool func_1195()
{
	return func_901(_NAMESPACE71::_0xC17F69E1418CD11F(3));
}

void func_1196(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

Vector3 func_1197(var uParam0)
{
	return uParam0->f_406;
}

void func_1198(var uParam0)
{
	int iVar0;
	
	if (func_1610(&iVar0))
	{
		if (func_609(iVar0, 0))
		{
			if (func_635(iVar0) == -525676072)
			{
				PED::_0xD710A5007C2AC539(Global_35, 1249071452, 0);
				func_663(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::_0xD710A5007C2AC539(Global_35, 1606587013, 0);
			}
			if (!func_609(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_1199(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_30(0, 0);
		func_1611(-1);
	}
	func_715(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!func_1188(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_1188(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_1188(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_1188(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_1188(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam1, 1);
	}
	if (!func_1188(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!func_1188(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!func_1188(*uParam0, 4) && !func_1188(*uParam0, 2))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!func_1188(*uParam0, 2048))
	{
		func_482(0, 0);
	}
	if (func_1188(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	}
	if (func_1188(*uParam0, 256))
	{
		WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
	}
	if (func_1188(*uParam0, 8192))
	{
		func_1612();
	}
	if (!func_1188(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!func_1188(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!func_1188(*uParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!func_1188(*uParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_0xEE04C0AFD4EFAF0E(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (func_701() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_244(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1613(&vVar3, 50, 10, 0);
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_704(2);
						func_703(-1);
						func_1614(vVar3);
						func_1616(func_1615());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, 1, 0);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!func_1188(*uParam0, 4096))
	{
		func_1479(Global_35);
	}
	if (!func_1188(*uParam0, 1048576))
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!func_1188(*uParam0, 2097152))
	{
		if (func_1617() || PED::_0x50F124E6EF188B22(Global_35))
		{
			func_278(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_1200(var uParam0, vector3 vParam1)
{
	uParam0->f_406 = { vParam1 };
}

void func_1201(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_535(uParam0, 2048) && !func_244(func_1618(uParam0)))
	{
		bVar0 = VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4);
		iVar1 = PED::_0x4C8B59171957BCF7(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || func_535(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(iVar1))
			{
				iVar2 |= 32;
			}
			func_1620(iVar1, func_1618(uParam0), func_1619(uParam0), iVar2, 1073741824);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || func_535(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1620(iVar3, func_1618(uParam0), func_1619(uParam0), 2, 1073741824);
		}
	}
}

void func_1202(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if ((func_535(uParam0, 268435456) && !func_244(func_1618(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { func_1618(uParam0) };
			func_1620(iVar0, vVar1, func_1233(vVar1, Global_36, 1), 2, 1073741824);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1203(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_13[iVar0 /*12*/]))) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/])) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/]));
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
				{
					if (!func_1206(uParam0->f_13[iVar0 /*12*/], 8))
					{
						if (func_481(func_1103(iVar1, 0, 1, 0)))
						{
							if (!func_1621(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 0, false, false);
							}
						}
						if (func_481(func_1103(iVar1, 1, 1, 0)))
						{
							if (!func_1621(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1204(var uParam0, bool bParam1)
{
	WEAPON::_0x67E21ACC5C0C970C(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			PED::_0xD710A5007C2AC539(Global_35, -1229581779, 0);
			Global_17 = !bParam1;
		}
	}
}

void func_1205(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	bVar4 = func_200() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_190);
			}
			func_1477(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1622(iParam1, 29, bVar4, 1, 0);
			func_1622(iParam1, 31, bVar4, 1, 0);
			func_1622(iParam1, 30, bVar4, 1, 0);
			func_1622(iParam1, 22, bVar4, 1, 0);
			func_1622(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1146(32768) && func_1623(1108822547, 8)) && func_1624(10, iParam3))
	{
		func_1625(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_1565(iVar1, 1);
			if (func_1623(iVar3, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar1 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1 /*3*/];
				if (!func_1624(iVar1, iParam3))
				{
				}
				else if ((func_1623(iVar3, 6) || &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/]) || (uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
				{
					if (!func_1623(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1622(iParam1, iVar1, bVar4, 1, 0);
						}
						if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
						{
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = 289238755;
						}
						func_1626(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_2456[iVar1 /*2*/]) && (uParam0->f_1[iVar1 /*3*/])->f_1 == (Global_1946804->f_2456[iVar1 /*2*/])->f_1)
						{
						}
						else
						{
							if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
							{
								func_1622(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1 /*3*/]));
							}
							Global_1946804->f_2456[iVar1 /*2*/] = &uParam0->f_1[iVar1 /*3*/];
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = (uParam0->f_1[iVar1 /*3*/])->f_1;
							if (func_1623(iVar3, 1))
							{
								func_1574(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(iParam1, iVar2, false, bVar4, false);
							if ((uParam0->f_1[iVar1 /*3*/])->f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, (uParam0->f_1[iVar1 /*3*/])->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, iParam5);
						}
					}
				}
			}
		}
	}

bool func_1206(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_1207(var uParam0)
{
	StringCopy(&(uParam0->f_344), "", 32);
	func_1627(uParam0);
	func_539(uParam0, 0f, 0f, 0f);
	func_1628(uParam0);
}

void func_1208(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		(uParam0->f_13[iVar0 /*12*/])->f_11 = 0;
		iVar0++;
	}
}

void func_1209(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_1210(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		func_1280(uParam0->f_13[iVar0 /*12*/], iParam1);
		iVar0++;
	}
}

void func_1211(bool bParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(Global_43799))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43799))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43799);
		}
	}
	Global_43799 = -1;
	StringCopy(&Global_43801, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_1183();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_1212(int iParam0)
{
	func_1629();
	Global_1911774->f_1 = MISC::GET_GAME_TIMER();
	Global_1911774->f_2 = iParam0;
}

void func_1213()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
}

void func_1214(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_1630(bParam0);
}

void func_1215(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	
	Var0 = { func_1072(iParam0, 0, 0) };
	Var5 = { func_1098(iParam0, Var0, Var0.f_4, 0) };
	if (func_1511(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_1067(0), &Var5, bParam1);
}

void func_1216(var uParam0)
{
	int iVar0;
	struct<16> Var1;
	struct<18> Var17;
	struct<41> Var35;
	struct<10> Var76;
	struct<22> Var86;
	
	Var1.f_15 = 1;
	Var17 = -1;
	Var17.f_2 = 1;
	Var17.f_12 = 1065353216;
	Var17.f_15 = 1065353216;
	Var17.f_16 = 1;
	Var86.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		uParam0->f_3[iVar0 /*13*/] = 0;
		iVar0++;
	}
	uParam0->f_355 = { Var1 };
	StringCopy(&(uParam0->f_355), "", 32);
	iVar0 = 0;
	while (iVar0 < uParam0->f_371)
	{
		*(uParam0->f_371[iVar0 /*18*/]) = { Var17 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1418)
	{
		*(uParam0->f_1418[iVar0 /*10*/]) = { Var76 };
		iVar0++;
	}
	uParam0->f_1579 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_912)
	{
		*(uParam0->f_912[iVar0 /*41*/]) = { Var35 };
		*(uParam0->f_1241[iVar0 /*22*/]) = { Var86 };
		iVar0++;
	}
	uParam0->f_1580 = -1;
	uParam0->f_1661 = { Global_36 };
	uParam0->f_1664 = 0;
	uParam0->f_1665 = 0;
	uParam0->f_1584 = -1;
	uParam0->f_1585 = -1f;
	uParam0->f_1560 = 0;
	uParam0->f_1562 = 0;
	uParam0->f_1562.f_1 = 0;
	uParam0->f_1799 = 0;
	if (CAM::_0x927B810E43E99932(&(uParam0->f_1588)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1588));
	}
}

void func_1217(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1218()
{
	if (func_1234())
	{
		Global_18 = 0;
		Global_43883 = 0;
		if (!func_1631())
		{
			func_1214(1);
		}
	}
}

struct<14> func_1219(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

struct<4> func_1220(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_1067(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_1098(923904168, func_1504(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_1098(923904168, func_1504(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_1098(923904168, func_1504(bParam0), -740156546, 0);
}

void func_1221(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_1222(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_1067(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1223(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	
	if (func_1547(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_638(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_1067(bParam4), iParam0, iParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

void func_1224(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = 0;
	if (func_200() == -1)
	{
		if (func_621(43))
		{
			if (func_631(iParam0, 412399755))
			{
				func_1126(-1791518714);
				if (func_1127() == 0)
				{
					func_882(0, 10);
					sVar0 = func_1632(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_1129(iParam0) < func_1130(iParam0))
						{
							func_628(43, iParam0, iParam1, -1791518714, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_621(44))
		{
			if (func_631(iParam0, 709057512))
			{
				func_1126(-2087881550);
				if (func_1127() == 1)
				{
					func_882(0, 10);
					sVar0 = func_1632(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_1129(iParam0) < func_1130(iParam0))
						{
							func_628(43, iParam0, iParam1, -2087881550, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_621(45))
		{
			if (func_631(iParam0, -1478961327))
			{
				func_1126(1908068621);
				if (func_1127() == 2)
				{
					func_882(0, 10);
					sVar0 = func_1632(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_1129(iParam0) < func_1130(iParam0))
						{
							func_628(43, iParam0, iParam1, 1908068621, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_621(46))
		{
			if (func_631(iParam0, -1238404098))
			{
				func_1126(1611247019);
				if (func_1127() == 3)
				{
					func_882(0, 10);
					sVar0 = func_1632(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_1129(iParam0) < func_1130(iParam0))
						{
							func_628(43, iParam0, iParam1, 1611247019, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_621(47))
		{
			if (func_631(iParam0, 1160548794))
			{
				func_1126(1319635688);
				if (func_1127() == 4)
				{
					func_882(0, 10);
					sVar0 = func_1632(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_1129(iParam0) < func_1130(iParam0))
						{
							func_628(43, iParam0, iParam1, 1319635688, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_1225(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

char* func_1226(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mech_inventory@clothing@bandana";
		
		case 1:
			return "mech_inventory@clothing@mask";
		
		case 2:
			return "mech_inventory@clothing@mask";
		
		case 3:
			return "mech_inventory@clothing@mask";
		
		case 4:
			return "mech_inventory@clothing@mask";
		
		case 5:
			return "mech_inventory@clothing@mask";
	}
	return "";
}

void func_1227(var uParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1771))
	{
		if (!bParam1)
		{
			func_1633(uParam0);
		}
		else if (bParam2)
		{
			func_1634(uParam0);
		}
		else
		{
			func_1635(uParam0, uParam0->f_1794);
		}
	}
	else
	{
		if (!func_183(uParam0, 1048576) && bParam1)
		{
			func_1635(uParam0, uParam0->f_1794);
		}
		else if (!func_183(uParam0, 2097152) && bParam2)
		{
			func_1634(uParam0);
		}
		else if ((func_183(uParam0, 1048576) && !bParam1) || (func_183(uParam0, 2097152) && !bParam2))
		{
			func_1633(uParam0);
		}
		if (bParam1)
		{
			vVar0 = { uParam0->f_1778 * FtoV(func_1636(uParam0->f_1794)) };
			if (!func_1055(vVar0, VOLUME::_0x3E2A25B2416DD67E(uParam0->f_1771), 1056964608, 1) && !func_244(vVar0))
			{
				VOLUME::_0xA46E98BDC407E23D(uParam0->f_1771, vVar0);
			}
		}
	}
}

void func_1228(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_1584 < 0)
	{
		return;
	}
	if ((uParam0->f_1795 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797)) && VEHICLE::_0xEA44E97849E9F3DD(uParam0->f_1797))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = VEHICLE::_0xA8BA0BAE0173457B(uParam0->f_1797, iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || func_205(iVar2, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, 1) < func_205(iVar1, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, 1))
				{
					iVar1 = iVar2;
				}
			}
			iVar0++;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return;
		}
		if (!func_183(uParam0, 8192))
		{
			if (func_205(iVar1, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, 1) <= ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_17 + 5f) || VOLUME::_0xF256A75210C5C0EB(uParam0->f_1771, uParam0->f_1775))
			{
				if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1797) != 5f)
				{
					VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1797, 5f);
				}
			}
			else if ((!func_1637(512) || func_1638(2)) && VEHICLE::_0xC6D7DDC843176701(uParam0->f_1797) != 50f)
			{
				VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1797, 50f);
			}
		}
	}
}

void func_1229(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if ((uParam0->f_1529[iVar2 /*15*/])->f_11 && VOLUME::_0x92A78D0BEDB332A3((uParam0->f_1529[iVar2 /*15*/])->f_12))
		{
			if (!bVar1)
			{
				iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
				bVar1 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1794) && !(uParam0->f_1529[iVar2 /*15*/])->f_13)
			{
				PED::_0xE9B168527B337BF0(uParam0->f_1794, (uParam0->f_1529[iVar2 /*15*/])->f_12);
				POPULATION::_0xF74E134F40192884(uParam0->f_1794, 1);
				(uParam0->f_1529[iVar2 /*15*/])->f_13 = 1;
			}
			if (!bParam1)
			{
				if (uParam0->f_1583 != 0 || func_183(uParam0, 33554432))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
					if (HUD::IS_RADAR_HIDDEN())
					{
						HUD::_0x8BC7C1F929D07BF3(-1679307491);
					}
					uParam0->f_1583 = 0;
					func_696(uParam0, 33554432);
				}
				bVar3 = func_1176((uParam0->f_1529[iVar2 /*15*/])->f_10, 131072);
				if (func_1639(Global_35, (uParam0->f_1529[iVar2 /*15*/])->f_12, 0, 1))
				{
					if (uParam0->f_1584 >= 0)
					{
						func_750(uParam0, (uParam0->f_1529[iVar2 /*15*/])->f_10, (uParam0->f_1241[uParam0->f_1584 /*22*/])->f_1, 1065353216);
						PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
					}
					if (bVar3)
					{
						func_1640();
					}
					func_1641(uParam0, iVar2, iVar0, bVar3);
				}
				else if (func_1642(uParam0->f_1529[iVar2 /*15*/]) != 0)
				{
					func_1641(uParam0, iVar2, iVar0, bVar3);
				}
			}
			else if (func_1176((uParam0->f_1529[iVar2 /*15*/])->f_10, 4))
			{
				if (uParam0->f_1584 >= 0)
				{
					if (((func_205(Global_35, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1, 1) > (uParam0->f_912[uParam0->f_1584 /*41*/])->f_17 && func_1639(uParam0->f_1794, (uParam0->f_1529[iVar2 /*15*/])->f_12, 0, 1)) || uParam0->f_1583 != 0) || func_183(uParam0, 33554432))
					{
						iVar4 = 5152;
						if (func_605(Global_35, &(uParam0->f_1583), iVar4, 0, 0, 1084227584, 100, 0, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
							uParam0->f_1583 = 0;
							func_696(uParam0, 33554432);
						}
						else
						{
							func_753(uParam0, 33554432);
						}
					}
				}
			}
		}
		iVar2++;
	}
}

int func_1230(var uParam0)
{
	if (uParam0->f_1584 < 0)
	{
		return 0;
	}
	if (func_183(uParam0, 33554432))
	{
		return 0;
	}
	if (func_698(uParam0->f_912[uParam0->f_1584 /*41*/], 2) && uParam0->f_1793)
	{
		return 0;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1771) && VOLUME::_0xF256A75210C5C0EB(uParam0->f_1771, uParam0->f_1772))
	{
		return 1;
	}
	if (func_183(uParam0, 65536))
	{
		return 1;
	}
	return 0;
}

float func_1231(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	
	fVar16 = 10000f;
	switch (&uParam0->f_912[iParam1 /*41*/])
	{
		case 0:
			fVar12 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_912[iParam1 /*41*/])->f_1, true);
			fVar13 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_912[iParam1 /*41*/])->f_4, true);
			vVar0 = { (uParam0->f_912[iParam1 /*41*/])->f_4 - (uParam0->f_912[iParam1 /*41*/])->f_1 };
			if (func_1643(&vVar3, (uParam0->f_912[iParam1 /*41*/])->f_1, (uParam0->f_912[iParam1 /*41*/])->f_4, vVar0, Global_36))
			{
				fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, Global_36, true);
			}
			if (fVar12 < fVar13 && fVar12 < fVar16)
			{
				return fVar12;
			}
			else if (fVar13 < fVar16)
			{
				return fVar13;
			}
			else
			{
				return fVar16;
			}
			break;
		
		case 1:
			if (Global_36.f_2 >= (uParam0->f_912[iParam1 /*41*/])->f_1.f_2 && Global_36.f_2 <= ((uParam0->f_912[iParam1 /*41*/])->f_1.f_2 + (uParam0->f_912[iParam1 /*41*/])->f_10))
			{
				func_1644(uParam0, iParam1, &uVar6, vVar9, &fVar12, &fVar13, &fVar14, &fVar15);
				if (fVar14 < fVar15)
				{
					fVar16 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (uParam0->f_912[iParam1 /*41*/])->f_1, true) - (uParam0->f_912[iParam1 /*41*/])->f_11);
					if (fVar16 < 0f)
					{
					}
				}
				if (fVar12 < fVar13 && fVar12 < fVar16)
				{
					return fVar12;
				}
				else if (fVar13 < fVar16)
				{
					return fVar13;
				}
				else
				{
					return fVar16;
				}
			}
			break;
	}
	return 10000f;
}

void func_1232(var uParam0)
{
	int iVar0;
	
	func_1645(uParam0);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((uParam0->f_912[iVar0 /*41*/])->f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_912[iVar0 /*41*/])->f_22)) && func_1646(uParam0, iVar0)) && !func_1236(uParam0->f_912[iVar0 /*41*/], 1))
			{
				if (!func_1647(uParam0, &((uParam0->f_912[iVar0 /*41*/])->f_22)))
				{
					func_916(&(uParam0->f_1667), (uParam0->f_912[iVar0 /*41*/])->f_22, 0, -1, 1, 0);
				}
				func_1648(uParam0->f_912[iVar0 /*41*/], 1);
			}
		}
		iVar0++;
	}
}

float func_1233(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

bool func_1234()
{
	return func_1649(SCRIPTS::GET_ID_OF_THIS_THREAD());
}

void func_1235(var uParam0, int iParam1)
{
	uParam0->f_1562.f_1 = (uParam0->f_1562.f_1 || iParam1);
}

bool func_1236(var uParam0, int iParam1)
{
	return (uParam0->f_26 && iParam1) != 0;
}

char* func_1237(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HandsOnBelt";
	}
	return "Disabled";
}

void func_1238(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::_0x25557E324489393C((uParam0->f_1418[iVar0 /*10*/])->f_8))
		{
			if (bParam1)
			{
				bVar1 = ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8);
				if (!bVar1 && !bParam2)
				{
					if ((ANIMSCENE::_0xA9016536015DE29D((uParam0->f_1418[iVar0 /*10*/])->f_8, "pl_breakout") && ANIMSCENE::_0x23E33CB9F4A3F547((uParam0->f_1418[iVar0 /*10*/])->f_8, "pl_breakout")) && !uParam0->f_1665)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL((uParam0->f_1418[iVar0 /*10*/])->f_8, "pl_breakout", true);
					}
				}
				else if (func_183(uParam0, 32768) && func_1650(uParam0->f_1418[iVar0 /*10*/], 128))
				{
					func_1651((uParam0->f_1418[iVar0 /*10*/])->f_8, 10000, 1, -1, 0);
				}
				else
				{
					if (bParam2)
					{
						ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8);
					}
					ANIMSCENE::_DELETE_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8);
				}
			}
			else
			{
				ANIMSCENE::RESET_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8, 0);
			}
		}
		iVar0++;
	}
}

char* func_1239()
{
	return "default_leadin_camera";
}

void func_1240()
{
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(-1181125641);
	STREAMING::REMOVE_ANIM_DICT(func_1226(1));
}

void func_1241(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_1242(var uParam0, var uParam1)
{
	*uParam0 = 0;
	if (!func_1248(uParam1, 8))
	{
		if (func_1248(uParam1, 1))
		{
			*uParam0 = 1;
		}
		else if (func_1248(uParam1, 4))
		{
			*uParam0 = 4;
		}
		else if (func_1248(uParam1, 2))
		{
			*uParam0 = 2;
		}
	}
}

void func_1243(char* sParam0, int iParam1, int iParam2, float fParam3)
{
	func_1249(sParam0, iParam2);
	func_1652(iParam1, fParam3);
}

void func_1244()
{
	if (MISC::IS_BIT_SET(&Global_1357510, 4))
	{
	}
	else
	{
		MISC::SET_BIT(Global_1357510, 0);
	}
}

void func_1245(var uParam0, int iParam1)
{
	uParam0->f_1561 = (uParam0->f_1561 || iParam1);
}

char* func_1246(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_1247()
{
	return "CAMERA_LEADIN_ACTIVE_CONVERSATION_REQUEST";
}

bool func_1248(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1249(char* sParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		if (!sParam0->f_16)
		{
			StringCopy(sParam0, "default_leadin_camera", 64);
			if (func_1653(iParam1, 1))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_RIGHT_REQUEST", 64);
			}
			else if (func_1653(iParam1, 2))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_LEFT_REQUEST", 64);
			}
			else if (func_1653(iParam1, 4))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_CENTER_REQUEST", 64);
			}
			CAM::_0x6A4D224FC7643941(sParam0);
			sParam0->f_16 = 1;
		}
		else if (CAM::_0xDD0B7C5AE58F721D(sParam0) && !CAM::_0x927B810E43E99932(sParam0))
		{
			CAM::_0xB8B207C34285E978(sParam0);
		}
	}
}

float func_1250(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_1233(vVar0, vVar3, iParam2);
}

void func_1251(int iParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

void func_1252(var uParam0, int iParam1)
{
	uParam0->f_1561 = (uParam0->f_1561 - (uParam0->f_1561 && iParam1));
}

int func_1253(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	
	if (func_183(uParam0, 4))
	{
		return 0;
	}
	vVar0 = { 0f, 0f, 0f };
	if (uParam0->f_1584 < 0 || uParam0->f_1584 >= 8)
	{
		return 0;
	}
	if (!(uParam0->f_912[uParam0->f_1584 /*41*/])->f_29)
	{
		return 0;
	}
	if (!func_183(uParam0, 4096) && uParam0->f_1792)
	{
		return 0;
	}
	if (Global_1430231->f_4)
	{
		return 0;
	}
	if ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_29)
	{
		if (&uParam0->f_912[uParam0->f_1584 /*41*/] == 0)
		{
			vVar3 = { (uParam0->f_912[uParam0->f_1584 /*41*/])->f_4 - (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1 };
			vVar6 = { 0f, 0f, 0f };
			vVar6.x = vVar3.y;
			vVar6.f_1 = (vVar3.x * -1f);
			if (func_1643(&vVar0, uParam0->f_1661, Global_36, vVar6, (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1))
			{
				iVar9 = 1;
				if (vVar0.x > (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1)
				{
					if (vVar0.x > (uParam0->f_912[uParam0->f_1584 /*41*/])->f_4)
					{
						iVar9 = 0;
					}
				}
				else if (vVar0.x < (uParam0->f_912[uParam0->f_1584 /*41*/])->f_4)
				{
					iVar9 = 0;
				}
				if (iVar9 == 1)
				{
					if (vVar0.y > (uParam0->f_912[uParam0->f_1584 /*41*/])->f_1.f_1)
					{
						if (vVar0.y > (uParam0->f_912[uParam0->f_1584 /*41*/])->f_4.f_1)
						{
							iVar9 = 0;
						}
					}
					else if (vVar0.y < (uParam0->f_912[uParam0->f_1584 /*41*/])->f_4.f_1)
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					if ((vVar0.z < ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_1.f_2 - 0.1f) || vVar0.z > ((uParam0->f_912[uParam0->f_1584 /*41*/])->f_1.f_2 + (uParam0->f_912[uParam0->f_1584 /*41*/])->f_10)) || (func_698(uParam0->f_912[uParam0->f_1584 /*41*/], 2) && (uParam0->f_1793 || uParam0->f_1795)))
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					*uParam1 = uParam0->f_1584;
					return 1;
				}
			}
		}
		else if (func_183(uParam0, 8))
		{
			*uParam1 = uParam0->f_1580;
			return 1;
		}
	}
	return 0;
}

void func_1254(var uParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		(uParam0->f_912[iParam1 /*41*/])->f_28 = 1;
		uParam0->f_1580 = iParam1;
		uParam0->f_1584 = iParam1;
		Global_43804 = iParam1;
		uParam0->f_1665 = 1;
	}
}

void func_1255(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	
	switch ((uParam0->f_371[iParam1 /*18*/])->f_2)
	{
		case 9:
			if (ANIMSCENE::_0x25557E324489393C((uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8) && ANIMSCENE::_0xCBFC7725DE6CE2E0((uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8, 0))
			{
				fVar1 = ANIMSCENE::_0x3FBC3F51BF12DFBF((uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8);
				iVar0 = 0;
				while (iVar0 < 27)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2)) && (uParam0->f_3[iVar0 /*13*/])->f_8 > 0f) && fVar1 >= (uParam0->f_3[iVar0 /*13*/])->f_8) && !ENTITY::IS_ENTITY_VISIBLE((uParam0->f_3[iVar0 /*13*/])->f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE((uParam0->f_3[iVar0 /*13*/])->f_2, true);
					}
					iVar0++;
				}
				if (((func_1273(uParam0->f_371[iParam1 /*18*/], 4) && (uParam0->f_371[iParam1 /*18*/])->f_12 < 1f) && fVar1 >= (uParam0->f_371[iParam1 /*18*/])->f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
				}
				if (func_1273(uParam0->f_371[iParam1 /*18*/], 64) && func_1654(uParam0, iParam1, 0))
				{
					func_1655(uParam0, (uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8, (uParam0->f_371[iParam1 /*18*/])->f_13, (uParam0->f_371[iParam1 /*18*/])->f_14);
				}
			}
			break;
		
		case 10:
			if (((uParam0->f_371[iParam1 /*18*/])->f_3 >= 0 && (uParam0->f_371[iParam1 /*18*/])->f_5 >= 0) && (uParam0->f_371[iParam1 /*18*/])->f_3 != (uParam0->f_371[iParam1 /*18*/])->f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_3 /*13*/])->f_2) && !ENTITY::IS_ENTITY_DEAD((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_5 /*13*/])->f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_3 /*13*/])->f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_3 /*13*/])->f_2)))
					{
						func_1656(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_3 /*13*/])->f_2), (uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_5 /*13*/])->f_2, (uParam0->f_371[iParam1 /*18*/])->f_13, (uParam0->f_371[iParam1 /*18*/])->f_14);
					}
					if ((func_1273(uParam0->f_371[iParam1 /*18*/], 128) && ENTITY::IS_ENTITY_A_PED((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_5 /*13*/])->f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_5 /*13*/])->f_2)))
					{
						func_1656(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_5 /*13*/])->f_2), (uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_3 /*13*/])->f_2, (uParam0->f_371[iParam1 /*18*/])->f_13, (uParam0->f_371[iParam1 /*18*/])->f_14);
					}
				}
			}
			break;
		
		case 4:
			func_1258(uParam0, iParam1, 0, 0);
			break;
	}
}

int func_1256(var uParam0, int iParam1)
{
	if ((uParam0->f_371[iParam1 /*18*/])->f_1 > uParam0->f_1579)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[(uParam0->f_371[iParam1 /*18*/])->f_3 /*13*/])->f_2))
	{
	}
	if (uParam0->f_1579 < 0 || uParam0->f_1579 > 6)
	{
		return 0;
	}
	if ((uParam0->f_371[iParam1 /*18*/])->f_1 == 0)
	{
		return 1;
	}
	if ((uParam0->f_371[iParam1 /*18*/])->f_17 == 2 && func_738(uParam0) == 9)
	{
		return 1;
	}
	if (!func_183(uParam0, 4096) && uParam0->f_1792)
	{
		return 0;
	}
	if (Global_1430231->f_4)
	{
		return 0;
	}
	if (&uParam0->f_371[iParam1 /*18*/] != uParam0->f_1580)
	{
		return 0;
	}
	if (func_738(uParam0) > 3 && &uParam0->f_371[iParam1 /*18*/] != uParam0->f_1580)
	{
		return 0;
	}
	if ((((func_738(uParam0) > 3 && (uParam0->f_371[iParam1 /*18*/])->f_17 == 1) && func_749(uParam0) != 11) && func_748(uParam0, uParam0->f_1580)) && (uParam0->f_371[iParam1 /*18*/])->f_2 != 4)
	{
		return 0;
	}
	if (((uParam0->f_371[iParam1 /*18*/])->f_2 == 9 && (uParam0->f_371[iParam1 /*18*/])->f_4 >= 0) && ANIMSCENE::_0x25557E324489393C((uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8))
	{
		if (!ANIMSCENE::_0x477122B8D05E7968((uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8, 1, 0))
		{
			return 0;
		}
		else if (ANIMSCENE::_0x6F1F0B17109309DA((uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/])->f_8, func_1013(Global_35)))
		{
			if (func_1650(uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/], 4))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 1))
				{
					return 0;
				}
			}
			else if (func_1650(uParam0->f_1418[(uParam0->f_371[iParam1 /*18*/])->f_4 /*10*/], 8))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_1257(var uParam0, int iParam1, var uParam2)
{
	switch ((uParam0->f_371[iParam1 /*18*/])->f_2)
	{
		case 9:
			func_1657(uParam0, uParam2, iParam1);
			break;
		
		case 4:
			func_1258(uParam0, iParam1, 0, 0);
			break;
		
		case 5:
			(uParam0->f_371[iParam1 /*18*/])->f_7 = 1;
			break;
		
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_912[&uParam0->f_371[iParam1 /*18*/] /*41*/])->f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_912[&uParam0->f_371[iParam1 /*18*/] /*41*/])->f_22)))
			{
				if (func_334(&(uParam0->f_1768)) >= IntToFloat(((uParam0->f_912[&uParam0->f_371[iParam1 /*18*/] /*41*/])->f_25 / 1000)))
				{
					func_1645(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&((uParam0->f_912[&uParam0->f_371[iParam1 /*18*/] /*41*/])->f_22)))
					{
						func_916(&(uParam0->f_1667), (uParam0->f_912[&uParam0->f_371[iParam1 /*18*/] /*41*/])->f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&((uParam0->f_912[&uParam0->f_371[iParam1 /*18*/] /*41*/])->f_22));
					}
					(uParam0->f_371[iParam1 /*18*/])->f_7 = 1;
				}
			}
			else
			{
				(uParam0->f_371[iParam1 /*18*/])->f_7 = 1;
			}
			break;
		
		case 10:
			(uParam0->f_371[iParam1 /*18*/])->f_7 = 1;
			break;
		
		case 11:
			(uParam0->f_371[iParam1 /*18*/])->f_7 = 1;
			uParam0->f_1581 = iParam1;
			break;
	}
}

int func_1258(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	
	iVar2 = uParam0->f_1584;
	if (iParam1 >= 0)
	{
		iVar2 = &uParam0->f_371[iParam1 /*18*/];
		fVar3 = (uParam0->f_912[uParam0->f_1584 /*41*/])->f_7;
		fVar4 = (uParam0->f_912[uParam0->f_1584 /*41*/])->f_7.f_1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	switch (func_749(uParam0))
	{
		case 0:
			if (!bParam3)
			{
				if (!func_1658(uParam0, iVar2))
				{
					uParam0->f_1581 = iParam1;
				}
				(uParam0->f_371[iParam1 /*18*/])->f_7 = 1;
			}
			if (((!func_698(uParam0->f_912[iVar2 /*41*/], 32) && func_1659()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355))) || (!func_698(uParam0->f_912[iVar2 /*41*/], 128) && uParam0->f_1795))
			{
				if (uParam0->f_1795)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1797, 0.1f, -1, false);
					if (!func_183(uParam0, 8192))
					{
						VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1797, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1797, 24, 1000);
					func_1267(uParam0, 8);
				}
				else
				{
					func_753(uParam0, 131072);
					func_1267(uParam0, 11);
				}
			}
			else if (uParam0->f_1793)
			{
				func_1267(uParam0, 5);
			}
			else
			{
				func_1660(uParam0);
			}
			break;
		
		case 1:
			bVar0 = func_767(&(uParam0->f_1765)) >= 3f;
			if ((((!func_421(Global_35, 716706914) && !func_421(Global_35, 242628503)) && func_767(&(uParam0->f_1765)) >= 2.5f) || (!func_481(func_1103(Global_35, 0, 1, 0)) && !func_481(func_1103(Global_35, 1, 1, 0)))) || bVar0)
			{
				func_1660(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		
		case 5:
		case 6:
			bVar0 = func_767(&(uParam0->f_1765)) >= 3.5f;
			iVar1 = 5664;
			if (func_698(uParam0->f_912[uParam0->f_1584 /*41*/], 512))
			{
				iVar1 |= 128;
			}
			if (!func_748(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (func_605(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584, 100, fVar3, fVar4))
			{
				func_1660(uParam0);
			}
			if ((!uParam0->f_1793 && !uParam0->f_1795) || bVar0)
			{
				uParam0->f_1582 = 0;
				if (func_749(uParam0) == 5 || iParam1 < 0)
				{
					func_1660(uParam0);
				}
				else
				{
					func_1661(uParam0, iParam1, bParam2);
					func_259(&(uParam0->f_1765));
					func_1267(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		
		case 7:
			bVar0 = func_767(&(uParam0->f_1765)) >= 1f;
			if (func_1052(Global_35, 242628503) || bVar0)
			{
				func_1267(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		
		case 3:
			if (!func_698(uParam0->f_912[iVar2 /*41*/], 256))
			{
				if (func_1610(&(uParam0->f_1799)))
				{
					func_1662(uParam0->f_1799, 0);
				}
			}
			func_259(&(uParam0->f_1765));
			func_1267(uParam0, 4);
			break;
		
		case 4:
			bVar0 = func_767(&(uParam0->f_1765)) >= 2f;
			if ((func_698(uParam0->f_912[iVar2 /*41*/], 256) || !func_1610(&uVar5)) || bVar0)
			{
				if (func_1663())
				{
					func_1664();
					func_1267(uParam0, 10);
				}
				else
				{
					func_1267(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		
		case 10:
			bVar0 = func_767(&(uParam0->f_1765)) >= 2f;
			if (func_1663() || bVar0)
			{
				func_1267(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		
		case 8:
			bVar0 = func_767(&(uParam0->f_1765)) >= 2f;
			iVar1 = 5664;
			if (func_698(uParam0->f_912[uParam0->f_1584 /*41*/], 512))
			{
				iVar1 |= 128;
			}
			if (!func_748(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (func_605(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1582 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1797, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				func_1267(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		
		case 9:
			if (func_767(&(uParam0->f_1765)) >= 0.75f)
			{
				if (!func_183(uParam0, 8192))
				{
					VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_1797, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
				func_753(uParam0, 131072);
				func_1267(uParam0, 11);
			}
			break;
		
		case 11:
			break;
	}
	return 0;
}

void func_1259(char* sParam0)
{
	if (sParam0->f_16)
	{
		CAM::_0x0A5A4F1979ABB40E(sParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && CAM::_0xDD0B7C5AE58F721D(sParam0))
		{
			CAM::_0x798BE43C9393632B(sParam0);
		}
		sParam0->f_16 = 0;
		StringCopy(sParam0, "", 64);
		StringCopy(&(sParam0->f_8), "", 64);
	}
}

void func_1260(var uParam0, int iParam1)
{
	uParam0->f_1562.f_1 = (uParam0->f_1562.f_1 - (uParam0->f_1562.f_1 && iParam1));
}

int func_1261(var uParam0, char* sParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	char cVar20[64];
	int iVar28;
	vector3 vVar29;
	int iVar32;
	int iVar33;
	
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_1785);
	if (!bVar0)
	{
		uParam0->f_1785 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
	}
	bVar1 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_1785);
	if (!bVar1)
	{
		return 0;
	}
	func_1665(uParam0);
	func_1217(uParam0, iParam2);
	if (func_183(uParam0, 16384))
	{
		func_1216(uParam0);
	}
	Var2.f_10 = joaat("weapon_unarmed");
	iVar18 = 0;
	while (iVar18 < 8)
	{
		iVar16 = -1;
		func_1666(uParam0, iVar18);
		if (func_1667(uParam0, 0))
		{
			if (func_1668(uParam0, 43, &iVar16))
			{
				if (iVar16 >= 0)
				{
					(uParam0->f_912[iVar16 /*41*/])->f_27 = 0;
					func_1669(uParam0, 1, &((uParam0->f_912[iVar16 /*41*/])->f_1));
					func_1669(uParam0, 2, &((uParam0->f_912[iVar16 /*41*/])->f_1.f_1));
					func_1669(uParam0, 3, &((uParam0->f_912[iVar16 /*41*/])->f_1.f_2));
					func_1669(uParam0, 4, &((uParam0->f_912[iVar16 /*41*/])->f_11));
					func_1669(uParam0, 5, &((uParam0->f_912[iVar16 /*41*/])->f_12));
					func_1669(uParam0, 6, &((uParam0->f_912[iVar16 /*41*/])->f_13));
					func_1669(uParam0, 7, &((uParam0->f_912[iVar16 /*41*/])->f_4));
					func_1669(uParam0, 8, &((uParam0->f_912[iVar16 /*41*/])->f_4.f_1));
					func_1669(uParam0, 9, &((uParam0->f_912[iVar16 /*41*/])->f_4.f_2));
					func_1669(uParam0, 10, &((uParam0->f_912[iVar16 /*41*/])->f_7));
					func_1669(uParam0, 11, &((uParam0->f_912[iVar16 /*41*/])->f_7.f_1));
					func_1669(uParam0, 12, &((uParam0->f_912[iVar16 /*41*/])->f_7.f_2));
					func_1669(uParam0, 13, &((uParam0->f_912[iVar16 /*41*/])->f_10));
					func_1669(uParam0, 14, &((uParam0->f_912[iVar16 /*41*/])->f_14));
					func_1669(uParam0, 15, &((uParam0->f_912[iVar16 /*41*/])->f_15));
					if (func_1668(uParam0, 16, &iVar17))
					{
						uParam0->f_912[iVar16 /*41*/] = iVar17;
					}
					func_1669(uParam0, 19, &((uParam0->f_912[iVar16 /*41*/])->f_16));
					func_1669(uParam0, 20, &((uParam0->f_912[iVar16 /*41*/])->f_17));
					func_1669(uParam0, 31, &((uParam0->f_912[iVar16 /*41*/])->f_18));
					if (func_1670(uParam0, 21, &cVar20))
					{
						MemCopy(&((uParam0->f_912[iVar16 /*41*/])->f_19), {cVar20}, 3);
					}
					if (func_1670(uParam0, 22, &cVar20))
					{
						MemCopy(&((uParam0->f_912[iVar16 /*41*/])->f_22), {cVar20}, 3);
					}
					func_1668(uParam0, 23, &((uParam0->f_912[iVar16 /*41*/])->f_25));
					func_1671(uParam0, &((uParam0->f_912[iVar16 /*41*/])->f_27));
					if (func_1670(uParam0, 35, &((uParam0->f_912[iVar16 /*41*/])->f_30)))
					{
					}
					if (func_1668(uParam0, 39, &iVar17))
					{
						(uParam0->f_912[iVar16 /*41*/])->f_39 = iVar17;
					}
					else
					{
						(uParam0->f_912[iVar16 /*41*/])->f_39 = 1;
					}
					if (func_1669(uParam0, 40, &((uParam0->f_912[iVar16 /*41*/])->f_40)))
					{
						func_1648(uParam0->f_912[iVar16 /*41*/], 2);
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_912[iVar16 /*41*/])->f_30)))
					{
						(uParam0->f_912[iVar16 /*41*/])->f_30 = { func_1015() };
					}
					(uParam0->f_912[iVar16 /*41*/])->f_29 = 1;
					if (uParam0->f_1791 == -1 || (uParam0->f_912[uParam0->f_1791 /*41*/])->f_17 < (uParam0->f_912[iVar16 /*41*/])->f_17)
					{
						uParam0->f_1791 = iVar16;
					}
				}
			}
		}
		iVar18++;
	}
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if ((uParam0->f_912[iVar18 /*41*/])->f_29)
		{
			vVar29 = { vVar29 + (uParam0->f_912[iVar18 /*41*/])->f_1 };
			iVar28++;
		}
		iVar18++;
	}
	vVar29 = { vVar29 / FtoV(BUILTIN::TO_FLOAT(iVar28)) };
	uParam0->f_1796 = 1;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if ((uParam0->f_912[iVar18 /*41*/])->f_29)
		{
			if (!func_1672(vVar29, (uParam0->f_912[iVar18 /*41*/])->f_1, 5f, 1))
			{
				uParam0->f_1796 = 0;
			}
			else
			{
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 11)
			{
				iVar16 = -1;
				func_1666(uParam0, iVar18);
				if (func_1667(uParam0, 45))
				{
					if (func_1668(uParam0, 47, &iVar16))
					{
						if (iVar16 >= 0)
						{
							func_1673(uParam0->f_1418[iVar16 /*10*/], 2);
							func_1670(uParam0, 46, uParam0->f_1418[iVar16 /*10*/]);
							if (func_1674(uParam0, 48, &bVar19))
							{
								if (bVar19)
								{
									func_1673(uParam0->f_1418[iVar16 /*10*/], 1);
								}
							}
							if (func_1668(uParam0, 49, &iVar17))
							{
								if (iVar17 == 1)
								{
									func_1673(uParam0->f_1418[iVar16 /*10*/], 8);
								}
								else if (iVar17 == 2)
								{
									func_1673(uParam0->f_1418[iVar16 /*10*/], 4);
								}
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 27)
			{
				iVar16 = -1;
				func_1666(uParam0, iVar18);
				if (func_1667(uParam0, 50))
				{
					if (func_1668(uParam0, 51, &iVar17))
					{
						Var2.f_1 = iVar17;
					}
					func_1668(uParam0, 43, &(Var2.f_3));
					if (func_1670(uParam0, 52, &cVar20))
					{
						MemCopy(&(Var2.f_4), {cVar20}, 4);
					}
					func_1669(uParam0, 53, &(Var2.f_8));
					if (func_1668(uParam0, 54, &iVar17))
					{
						Var2.f_10 = iVar17;
					}
					func_1674(uParam0, 55, &(Var2.f_11));
					func_1674(uParam0, 56, &(Var2.f_12));
					iVar32 = -1;
					if (func_1675(uParam0, Var2.f_1, &iVar32))
					{
						if (iVar32 >= 0 && iVar32 < 27)
						{
							(uParam0->f_3[iVar32 /*13*/])->f_3 = Var2.f_3;
							(uParam0->f_3[iVar32 /*13*/])->f_4 = { Var2.f_4 };
							(uParam0->f_3[iVar32 /*13*/])->f_8 = Var2.f_8;
							(uParam0->f_3[iVar32 /*13*/])->f_10 = Var2.f_10;
							(uParam0->f_3[iVar32 /*13*/])->f_11 = Var2.f_11;
							(uParam0->f_3[iVar32 /*13*/])->f_12 = Var2.f_12;
							uParam0->f_3[iVar32 /*13*/] = 1;
							if (func_1676(Var2.f_1))
							{
								func_753(uParam0, 16777216);
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			func_1666(uParam0, iVar18);
			if (func_1667(uParam0, 82))
			{
				if (func_1670(uParam0, 83, &cVar20))
				{
					MemCopy(&(uParam0->f_355), {cVar20}, 4);
				}
				func_1670(uParam0, 84, &(uParam0->f_355.f_4));
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355.f_4)))
				{
					if (uParam0->f_355.f_15 == 1)
					{
						uParam0->f_355.f_4 = { func_240() };
					}
					else if (uParam0->f_355.f_15 == 2)
					{
						uParam0->f_355.f_4 = { func_1015() };
					}
					else
					{
						uParam0->f_355.f_4 = { func_1015() };
					}
				}
			}
			iVar33 = -1;
			iVar18 = 0;
			while (iVar18 < 30)
			{
				iVar16 = -1;
				func_1666(uParam0, iVar18);
				if (func_1667(uParam0, 57))
				{
					if (func_1668(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							(uParam0->f_371[iVar16 /*18*/])->f_8 = 0;
							func_1668(uParam0, 58, uParam0->f_371[iVar16 /*18*/]);
							if (func_1668(uParam0, 59, &iVar17))
							{
								(uParam0->f_371[iVar16 /*18*/])->f_1 = func_1677(iVar17);
							}
							if (func_1668(uParam0, 60, &iVar17))
							{
								(uParam0->f_371[iVar16 /*18*/])->f_2 = func_1678(iVar17);
							}
							func_1668(uParam0, 61, &((uParam0->f_371[iVar16 /*18*/])->f_3));
							func_1669(uParam0, 67, &((uParam0->f_371[iVar16 /*18*/])->f_10));
							func_1669(uParam0, 70, &((uParam0->f_371[iVar16 /*18*/])->f_11));
							func_1669(uParam0, 68, &((uParam0->f_371[iVar16 /*18*/])->f_9));
							func_1668(uParam0, 72, &((uParam0->f_371[iVar16 /*18*/])->f_5));
							func_1669(uParam0, 77, &((uParam0->f_371[iVar16 /*18*/])->f_12));
							func_1668(uParam0, 78, &((uParam0->f_371[iVar16 /*18*/])->f_13));
							func_1668(uParam0, 79, &((uParam0->f_371[iVar16 /*18*/])->f_14));
							if (func_1668(uParam0, 73, &iVar17))
							{
								(uParam0->f_371[iVar16 /*18*/])->f_17 = iVar17;
							}
							if (func_1668(uParam0, 75, &iVar17))
							{
								(uParam0->f_371[iVar16 /*18*/])->f_4 = iVar17;
								bVar15 = true;
							}
							func_1669(uParam0, 80, &((uParam0->f_371[iVar16 /*18*/])->f_15));
							if (func_1674(uParam0, 63, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 1;
								}
							}
							if (func_1674(uParam0, 81, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 512;
								}
							}
							if (func_1674(uParam0, 64, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 2;
								}
							}
							if (func_1674(uParam0, 66, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 16;
								}
							}
							if (func_1674(uParam0, 69, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 32;
								}
							}
							if (func_1674(uParam0, 65, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 4;
								}
							}
							if (func_1674(uParam0, 74, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 64;
								}
							}
							if (func_1674(uParam0, 71, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 128;
								}
							}
							if (func_1674(uParam0, 76, &bVar19))
							{
								if (bVar19)
								{
									(uParam0->f_371[iVar16 /*18*/])->f_8 |= 256;
								}
							}
							if (!bVar15 && (uParam0->f_371[iVar16 /*18*/])->f_2 == 9)
							{
								(uParam0->f_371[iVar16 /*18*/])->f_4 = (uParam0->f_371[iVar16 /*18*/])->f_3;
								(uParam0->f_371[iVar16 /*18*/])->f_3 = 0;
							}
							if (iVar33 == -1 || iVar16 > iVar33)
							{
								iVar33 = iVar16;
							}
							(uParam0->f_371[iVar16 /*18*/])->f_16 = (uParam0->f_371[iVar16 /*18*/])->f_2;
							(uParam0->f_371[iVar16 /*18*/])->f_6 = 1;
						}
					}
				}
				iVar18++;
			}
			if (iVar33 < 29)
			{
				uParam0->f_1790 = iVar33 + 1;
			}
			iVar18 = 0;
			while (iVar18 < 8)
			{
				iVar16 = -1;
				func_1666(uParam0, iVar18);
				if (func_1667(uParam0, 85))
				{
					func_1668(uParam0, 86, &iVar16);
					if (iVar16 >= 0)
					{
						func_1674(uParam0, 87, uParam0->f_1241[iVar18 /*22*/]);
						func_1670(uParam0, 96, &((uParam0->f_1241[iVar18 /*22*/])->f_2));
						func_1670(uParam0, 97, &((uParam0->f_1241[iVar18 /*22*/])->f_10));
						func_1669(uParam0, 93, &((uParam0->f_1241[iVar18 /*22*/])->f_18));
						func_1669(uParam0, 94, &((uParam0->f_1241[iVar18 /*22*/])->f_19));
						func_1668(uParam0, 95, &((uParam0->f_1241[iVar18 /*22*/])->f_20));
						(uParam0->f_1241[iVar18 /*22*/])->f_1 = 0;
						func_1679(uParam0, &((uParam0->f_1241[iVar18 /*22*/])->f_1));
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 2)
			{
				iVar16 = -1;
				func_1666(uParam0, iVar18);
				if (func_1667(uParam0, 98))
				{
					if (func_1668(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							(uParam0->f_1529[iVar16 /*15*/])->f_10 = 0;
							func_1680(uParam0, 99, uParam0->f_1529[iVar16 /*15*/]);
							func_1680(uParam0, 100, &((uParam0->f_1529[iVar16 /*15*/])->f_6));
							func_1680(uParam0, 101, &((uParam0->f_1529[iVar16 /*15*/])->f_3));
							if (func_1668(uParam0, 102, &iVar17))
							{
								(uParam0->f_1529[iVar16 /*15*/])->f_9 = iVar17;
							}
							func_1671(uParam0, &((uParam0->f_1529[iVar16 /*15*/])->f_10));
							(uParam0->f_1529[iVar16 /*15*/])->f_11 = 1;
						}
					}
				}
				iVar18++;
			}
			DATAFILE::_DATAFILE_UNLOAD(uParam0->f_1785);
			func_753(uParam0, 1);
			func_753(uParam0, 16384);
			func_1681(uParam0);
			return 1;
		}
	}

int func_1262(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (((!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1418[iVar0 /*10*/]) && func_1650(uParam0->f_1418[iVar0 /*10*/], 2)) && !func_1650(uParam0->f_1418[iVar0 /*10*/], 16)) && func_1682(uParam0, iVar0))
		{
			if (!ANIMSCENE::_0x25557E324489393C((uParam0->f_1418[iVar0 /*10*/])->f_8))
			{
				(uParam0->f_1418[iVar0 /*10*/])->f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1418[iVar0 /*10*/], 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8);
				return 0;
			}
			else if (!ANIMSCENE::_0x95531A4A20CCE7BC((uParam0->f_1418[iVar0 /*10*/])->f_8, 0))
			{
				return 0;
			}
			if (ANIMSCENE::_0xA9016536015DE29D((uParam0->f_1418[iVar0 /*10*/])->f_8, "pl_breakout"))
			{
				func_1673(uParam0->f_1418[iVar0 /*10*/], 32);
			}
			ANIMSCENE::_DELETE_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8);
			func_1673(uParam0->f_1418[iVar0 /*10*/], 16);
		}
		iVar0++;
	}
	return 1;
}

void func_1263(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1418[iVar0 /*10*/]) && func_1650(uParam0->f_1418[iVar0 /*10*/], 2))
		{
			iVar1 = 0;
			if (func_1682(uParam0, iVar0))
			{
				iVar1 |= 1;
			}
			(uParam0->f_1418[iVar0 /*10*/])->f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1418[iVar0 /*10*/], iVar1, 0, false, true);
		}
		iVar0++;
	}
	StringCopy(&Var2, func_1239(), 64);
	StringCopy(&(Var2.f_8), func_1247(), 64);
	uParam0->f_1604 = { Var2 };
	uParam0->f_1627 = { Var2 };
	if (!func_697(uParam0, 8))
	{
		CAM::_0x6A4D224FC7643941(func_1239());
		func_1235(uParam0, 8);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1241[iVar0 /*22*/])->f_2)) && !MISC::ARE_STRINGS_EQUAL(&((uParam0->f_1241[iVar0 /*22*/])->f_2), func_1239()))
		{
			if (!CAM::_0xDD0B7C5AE58F721D(&((uParam0->f_1241[iVar0 /*22*/])->f_2)))
			{
				CAM::_0x6A4D224FC7643941(&((uParam0->f_1241[iVar0 /*22*/])->f_2));
				(uParam0->f_1241[iVar0 /*22*/])->f_21 = 1;
			}
		}
		iVar0++;
	}
}

int func_1264(var uParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;
	
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::_0x25557E324489393C((uParam0->f_1418[iVar0 /*10*/])->f_8))
		{
			if (!func_1650(uParam0->f_1418[iVar0 /*10*/], 64))
			{
				if (ANIMSCENE::_0x95531A4A20CCE7BC((uParam0->f_1418[iVar0 /*10*/])->f_8, 0))
				{
					func_1683(uParam0, (uParam0->f_1418[iVar0 /*10*/])->f_8);
					ANIMSCENE::LOAD_ANIM_SCENE((uParam0->f_1418[iVar0 /*10*/])->f_8);
					bVar1 = false;
					func_1673(uParam0->f_1418[iVar0 /*10*/], 64);
				}
				else
				{
					bVar1 = false;
				}
			}
			else if (!ANIMSCENE::_0x477122B8D05E7968((uParam0->f_1418[iVar0 /*10*/])->f_8, 1, 0))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_912)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_912[iVar0 /*41*/])->f_19)) && !MISC::ARE_STRINGS_EQUAL(&((uParam0->f_912[iVar0 /*41*/])->f_19), "empty"))
		{
			HUD::_0xF66090013DE648D5(&((uParam0->f_912[iVar0 /*41*/])->f_19));
			if (!HUD::_0xD0976CC34002DB57(&((uParam0->f_912[iVar0 /*41*/])->f_19)))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (func_697(uParam0, 8) && !CAM::_0xDD0B7C5AE58F721D(func_1239()))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1241[iVar0 /*22*/])->f_2)) && (uParam0->f_1241[iVar0 /*22*/])->f_21) && !CAM::_0xDD0B7C5AE58F721D(&((uParam0->f_1241[iVar0 /*22*/])->f_2)))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (!func_244(uParam0->f_1781) || uParam0->f_1784 != 0f)
		{
			bVar8 = true;
		}
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (ANIMSCENE::_0x25557E324489393C((uParam0->f_1418[iVar0 /*10*/])->f_8))
			{
				if (ANIMSCENE::_0xA9016536015DE29D((uParam0->f_1418[iVar0 /*10*/])->f_8, "pl_breakout"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE((uParam0->f_1418[iVar0 /*10*/])->f_8, "pl_breakout");
				}
				if (bVar8)
				{
					ANIMSCENE::_0xADF1D53F3B1FE0A7((uParam0->f_1418[iVar0 /*10*/])->f_8, &vVar2, &vVar5, 2);
					vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar2, uParam0->f_1784, uParam0->f_1781) };
					vVar5.f_2 = (vVar5.z - uParam0->f_1784);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN((uParam0->f_1418[iVar0 /*10*/])->f_8, vVar2, vVar5, 2);
				}
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

void func_1265(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if ((((!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2) && ENTITY::IS_ENTITY_A_PED((uParam0->f_3[iVar0 /*13*/])->f_2)) && !func_1684((uParam0->f_3[iVar0 /*13*/])->f_2)) && func_481((uParam0->f_3[iVar0 /*13*/])->f_10)) && !func_1676((uParam0->f_3[iVar0 /*13*/])->f_1))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam0->f_3[iVar0 /*13*/])->f_2);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, 0, 0))
				{
					if (func_1548((uParam0->f_3[iVar0 /*13*/])->f_10))
					{
						(uParam0->f_3[iVar0 /*13*/])->f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, 100, false, true, 7, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else if (WEAPON::_0x0556E9D2ECF39D01((uParam0->f_3[iVar0 /*13*/])->f_10))
					{
						(uParam0->f_3[iVar0 /*13*/])->f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, 100, false, true, 9, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else
					{
						(uParam0->f_3[iVar0 /*13*/])->f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, 100, false, true, 2, true, 0.5f, 1f, 752097756, false, 0f, false);
					}
				}
				if ((uParam0->f_3[iVar0 /*13*/])->f_11)
				{
					if (func_479(iVar1, 0, 0, 0) != (uParam0->f_3[iVar0 /*13*/])->f_10)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar1, (uParam0->f_3[iVar0 /*13*/])->f_10, true, 0, false, false);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1266(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_3[iVar0 /*13*/])->f_2) && (uParam0->f_3[iVar0 /*13*/])->f_12)
		{
			func_1685(uParam0->f_3[iVar0 /*13*/]);
		}
		iVar0++;
	}
}

void func_1267(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	func_259(&(uParam0->f_1765));
}

void func_1268(var uParam0)
{
	func_1686(uParam0);
	func_1687(uParam0);
}

int func_1269(int iParam0)
{
	if (!func_934(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_1270()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_1271(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_431(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_1272(var uParam0)
{
	if (uParam0->f_1581 < 0 || (uParam0->f_371[uParam0->f_1581 /*18*/])->f_4 < 0)
	{
		return -1;
	}
	return (uParam0->f_1418[(uParam0->f_371[uParam0->f_1581 /*18*/])->f_4 /*10*/])->f_8;
}

bool func_1273(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

char* func_1274(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return func_1013(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return func_1688(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return func_1689(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

int func_1275(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1276(var uParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && MISC::ARE_STRINGS_EQUAL(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam1))
		{
			return &(uParam0->f_13[iVar0 /*12*/]);
		}
		iVar0++;
	}
	return 0;
}

void func_1277(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 27)
	{
		if (&uParam0->f_13[iVar12 /*12*/] == iParam1)
		{
			*(uParam0->f_13[iVar12 /*12*/]) = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_1278(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1279(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1280(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

void func_1281(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 0, iParam1);
	PED::_0x6569F31A01B4C097(iVar0, 1, iParam1);
}

int func_1282(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_1283(int iParam0, var uParam1, var uParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;
	
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = uParam1;
	Var0.f_12[0] = uParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

bool func_1284(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1285(var uParam0)
{
	if (func_1284(&(uParam0->f_3), 4))
	{
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if ((!func_795(uParam0) || func_1284(&(uParam0->f_3), 4)) && !func_1284(&(uParam0->f_3), 256))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -1450761377, false);
			PAD::DISABLE_CONTROL_ACTION(0, -771458680, false);
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
			PAD::DISABLE_CONTROL_ACTION(1, -1450761377, false);
			PAD::DISABLE_CONTROL_ACTION(1, -771458680, false);
			PAD::DISABLE_CONTROL_ACTION(1, -1722177808, false);
			PAD::DISABLE_CONTROL_ACTION(2, -1450761377, false);
			PAD::DISABLE_CONTROL_ACTION(2, -771458680, false);
			PAD::DISABLE_CONTROL_ACTION(2, -1722177808, false);
		}
		PAD::DISABLE_CONTROL_ACTION(2, 2139949496, false);
	}
	if (func_1690(uParam0))
	{
		func_1287();
	}
	if (!func_1284(&(uParam0->f_3), 16))
	{
		if (func_79(uParam0))
		{
			if (func_82(uParam0) < uParam0->f_4)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
	}
}

int func_1286(vector3 vParam0, float fParam3, float fParam4, var uParam5, float fParam6)
{
	float fVar0;
	
	fVar0 = func_205(Global_35, vParam0, 1);
	if (fVar0 < fParam4 && uParam5)
	{
		return 1;
	}
	if (fVar0 > (fParam3 + fParam6))
	{
		return 1;
	}
	return 0;
}

void func_1287()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_1691();
}

int func_1288(vector3 vParam0, var uParam3, float fParam4)
{
	float fVar0;
	
	if (!func_1692(uParam3->f_7, uParam3->f_8))
	{
		return 0;
	}
	if (func_1284(&(uParam3->f_3), 1))
	{
		return 0;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return 0;
	}
	fVar0 = func_205(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return 0;
	}
	if (!func_1693(vParam0, uParam3))
	{
		return 0;
	}
	if (!func_1284(&(uParam3->f_3), 2))
	{
		if (!CAM::IS_SPHERE_VISIBLE(vParam0, 0.5f))
		{
			return 0;
		}
		if (!func_1694(vParam0, uParam3))
		{
			return 0;
		}
	}
	return 1;
}

void func_1289(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		return;
	}
	CAM::SET_GAMEPLAY_HINT_FOV(fParam4);
	fVar0 = func_1695(vParam1, 1);
	if (!func_1284(&(uParam0->f_3), 32))
	{
		if (fVar0 > 60f)
		{
			iVar1 = 4000;
			iVar2 = 3500;
		}
		else if (fVar0 > 40f)
		{
			iVar1 = 3750;
			iVar2 = 3250;
		}
		else if (fVar0 > 20f)
		{
			iVar1 = 3500;
			iVar2 = 3000;
		}
		else if (fVar0 > 10f)
		{
			iVar1 = 3250;
			iVar2 = 2750;
		}
		else
		{
			iVar1 = 3000;
			iVar2 = 2500;
		}
		if (iParam5 > iVar1)
		{
			uParam0->f_4 = iVar1;
		}
		else if (iParam5 < iVar2)
		{
			uParam0->f_4 = iVar2;
		}
		else
		{
			uParam0->f_4 = iParam5;
		}
		CAM::_0x1F6EBD94680252CE(iVar1, -1082130432);
		CAM::_0xF48664E9C83825E3(iVar2, -1082130432);
	}
	else
	{
		uParam0->f_4 = iParam5;
	}
	func_259(uParam0);
	func_1696(&(uParam0->f_3), 1);
}

int func_1290(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_79(&uParam0))
	{
		return 0;
	}
	if (func_82(&uParam0) <= iParam3 + 500)
	{
		return 0;
	}
	return 1;
}

int func_1291(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;
	
	uParam1->f_10 = func_396(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_244(uParam1->f_6))
		{
		}
	}
	bVar0 = func_624();
	if (*uParam1)
	{
		if (bVar0 && !func_492(((*Global_1835011)[4 /*74*/])->f_1, 1))
		{
			if (func_1697(5))
			{
				func_1698(5);
				func_1699(5);
				func_703(0);
				func_704(0);
			}
		}
	}
	if (func_1700(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_492(((*Global_1835011)[37 /*74*/])->f_1, 1)) && !func_492(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_492(((*Global_1835011)[43 /*74*/])->f_1, 1)) && !func_492(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_130(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_376(iVar1))
	{
		bVar3 = true;
		if (func_1701(iVar1))
		{
			bVar4 = true;
		}
		if (func_377(iVar1))
		{
			iVar5 = 1;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (iVar5 && !uParam1->f_5)
			{
				func_378(uParam1->f_10);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_1697(0) && func_1697(1))
			{
				func_1702(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1703())
			{
				func_702();
			}
			func_703(0);
			func_704(0);
			func_1614(uParam1->f_6);
		}
	}
	if (!func_376(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1704(uParam1->f_10) == 0 || func_1705(uParam1->f_10) == 0) || func_1706(uParam1->f_10) == 0)
			{
				func_1707(uParam1->f_10);
			}
			func_1708(uParam1->f_10);
			func_1709(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_130(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_376(iVar1))
	{
		bVar3 = true;
		if (func_1701(iVar1))
		{
			bVar4 = true;
		}
		if (func_377(iVar1))
		{
			iVar5 = 1;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_0x083D497D57B7400F(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!func_244(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (func_1710(uParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (iVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*iParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_0xB48050D326E9A2F3(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_0xD2CB0FB0FDCB473D(iVar6, 0);
				}
			}
			Var8 = { func_1711(uParam1->f_10) };
			Var10 = { func_1712() };
			func_1713(iVar2, &Var8, &Var10, 0);
			PLAYER::_0xD2CB0FB0FDCB473D(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_1714(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_1715(uParam1->f_10);
		if (uParam1->f_2 && !func_244(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*iParam0 = 2;
		return iVar2;
	}
	func_1716(uParam1->f_10);
	if (func_1714(uParam1->f_10))
	{
		iVar16 = func_1717(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

bool func_1292(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_1293(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_1294(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_1292(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_1295(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_1296(int iParam0)
{
	return (!ANIMSCENE::_0x25557E324489393C(iParam0) || ANIMSCENE::_0xD8254CB2C586412B(iParam0, 0));
}

void func_1297(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

char* func_1298(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		
		case 1:
			return "REGION_BAY_MACOMBS_END";
		
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		
		case 3:
			return "REGION_BAY_LAGRAS";
		
		case 4:
			return "REGION_BAY_LAKAY";
		
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		
		case 8:
			return "REGION_BAY_SERENDIPITY";
		
		case 9:
			return "REGION_BAY_SHADYBELLE";
		
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		
		case 15:
			return "REGION_BGV_FORTRIGGS";
		
		case 16:
			return "REGION_BGV_HANGINGDOG";
		
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		
		case 19:
			return "REGION_BGV_MONTO_REST";
		
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		
		case 22:
			return "REGION_BGV_PRONGHORN";
		
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		
		case 24:
			return "REGION_BGV_SHACK";
		
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		
		case 26:
			return "REGION_BGV_STRAWBERRY";
		
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		
		case 29:
			return "REGION_BGV_WATSONSCABIN";
		
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
		
		case 31:
			return "REGION_BLU_COPPERHEAD";
		
		case 32:
			return "REGION_BLU_SISIKA";
		
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
		
		case 34:
			return "REGION_CML_DINO_LADY";
		
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
		
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
		
		case 37:
			return "REGION_GRT_BEECHERS";
		
		case 38:
			return "REGION_GRT_BLACKWATER";
		
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
		
		case 40:
			return "REGION_GRZ_ADLERRANCH";
		
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
		
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
		
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		
		case 42:
			return "REGION_GRZ_CHEZPORTER";
		
		case 52:
			return "REGION_GRZ_COHUTTA";
		
		case 43:
			return "REGION_GRZ_COLTER";
		
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
		
		case 53:
			return "REGION_GRZ_GUNFIGHT";
		
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
		
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
		
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
		
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
		
		case 54:
			return "REGION_GRZ_THELOFT";
		
		case 55:
			return "REGION_GRE_VETERAN";
		
		case 56:
			return "REGION_GRZ_WAPITI";
		
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
		
		case 57:
			return "REGION_GUA_AGUASDULCES";
		
		case 58:
			return "REGION_GUA_CAMP";
		
		case 59:
			return "REGION_GUA_CINCOTORRES";
		
		case 60:
			return "REGION_GUA_LACAPILLA";
		
		case 61:
			return "REGION_GUA_MANICATO";
		
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
		
		case 64:
			return "REGION_HRT_CARMODYDELL";
		
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
		
		case 66:
			return "REGION_HRT_CROP_FARM";
		
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
		
		case 68:
			return "REGION_HRT_DOWNSRANCH";
		
		case 69:
			return "REGION_HRT_EMERALDRANCH";
		
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
		
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		
		case 72:
			return "REGION_HRT_LARNEDSOD";
		
		case 73:
			return "REGION_HRT_LOONY_CULT";
		
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
		
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
		
		case 76:
			return "REGION_HRT_VALENTINE";
		
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
		
		case 78:
			return "REGION_ROA_ANNESBURG";
		
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
		
		case 63:
			return "REGION_ROA_BEECHERS_C";
		
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
		
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
		
		case 83:
			return "REGION_ROA_DOVERHILL";
		
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
		
		case 85:
			return "REGION_ROA_ISOLATIONIST";
		
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
		
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
		
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
		
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
		
		case 90:
			return "REGION_ROA_TRAPPER";
		
		case 91:
			return "REGION_ROA_VANHORNMANSION";
		
		case 92:
			return "REGION_ROA_VANHORNPOST";
		
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
		
		case 94:
			return "REGION_SCM_BULGERGLADE";
		
		case 95:
			return "REGION_SCM_CALIGAHALL";
		
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
		
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
		
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
		
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
		
		case 100:
			return "REGION_SCM_DAIRY_FARM";
		
		case 101:
			return "REGION_SCM_HORSE_SHOP";
		
		case 102:
			return "REGION_SCM_LONNIESSHACK";
		
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
		
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
		
		case 105:
			return "REGION_SCM_RHODES";
		
		case 106:
			return "REGION_SCM_SLAVE_PEN";
		
		case 107:
			return "REGION_TAL_AURORA_BASIN";
		
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
		
		case 109:
			return "REGION_TAL_COCHINAY";
		
		case 110:
			return "REGION_TAL_MANZANITAPOST";
		
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
		
		case 112:
			return "REGION_TAL_TANNERSREACH";
		
		case 113:
			return "REGION_TAL_TRAPPER";
		
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
		
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
		
		case 120:
			return "REGION_CHO_ARMADILLO";
		
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
		
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
		
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
		
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
		
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
		
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
		
		case 115:
			return "REGION_GAP_TUMBLEWEED";
		
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
		
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
		
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
		
		case 118:
			return "REGION_RIO_FORT_MERCER";
		
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
		
		case 128:
			return "REGION_CENTRALUNIONRR";
		
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_1299()
{
	return UILOG::_UILOG_GET_CACHED_OBJECTIVE();
}

void func_1300(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_201(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		func_172(iParam0);
	}
	if (func_46(((*Global_1347702)[iParam0 /*49*/])->f_13, 256))
	{
		func_176(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 256);
	}
	if (func_31(((*Global_1347702)[iParam0 /*49*/])->f_12, 1024))
	{
		func_179(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 1024);
	}
	if (iParam1 == 1)
	{
		func_115(iParam0, 0);
	}
	func_173(iParam0);
	if (iParam3 == 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[iParam0 /*49*/])->f_42, false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1347702)[iParam0 /*49*/])->f_42, iParam4);
		}
		else
		{
			((*Global_1347702)[iParam0 /*49*/])->f_43 = 0;
		}
	}
}

int func_1301(int iParam0)
{
	int iVar0;
	
	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1302(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_431(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar1])))
			{
				func_1719(&iVar0, func_1718(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar1])));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
		{
			if (func_1720(iVar0, ((*Global_1347702)[iParam0 /*49*/])->f_15, 1, ((*Global_1347702)[iParam0 /*49*/])->f_27, func_891()))
			{
				func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2);
			}
		}
		else
		{
			func_47(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2);
		}
	}
}

var func_1303(int iParam0)
{
	var uVar0;
	
	uVar0 = func_979(((*Global_1347702)[iParam0 /*49*/])->f_48);
	func_854(&uVar0, 0, 0, ((*Global_1347702)[iParam0 /*49*/])->f_47, 0, 0, 0, 0);
	return uVar0;
}

bool func_1304(int iParam0, bool bParam1)
{
	return func_980(func_371(), iParam0, bParam1);
}

int func_1305(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_1315(Global_40.f_4283.f_6[iVar0 /*5*/], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1306(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 1)
	{
		func_1721(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_1307(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_1307(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_1721(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1722(1);
	}
}

bool func_1308(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_1309()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_979(((*Global_1347702)[9 /*49*/])->f_15);
	iVar1 = func_979(((*Global_1835011)[69 /*74*/])->f_1);
	if (func_980(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

int func_1310(int iParam0)
{
	if (!func_963(iParam0))
	{
		return 0;
	}
	return func_492(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_1311(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1723(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1724(iVar6);
	}
	return iVar5;
}

int func_1312(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1725(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_1313(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	func_1438(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
}

int func_1314(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 0;
		
		case 7:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 0;
		
		case 11:
			return 1;
		
		case 8:
			return 1;
		
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 0;
		
		default:
			break;
	}
	return 0;
}

void func_1315(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_1313(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_1316(2, *uParam0);
		}
		else
		{
			func_1317(2, *uParam0);
		}
	}
	func_1726(uParam0);
}

void func_1316(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483 /*3*/] = iParam0;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_1317(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] = iParam0;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

int func_1318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		
		case 2139774588:
			return 1;
		
		case 1142025875:
			return 2;
		
		case 1587891565:
			return 4;
		
		case 1877013492:
			return 32;
		
		case -643014279:
			return 64;
		
		case -597116214:
			return 128;
		
		case 551416228:
			return 256;
		
		case 1022576842:
			return 512;
		
		case 953325896:
			return 1024;
		
		case 508358508:
			return 2048;
		
		case -735200598:
			return 4096;
		
		case -856432278:
			return 8192;
		
		case -2010847721:
			return 16384;
		
		case 446961221:
			return 32768;
		
		case -1972216640:
			return 65536;
		
		case 530833824:
			return 131072;
		
		case 1682361219:
			return 262144;
		
		case 158959085:
			return 524288;
		
		case 1919819559:
			return 1048576;
		
		case 1461411082:
			return 2097152;
		
		case -549508280:
			return 4194304;
		
		default:
			break;
	}
	return 0;
}

int func_1319(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		
		case 1:
			return -2;
		
		case 2:
			return -5;
		
		case 3:
			return -10;
		
		case 4:
			return -20;
		
		case 5:
			return -40;
		
		case 6:
			return -160;
		
		case 7:
			return -320;
		
		case 8:
			return -480;
		
		case 18:
			return -640;
		
		case 9:
			return 0;
		
		case 10:
			return 1;
		
		case 11:
			return 2;
		
		case 12:
			return 5;
		
		case 13:
			return 10;
		
		case 14:
			return 20;
		
		case 15:
			return 40;
		
		case 16:
			return 160;
		
		case 17:
			return 640;
		
		default:
			break;
	}
	return 0;
}

void func_1320(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;
	
	iVar0 = func_292();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1727(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_633(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_350())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_834(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_292();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_293(iVar1);
		func_1729(func_1728(), 0, 4000);
		func_1730(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_1731(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_647(func_827(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_1319(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1732(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1169(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1169(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_647(func_827(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_1319(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1732(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1169(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1169(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_827(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_879(10, 1);
	}
}

void func_1321(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_1322(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1 /*38*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1 /*38*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

struct<10> func_1323(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

int func_1324(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12)
{
	*uParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*uParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1325(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_1326(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;
	
	if (!func_609(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 != 0 && !func_1733(iParam0, iParam1, 1))
	{
		return 0;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && func_1733(iParam0, Var2, 1))
				{
					if (func_1734(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1734(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_303(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_146(0, 0, 1))
		{
			func_882(1, 5);
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_1327(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_1328(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case -1375947476:
			iVar0 = 307;
			break;
		
		case -1704241585:
			iVar0 = 308;
			break;
		
		case -1267972061:
			iVar0 = 309;
			break;
		
		case -142033055:
			iVar0 = 310;
			break;
		
		case 890514341:
			iVar0 = 311;
			break;
		
		case -58963793:
			iVar0 = 312;
			break;
		
		case 1882019322:
			iVar0 = 313;
			break;
		
		case 807302083:
			iVar0 = 314;
			break;
		
		case 617759310:
			iVar0 = 315;
			break;
		
		case -378547623:
			iVar0 = 316;
			break;
		
		case 829545206:
			iVar0 = 317;
			break;
		
		case 891318243:
			iVar0 = 319;
			break;
		
		case 431374225:
			iVar0 = 320;
			break;
		
		case 1619534881:
			iVar0 = 321;
			break;
		
		case -755457379:
			iVar0 = 322;
			break;
		
		case 2141714005:
			iVar0 = 323;
			break;
		
		case 1015404643:
			iVar0 = 324;
			break;
		
		case 983875052:
			iVar0 = 325;
			break;
		
		case -1753730528:
			iVar0 = 326;
			break;
		
		case 2131765035:
			iVar0 = 327;
			break;
		
		case -1740272183:
			iVar0 = 328;
			break;
		
		case 1310680212:
			iVar0 = 329;
			break;
		
		case -1724192342:
			iVar0 = 330;
			break;
		
		case 912296423:
			iVar0 = 331;
			break;
		
		case -566881549:
			iVar0 = 332;
			break;
		
		case 147796381:
			iVar0 = 333;
			break;
		
		case -120865369:
			iVar0 = 334;
			break;
		
		case 1158808845:
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		func_303(iVar0, 0);
	}
}

void func_1329()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(33819255);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(2116153146, 0);
			func_1735(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, false);
			func_1736();
		}
		return;
	}
	if (!func_492(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	func_1737();
	if (MISSIONDATA::_0x57E798B54C45EE1A(1685912227) >= 2)
	{
		if (MISSIONDATA::_0x57E798B54C45EE1A(2116153146) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(2116153146, 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(645322743))
	{
		return;
	}
	func_1735(1);
}

void func_1330()
{
	if (!func_492(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(304788622))
	{
		return;
	}
	func_289(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(304788622, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1968398307))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-1968398307, true);
}

void func_1331()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(-751383868);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
		{
			func_1738(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1383789777))
	{
		return;
	}
	if (!func_492(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, true);
	func_1738(1);
}

void func_1332()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(-1499823613);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
		{
			func_1739(15000, 0, 0, 0, 1);
			func_1738(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1651350587))
	{
		return;
	}
	if (!func_492(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, true);
	func_1365(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1738(1);
}

void func_1333()
{
	bool bVar0;
	
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if ((!func_288(1191437462, 1, 0) && !func_174(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_289(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1740(1))
			{
				func_675(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if ((!func_288(1119149048, 1, 0) && !func_174(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_289(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1740(2))
			{
				func_675(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(2056119786) > 0 && !func_1740(4))
		{
			func_675(4);
		}
		if (func_1740(0))
		{
			func_1741(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if (func_288(1191437462, 1, 0))
			{
				func_312(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if (func_288(1119149048, 1, 0))
			{
				func_312(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1740(1))
		{
			func_1741(1);
		}
		if (func_1740(2))
		{
			func_1741(2);
		}
		if (func_1740(4))
		{
			func_1741(4);
		}
		if (!func_1740(0))
		{
			func_675(0);
		}
	}
}

void func_1334()
{
	bool bVar0;
	struct<4> Var1;
	int iVar15;
	int iVar16;
	
	bVar0 = UNLOCK::_UNLOCK_IS_UNLOCKED(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_492(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-236259196))
	{
		return;
	}
	Var1 = { func_1742() };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_580(127400949);
		if (func_639(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1742() };
		}
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_1743(-2055673461, Var1, 1423542233);
		func_1743(-202131179, Var1, -1264898804);
		func_1743(2013836545, Var1, 1592019450);
		func_1743(1497476650, Var1, 1117400455);
		func_1743(1063571467, Var1, 1150213537);
		func_1743(2107224237, Var1, 1598825281);
		func_1743(1747981656, Var1, -712527121);
		func_1743(-1371140647, Var1, 454332195);
		func_1743(-19142973, Var1, 256105670);
		func_1743(-2074737817, Var1, -1328061889);
		func_1743(-1114256243, Var1, -782241404);
		func_1743(-1653277288, Var1, 1669853467);
		func_1743(1869398132, Var1, -1559225678);
		func_1743(459868358, Var1, -266425508);
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !func_1631())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (func_481(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (WEAPON::_0xD955FEE4B87AFA07(iVar16))
					{
						if (func_633(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 0, false, false);
					}
					else if (WEAPON::_0x0556E9D2ECF39D01(iVar16))
					{
						if ((func_633(24) && func_481(iVar15)) && iVar15 != 127400949)
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_481(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_633(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 127400949, true, 2, false, false);
			}
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(-236259196, true);
	}
}

void func_1335()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(99890643))
	{
		return;
	}
	if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
}

int func_1336(int iParam0)
{
	switch (func_635(iParam0))
	{
		case -2061583405:
			return 1;
		
		case -1719060085:
			return 1;
		
		case -999503751:
			return 1;
		
		case -525676072:
			return 1;
		
		case 81053684:
			return 1;
		
		case -413129408:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_1337(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	switch (func_635(iParam0))
	{
		case -2061583405:
			bVar0 = func_1744(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		
		case 81053684:
			bVar0 = func_1744(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		
		case -999503751:
			bVar0 = func_1744(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		
		case -525676072:
			bVar0 = func_1744(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		
		case -1719060085:
			bVar0 = func_1744(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		
		case -413129408:
			bVar0 = func_1744(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1745();
	}
	if (bParam1)
	{
		func_1746(0, 0);
	}
}

int func_1338(int iParam0)
{
	struct<5> Var0;
	
	Var0 = { func_1072(iParam0, 1, 0) };
	return func_1141(Var0.f_4);
}

void func_1339(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	
	if (func_200() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_1142(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1570(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
		}
	}
}

int func_1340(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	
	Var4 = func_1747(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	Global_1946804->f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_1749(uParam0, func_1748(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_1142(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				Global_1946804->f_2612[Global_1946804->f_2652] = iVar1;
				Global_1946804->f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_1750(iVar3) && func_1751(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804->f_2652)
						{
							func_1571(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1] /*3*/]), &(Global_1946804->f_2612[iVar1]), 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return 1;
				}
			}
		}
	}

Vector3 func_1341(int iParam0, int iParam1)
{
	if (func_200() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		return *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	return *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

int func_1342(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { func_1341(iParam0, iParam1) };
	return vVar0.x;
}

void func_1343(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1344(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_1345(int iParam0)
{
	func_1570(Global_1946804->f_1497.f_1[func_1142(iParam0, 1) /*3*/], 2, 6);
	func_1570(Global_1946804->f_1378.f_1[func_1142(iParam0, 1) /*3*/], 2, 6);
}

bool func_1346(int iParam0)
{
	return iParam0 != 0;
}

int func_1347(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (!func_1346(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (&Global_40.f_9910[iVar1 /*6*/] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_1348(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

var func_1349(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1752(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1350(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1351(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1352(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1353(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1354(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		
		default:
			break;
	}
	return 30;
}

void func_1355(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1753(uParam0, iParam6);
	func_1754(uParam0, iParam5);
	func_1755(uParam0, iParam4);
	func_1756(uParam0, iParam3);
	func_1757(uParam0, iParam2);
	func_1758(uParam0, iParam1);
}

int func_1356(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_1353(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_1352(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_960(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_1349(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_1350(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_1351(iParam0);
	if (iVar5 < 1 || iVar5 > func_1354(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_1357(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1358()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1759(iVar1);
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(func_1760(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1359()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1759(iVar0);
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(func_1760(iVar1)))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(func_1760(iVar1), true);
		}
		iVar0++;
	}
}

void func_1360(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_431(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

bool func_1361()
{
	return (func_90(&Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1637780761) > 0);
}

int func_1362(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;
	
	if (func_200() != -1)
	{
		return 0;
	}
	if (&Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!func_609(iVar0, 0))
	{
		return 0;
	}
	if (!func_1761(iVar0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1503(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_631(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_1072(iVar0, 0, 1) };
	iVar10 = func_1762(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1763(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1764(iVar11))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	if (!func_289(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	func_1739(iVar11, 0, 0, 0, 1);
	*uParam3 = (*uParam3 + iVar11);
	*uParam1 = (*uParam1 + iVar2);
	return 1;
}

void func_1363(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1169(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

void func_1364(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar9;
	
	if (func_200() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (bParam0)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION(&uVar0))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar0, false))
			{
			}
		else
		{
			}
		}
	}
	if (bParam1)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar9))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar9, false))
			{
			}
		else
		{
			}
		}
	}
}

void func_1365(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1114(iParam0, sParam4, iParam5);
	}
	func_1115(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_1366(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam1) * fParam2));
	sVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1554())
	{
		iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(sVar1) * 0.1f));
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(1072517412, 908516622, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(2067252994, 908516622, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = sVar1;
	if (func_1554())
	{
		iVar3 = (iVar3 + iVar2);
	}
	TELEMETRY::_0xE6DC9B21AC7A8729(func_109(iParam0), iVar3, sVar1, iParam3);
	iVar4 = func_111(iParam0);
	if (func_110(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(-1391579956, 1997120069, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_ARTHUR"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_110(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1765(1, sVar1);
					func_1765(8, sVar1);
					func_1765(7, sVar1);
					break;
				
				case 12:
					func_1765(6, sVar1);
					break;
				
				case 53:
					func_1765(3, sVar1);
					func_1765(7, sVar1);
					func_1765(4, sVar1);
					break;
				
				case 20:
					func_1765(8, sVar1);
					break;
				
				case 19:
					func_1765(1, sVar1);
					func_1765(2, sVar1);
					break;
				
				case 24:
					func_1765(3, sVar1);
					func_1765(9, sVar1);
					func_1765(20, sVar1);
					break;
				
				case 28:
					func_1765(1, sVar1);
					break;
				
				case 34:
					func_1765(23, sVar1);
					func_1765(2, sVar1);
					func_1765(18, sVar1);
					break;
				
				case 29:
					func_1765(0, sVar1);
					func_1765(9, sVar1);
					break;
				
				case 37:
					break;
				
				case 58:
					break;
				
				case 57:
					func_1765(0, sVar1);
					func_1765(3, sVar1);
					func_1765(2, sVar1);
					func_1765(11, sVar1);
					func_1765(6, sVar1);
					func_1765(25, sVar1);
					func_1765(24, sVar1);
					break;
			}
			break;
		
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1765(5, sVar1);
					break;
				
				case 63:
					func_1765(1, sVar1);
					func_1765(3, sVar1);
					break;
				
				case 37:
					func_1765(23, sVar1);
					break;
				
				case 116:
					break;
			}
			break;
		
		case 11:
			if (iParam0 == func_496(0, 10, 11, 2116153146))
			{
				func_1765(7, sVar1);
				func_1765(4, sVar1);
			}
			else if (iParam0 == func_496(0, 7, 11, -379687487))
			{
				func_1765(8, sVar1);
				func_1765(15, sVar1);
			}
			else if (iParam0 == func_496(0, 8, 11, -1386089015))
			{
				func_1765(3, sVar1);
			}
			else if (iParam0 == func_496(0, 11, 11, -1952009645))
			{
				func_1765(6, sVar1);
				func_1765(3, sVar1);
			}
			else if (iParam0 == func_496(0, 12, 11, 2065895756))
			{
				func_1765(9, sVar1);
			}
			break;
	}
	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1766()));
	if (!func_527(629))
	{
		func_303(629, 0);
	}
}

int func_1367(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_1368(int iParam0, var uParam1, var uParam2)
{
	if (!func_1367(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		
		case 1:
			*uParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		
		case 2:
			*uParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		
		case 3:
			*uParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		
		case 4:
			*uParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		
		case 5:
			*uParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		
		case 6:
			*uParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		
		case 7:
			*uParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		
		case 8:
			*uParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		
		case 9:
			*uParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		
		case 10:
			*uParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		
		case 11:
			*uParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		
		case 12:
			*uParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		
		case 13:
			*uParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		
		case 14:
			*uParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		
		case 15:
			*uParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		
		case 16:
			*uParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_1369(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_57(iParam0))
	{
		return 0;
	}
	uVar0 = func_392(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_1370(var uParam0)
{
	return STATS::_0x4DAC398297981B87(uParam0);
}

int func_1371(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	*uParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_624();
	bVar1 = false;
	if (bVar0 && !func_1767(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1767(37)) && !func_1767(43))
	{
		*uParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1767(43)) && !func_1767(44))
	{
		bVar2 = true;
	}
	if (bVar1)
	{
		*uParam0 = 1;
		return 1;
	}
	if (!bVar1 && !bVar2)
	{
		if (func_1706(0) == 1)
		{
			*uParam0 = 1;
		}
		if (func_1706(1) == 1)
		{
			*uParam1 = 1;
		}
	}
	if (*uParam0 || *uParam1)
	{
		return 1;
	}
	return 0;
}

int func_1372()
{
	return Global_40.f_1095.f_3054;
}

int func_1373(int iParam0)
{
	iParam0 = func_396(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_420;
}

int func_1374(int iParam0, var uParam1)
{
	if (!func_1768(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1375()
{
	if (func_624())
	{
		if (!func_1767(3))
		{
			return func_1769(43);
		}
		if (func_1767(38) && !func_1767(43))
		{
			return func_1770(8);
		}
	}
	return 0;
}

bool func_1376(int iParam0)
{
	if (!func_354(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_1771(iParam0));
}

Vector3 func_1377(int iParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;
	
	func_1374(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -495185473;
		DATAFILE::_DATAFILE_GET_VECTOR(&vVar5, &Var0);
	}
	return vVar5;
}

int func_1378(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	
	if (LAW::_0x54310AAB97B92816(PLAYER::PLAYER_ID()) <= 0)
	{
		return 0;
	}
	if (Global_1310720->f_21 == -1)
	{
		return 0;
	}
	if (Global_1310720->f_23 >= 3)
	{
		return 0;
	}
	iVar0 = func_1772(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1374(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		DATAFILE::_DATAFILE_GET_HASH(&iVar6, &Var1);
		if (func_1773(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1379(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_1774(iParam0);
	if (func_912(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (uParam1 || iVar0 == -1);
}

int func_1380(int iParam0)
{
	struct<4> Var0;
	var uVar5;
	
	if (!func_1374(15, &Var0))
	{
		return 0;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = 303248275;
	if (DATAFILE::_DATAFILE_GET_BOOL(&uVar5, &Var0))
	{
	}
	return uVar5;
}

int func_1381(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10)
{
	int iVar0;
	int iVar1;
	
	if (bParam5)
	{
		if (func_1775(iParam3, iParam4))
		{
			return 0;
		}
	}
	if (!bParam7 || func_1776(5))
	{
		if (func_1777(iParam3, iParam4))
		{
			return 0;
		}
	}
	iVar0 = func_1700(vParam0);
	if (bParam6)
	{
		iVar1 = func_184(vParam0, 1);
		if (func_212(iVar1) || func_1778(iVar0, 1))
		{
			return 0;
		}
	}
	if (!func_1779(iParam3, iParam4))
	{
		return 0;
	}
	if (!func_1780())
	{
		if (func_1781(iParam3, iParam4))
		{
			return 0;
		}
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam8))
	{
		if (!func_1782(iVar0))
		{
			return 0;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_184(vParam0, 0))
				{
					return 0;
				}
			}
		}
	}
	if (!func_1783(iParam3, iParam4))
	{
		return 0;
	}
	if (func_1784(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return 0;
		}
	}
	if (!func_1785(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return 0;
		}
	}
	if (func_624())
	{
		if (VOLUME::_0x92A78D0BEDB332A3(iParam8))
		{
			if (!VOLUME::_0xF256A75210C5C0EB(iParam8, vParam0))
			{
				return 0;
			}
		}
		if (func_1786(vParam0, fParam10) || func_1787(vParam0, fParam10))
		{
			return 0;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return 0;
		}
	}
	return 1;
}

void func_1382(int* iParam0)
{
	MISC::_COPY_MEMORY(iParam0, &(Global_1879534->f_7301), 243);
}

int func_1383()
{
	if (func_1767(43) && !func_1767(44))
	{
		return 0;
	}
	if (func_1767(67) && func_1788() != 8)
	{
		return 0;
	}
	return 1;
}

float func_1384(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_1385(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

var func_1386(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;
	
	Var1 = { func_648(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

float func_1387(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

var func_1388(int iParam0)
{
	var uVar0;
	struct<2> Var1;
	
	Var1 = { func_827(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_1389()
{
	int iVar0;
	
	if (func_485(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_485(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_485(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_485(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_485(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_485(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_485(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_485(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_485(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_1390(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_1391()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_1789(iVar0);
		if (func_485(func_1790(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1392(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_1393(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	ENTITY::IS_ENTITY_DEAD(Global_35);
	*uParam0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 0);
	*uParam0 = (*uParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 1));
	*uParam0 = (*uParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 2));
	*uParam1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 0);
	*uParam1 = (*uParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 1));
	*uParam1 = (*uParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 2));
	*uParam1 += 6;
	iVar0 = func_612(-1845241476, 0, 0);
	iVar1 = func_612(1654063339, 0, 0);
	iVar2 = func_612(1623931083, 0, 0);
	*uParam0 = (*uParam0 + ((iVar0 + iVar1) + iVar2));
}

var func_1394(int iParam0)
{
	var uVar0;
	struct<2> Var1;
	
	Var1 = { func_646(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_1395()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_1791(iVar0);
		if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(iVar2) >= STATS::CHAL_GET_MAX_RANKS(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

var func_1396(var uParam0, var uParam1)
{
	var uVar0;
	
	STATS::STAT_ID_GET_FLOAT(&uParam0, &uVar0);
	return uVar0;
}

void func_1397(int iParam0, int iParam1)
{
	if (((*Global_1898346)[iParam0 /*6*/])->f_2 == 0 || iParam1)
	{
		((*Global_1898346)[iParam0 /*6*/])->f_2 = func_361(Global_1898330[iParam0]);
		func_1482(((*Global_1898346)[iParam0 /*6*/])->f_2, &(((*Global_1898346)[iParam0 /*6*/])->f_4), &(((*Global_1898346)[iParam0 /*6*/])->f_5), &(((*Global_1898346)[iParam0 /*6*/])->f_3));
	}
}

void func_1398(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

void func_1399(int iParam0)
{
	struct<16> Var0;
	
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iParam0 /*16*/])->f_10)))
	{
		return;
	}
	*((*Global_1934603)[iParam0 /*16*/]) = { Var0 };
	Global_1934603->f_161 = (Global_1934603->f_161 - 1);
	if (Global_1934603->f_161 < 0)
	{
		Global_1934603->f_161 = 0;
	}
}

int func_1400(int iParam0)
{
	int iVar0;
	
	iVar0 = func_909(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1792(iVar0);
}

int func_1401(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;
	
	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_1793(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_1402()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

void func_1403(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479->f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

void func_1404(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

bool func_1405(int iParam0)
{
	return func_1053(iParam0, 2);
}

void func_1406(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || uParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && uParam1));
	}
}

void func_1407(int iParam0)
{
	int iVar0;
	
	if (!func_934(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_1794(iParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = _NAMESPACE48::_0x4F76E3676583D951(iVar0);
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = 0;
		}
	}
}

void func_1408(int iParam0)
{
	if (func_431(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_1269(iParam0)))
		{
			func_1360(iParam0, 67108864, 1);
			func_925(iParam0, 19, 1);
		}
	}
}

float func_1409(int iParam0)
{
	if (!func_934(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_1410(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = func_1269(iParam0);
	iVar1 = func_926(iParam0, 0);
	func_1795(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		_NAMESPACE48::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar1);
}

int func_1411(int iParam0)
{
	if (!func_934(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

bool func_1412(int iParam0)
{
	if (!func_934(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_1413(int iParam0, int iParam1, bool bParam2)
{
	if (!func_934(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 - (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 && iParam1));
	}
}

int func_1414(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_934(iParam0))
	{
		return 0;
	}
	iVar0 = func_932(iParam0);
	if (func_206(iVar0, 0))
	{
		if (func_206(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((iParam1 || !func_1411(iParam0)) || func_1412(iParam0))
		{
			if (iParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_1796(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_1797(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_1798(iParam0);
					_NAMESPACE48::_0x7B204F88F6C3D287(func_1799(iParam0, 0));
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_1799(iParam0, 0));
					func_1800(iParam0);
				}
			}
			else
			{
				if (func_508(iParam0, 32768, 1))
				{
					iVar2 = func_1799(iParam0, 0);
					_NAMESPACE48::_0xB65E7F733956CF25(iVar2);
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_206(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_508(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_1798(iParam0);
				_NAMESPACE48::_0x7B204F88F6C3D287(func_1799(iParam0, 0));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_1799(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_1798(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_1801(iParam0, 0);
	return 1;
}

int func_1415(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_1802(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_1416(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_937(iParam0))
	{
		return;
	}
	func_1415(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		MISC::SET_BIT((*Global_1935183->f_73[iParam0 /*7*/])[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT((*Global_1935183->f_73[iParam0 /*7*/])[iVar0], iVar1);
	}
}

void func_1417(var uParam0)
{
	struct<5> Var0;
	
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

int func_1418(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		
		case -1719060085:
			return 16;
		
		case -999503751:
			return 1;
		
		case -525676072:
			return 4;
		
		case 81053684:
			return 8;
		
		case -413129408:
			return 32;
		
		default:
			break;
	}
	return 0;
}

void func_1419(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && uParam0));
}

void func_1420(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || uParam0);
}

bool func_1421(int iParam0, int iParam1)
{
	iParam0 = func_396(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1) != 0;
}

void func_1422(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1804(func_1803(255), 109029619));
	}
	else if (func_385())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_350();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1423(int iParam0)
{
	iParam0 = func_396(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372;
}

void func_1424(var uParam0, bool bParam1)
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1804(func_1803(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_385())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_350())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_1425(int iParam0)
{
	iParam0 = func_396(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_37;
}

float func_1426(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	var uVar12;
	
	iParam0 = func_396(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1704(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1423(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1423(iParam0) + 1;
	fVar6 = func_1805(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_1806(fVar3, fVar4, fVar11);
	return uVar12;
}

void func_1427(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, -401963276);
	MAP::_0xB059D7BD3D78C16F(iParam0, 231194138);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1012863186);
	MAP::_0xB059D7BD3D78C16F(iParam0, -272772079);
	MAP::_0xB059D7BD3D78C16F(iParam0, 1313031610);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1814032670);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1380599892);
	MAP::_0xB059D7BD3D78C16F(iParam0, 430539302);
	MAP::_0xB059D7BD3D78C16F(iParam0, -995247980);
	MAP::_0xB059D7BD3D78C16F(iParam0, -25056193);
	MAP::_0xB059D7BD3D78C16F(iParam0, -264630352);
}

void func_1428(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, 673950256);
	MAP::_0xB059D7BD3D78C16F(iParam0, 561559387);
	MAP::_0xB059D7BD3D78C16F(iParam0, -201249929);
}

int func_1429(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, -1805387726))
	{
		return 1;
	}
	return 0;
}

int func_1430(struct<2> Param0, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

bool func_1431(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_1432(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1433(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_1434(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = uParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = uParam1;
}

void func_1435(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

int func_1436(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_6;
	}
	return -15;
}

int func_1437(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

int func_1438(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_1807(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_1439(var uParam0, bool bParam1, int iParam2)
{
	func_1808(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225638->f_11)
		{
			return;
		}
		if (Global_1225638->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_1809(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == -1504859554)
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_959(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_1810(1))
						{
							func_959(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_1810(1) || *uParam0 & 8192 != 0))
				{
					func_958(uParam0, 33554432);
				}
			}
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_1811(uParam0))
			{
				uParam0->f_15 = func_261();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_261() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_1812(uParam0);
}

int func_1440(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return 0;
			}
			if (!func_1813(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_1814(iParam0, iVar2) <= func_1815(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_1441(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_1816(iParam2, 1, 1, 1, 0))
	{
		func_959(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_1817(uParam1, 1);
	func_1691();
}

int func_1442(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1818(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_1819(uParam1);
			if (func_1820(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_1821(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_1817(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_1817(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_1443(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_1822(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_1819(uParam2);
		if (func_1820(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_1821(uParam2)
				{
					func_1817(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1444(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_1813(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_1821(uParam1)
		{
			fVar3 = func_1819(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_1445(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_261();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_1446(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_1823(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630->f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed")) || (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_1454(uParam2, iParam1))
			{
				func_1817(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_1447(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	if (uParam2->f_12 < IntToFloat(func_1824(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_1454(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_1817(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1448(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_1825(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_1817(uParam2, 1);
					return 1;
				}
				break;
			
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_1817(uParam2, 1);
					return 1;
				}
				break;
			
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_1826(iParam1, vVar0, vVar4))
					{
						func_1817(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_1817(uParam2, 1);
					return 1;
				}
				break;
			
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_1826(iParam1, vVar0, vVar7))
					{
						func_1817(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_1449(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	
	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_1813(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_1827(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_1828(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_1829(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_1830(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_1831(uParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1450(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return 1;
	}
	return 0;
}

int func_1451(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_261();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_1452(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_1832(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_1833(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1453(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_1454(var uParam0, int iParam1)
{
	if (func_1834(uParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return 0;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_35) != 0)
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_1455(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_793(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1456()
{
}

int func_1457(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_1835(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_261();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_0xA8BA0BAE0173457B(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_205(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_261();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_1458()
{
	if (Global_1935630->f_42 == 0)
	{
		return 0;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return 0;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return 0;
	}
	if ((func_261() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_1459(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_1815(uParam0);
	if (uParam0->f_12 > func_1836(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_1837(iParam1);
	iVar1 = func_1838(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_1460(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_1839(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_1461(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (*uParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_1840(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			return 1;
		
		case -1601932249:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_1841(uParam1, iParam0))
					{
						if (func_205(iVar4, Global_36, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_1462(int iParam0, var uParam1)
{
	if (!func_1842(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_1463(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_261();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_1464(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_1465(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_261();
	}
	else if (func_261() - uParam1->f_4) > func_1843(uParam1)
	{
		return func_1844(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_1466(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_1467(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_1468(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1845(iParam0) == 1 && iParam7)
	{
		return;
	}
	if (bParam6)
	{
		if ((Global_17503.f_42[iParam0 /*8*/])->f_4 > iVar0)
		{
			return;
		}
	}
	if ((uParam1 || bParam6) || func_200() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

int func_1469(int iParam0, var uParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return 0;
	}
	if (iParam0 == 71)
	{
		return 0;
	}
	if ((uParam1 && MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27)) && ((*Global_1835011)[iParam0 /*74*/])->f_21 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_1470(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1846((*Global_1835011)[iParam0 /*74*/]);
	}
	return 0;
}

bool func_1471()
{
	return Global_1905944->f_5693 != -1;
}

bool func_1472()
{
	int iVar0;
	
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) <= 4);
}

bool func_1473()
{
	var uVar0;
	
	uVar0 = Global_1905944->f_5695;
	Global_1905944->f_5695 = 0;
	return uVar0;
}

char* func_1474(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return "Arthur";
		
		case -1464743433:
			return "Abe";
		
		case 1483156731:
			return "EdmundLowry";
		
		case -1418951751:
			return "ABERDEENPIGFARMER";
		
		case 2029634351:
			return "ABERDEENSISTER";
		
		case -288068792:
			return "AbigailRoberts";
		
		case 513427234:
			return "AlbertMason";
		
		case -121985991:
			return "ArchieDown";
		
		case -205121720:
			return "Baptiste";
		
		case -77509825:
			return "BartholomewBraithwaite";
		
		case -55633154:
			return "CS_BEATENUPCAPTAIN";
		
		case 1266159496:
			return "BeauGray";
		
		case -2045269112:
			return "PenelopeBraithwaite";
		
		case 2070393450:
			return "BillWilliamson";
		
		case 477547053:
			return "BraithwaiteServant";
		
		case 1382164045:
			return "CatherineBraithwaite";
		
		case 1407031519:
			return "CharlesSmith";
		
		case -754733870:
			return "CS_CIGCARDGUY";
		
		case 1253299569:
			return "CS_DINOBONESLADY";
		
		case -464684897:
			return "Cleet";
		
		case -820975767:
			return "ColmODriscoll";
		
		case -1765531164:
			return "CreoleGuy";
		
		case -820854800:
			return "SDDoctor_01";
		
		case 382040614:
			return "DaleMaroney";
		
		case 1944593012:
			return "Dutch";
		
		case -450226655:
			return "EdithDown";
		
		case -1920451728:
			return "Fussar";
		
		case 1514128030:
			return "cs_fishcollector";
		
		case -1865855539:
			return "Bronte";
		
		case -1629501717:
			return "GuidoMartelli";
		
		case -1208814201:
			return "U_M_M_NBXBRONTEGOON_01";
		
		case 1478983280:
			return "G_M_M_UNIBRONTEGOONS_01";
		
		case -1769295812:
			return "GarethBraithwaite";
		
		case 1020041649:
			return "GenStoryFemale";
		
		case -639059862:
			return "GenStoryMale";
		
		case -920985758:
			return "Leon";
		
		case -1154137714:
			return "GeraldBraithwaite";
		
		case 1225208808:
			return "HoseaMatthews";
		
		case 1912073755:
			return "JackMarston";
		
		case -631664452:
			return "JackMarston_Teen";
		
		case 4991732:
			return "Jamie";
		
		case 1843625996:
			return "JavierEscuella";
		
		case 1815090590:
			return "JimCalloway";
		
		case -446093729:
			return "Joe";
		
		case 95866989:
			return "JohnMarston";
		
		case 2100656433:
			return "CS_JOHNWEATHERS";
		
		case 1006468445:
			return "JosiahTrelawny";
		
		case -1707202053:
			return "Karen";
		
		case 358502875:
			return "MrsAdler";
		
		case 1939579094:
			return "Kieran";
		
		case -100461901:
			return "LeoStrauss";
		
		case 1304311224:
			return "LondonderrySon";
		
		case -1690877284:
			return "MaryBeth";
		
		case 1051047356:
			return "MaryLinton";
		
		case -566878875:
			return "MicahBell";
		
		case -346700962:
			return "MollyOshea";
		
		case -272634447:
			return "CS_MrLinton";
		
		case 984264800:
			return "MrPearson";
		
		case 1367851675:
			return "MrsLondonderry";
		
		case -2075588078:
			return "Mud2BigGuy";
		
		case 2115504616:
			return "ProfessorBell";
		
		case 1618031732:
			return "RevSwanson";
		
		case -265719023:
			return "CS_Samaritan";
		
		case -1483559144:
			return "StrDeputy_01";
		
		case -572941403:
			return "StrDeputy_02";
		
		case -2081966149:
		case 2012148102:
			return "StrSheriff_01";
		
		case 1695129705:
			return "SusanGrimshaw";
		
		case 1407740785:
			return "TavishGray";
		
		case 1231309423:
			return "TheodoreLevin";
		
		case 65010948:
			return "ThomasDown";
		
		case 1038525765:
			return "Tilly";
		
		case -969464097:
			return "Uncle";
		
		case 1057570823:
			return "G_M_M_UniCriminals_01";
		
		case 347599949:
			return "G_M_M_UNIDUSTER_01";
		
		case -1884146832:
			return "CS_VALSHERIFF";
		
		case 826385717:
			return "S_M_M_MARSHALLSRURAL_01";
		
		case -831368594:
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		
		case -522739022:
			return "Sean";
		
		case -122790003:
			return "Lenny";
		
		case 1276534479:
			return "Hercule";
		
		case -781994133:
			return "CreoleCaptain";
		
		case -628794682:
			return "U_M_M_CREOLECAPTAIN_01";
		
		case 1999476738:
			return "RingMaster";
		
		case -1221341425:
			return "U_M_M_VALBARTENDER_01";
		
		case -439429058:
			return "A_M_M_EMRFARMHAND_01";
		
		case -1646366239:
			return "A_M_M_GriSurvivalist_01";
		
		case 1439158431:
			return "LillyMillet";
		
		case -1384606398:
			return "A_F_M_STRTOWNFOLK_01";
		
		case 1127589605:
			return "A_M_M_STRTOWNFOLK_01";
		
		case 413771941:
			return "S_M_M_STRLUMBERJACK_01";
		
		case -1990962020:
			return "G_M_M_UniCriminals_02";
		
		case -1818007055:
			return "G_M_M_UNICORNWALLGOONS_01";
		
		case 79156795:
			return "A_M_M_NBXUPPERCLASS_01";
		
		case -1039531072:
			return "A_F_M_NBXUPPERCLASS_01";
		
		case 525529657:
			return "A_M_M_VALFARMER_01";
		
		case -2087759666:
			return "A_M_M_VALTOWNFOLK_01";
		
		case -1789856687:
			return "A_M_M_VALTOWNFOLK_02";
		
		case -161027961:
			return "A_F_M_VALTOWNFOLK_01";
		
		case 518339740:
			return "U_M_M_NBXBARTENDER_01";
		
		case 2041494024:
			return "NBXExecuted";
		
		case -944019243:
			return "RHODEPUTY_01";
		
		case -949242502:
			return "RHDSHERIFF_01";
		
		case -1745321414:
			return "LeighGray";
		
		case -1038436471:
			return "Horse_01";
		
		case 273671859:
			return "U_M_M_StrGenStoreOwner_01";
		
		case -1161832176:
			return "TomDickens";
		
		case -1632694866:
			return "DavidGeddes";
		
		case 1446935015:
			return "ANSEL_ATHERTON";
		
		case -1101883765:
			return "CS_Wrobel";
		
		case joaat("a_c_cow"):
			return "COW";
		
		case 195700131:
			return "BULL";
		
		case 686051865:
			return "ALBERTCAKEESQUIRE";
		
		case 1767420034:
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		
		case -1033903759:
			return "A_C_DOGCATAHOULACUR_01";
		
		case 1591685812:
			return "A_C_DOGRUFUS_01";
		
		case -896926592:
			return "A_C_DOGLION_01";
		
		case -695175124:
			return "Handler";
		
		case 1891548111:
			return "VALAUCTIONBOSS_01";
		
		case -1049237750:
			return "NbxReceptionist_01";
		
		case -1206299098:
			return "U_M_M_BiVForeman_01";
		
		case -532378284:
			return "U_M_M_RACFOREMAN_01";
		
		case -2075028835:
			return "CHAINPRISONER_01";
		
		case -211291960:
			return "CHAINPRISONER_02";
		
		case -692960126:
			return "U_M_M_ValPokerPlayer_01";
		
		case 60202542:
			return "U_M_M_ValPokerPlayer_02";
		
		case -1614719852:
			return "DUNCANGEDDES";
		
		case -167880668:
			return "ANGUSGEDDES";
		
		case 743219360:
			return "EvelynMiller";
		
		case -2086875988:
			return "SISTERCALDERON";
		
		case -46607261:
			return "EDGARROSS";
		
		case 54030454:
			return "U_M_M_GriSurvivalist_01";
		
		case -378814141:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		
		case -140869950:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		
		case 1726657594:
			return "U_M_M_BHT_STRAWBERRYDUEL";
		
		case 1057932105:
			return "StationWorker";
		
		case 1294255258:
			return "LEVISIMON";
		
		case -384354290:
			return "S_M_M_GULFUSSARS_01";
		
		case 1772321403:
			return "A_C_DONKEY_01";
		
		case 223197487:
			return "S_M_M_ISPWORKER_01";
		
		case 355963118:
			return "S_M_M_ISPWORKER_02";
		
		case -1874017143:
			return "U_M_O_ValBartender_01";
		
		case 219322615:
			return "U_M_M_NBXBARTENDER_02";
		
		case -2014377075:
			return "CS_UNIDUSTERJAIL_01";
		
		case 977834008:
			return "A_M_M_RHDTOWNFOLK_01";
		
		case 2052768310:
			return "U_M_M_UNIBOUNTYHUNTER_01";
		
		case -1332334928:
			return "U_M_M_UNIBOUNTYHUNTER_02";
		
		case 482703333:
			return "BrotherDorkins";
		
		case 731029607:
			return "G_M_M_UniBraithwaites_01";
		
		case -1918128574:
			return "A_M_M_GAMHIGHSOCIETY_01";
		
		case 292812873:
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		
		case -1772051411:
			return "EagleFlies";
		
		case -2046943672:
			return "CS_RAINSFALL";
		
		case 830712509:
			return "A_M_M_WapWarriors_01";
		
		case 264503396:
			return "A_M_Y_NBXSTREETKIDS_01";
		
		case -2044758506:
			return "U_M_M_BHT_SHACKESCAPE";
		
		case -1445135526:
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		
		case 988668512:
			return "LemiuxAssistant";
		
		case -1608851079:
			return "p_keys01x";
		
		case 624882545:
			return "CS_BALLOONOPERATOR";
		
		case -1820002752:
			return "Worker1";
		
		case 1624257462:
			return "U_M_M_BHT_MINEFOREMAN";
		
		case 1453686794:
			return "A_M_M_NbxSlums_01";
		
		case -454661055:
			return "U_M_M_NBXPRIEST_01";
		
		case -1124266369:
			return "A_C_BEAR_01";
		
		case 960530301:
			return "MARSHALL_THURWELL";
		
		case 1347320453:
			return "CS_FAMOUSGUNSLINGER_02";
		
		case -290265603:
			return "cs_sd_streetkid_01";
		
		case 1861707396:
			return "cs_sd_streetkid_02";
		
		case 68512371:
			return "ObediahHinton";
		
		case 774211111:
			return "PoisonWellShaman";
		
		case 1923327795:
			return "A_M_M_EMRFARMHAND_01";
		
		case 722156226:
			return "u_m_m_bht_benedictallbright";
		
		case -1258801034:
			return "Jules";
		
		case -1466017978:
			return "MRDEVON";
		
		case 1101050871:
			return "MRWAYNE";
		
		case -1135378761:
			return "PAYTAH";
		
		case 1812458547:
			return "CS_VALDEPUTY_01";
		
		case 167491564:
			return "MES_SADIE5_MALES_01^1";
		
		case -310853585:
			return "A_M_M_NBXDOCKWORKERS_01";
		
		case -1817144219:
			return "U_M_M_VALSHERIFF_01";
		
		case 1086659483:
			return "S_M_M_BANKCLERK_01";
		
		case 1112571710:
			return "U_M_M_NBXBRONTEASC_01";
		
		case -363708904:
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_1475(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1476(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_1477(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1478(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_348, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_348, sParam1, iParam2, iParam3);
}

void func_1479(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_0x7F5D88333EE8A86F(iParam0, iVar0);
		iVar0++;
	}
}

char* func_1480(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "musicData/triggers/trigger(%i)";
		
		case 1:
			return ":EVENT_INDEX";
		
		case 2:
			return ":EVENT_TYPE";
		
		case 3:
			return ":EVENT_LABEL";
		
		case 4:
			return ":EVENT_FLAGS";
		
		case 5:
			return ":EVENT_START";
		
		case 6:
			return ":EVENT_START_INT";
		
		case 7:
			return ":EVENT_START_INT2";
		
		case 8:
			return ":EVENT_END";
		
		case 9:
			return ":EVENT_END_INT";
		
		case 10:
			return ":EVENT_END_INT2";
		
		case 11:
			return ":EVENT_PED_USEAGE";
		
		case 12:
			return "musicData/entities/entity(%i)";
		
		case 13:
			return ":INDEX";
		
		case 14:
			return ":MODEL_NAME";
	}
	return "";
}

void func_1481(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_1847(iParam1))
		{
			func_800(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_0x283978A15512B2FE(iParam0, 1);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_1848(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_1849(iParam0, 0);
			bVar0 = true;
		}
		func_1850(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_1482(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_362(iParam0);
	*uParam1 = func_363(iParam0);
	*uParam2 = func_364(iParam0);
}

void func_1483(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { *(Global_1898164->f_1[iParam0 /*5*/]) };
	*(Global_1898164->f_1[iParam0 /*5*/]) = { *(Global_1898164->f_1[iParam1 /*5*/]) };
	*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
}

void func_1484(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_1488(*uParam0, -1);
		func_1489(*uParam0, 0);
		func_1490(*uParam0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[*uParam0])))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(&(Global_36307[*uParam0]));
			}
			MAP::REMOVE_BLIP(Global_36307[*uParam0]);
		}
	}
	*uParam0 = -1;
}

void func_1485(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0])))
		{
			MAP::_0xB059D7BD3D78C16F(&(Global_36307[iParam0]), iParam1);
		}
	}
}

int func_1486(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 5;
		
		case 2:
			return 26;
		
		case 3:
			return 38;
		
		case 4:
			return 69;
		
		case 5:
			return 76;
		
		case 6:
			return 78;
		
		case 7:
			return 92;
		
		case 8:
			return 105;
		
		case 9:
			return 115;
		
		case 10:
			return 120;
		
		default:
			break;
	}
	return -1;
}

int func_1487(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1341870286;
		
		case 5:
			return -1706412559;
		
		case 26:
			return 279909480;
		
		case 38:
			return -412614304;
		
		case 69:
			return -653335484;
		
		case 76:
			return 1777802794;
		
		case 78:
			return 1088576970;
		
		case 92:
			return 412321676;
		
		case 105:
			return 1787788681;
		
		case 115:
			return 1635466279;
		
		case 120:
			return -410502938;
		
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return 7148155;
		
		default:
			break;
	}
	return 0;
}

void func_1488(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42605[iParam0 /*4*/] = iParam1;
	return;
}

void func_1489(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_1 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_1 = iParam1;
	return;
}

void func_1490(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_2 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_2 = iParam1;
	return;
}

void func_1491(int iParam0, bool bParam1, int iParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_7, iParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_9, sParam3);
}

void func_1492(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	
	sVar0 = func_1851(0, 1, bParam0, bParam1);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[1]), bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 0);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 1);
	}
}

int func_1493(int iParam0)
{
	float fVar0;
	
	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

int func_1494(var uParam0, int iParam1, char* sParam2, int iParam3, var uParam4, var uParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (uParam4 && ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_1274(iParam1);
	}
	if (iParam3 == 0)
	{
		iParam3 = ENTITY::GET_ENTITY_MODEL(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
	}
	if (!func_721(uParam0, iParam1, 4))
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_348, sParam2))
		{
			func_1852(uParam0, iParam1, 4);
			return 1;
		}
		else if (uParam5 && ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_348, sParam2))
		{
			func_1852(uParam0, iParam1, 4);
			return 1;
		}
	}
	return 0;
}

void func_1495(var uParam0, int iParam1)
{
	uParam0->f_343 = (uParam0->f_343 || iParam1);
}

int func_1496()
{
	if (func_200() == -1 && func_146(0, 0, 1))
	{
		return (Global_1357549->f_1495 & 512 != 0 && Global_1357549->f_1494 & 2 != 0);
	}
	return 0;
}

void func_1497(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_1053(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_1498(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_1499(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

void func_1500(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

void func_1501(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_1502(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_1503(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;
	
	if (!func_609(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

struct<4> func_1504(bool bParam0)
{
	return func_1098(1328661203, func_1853(), -1591664384, bParam0);
}

int func_1505(int iParam0, bool bParam1)
{
	if (func_635(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_1074(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_1506(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_1067(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_1098(271701509, func_1504(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_1098(271701509, func_1504(bParam0), 12999093, 0);
}

int func_1507(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_635(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_1508(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_1067(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_1509(var uParam0)
{
	if (!func_609(*uParam0, 0))
	{
		return 0;
	}
	switch (*uParam0)
	{
		case -1073808995:
			*uParam0 = -1753819339;
			return 1;
		
		case 1903483453:
			*uParam0 = -1527293029;
			return 1;
		
		case -541584777:
			*uParam0 = 206762213;
			return 1;
		
		case 998010398:
			*uParam0 = -324053813;
			return 1;
		
		case -1424823393:
			*uParam0 = -885810591;
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_1510(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;
	
	if (!func_609(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1072(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1095((375 + iVar29), 1);
		if (func_1096(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_1097(iParam0, &Var6, iVar5);
			if ((iParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return 1;
			}
		}
		iVar29++;
	}
	return 0;
}

int func_1511(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;
	
	if (!func_609(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1098(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_1067(bParam6), &Var0, 0);
	return uVar4;
}

int func_1512(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_1513(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		
		case 2:
			return 20f;
		
		case 3:
			return 10f;
		
		case 4:
			return 10f;
		
		case 5:
			return 20f;
		
		case 6:
			return 10f;
		
		case 7:
			return 15f;
		
		case 8:
			return 15f;
		
		case 9:
			return 20f;
		
		case 10:
			return 5f;
		
		case 11:
			return 5f;
		
		case 12:
			return 10f;
		
		case 13:
			return 20f;
		
		case 14:
			return 30f;
		
		case 15:
			return 5f;
		
		case 16:
			return 5f;
		
		case 17:
			return 3f;
		
		case 18:
			return 20f;
		
		case 19:
			return func_1854(iParam0);
		
		case 20:
			return 25f;
		
		case 21:
			return 50f;
		
		case 22:
			return 100f;
		
		case 23:
			return 150f;
		
		case 24:
			return 20f;
		
		case 25:
			return 10f;
		
		case 26:
			return 20f;
		
		case 27:
			return 20f;
		
		case 28:
			return 20f;
		
		case 29:
			return 20f;
		
		case 30:
			return func_1854(iParam0);
		
		case 31:
			return 25f;
		
		case 32:
			return 50f;
		
		case 33:
			return 100f;
		
		case 34:
			return 150f;
		
		case 35:
			return 1f;
		
		case 36:
			return 5f;
		
		case 37:
			return 1f;
		
		case 38:
			return 3f;
		
		case 39:
			return 1f;
		
		case 40:
			return 1f;
		
		case 41:
			return 1f;
		
		case 42:
			return 5f;
		
		case 43:
			return 10f;
		
		case 49:
			return 20f;
		
		case 44:
			return 5f;
		
		case 45:
			return 5f;
		
		case 46:
			return 10f;
		
		case 47:
			return 10f;
		
		case 48:
			return 5f;
		
		case 50:
			return func_1854(iParam0);
		
		case 51:
			return 25f;
		
		case 52:
			return 50f;
		
		case 53:
			return 100f;
		
		case 54:
			return 150f;
		
		case 55:
			return 5f;
		
		default:
			break;
	}
	return 0f;
}

int func_1514(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_633(18);
		
		case 2:
			return func_633(20);
		
		case 1:
			return func_633(19);
		
		default:
			break;
	}
	return 1;
}

int func_1515(int iParam0)
{
	return func_1855(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1516(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (func_200() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_633(31))
	{
		return;
	}
	iVar0 = func_1515(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1515(iParam0);
	if (func_1856(iParam0) && func_1857(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1858(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1859(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_303(func_1860(iParam0), 0);
					}
					func_1861(iParam0, iVar2, iVar3);
					func_1862(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_1517(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1518(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		
		case 0:
			return 2001720289;
		
		case 2:
			return 234329797;
		
		default:
			break;
	}
	return 0;
}

int func_1519()
{
	return func_1863(Global_40.f_12018);
}

int func_1520()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1080(iVar1);
		if (func_288(iVar2, 1, 0) || func_1526(func_1525(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1521()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1864(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1522()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1531(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1523()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_1524(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		
		case 1:
			return -1021394391;
		
		case 2:
			return -987306668;
		
		case 3:
			return -1028735103;
		
		case 4:
			return 515229791;
		
		case 5:
			return -1230863414;
		
		case 6:
			return 232875659;
		
		case 7:
			return 1423129537;
		
		case 8:
			return -435742319;
		
		case 9:
			return -1854702679;
		
		case 10:
			return 1265323898;
		
		case 11:
			return -479775696;
		
		default:
			break;
	}
	return 0;
}

int func_1525(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		
		case -1021394391:
			return 8;
		
		case 232875659:
			return 4;
		
		case -1028735103:
			return 16;
		
		case 554799588:
			return 32;
		
		case 1265323898:
			return 64;
		
		case -1854702679:
			return 128;
		
		case -987306668:
			return 256;
		
		case -479775696:
			return 2;
		
		case 515229791:
			return 512;
		
		case -435742319:
			return 1024;
		
		case 1423129537:
			return 2048;
		
		default:
			break;
	}
	return 0;
}

bool func_1526(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_1527(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		
		case 1:
			return "COL_DB_SEND";
		
		case 2:
			return "COL_DB_COLLECT";
		
		default:
			break;
	}
	return "";
}

int func_1528(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 6;
		
		case 2:
			return 7;
		
		case 3:
			return 8;
		
		case 4:
			return 9;
		
		default:
			break;
	}
	return 5;
}

int func_1529(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 16;
		
		case 2:
			return 17;
		
		case 3:
			return 18;
		
		case 4:
			return 19;
		
		default:
			break;
	}
	return 15;
}

char* func_1530(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		
		case -222563712:
			return "COL_HF_FOUND";
		
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		
		case 2116770557:
			return "COL_GF_FOUND";
		
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		
		case 2085530337:
			return "COL_SF_FOUND";
		
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		
		default:
			break;
	}
	return "";
}

bool func_1531(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_1532(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		
		default:
			break;
	}
	return "";
}

char* func_1533(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		
		case 1:
			return "COL_RC_SEND";
		
		case 2:
			return "COL_RC_COLLECT";
		
		default:
			break;
	}
	return "";
}

int func_1534(int iParam0)
{
	if (func_1865(iParam0) && func_288(iParam0, 1, 0))
	{
		return 1;
	}
	else if (func_1866(iParam0) && func_1867(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_1535(int iParam0)
{
	if (!func_609(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_678(iParam0));
}

void func_1536(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_1537(int iParam0)
{
	int iVar0;
	
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABDING_GET_ARRAY_COUNT(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0 /*36*/]));
}

void func_1538(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

void func_1539(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

void func_1540(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

void func_1541(bool bParam0)
{
	int iVar0;
	
	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_0x4CC5F2FC1332577F(iVar0);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(iVar0);
	}
}

void func_1542(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_1543(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

int func_1544(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_1142(iParam0, 1) /*3*/]);
}

void func_1545()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_1868();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_580(-916314281);
		func_684(-916314281, 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, -916314281, true, 2, false, false);
		func_580(494733111);
		func_684(494733111, 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 494733111, true, 4, false, false);
	}
}

int func_1546(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_1067(0);
	*uParam1 = { func_1098(iParam0, func_1220(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_1547(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1548(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_1549(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_631(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_631(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_631(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_631(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_631(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_631(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_1550(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_1142(func_1869(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_635(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	*iParam1 = 0;
	return 0;
}

int func_1551(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == &Global_1946804->f_57[func_1142(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1146(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

int func_1552(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		
		case 1:
			return -649219937;
		
		case 2:
			return -858567048;
		
		case 3:
			return -718162726;
		
		case 4:
			return -1284282080;
		
		case 5:
			return -725003445;
		
		case 6:
			return -1445630104;
		
		case 7:
			return 580970876;
		
		case 8:
			return 967601061;
		
		case 9:
			return 1946030891;
		
		case 10:
			return -1511404982;
		
		case 11:
			return -944465290;
		
		case 12:
			return -1701098855;
		
		case 13:
			return 425319238;
		
		case 14:
			return 363594903;
		
		case 15:
			return -1217729597;
		
		case 16:
			return -1540119664;
		
		case 17:
			return 2100194981;
		
		case 18:
			return 446659922;
		
		case 19:
			return -390982951;
		
		case 20:
			return -1018798851;
		
		case 21:
			return -757567246;
		
		case 22:
			return -2054602073;
		
		case 23:
			return -378441099;
		
		case 24:
			return -585121677;
		
		case 25:
			return 1566949660;
		
		default:
			break;
	}
	return 0;
}

int func_1553(var uParam0)
{
	return func_1870(uParam0, -1);
}

int func_1554()
{
	if (func_858())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_1555(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1871((Global_40.f_4283.f_325 + iParam0));
}

void func_1556(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1554())
	{
		func_1169(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_1169(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_1557(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_1558(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_1026(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_1559()
{
	func_564(-939420910);
	func_564(-1187950766);
	func_564(356365161);
	func_564(753127042);
	func_564(-2038424081);
	func_564(1884271742);
	func_564(459290420);
}

void func_1560()
{
	func_564(704802028);
	func_564(588987611);
	func_564(2008888900);
	func_564(1649996811);
	func_564(227918160);
	func_564(168171957);
	func_564(1193080109);
	func_564(-491981251);
	func_564(-639037538);
	func_564(-618620429);
}

bool func_1561(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1562(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		
		case -2087881550:
			return 2;
		
		case 1908068621:
			return 4;
		
		case 1611247019:
			return 8;
		
		case 1319635688:
			return 16;
		
		default:
			break;
	}
	return 0;
}

void func_1563(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_1564(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1565(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		
		case 1:
			return -1130352927;
		
		case 2:
			return 389988485;
		
		case 3:
			return 1780904876;
		
		case 4:
			return 1367443060;
		
		case 5:
			return -1506259487;
		
		case 6:
			return -676503695;
		
		case 7:
			return 383349088;
		
		case 8:
			return -1292426046;
		
		case 9:
			return 1422688607;
		
		case 10:
			return 1108822547;
		
		case 11:
			return -338487716;
		
		case 12:
			return 1742327865;
		
		case 13:
			return 1600962399;
		
		case 14:
			return 1849504272;
		
		case 15:
			return 1672288269;
		
		case 16:
			return 1250092473;
		
		case 17:
			return -893163968;
		
		case 18:
			return -450913544;
		
		case 19:
			return -1364808185;
		
		case 20:
			return -1197751823;
		
		case 21:
			return 304805134;
		
		case 22:
			return -1505978566;
		
		case 23:
			return 1145151482;
		
		case 24:
			return -1176744536;
		
		case 25:
			return 673166414;
		
		case 26:
			return -207860920;
		
		case 27:
			return 99217379;
		
		case 28:
			return -735900586;
		
		case 29:
			return -426430150;
		
		case 30:
			return 1788623170;
		
		case 31:
			return -1130865351;
		
		case 32:
			return -1884748965;
		
		case 33:
			return -1586649372;
		
		case 34:
			return 788010710;
		
		case 35:
			return 1958421083;
		
		case 36:
			return -1944638739;
		
		case 37:
			return 1900541263;
		
		case 38:
			return -1489346253;
		
		case 39:
			return -358215195;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_1566()
{
	int iVar0;
	
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_1567(int iParam0)
{
	func_1574(iParam0, 8, 6);
}

void func_1568(int iParam0)
{
	func_1872(&(Global_1946804->f_2589), iParam0);
}

void func_1569(int iParam0, int iParam1)
{
	func_1873(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_1570(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1571(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 12;
	iVar2 = func_635(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1624(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1569(iVar1, iVar3);
		}
	}
	if (func_1162(-1586649372) && func_1624(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1569(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1569(iVar1, iVar3);
					}
				}
			}
			func_1874(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		
		case 688587926:
			func_1874(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1155669136 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1569(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_1874(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1155669136)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_1569(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_1569(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_1874(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_1874(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1569(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_1874(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1569(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1569(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_635(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1569(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_631(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1170; //curOff = 1110
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_635(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_635(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1569(iVar1, iVar3);
						}
					}
					break;
				
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_635(&(uParam0->f_1[iVar1 /*3*/])) || func_631(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1569(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_1572(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_1875(0);
	if (iParam2 != 0 && func_1876(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1751(iParam0, func_1565(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1573(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	bVar6 = func_200() != -1;
	iVar7 = func_1875(0);
	if (func_1146(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_1565(iVar0, 1);
			if (func_1623(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_1623(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1551(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1877(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1146(524288))
					{
						func_1477(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_1565(iVar0, 1);
							if (func_1623(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_1623(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1551(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_1569(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_1578(524288);
				}
			}
		}
	}

void func_1574(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_1142(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_1142(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_1142(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_1575(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1878(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_200() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1879(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_1594(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1594(Global_40.f_7729);
				Global_1946804->f_1378 = func_1594(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_1880(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1746(0, 1);
	}
}

void func_1576(struct<4> Param0)
{
	int iVar0;
	int iVar1;
	
	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_1475(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1476(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1477(8);
			break;
		
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_1475(Param0))
			{
				return;
			}
			func_1476(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_1477(8);
			break;
		
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1149(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_1577(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_1578(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

int func_1579()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_1580(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1581()
{
	float fVar0;
	int iVar1;
	
	fVar0 = func_1881(13);
	iVar1 = func_1882(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_1582()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1583()
{
	if (func_858())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1584()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_1585()
{
	return Global_1955565->f_3;
}

void func_1586(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = func_1851(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), iParam2);
}

void func_1587(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;
	
	sVar0 = func_1851(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 859817522);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 1105014447);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 0);
	}
}

bool func_1588()
{
	return func_1881(12) <= -99f;
}

bool func_1589()
{
	return func_1881(12) >= 99f;
}

int func_1590()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_635(iVar1) == -999503751)
		{
			if (func_1883() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_1591(int iParam0)
{
	if (!func_1157(iParam0))
	{
		return 0;
	}
	if (func_1595(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_1592(int iParam0)
{
	if (!func_1157(iParam0))
	{
		return 0;
	}
	if (func_1595(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_1593(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1157(iParam0))
	{
		return;
	}
	if (!func_1592(iParam0))
	{
		func_1596(iParam0, 2);
		if (bParam2)
		{
			if (!func_146(0, 0, 1))
			{
				func_882(1, 4);
			}
		}
		if ((!func_915() && !bParam1) && !func_146(0, 0, 1))
		{
			func_338(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_1884(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1594(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		
		case 6:
			return 1661121390;
		
		case 7:
			return 1164374808;
		
		case 8:
			return 1160643979;
		
		case 9:
			return 624063935;
		
		case 10:
			return -1476781101;
		
		case 11:
			return 294553332;
		
		case 12:
			return 1788874135;
		
		case 15:
			return 1560492757;
		
		case 16:
			return -769081407;
		
		case 17:
			return 1902428294;
		
		case 18:
			return -2114499732;
		
		case 19:
			return 800827126;
		
		case 20:
			return 688004210;
		
		case 0:
			return 166243423;
		
		case 1:
			return 1383300684;
		
		case 2:
			return 2051441678;
		
		case 3:
			return 162509669;
		
		case 4:
			return 635948769;
		
		case 5:
			return 274995506;
		
		case 24:
			return -1826731591;
		
		case 25:
			return 2119049229;
		
		case 26:
			return 1352942778;
		
		case 27:
			return 1964379549;
		
		case 28:
			return 1201189539;
		
		case 21:
			return 1351927599;
		
		case 22:
			return 2032023096;
		
		case 23:
			return -291256376;
		
		case 66:
			return -1243402388;
		
		case 67:
			return 65931886;
		
		case 68:
			return 1371678229;
		
		case 69:
			return 2102263084;
		
		case 61:
			return -272211555;
		
		case 64:
			return -55563408;
		
		case 71:
			return -1914506115;
		
		case 75:
			return 802495462;
		
		case 77:
			return 842905332;
		
		case 78:
			return -1951220140;
		
		case 79:
			return 1511551084;
		
		case 81:
			return -1725704631;
		
		case 83:
			return 1257427489;
		
		case 85:
			return -659341240;
		
		case 87:
			return 2038771525;
		
		case 89:
			return -535599244;
		
		case 73:
			return -389591806;
		
		case 70:
			return -1205612021;
		
		case 93:
			return 890706995;
		
		case 90:
			return 1156438275;
		
		case 91:
			return -1611873049;
		
		case 92:
			return 594312243;
		
		case 94:
			return -978578725;
		
		case 13:
			return 1784889667;
		
		case 62:
			return -361635024;
		
		case 76:
			return 1460520700;
		
		case 80:
			return 523337834;
		
		case 82:
			return -19271249;
		
		case 84:
			return 214175524;
		
		case 86:
			return -1303643297;
		
		case 88:
			return 411856831;
		
		case 72:
			return -926815459;
		
		case 74:
			return -1300731953;
		
		case 65:
			return -409616653;
		
		case 29:
			return 509954990;
		
		case 30:
			return -445916744;
		
		case 31:
			return -866249154;
		
		case 32:
			return -2077063704;
		
		case 33:
			return 205207539;
		
		case 34:
			return -1033657275;
		
		case 35:
			return 1806002837;
		
		case 36:
			return 705324896;
		
		case 37:
			return -1541763703;
		
		case 38:
			return 387052410;
		
		case 39:
			return -361288914;
		
		case 40:
			return -911054515;
		
		case 41:
			return 1084200963;
		
		case 42:
			return 1847948074;
		
		case 43:
			return -1212526764;
		
		case 44:
			return 1851440270;
		
		case 45:
			return -2028985700;
		
		case 46:
			return 1074435214;
		
		case 47:
			return -883015675;
		
		case 48:
			return -1047155604;
		
		case 49:
			return 1123231221;
		
		case 50:
			return 1866989210;
		
		case 51:
			return 478183719;
		
		case 52:
			return -1698955868;
		
		case 53:
			return -2029378634;
		
		case 54:
			return 1339864416;
		
		case 55:
			return 890998115;
		
		case 56:
		
		case 57:
