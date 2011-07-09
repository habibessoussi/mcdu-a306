# makefile
# Copyright (c) 2000 Microsoft Corporation.  All rights reserved.

INCDIR	= .\inc
DESTDIR	= .
INCS	= -I$(INCDIR)
LIBS	= user32.lib gdi32.lib kernel32.lib

!IFDEF DEBUG

C_FLAGS	= /Z7
L_FLAGS	= /DEBUG

!ELSE

C_FLAGS	=
L_FLAGS	=

!ENDIF


goal:	BE-MCDU_A306.gau


sdk.obj:	$(INCDIR)\gauges.h				\
		SDK.cpp									\
		SDK.mcdu.cpp							\
		SDK.h									
        cl $(C_FLAGS) -c $(INCS) SDK.cpp

sdk.res:	SDK.rc							\
		SDK.h									\
		res\BMP_MCDU.BMP
        rc -r $(INCS) SDK.rc

BE-MCDU_A306.gau:	sdk.obj					\
		sdk.res
        link $(L_FLAGS) /dll /out:$(DESTDIR)\BE-MCDU_A306.gau sdk.obj sdk.res $(LIBS)

clean:
	del $(DESTDIR)\*.exp
	del $(DESTDIR)\*.dll
	del $(DESTDIR)\*.lib
	del *.obj
	del *.res

