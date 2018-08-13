/* --- Generated the 13/8/2018 at 18:53 --- */
/* --- heptagon compiler, version 1.03.00 (compiled mon. aug. 6 15:37:40 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller system.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "system_types.h"

System__st_32 System__st_32_of_string(char* s) {
  if ((strcmp(s, "St_32_Noite")==0)) {
    return System__St_32_Noite;
  };
  if ((strcmp(s, "St_32_Dia")==0)) {
    return System__St_32_Dia;
  };
}

char* string_of_System__st_32(System__st_32 x, char* buf) {
  switch (x) {
    case System__St_32_Noite:
      strcpy(buf, "St_32_Noite");
      break;
    case System__St_32_Dia:
      strcpy(buf, "St_32_Dia");
      break;
    default:
      break;
  };
  return buf;
}

System__st_31 System__st_31_of_string(char* s) {
  if ((strcmp(s, "St_31_Present")==0)) {
    return System__St_31_Present;
  };
  if ((strcmp(s, "St_31_Not_Present")==0)) {
    return System__St_31_Not_Present;
  };
}

char* string_of_System__st_31(System__st_31 x, char* buf) {
  switch (x) {
    case System__St_31_Present:
      strcpy(buf, "St_31_Present");
      break;
    case System__St_31_Not_Present:
      strcpy(buf, "St_31_Not_Present");
      break;
    default:
      break;
  };
  return buf;
}

System__st_30 System__st_30_of_string(char* s) {
  if ((strcmp(s, "St_30_Present")==0)) {
    return System__St_30_Present;
  };
  if ((strcmp(s, "St_30_Not_Present")==0)) {
    return System__St_30_Not_Present;
  };
}

char* string_of_System__st_30(System__st_30 x, char* buf) {
  switch (x) {
    case System__St_30_Present:
      strcpy(buf, "St_30_Present");
      break;
    case System__St_30_Not_Present:
      strcpy(buf, "St_30_Not_Present");
      break;
    default:
      break;
  };
  return buf;
}

System__st_29 System__st_29_of_string(char* s) {
  if ((strcmp(s, "St_29_Open")==0)) {
    return System__St_29_Open;
  };
  if ((strcmp(s, "St_29_Closed")==0)) {
    return System__St_29_Closed;
  };
}

char* string_of_System__st_29(System__st_29 x, char* buf) {
  switch (x) {
    case System__St_29_Open:
      strcpy(buf, "St_29_Open");
      break;
    case System__St_29_Closed:
      strcpy(buf, "St_29_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_28 System__st_28_of_string(char* s) {
  if ((strcmp(s, "St_28_On")==0)) {
    return System__St_28_On;
  };
  if ((strcmp(s, "St_28_Off")==0)) {
    return System__St_28_Off;
  };
}

char* string_of_System__st_28(System__st_28 x, char* buf) {
  switch (x) {
    case System__St_28_On:
      strcpy(buf, "St_28_On");
      break;
    case System__St_28_Off:
      strcpy(buf, "St_28_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_27 System__st_27_of_string(char* s) {
  if ((strcmp(s, "St_27_Off")==0)) {
    return System__St_27_Off;
  };
  if ((strcmp(s, "St_27_Min")==0)) {
    return System__St_27_Min;
  };
  if ((strcmp(s, "St_27_Max")==0)) {
    return System__St_27_Max;
  };
}

char* string_of_System__st_27(System__st_27 x, char* buf) {
  switch (x) {
    case System__St_27_Off:
      strcpy(buf, "St_27_Off");
      break;
    case System__St_27_Min:
      strcpy(buf, "St_27_Min");
      break;
    case System__St_27_Max:
      strcpy(buf, "St_27_Max");
      break;
    default:
      break;
  };
  return buf;
}

System__st_26 System__st_26_of_string(char* s) {
  if ((strcmp(s, "St_26_Open")==0)) {
    return System__St_26_Open;
  };
  if ((strcmp(s, "St_26_Closed")==0)) {
    return System__St_26_Closed;
  };
}

char* string_of_System__st_26(System__st_26 x, char* buf) {
  switch (x) {
    case System__St_26_Open:
      strcpy(buf, "St_26_Open");
      break;
    case System__St_26_Closed:
      strcpy(buf, "St_26_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_25 System__st_25_of_string(char* s) {
  if ((strcmp(s, "St_25_Open")==0)) {
    return System__St_25_Open;
  };
  if ((strcmp(s, "St_25_Locked")==0)) {
    return System__St_25_Locked;
  };
}

char* string_of_System__st_25(System__st_25 x, char* buf) {
  switch (x) {
    case System__St_25_Open:
      strcpy(buf, "St_25_Open");
      break;
    case System__St_25_Locked:
      strcpy(buf, "St_25_Locked");
      break;
    default:
      break;
  };
  return buf;
}

System__st_24 System__st_24_of_string(char* s) {
  if ((strcmp(s, "St_24_On")==0)) {
    return System__St_24_On;
  };
  if ((strcmp(s, "St_24_Off")==0)) {
    return System__St_24_Off;
  };
}

char* string_of_System__st_24(System__st_24 x, char* buf) {
  switch (x) {
    case System__St_24_On:
      strcpy(buf, "St_24_On");
      break;
    case System__St_24_Off:
      strcpy(buf, "St_24_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_23 System__st_23_of_string(char* s) {
  if ((strcmp(s, "St_23_Funcionando")==0)) {
    return System__St_23_Funcionando;
  };
  if ((strcmp(s, "St_23_Falha")==0)) {
    return System__St_23_Falha;
  };
}

char* string_of_System__st_23(System__st_23 x, char* buf) {
  switch (x) {
    case System__St_23_Funcionando:
      strcpy(buf, "St_23_Funcionando");
      break;
    case System__St_23_Falha:
      strcpy(buf, "St_23_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_22 System__st_22_of_string(char* s) {
  if ((strcmp(s, "St_22_On")==0)) {
    return System__St_22_On;
  };
  if ((strcmp(s, "St_22_Off")==0)) {
    return System__St_22_Off;
  };
}

char* string_of_System__st_22(System__st_22 x, char* buf) {
  switch (x) {
    case System__St_22_On:
      strcpy(buf, "St_22_On");
      break;
    case System__St_22_Off:
      strcpy(buf, "St_22_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_21 System__st_21_of_string(char* s) {
  if ((strcmp(s, "St_21_Funcionando")==0)) {
    return System__St_21_Funcionando;
  };
  if ((strcmp(s, "St_21_Falha")==0)) {
    return System__St_21_Falha;
  };
}

char* string_of_System__st_21(System__st_21 x, char* buf) {
  switch (x) {
    case System__St_21_Funcionando:
      strcpy(buf, "St_21_Funcionando");
      break;
    case System__St_21_Falha:
      strcpy(buf, "St_21_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_20 System__st_20_of_string(char* s) {
  if ((strcmp(s, "St_20_Off")==0)) {
    return System__St_20_Off;
  };
  if ((strcmp(s, "St_20_Min")==0)) {
    return System__St_20_Min;
  };
  if ((strcmp(s, "St_20_Max")==0)) {
    return System__St_20_Max;
  };
}

char* string_of_System__st_20(System__st_20 x, char* buf) {
  switch (x) {
    case System__St_20_Off:
      strcpy(buf, "St_20_Off");
      break;
    case System__St_20_Min:
      strcpy(buf, "St_20_Min");
      break;
    case System__St_20_Max:
      strcpy(buf, "St_20_Max");
      break;
    default:
      break;
  };
  return buf;
}

System__st_19 System__st_19_of_string(char* s) {
  if ((strcmp(s, "St_19_Funcionando")==0)) {
    return System__St_19_Funcionando;
  };
  if ((strcmp(s, "St_19_Falha")==0)) {
    return System__St_19_Falha;
  };
}

char* string_of_System__st_19(System__st_19 x, char* buf) {
  switch (x) {
    case System__St_19_Funcionando:
      strcpy(buf, "St_19_Funcionando");
      break;
    case System__St_19_Falha:
      strcpy(buf, "St_19_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_18 System__st_18_of_string(char* s) {
  if ((strcmp(s, "St_18_Open")==0)) {
    return System__St_18_Open;
  };
  if ((strcmp(s, "St_18_Closed")==0)) {
    return System__St_18_Closed;
  };
}

char* string_of_System__st_18(System__st_18 x, char* buf) {
  switch (x) {
    case System__St_18_Open:
      strcpy(buf, "St_18_Open");
      break;
    case System__St_18_Closed:
      strcpy(buf, "St_18_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_17 System__st_17_of_string(char* s) {
  if ((strcmp(s, "St_17_Funcionando")==0)) {
    return System__St_17_Funcionando;
  };
  if ((strcmp(s, "St_17_Falha")==0)) {
    return System__St_17_Falha;
  };
}

char* string_of_System__st_17(System__st_17 x, char* buf) {
  switch (x) {
    case System__St_17_Funcionando:
      strcpy(buf, "St_17_Funcionando");
      break;
    case System__St_17_Falha:
      strcpy(buf, "St_17_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_16 System__st_16_of_string(char* s) {
  if ((strcmp(s, "St_16_On")==0)) {
    return System__St_16_On;
  };
  if ((strcmp(s, "St_16_Off")==0)) {
    return System__St_16_Off;
  };
}

char* string_of_System__st_16(System__st_16 x, char* buf) {
  switch (x) {
    case System__St_16_On:
      strcpy(buf, "St_16_On");
      break;
    case System__St_16_Off:
      strcpy(buf, "St_16_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_15 System__st_15_of_string(char* s) {
  if ((strcmp(s, "St_15_Funcionando")==0)) {
    return System__St_15_Funcionando;
  };
  if ((strcmp(s, "St_15_Falha")==0)) {
    return System__St_15_Falha;
  };
}

char* string_of_System__st_15(System__st_15 x, char* buf) {
  switch (x) {
    case System__St_15_Funcionando:
      strcpy(buf, "St_15_Funcionando");
      break;
    case System__St_15_Falha:
      strcpy(buf, "St_15_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_14 System__st_14_of_string(char* s) {
  if ((strcmp(s, "St_14_Open")==0)) {
    return System__St_14_Open;
  };
  if ((strcmp(s, "St_14_Locked")==0)) {
    return System__St_14_Locked;
  };
}

char* string_of_System__st_14(System__st_14 x, char* buf) {
  switch (x) {
    case System__St_14_Open:
      strcpy(buf, "St_14_Open");
      break;
    case System__St_14_Locked:
      strcpy(buf, "St_14_Locked");
      break;
    default:
      break;
  };
  return buf;
}

System__st_13 System__st_13_of_string(char* s) {
  if ((strcmp(s, "St_13_Funcionando")==0)) {
    return System__St_13_Funcionando;
  };
  if ((strcmp(s, "St_13_Falha")==0)) {
    return System__St_13_Falha;
  };
}

char* string_of_System__st_13(System__st_13 x, char* buf) {
  switch (x) {
    case System__St_13_Funcionando:
      strcpy(buf, "St_13_Funcionando");
      break;
    case System__St_13_Falha:
      strcpy(buf, "St_13_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_12 System__st_12_of_string(char* s) {
  if ((strcmp(s, "St_12_Open")==0)) {
    return System__St_12_Open;
  };
  if ((strcmp(s, "St_12_Closed")==0)) {
    return System__St_12_Closed;
  };
}

char* string_of_System__st_12(System__st_12 x, char* buf) {
  switch (x) {
    case System__St_12_Open:
      strcpy(buf, "St_12_Open");
      break;
    case System__St_12_Closed:
      strcpy(buf, "St_12_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_11 System__st_11_of_string(char* s) {
  if ((strcmp(s, "St_11_Funcionando")==0)) {
    return System__St_11_Funcionando;
  };
  if ((strcmp(s, "St_11_Falha")==0)) {
    return System__St_11_Falha;
  };
}

char* string_of_System__st_11(System__st_11 x, char* buf) {
  switch (x) {
    case System__St_11_Funcionando:
      strcpy(buf, "St_11_Funcionando");
      break;
    case System__St_11_Falha:
      strcpy(buf, "St_11_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_10 System__st_10_of_string(char* s) {
  if ((strcmp(s, "St_10_On")==0)) {
    return System__St_10_On;
  };
  if ((strcmp(s, "St_10_Off")==0)) {
    return System__St_10_Off;
  };
}

char* string_of_System__st_10(System__st_10 x, char* buf) {
  switch (x) {
    case System__St_10_On:
      strcpy(buf, "St_10_On");
      break;
    case System__St_10_Off:
      strcpy(buf, "St_10_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_9 System__st_9_of_string(char* s) {
  if ((strcmp(s, "St_9_Funcionando")==0)) {
    return System__St_9_Funcionando;
  };
  if ((strcmp(s, "St_9_Falha")==0)) {
    return System__St_9_Falha;
  };
}

char* string_of_System__st_9(System__st_9 x, char* buf) {
  switch (x) {
    case System__St_9_Funcionando:
      strcpy(buf, "St_9_Funcionando");
      break;
    case System__St_9_Falha:
      strcpy(buf, "St_9_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_8 System__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_Funcionando")==0)) {
    return System__St_8_Funcionando;
  };
  if ((strcmp(s, "St_8_Falha")==0)) {
    return System__St_8_Falha;
  };
}

char* string_of_System__st_8(System__st_8 x, char* buf) {
  switch (x) {
    case System__St_8_Funcionando:
      strcpy(buf, "St_8_Funcionando");
      break;
    case System__St_8_Falha:
      strcpy(buf, "St_8_Falha");
      break;
    default:
      break;
  };
  return buf;
}

System__st_7 System__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_Noite")==0)) {
    return System__St_7_Noite;
  };
  if ((strcmp(s, "St_7_Dia")==0)) {
    return System__St_7_Dia;
  };
}

char* string_of_System__st_7(System__st_7 x, char* buf) {
  switch (x) {
    case System__St_7_Noite:
      strcpy(buf, "St_7_Noite");
      break;
    case System__St_7_Dia:
      strcpy(buf, "St_7_Dia");
      break;
    default:
      break;
  };
  return buf;
}

System__st_6 System__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_Off")==0)) {
    return System__St_6_Off;
  };
  if ((strcmp(s, "St_6_Min")==0)) {
    return System__St_6_Min;
  };
  if ((strcmp(s, "St_6_Max")==0)) {
    return System__St_6_Max;
  };
}

char* string_of_System__st_6(System__st_6 x, char* buf) {
  switch (x) {
    case System__St_6_Off:
      strcpy(buf, "St_6_Off");
      break;
    case System__St_6_Min:
      strcpy(buf, "St_6_Min");
      break;
    case System__St_6_Max:
      strcpy(buf, "St_6_Max");
      break;
    default:
      break;
  };
  return buf;
}

System__st_5 System__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_Open")==0)) {
    return System__St_5_Open;
  };
  if ((strcmp(s, "St_5_Closed")==0)) {
    return System__St_5_Closed;
  };
}

char* string_of_System__st_5(System__st_5 x, char* buf) {
  switch (x) {
    case System__St_5_Open:
      strcpy(buf, "St_5_Open");
      break;
    case System__St_5_Closed:
      strcpy(buf, "St_5_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st_4 System__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_On")==0)) {
    return System__St_4_On;
  };
  if ((strcmp(s, "St_4_Off")==0)) {
    return System__St_4_Off;
  };
}

char* string_of_System__st_4(System__st_4 x, char* buf) {
  switch (x) {
    case System__St_4_On:
      strcpy(buf, "St_4_On");
      break;
    case System__St_4_Off:
      strcpy(buf, "St_4_Off");
      break;
    default:
      break;
  };
  return buf;
}

System__st_3 System__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_Present")==0)) {
    return System__St_3_Present;
  };
  if ((strcmp(s, "St_3_Not_Present")==0)) {
    return System__St_3_Not_Present;
  };
}

char* string_of_System__st_3(System__st_3 x, char* buf) {
  switch (x) {
    case System__St_3_Present:
      strcpy(buf, "St_3_Present");
      break;
    case System__St_3_Not_Present:
      strcpy(buf, "St_3_Not_Present");
      break;
    default:
      break;
  };
  return buf;
}

System__st_2 System__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Open")==0)) {
    return System__St_2_Open;
  };
  if ((strcmp(s, "St_2_Locked")==0)) {
    return System__St_2_Locked;
  };
}

char* string_of_System__st_2(System__st_2 x, char* buf) {
  switch (x) {
    case System__St_2_Open:
      strcpy(buf, "St_2_Open");
      break;
    case System__St_2_Locked:
      strcpy(buf, "St_2_Locked");
      break;
    default:
      break;
  };
  return buf;
}

System__st_1 System__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Open")==0)) {
    return System__St_1_Open;
  };
  if ((strcmp(s, "St_1_Closed")==0)) {
    return System__St_1_Closed;
  };
}

char* string_of_System__st_1(System__st_1 x, char* buf) {
  switch (x) {
    case System__St_1_Open:
      strcpy(buf, "St_1_Open");
      break;
    case System__St_1_Closed:
      strcpy(buf, "St_1_Closed");
      break;
    default:
      break;
  };
  return buf;
}

System__st System__st_of_string(char* s) {
  if ((strcmp(s, "St_On")==0)) {
    return System__St_On;
  };
  if ((strcmp(s, "St_Off")==0)) {
    return System__St_Off;
  };
}

char* string_of_System__st(System__st x, char* buf) {
  switch (x) {
    case System__St_On:
      strcpy(buf, "St_On");
      break;
    case System__St_Off:
      strcpy(buf, "St_Off");
      break;
    default:
      break;
  };
  return buf;
}

