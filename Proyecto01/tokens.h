#ifndef TOKENS_H
#define TOKENS_H

// Tokens para palabras reservadas  7000
#define PR_if          7001
#define PR_else        7002
#define PR_for         7003
#define PR_switch      7004
#define PR_case        7005
#define PR_default     7006
#define PR_return      7007
#define PR_break       7008
#define PR_continue    7009
#define PR_var         7010
#define PR_const       7011
#define PR_package     7012
#define PR_defer       7013


// Tokens para tipos de dato    1000
#define TD_UINT8       1001
#define TD_UINT16      1002
#define TD_INT8        1003
#define TD_INT16       1004
#define TD_INT32       1005
#define TD_float32     1006
#define TD_float64     1007
#define TD_complex64   1008
#define TD_byte        1009
#define TD_string      1010
#define TD_bool        1011
#define TD_struct      1012
#define TD_func        1013
#define TD_defer       1014

// Tokens para literales    2000
#define lit_ENTERO      2001
#define lit_FLOTANTE    2002
#define lit_IMAGINARIO  2003
#define lit_STRING      2004
#define lit_BOOL        2005

// Tokens para id   3000
#define id  3001
// Tokens para operaciones booleanas    4000
#define OB_or          4001        //||
#define OB_and         4002        //&&
#define OB_equal       4003        //==
#define OB_notequal    4004        //!=
#define OB_minor       4005        //<
#define OB_minorequal  4006        //<=
#define OB_greater     4007        //>
#define OB_greaterequal    4008    //>=
#define OB_negacion    4009        //!
#define OB_andop       4010        //&
// Tokens para operaciones aritmeticas  5000
#define OA_suma    5001    //+
#define OA_resta   5002    //-
#define OA_mul     5003    //*
#define OA_div     5004    // /
#define OA_mod     5005    //%

//Tokens generales  6000
#define pari        6001    //(
#define pard        6002    //)
#define coma        6003    //,
#define puntocoma   6004    //;
#define punto       6005    //.
#define asignacion  6006    //=
#define apuntador   6007    //*
#define masmas      6008    //++
#define menosmenos  6009    //--
#define dospuntos   6010    //:



int tokenActual;

int tokens(void);



#endif