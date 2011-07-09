#include <windows.h>

FLOAT64 FSAPI    title_string_cb( PELEMENT_STRING pelement )
{
	char* val = "A300-600R";

	//Si le contact électrique est établi, afficher le test sinon ne rien afficher !
	if (pelement->source_var[0].var_value.n)	
		strcpy(pelement->string, val);
	else
		strcpy(pelement->string, "");

	return 1.0;
}

MAKE_STRING
	(
	title_string,
	NULL,
	0,
	IMAGE_USE_ERASE | IMAGE_USE_BRIGHT | IMAGE_USE_TRANSPARENCY,
	0,
	MCDU_L_X+100, MCDU_LR1_Y-15,
	80, 29,
	9,

	GENERAL_PANEL_CIRCUIT_ON,
	MODULE_VAR_NONE ,
	MODULE_VAR_NONE ,
	RGB(30,255,0),
	RGB(0,0,0),
	RGB(92,92,92),
	GAUGE_FONT_DEFAULT,
	GAUGE_WEIGHT_DEFAULT,
	GAUGE_CHARSET,
	0,
	DT_SINGLELINE|DT_CENTER,
	NULL,
	title_string_cb
	) 

	//////////////////////////////////////////////////ENG///////////////////////////////


	FLOAT64 FSAPI    engine_string_cb( PELEMENT_STRING pelement )
{
	char* val = " eng";

	//Si le contact électrique est établi, afficher le test sinon ne rien afficher !
	if (pelement->source_var[0].var_value.n)	
		strcpy(pelement->string, val);
	else
		strcpy(pelement->string, "");

	return 1.0;
}

MAKE_STRING
	(
	engine_string,
	NULL,
	0,
	IMAGE_USE_ERASE | IMAGE_USE_BRIGHT | IMAGE_USE_TRANSPARENCY,
	0,
	MCDU_L_X, MCDU_LR1_Y-4,
	30, 29,
	4,

	GENERAL_PANEL_CIRCUIT_ON,
	MODULE_VAR_NONE ,
	MODULE_VAR_NONE ,
	RGB(30,255,0),
	RGB(0,0,0),
	RGB(92,92,92),
	GAUGE_FONT_TITLES,
	GAUGE_WEIGHT_DEFAULT,
	GAUGE_CHARSET,
	0,
	DT_SINGLELINE,
	NULL,
	engine_string_cb
	) 

	////////////////////JT9D-7RD41////////////////////////////////////////


	FLOAT64 FSAPI    engine2_string_cb( PELEMENT_STRING pelement )
{
	char* val = "JT9D-7R4D1";

	//Si le contact électrique est établi, afficher le test sinon ne rien afficher !
	if (pelement->source_var[0].var_value.n)	
		strcpy(pelement->string, val);
	else
		strcpy(pelement->string, "");

	return 1.0;
}

MAKE_STRING
	(
	engine2_string,
	NULL,
	0,
	IMAGE_USE_ERASE | IMAGE_USE_BRIGHT | IMAGE_USE_TRANSPARENCY,
	0,
	MCDU_L_X, MCDU_LR1_Y+7,
	95, 29,
	10,

	GENERAL_PANEL_CIRCUIT_ON,
	MODULE_VAR_NONE ,
	MODULE_VAR_NONE ,
	RGB(30,255,0),
	RGB(0,0,0),
	RGB(92,92,92),
	GAUGE_FONT_DEFAULT,
	GAUGE_WEIGHT_DEFAULT,
	GAUGE_CHARSET,
	0,
	DT_SINGLELINE,
	NULL,
	engine2_string_cb
	) 

	///////////////////////////////////////////////////////////ACTIVE DATA BASE/////////////////////////

	FLOAT64 FSAPI    db_string_cb( PELEMENT_STRING pelement )
{
	char* val = " active data base";

	//Si le contact électrique est établi, afficher le test sinon ne rien afficher !
	if (pelement->source_var[0].var_value.n)	
		strcpy(pelement->string, val);
	else
		strcpy(pelement->string, "");

	return 1.0;
}

MAKE_STRING
	(
	db_string,
	NULL,
	0,
	IMAGE_USE_ERASE | IMAGE_USE_BRIGHT | IMAGE_USE_TRANSPARENCY,
	0,
	MCDU_L_X, MCDU_LR2_Y-5,
	130, 29,
	17,

	GENERAL_PANEL_CIRCUIT_ON,
	MODULE_VAR_NONE ,
	MODULE_VAR_NONE ,
	RGB(30,255,0),
	RGB(0,0,0),
	RGB(92,92,92),
	GAUGE_FONT_TITLES,
	GAUGE_WEIGHT_DEFAULT,
	GAUGE_CHARSET,
	0,
	DT_SINGLELINE,
	NULL,
	db_string_cb
	) 

	/////////////////////////////////-----------------////////////////////////////////////////////

	FLOAT64 FSAPI    db2_string_cb( PELEMENT_STRING pelement )
{
	char* val = "-------------";

	//Si le contact électrique est établi, afficher le test sinon ne rien afficher !
	if (pelement->source_var[0].var_value.n)	
		strcpy(pelement->string, val);
	else
		strcpy(pelement->string, "");

	return 1.0;
}

MAKE_STRING
	(
	db2_string,
	NULL,
	0,
	IMAGE_USE_ERASE | IMAGE_USE_BRIGHT | IMAGE_USE_TRANSPARENCY,
	0,
	MCDU_L_X, MCDU_LR2_Y+7,
	100, 29,
	10,

	GENERAL_PANEL_CIRCUIT_ON,
	MODULE_VAR_NONE ,
	MODULE_VAR_NONE ,
	RGB(30,255,0),
	RGB(0,0,0),
	RGB(92,92,92),
	GAUGE_FONT_DEFAULT,
	GAUGE_WEIGHT_DEFAULT,
	GAUGE_CHARSET,
	0,
	DT_SINGLELINE,
	NULL,
	db2_string_cb
	) 

	////////////////////////////SECOND DATA BASE/////////////////////////////////////////

	FLOAT64 FSAPI    seconddb_string_cb( PELEMENT_STRING pelement )
{
	char* val = " second data base";

	//Si le contact électrique est établi, afficher le test sinon ne rien afficher !
	if (pelement->source_var[0].var_value.n)	
		strcpy(pelement->string, val);
	else
		strcpy(pelement->string, "");

	return 1.0;
}

MAKE_STRING
	(
	seconddb_string,
	NULL,
	0,
	IMAGE_USE_ERASE | IMAGE_USE_BRIGHT | IMAGE_USE_TRANSPARENCY,
	0,
	MCDU_L_X, MCDU_LR3_Y-5,
	130, 29,
	17,

	GENERAL_PANEL_CIRCUIT_ON,
	MODULE_VAR_NONE ,
	MODULE_VAR_NONE ,
	RGB(30,255,0),
	RGB(0,0,0),
	RGB(92,92,92),
	GAUGE_FONT_TITLES,
	GAUGE_WEIGHT_DEFAULT,
	GAUGE_CHARSET,
	0,
	DT_SINGLELINE,
	NULL,
	seconddb_string_cb
	) 

	///////////////////////////////------------------------///////////////////////////////////


MAKE_STRING
	(
	seconddb2_string,
	NULL,
	0,
	IMAGE_USE_ERASE | IMAGE_USE_BRIGHT | IMAGE_USE_TRANSPARENCY,
	0,
	MCDU_L_X, MCDU_LR3_Y+7,
	100, 29,
	10,

	GENERAL_PANEL_CIRCUIT_ON,
	MODULE_VAR_NONE ,
	MODULE_VAR_NONE ,
	RGB(30,255,0),
	RGB(0,0,0),
	RGB(92,92,92),
	GAUGE_FONT_DEFAULT,
	GAUGE_WEIGHT_DEFAULT,
	GAUGE_CHARSET,
	0,
	DT_SINGLELINE,
	NULL,
	db2_string_cb
	) 

	//////////////////////////////////////OP PROGRAM////////////////////////////////////////

	FLOAT64 FSAPI   opprogram_string_cb( PELEMENT_STRING pelement )
{
	char* val = " op program";

	//Si le contact électrique est établi, afficher le test sinon ne rien afficher !
	if (pelement->source_var[0].var_value.n)	
		strcpy(pelement->string, val);
	else
		strcpy(pelement->string, "");

	return 1.0;
}

MAKE_STRING
	(
	opprogram_string,
	NULL,
	0,
	IMAGE_USE_ERASE | IMAGE_USE_BRIGHT | IMAGE_USE_TRANSPARENCY,
	0,
	MCDU_L_X, MCDU_LR4_Y-5,
	100, 29,
	11,

	GENERAL_PANEL_CIRCUIT_ON,
	MODULE_VAR_NONE ,
	MODULE_VAR_NONE ,
	RGB(30,255,0),
	RGB(0,0,0),
	RGB(92,92,92),
	GAUGE_FONT_TITLES,
	GAUGE_WEIGHT_DEFAULT,
	GAUGE_CHARSET,
	0,
	DT_SINGLELINE,
	NULL,
	opprogram_string_cb
	) 

	//////////////////////////////////////BE-PROJECT1.0////////////////////////////////


	FLOAT64 FSAPI    opprogram2_string_cb( PELEMENT_STRING pelement )
{
	char* val = "BE-PROJECT 1.0";

	//Si le contact électrique est établi, afficher le test sinon ne rien afficher !
	if (pelement->source_var[0].var_value.n)	
		strcpy(pelement->string, val);
	else
		strcpy(pelement->string, "");

	return 1.0;
}

MAKE_STRING
	(
	opprogram2_string,
	NULL,
	0,
	IMAGE_USE_ERASE | IMAGE_USE_BRIGHT | IMAGE_USE_TRANSPARENCY,
	0,
	MCDU_L_X, MCDU_LR4_Y+7,
	105, 29,
	14,

	GENERAL_PANEL_CIRCUIT_ON,
	MODULE_VAR_NONE ,
	MODULE_VAR_NONE ,
	RGB(30,255,0),
	RGB(0,0,0),
	RGB(92,92,92),
	GAUGE_FONT_DEFAULT,
	GAUGE_WEIGHT_DEFAULT,
	GAUGE_CHARSET,
	0,
	DT_SINGLELINE,
	NULL,
	opprogram2_string_cb
	) 


	/////////////////////////////PERF FACTORS//////////////////////////
	
	FLOAT64 FSAPI   perffactors_string_cb( PELEMENT_STRING pelement )
{
	char* val = " perf factors";

	//Si le contact électrique est établi, afficher le test sinon ne rien afficher !
	if (pelement->source_var[0].var_value.n)	
		strcpy(pelement->string, val);
	else
		strcpy(pelement->string, "");

	return 1.0;
}

MAKE_STRING
	(
	perffactors_string,
	NULL,
	0,
	IMAGE_USE_ERASE | IMAGE_USE_BRIGHT | IMAGE_USE_TRANSPARENCY,
	0,
	MCDU_L_X, MCDU_LR6_Y-5,
	130, 29,
	15,

	GENERAL_PANEL_CIRCUIT_ON,
	MODULE_VAR_NONE ,
	MODULE_VAR_NONE ,
	RGB(30,255,0),
	RGB(0,0,0),
	RGB(92,92,92),
	GAUGE_FONT_TITLES,
	GAUGE_WEIGHT_DEFAULT,
	GAUGE_CHARSET,
	0,
	DT_SINGLELINE,
	NULL,
	perffactors_string_cb
	) 


	//////////////////////////////////////+1.7////////////////////////////////


	FLOAT64 FSAPI    plus_17_string_cb( PELEMENT_STRING pelement )
{
	char* val = "+1.7";

	//Si le contact électrique est établi, afficher le test sinon ne rien afficher !
	if (pelement->source_var[0].var_value.n)	
		strcpy(pelement->string, val);
	else
		strcpy(pelement->string, "");

	return 1.0;
}

MAKE_STRING
	(
	perffactors2_string,
	NULL,
	0,
	IMAGE_USE_ERASE | IMAGE_USE_BRIGHT | IMAGE_USE_TRANSPARENCY,
	0,
	MCDU_L_X, MCDU_LR6_Y+7,
	30, 29,
	4,

	GENERAL_PANEL_CIRCUIT_ON,
	MODULE_VAR_NONE ,
	MODULE_VAR_NONE ,
	RGB(30,255,0),
	RGB(0,0,0),
	RGB(92,92,92),
	GAUGE_FONT_DEFAULT,
	GAUGE_WEIGHT_DEFAULT,
	GAUGE_CHARSET,
	0,
	DT_SINGLELINE,
	NULL,
	plus_17_string_cb
	) 

	//////////////////////////////////////////////////////////////////////////////////
	PELEMENT_HEADER        mcdu_index_list[] =
{
	&title_string.header,
	&engine_string.header,
	&engine2_string.header,
	&db_string.header,
	&db2_string.header,
	&seconddb_string.header,
	&seconddb2_string.header,
	&opprogram_string.header,
	&opprogram2_string.header,
	&perffactors_string.header,
	&perffactors2_string.header,
	NULL
}; 
