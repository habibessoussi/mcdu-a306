#include <windows.h>

FLOAT64 FSAPI    title_string_init_cb( PELEMENT_STRING pelement )
{
	char* val = "INIT";

	//Si le contact électrique est établi, afficher le test sinon ne rien afficher !
	if (pelement->source_var[0].var_value.n)	
		strcpy(pelement->string, val);
	else
		strcpy(pelement->string, "");

	return 1.0;
}

MAKE_STRING
	(
	title_string_init,
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
	title_string_init_cb
	) 

/////////////////////////////CO ROUTE//////////////////////////
	
	FLOAT64 FSAPI  corte_string_cb( PELEMENT_STRING pelement )
{
	char* val = " co rte";

	//Si le contact électrique est établi, afficher le test sinon ne rien afficher !
	if (pelement->source_var[0].var_value.n)	
		strcpy(pelement->string, val);
	else
		strcpy(pelement->string, "");

	return 1.0;
}

MAKE_STRING
	(
	corte_string,
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
	corte_string_cb
	) 











	

	//////////////////////////////////////////////////////////////////////////////////
	PELEMENT_HEADER        mcdu_init_list[] =
{
	&title_string_init.header,
	&corte_string.header,
	NULL
}; 

////////////////////////////////////////////////////////////////////////////////////////////

