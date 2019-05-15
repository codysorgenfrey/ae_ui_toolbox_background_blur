#include "UIBackgroundBlur.h"

typedef struct {
	A_u_long	index;
	A_char		str[256];
} TableString;



TableString		g_strs[StrID_NUMTYPES] = {
	StrID_NONE,						"",
	StrID_Name,						"UI Background Blur",
	StrID_Description,				"Creates a \"frosted glass\" effect.\nLayer must have \"Adjustment Layer\" switch turned on.",
	StrID_Radius_Param_Name,		"Radius"
};


char	*GetStringPtr(int strNum)
{
	return g_strs[strNum].str;
}
	
