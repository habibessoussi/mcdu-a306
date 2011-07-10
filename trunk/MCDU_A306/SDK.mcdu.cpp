#include <windows.h>

//    Set up gauge header

char mcdu_gauge_name[]		 = GAUGE_NAME;
extern PELEMENT_HEADER       mcdu_list;
extern MOUSERECT			 mcdu_mouse_rect[];


GAUGE_HEADER_FS700(GAUGE_W, mcdu_gauge_name, &mcdu_list,  mcdu_mouse_rect, 0, 0, 0, 0);

/////////////////////////////////////////////////////////////////////////////

#define GAUGE_CHARSET				  DEFAULT_CHARSET
#define GAUGE_FONT_DEFAULT            "Consolas"
#define GAUGE_FONT_TITLES			  "Orator Std"
#define GAUGE_WEIGHT_DEFAULT		  FW_EXTRALIGHT

/////////////////////////////////////////////////////////////////////////////
#define MCDU_L_X					55
#define MCDU_R_X					230
#define MCDU_LR1_Y					35
#define MCDU_LR2_Y					55
#define MCDU_LR3_Y					75
#define MCDU_LR4_Y					95
#define MCDU_LR5_Y					115
#define MCDU_LR6_Y					135

///////////////////////////////////////////////////////////////////////////// /*Include of the mcdu pages*/
#include "mcdu.index.cpp"
#include "mcdu.init.cpp"

PELEMENT_HEADER  *  selected_mcdu_list     = mcdu_index_list; //initally the selected page is the INDEX of MCDU

/////////////////////////////////////////////////////////////////////////// /*Layout of the MCDU: Button and event handle functions*/
BOOL FSAPI    mcdu_selector_mouse_cb( PPIXPOINT relative_point, FLAGS32 mouse_flags );

MOUSE_BEGIN( mcdu_mouse_rect, HELPID_GAUGE_FUEL_SELECTOR, 0, 0 )
      MOUSE_CHILD_FUNCT(195,195,235,215, CURSOR_HAND, MOUSE_LEFTSINGLE, mcdu_selector_mouse_cb ) //INIT BUTTON
MOUSE_END 

///////////////////////////////////////////////////////////////////////////// /*Background*/
	MAKE_STATIC
	(
	mcdu_background,
	BMP_MCDU,
	selected_mcdu_list,
	NULL,
	IMAGE_USE_TRANSPARENCY,
	0,
	0,0
	)

	PELEMENT_HEADER        mcdu_list     = &mcdu_background.header;




//////////////////////////////////////////////////////////////////////////


BOOL FSAPI    mcdu_selector_mouse_cb( PPIXPOINT relative_point, FLAGS32 mouse_flags )
{
  selected_mcdu_list=mcdu_init_list;
  PELEMENT_HEADER  mcdu_list     = &mcdu_background.header;
  return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
#undef GAUGE_NAME
#undef GAUGEHDR_VAR_NAME
#undef GAUGE_W 
