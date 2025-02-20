#include "app_terminal_menu.h"

/*Array*/

/*********************************************************************************
 * @ingroup test-kamar
 * @brief   The command processor command table (array)
 * 
 * @details 
 *  This array declaration template is created for the code standard 
 *  for better documentation in the EA project (Report Generation)
 **********************************************************************************/
extern const APP_TERM_MENU_ENTRIES_t * const Test_kamar_a[];


/*function declaration*/

/*********************************************************************************
 * @ingroup test-kamar
 * @fn      void Test_Kamar_f1(void)
 * @brief   This function is a test sample.
 * @return  void
 * 
 * @details 
 *  This function template is created for the code standard 
 *  for better documentation in the EA project (Report Generation)
 **********************************************************************************/
static void Test_Kamar_f1(void);

/*********************************************************************************
 * @ingroup test-kamar
 * @fn      void Test_Kamar_f2(void)
 * @brief   This function is a test sample.
 * @return  void
 * 
 * @details 
 *  This function template is created for the code standard 
 *  for better documentation in the EA project (Report Generation)
 **********************************************************************************/
static void Test_Kamar_f2(void);

/*Structure*/
/***********************************************************************************
 * @ingroup test-kamar
 * @struct Test_Kamar_s
 * @brief  This structure is a test Sample
 * 
 * @details
 *  This structure is used for testing the ea doc generation.
 *  Test Kamar.
 * 
 **********************************************************************************/
typedef struct{
    const char* m1;             ///structure member 1
    const char* m2;             ///structure member 2
    const char* m3;             ///structure member 3
    fptr_menuCmdHandler_t m4;   ///structure member 4
}Test_Kamar_s;

/*enumeration*/

/***********************************************************************************
 * @ingroup test-kamr
 * @enum Test_Kamar_e
 * @brief  This enumeration is test sample.
 * 
 * @details
 *  This enumeration is created for the code standard 
 *  for better documentation in the EA project (Report Generation)
 **********************************************************************************/
enum Test_Kamar_e {
    const_1, ///enum constant 1
    const_2,   //enum constant 2
    const_3,  /*enum constant 3*/
};

/*union*/

/***********************************************************************************
 * @ingroup test-kamar
 * @union Test_Kamar_u
 * @brief  This union is test sample.
 * 
 * @details
 *  This union is used for testing the ea doc generation.
 *  Test Kamar.
 * 
 **********************************************************************************/
typedef union{
    const char* u1;             // Union member 1
    const char* u2;             // Union member 2
    const char* u3;             // Union member 3
}Test_Kamar_u;

