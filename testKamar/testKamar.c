#include "Test_Kamar.h"

/*Array*/

/* Array Initializations
 * Test Kamar
 */
const APP_TERM_MENU_ENTRIES_t * const APP_TERM_MENU_ITEMS[] =
{
    &APP_TERM_HELP,     // Must always be first entry
#if defined (QI_PTX_MAX_INSTANCES) && (QI_PTX_MAX_INSTANCES > 1)    
    &APP_TERM_SELECT_PTX,
#endif
    &APP_TERM_SW_ON_COIL,
    &APP_TERM_SW_ON_INVPWM,
    &APP_TERM_READ_VALUES,
    &APP_TERM_QI_SM_ONOFF,
    &APP_TERM_QI_DB_ONOFF,
    &APP_TERM_QI_FOD_ONOFF,
    &APP_TERM_TOGGLE_QDATA,
    &APP_TERM_BYPASS_SLEEP,
    &APP_TERM_SET_VRAIL_V,
#if defined (QI_AUTH_TEST_COMMANDS) && (QI_AUTH_TEST_COMMANDS == 1)
    &APP_TERM_CRYPTO_TEST,
#endif
#if defined (APP_TERM_ARRAY_HELPER) && (APP_TERM_ARRAY_HELPER == 1)
    &APP_TERM_PRINT_ARRAY,
    &APP_TERM_PRINT_ARRAY_WORDS,
#endif   
    &APP_TERM_APPCALIB,
    /* Add the entries above this line */
    NULL,
};


/*Structure Variable*/

//This is a structure variable Templete
static const Test_Kamar_s Test_kamar_s_v =
{
    .m1 = "nw", //m1 member var
    .m2 = "nw", //m2 member var
    .m3 = "Print words from array", //m3 member var
    .m4 = APP_TERM_cmdPrintArray //m4 member var
};


/*Union Variable*/

//This is a Union variable Templete
static const Test_kamar_u Test_kamar_u_v =
{
    .u1 = "nw", //u1 member var
    .u2 = "nw", //u2 member var
    .u3 = "Print words from array", //u3 member var
};


/*function Defination*/

/********************************************************************  
*   This function-1 template is created for the code standard 
*   for better documentation in the EA project (Report Generation)
********************************************************************/
static void Test_Kamar_f1(void)
{
    APP_TERM_printAppDataGeneric(false);
}


//This function-2 is a test sample.
static void Test_Kamar_f2(void)
{
    APP_TERM_printAppDataGeneric(false);
}