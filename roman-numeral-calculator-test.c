/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "roman-numeral-calculator-test.check" instead.
 */

#include <check.h>

#line 1 "roman-numeral-calculator-test.check"
#include "roman-numeral-calculator.h"

START_TEST(add_1_and_1)
{
#line 4
	ck_assert_str_eq(add("I", "I"), "II");

}
END_TEST

START_TEST(add_1_and_2)
{
#line 7
	ck_assert_str_eq(add("I", "II"), "III");

}
END_TEST

START_TEST(add_2_and_2)
{
#line 10
	ck_assert_str_eq(add("II", "II"), "IV");

}
END_TEST

START_TEST(add_2_and_3)
{
#line 13
	ck_assert_str_eq(add("II", "III"), "V");

}
END_TEST

START_TEST(add_3_and_3)
{
#line 16
	ck_assert_str_eq(add("III", "III"), "VI");

}
END_TEST

START_TEST(add_4_and_3)
{
#line 19
	ck_assert_str_eq(add("IV", "III"), "VII");

}
END_TEST

START_TEST(add_3_and_4)
{
#line 22
	ck_assert_str_eq(add("III", "IV"), "VII");

}
END_TEST

START_TEST(add_5_and_4)
{
#line 25
	ck_assert_str_eq(add("IV", "V"), "IX");

}
END_TEST

START_TEST(add_5_and_5)
{
#line 28
	ck_assert_str_eq(add("V", "V"), "X");

}
END_TEST

START_TEST(add_5_and_6)
{
#line 31
	ck_assert_str_eq(add("V", "VI"), "XI");

}
END_TEST

START_TEST(add_10_and_1)
{
#line 34
	ck_assert_str_eq(add("X", "I"), "XI");

}
END_TEST

START_TEST(add_11_and_2)
{
#line 37
	ck_assert_str_eq(add("IX", "II"), "XI");

}
END_TEST

START_TEST(add_8_and_4)
{
#line 40
	ck_assert_str_eq(add("VIII", "IV"), "XII");

}
END_TEST

START_TEST(add_5_and_9)
{
#line 43
	ck_assert_str_eq(add("V", "IX"), "XIV");

}
END_TEST

START_TEST(add_10_and_5)
{
#line 46
	ck_assert_str_eq(add("X", "V"), "XV");

}
END_TEST

START_TEST(add_9_and_9)
{
#line 49
	ck_assert_str_eq(add("IX", "IX"), "XVIII");

}
END_TEST

START_TEST(add_10_and_9)
{
#line 52
	ck_assert_str_eq(add("X", "IX"), "XIX");

}
END_TEST

START_TEST(add_10_and_10)
{
#line 55
	ck_assert_str_eq(add("X", "X"), "XX");

}
END_TEST

START_TEST(add_16_and_19)
{
#line 58
	ck_assert_str_eq(add("XVI", "XIX"), "XXXV");

}
END_TEST

START_TEST(add_20_and_20)
{
#line 61
	ck_assert_str_eq(add("XX", "XX"), "XL");

}
END_TEST

START_TEST(add_20_and_29)
{
#line 64
	ck_assert_str_eq(add("XX", "XXIX"), "XLIX");

}
END_TEST

START_TEST(add_40_and_10)
{
#line 67
	ck_assert_str_eq(add("XL", "X"), "L");

}
END_TEST

START_TEST(add_39_and_12)
{
#line 70
	ck_assert_str_eq(add("XXXIX", "XII"), "LI");

}
END_TEST

START_TEST(add_50_and_11)
{
#line 73
	ck_assert_str_eq(add("L", "XI"), "LXI");

}
END_TEST

START_TEST(add_50_and_38)
{
#line 76
	ck_assert_str_eq(add("L", "XXXVIII"), "LXXXVIII");

}
END_TEST

START_TEST(add_50_and_40)
{
#line 79
	ck_assert_str_eq(add("L", "XXXX"), "XC");

}
END_TEST

START_TEST(add_50_and_50)
{
#line 82
	ck_assert_str_eq(add("L", "L"), "C");

}
END_TEST

START_TEST(add_12_and_89)
{
#line 85
	ck_assert_str_eq(add("XII", "LXXXIX"), "CI");

}
END_TEST

START_TEST(add_100_and_13)
{
#line 88
	ck_assert_str_eq(add("C", "XIII"), "CXIII");

}
END_TEST

START_TEST(add_30_and_90)
{
#line 91
	ck_assert_str_eq(add("XXX", "XC"), "CXX");

}
END_TEST

START_TEST(add_99_and_99)
{
#line 94
	ck_assert_str_eq(add("XCIX", "XCIX"), "CXCVIII");

}
END_TEST

START_TEST(add_201_and_198)
{
#line 97
	ck_assert_str_eq(add("CCI", "CXCVIII"), "CCCXCIX");

}
END_TEST

START_TEST(add_200_and_200)
{
#line 100
	ck_assert_str_eq(add("CC", "CC"), "CD");

}
END_TEST

START_TEST(add_300_and_200)
{
#line 103
	ck_assert_str_eq(add("CCC", "CC"), "D");

}
END_TEST

START_TEST(add_500_and_1)
{
#line 106
	ck_assert_str_eq(add("D", "I"), "DI");

}
END_TEST

START_TEST(add_400_and_100)
{
#line 109
	ck_assert_str_eq(add("CD", "C"), "D");

}
END_TEST

START_TEST(add_400_and_500)
{
#line 112
	ck_assert_str_eq(add("CD", "D"), "CM");

}
END_TEST

START_TEST(add_499_and_499)
{
#line 115
	ck_assert_str_eq(add("CDXCIX", "CDXCIX"), "CMXCVIII");

}
END_TEST

START_TEST(add_500_and_500)
{
#line 118
	ck_assert_str_eq(add("D", "D"), "M");

}
END_TEST

START_TEST(add_1000_and_1)
{
#line 121
	ck_assert_str_eq(add("M", "I"), "MI");

}
END_TEST

START_TEST(add_999_and_2)
{
#line 124
	ck_assert_str_eq(add("CMXCIX", "II"), "MI");

}
END_TEST

START_TEST(add_1000_and_1000)
{
#line 127
	ck_assert_str_eq(add("M", "M"), "MM");

}
END_TEST

START_TEST(add_1500_and_2499)
{
#line 130
	ck_assert_str_eq(add("MD", "MMCDXCIX"), "MMMCMXCIX");

}
END_TEST

START_TEST(subtract_1_from_2)
{
#line 133
	ck_assert_str_eq(subtract("II", "I"), "I");

}
END_TEST

START_TEST(subtract_1_from_3)
{
#line 136
	ck_assert_str_eq(subtract("III", "I"), "II");

}
END_TEST

START_TEST(subtract_1_from_5)
{
#line 139
	ck_assert_str_eq(subtract("V", "I"), "IV");

}
END_TEST

START_TEST(subtract_5_from_6)
{
#line 142
	ck_assert_str_eq(subtract("VI", "V"), "I");

}
END_TEST

START_TEST(subtract_4_from_5)
{
#line 145
	ck_assert_str_eq(subtract("V", "IV"), "I");

}
END_TEST

START_TEST(subtract_6_from_8)
{
#line 148
	ck_assert_str_eq(subtract("VIII", "VI"), "II");

}
END_TEST

START_TEST(subtract_1_from_9)
{
#line 151
	ck_assert_str_eq(subtract("IX", "I"), "VIII");

}
END_TEST

START_TEST(subtract_5_from_10)
{
#line 154
	ck_assert_str_eq(subtract("X", "V"), "V");

}
END_TEST

START_TEST(subtract_1_from_10)
{
#line 157
	ck_assert_str_eq(subtract("X", "I"), "IX");

}
END_TEST

START_TEST(subtract_10_from_11)
{
#line 160
	ck_assert_str_eq(subtract("XI", "X"), "I");

}
END_TEST

START_TEST(subtract_19_from_20)
{
#line 163
	ck_assert_str_eq(subtract("XX", "XIX"), "I");

}
END_TEST

START_TEST(subtract_50_from_51)
{
#line 166
	ck_assert_str_eq(subtract("LI", "L"), "I");

}
END_TEST

START_TEST(subtract_1_from_50)
{
#line 169
	ck_assert_str_eq(subtract("L", "I"), "XLIX");

}
END_TEST

START_TEST(subtract_5_from_50)
{
#line 172
	ck_assert_str_eq(subtract("L", "V"), "XLV");

}
END_TEST

START_TEST(subtract_10_from_50)
{
#line 175
	ck_assert_str_eq(subtract("L", "X"), "XL");

}
END_TEST

START_TEST(subtract_40_from_50)
{
#line 178
	ck_assert_str_eq(subtract("L", "XL"), "X");

}
END_TEST

START_TEST(subtract_90_from_100)
{
#line 181
	ck_assert_str_eq(subtract("C", "XC"), "X");

}
END_TEST

START_TEST(subtract_95_from_100)
{
#line 184
	ck_assert_str_eq(subtract("C", "XCV"), "V");

}
END_TEST

START_TEST(subtract_400_from_500)
{
#line 187
	ck_assert_str_eq(subtract("D", "CD"), "C");

}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, add_1_and_1);
    tcase_add_test(tc1_1, add_1_and_2);
    tcase_add_test(tc1_1, add_2_and_2);
    tcase_add_test(tc1_1, add_2_and_3);
    tcase_add_test(tc1_1, add_3_and_3);
    tcase_add_test(tc1_1, add_4_and_3);
    tcase_add_test(tc1_1, add_3_and_4);
    tcase_add_test(tc1_1, add_5_and_4);
    tcase_add_test(tc1_1, add_5_and_5);
    tcase_add_test(tc1_1, add_5_and_6);
    tcase_add_test(tc1_1, add_10_and_1);
    tcase_add_test(tc1_1, add_11_and_2);
    tcase_add_test(tc1_1, add_8_and_4);
    tcase_add_test(tc1_1, add_5_and_9);
    tcase_add_test(tc1_1, add_10_and_5);
    tcase_add_test(tc1_1, add_9_and_9);
    tcase_add_test(tc1_1, add_10_and_9);
    tcase_add_test(tc1_1, add_10_and_10);
    tcase_add_test(tc1_1, add_16_and_19);
    tcase_add_test(tc1_1, add_20_and_20);
    tcase_add_test(tc1_1, add_20_and_29);
    tcase_add_test(tc1_1, add_40_and_10);
    tcase_add_test(tc1_1, add_39_and_12);
    tcase_add_test(tc1_1, add_50_and_11);
    tcase_add_test(tc1_1, add_50_and_38);
    tcase_add_test(tc1_1, add_50_and_40);
    tcase_add_test(tc1_1, add_50_and_50);
    tcase_add_test(tc1_1, add_12_and_89);
    tcase_add_test(tc1_1, add_100_and_13);
    tcase_add_test(tc1_1, add_30_and_90);
    tcase_add_test(tc1_1, add_99_and_99);
    tcase_add_test(tc1_1, add_201_and_198);
    tcase_add_test(tc1_1, add_200_and_200);
    tcase_add_test(tc1_1, add_300_and_200);
    tcase_add_test(tc1_1, add_500_and_1);
    tcase_add_test(tc1_1, add_400_and_100);
    tcase_add_test(tc1_1, add_400_and_500);
    tcase_add_test(tc1_1, add_499_and_499);
    tcase_add_test(tc1_1, add_500_and_500);
    tcase_add_test(tc1_1, add_1000_and_1);
    tcase_add_test(tc1_1, add_999_and_2);
    tcase_add_test(tc1_1, add_1000_and_1000);
    tcase_add_test(tc1_1, add_1500_and_2499);
    tcase_add_test(tc1_1, subtract_1_from_2);
    tcase_add_test(tc1_1, subtract_1_from_3);
    tcase_add_test(tc1_1, subtract_1_from_5);
    tcase_add_test(tc1_1, subtract_5_from_6);
    tcase_add_test(tc1_1, subtract_4_from_5);
    tcase_add_test(tc1_1, subtract_6_from_8);
    tcase_add_test(tc1_1, subtract_1_from_9);
    tcase_add_test(tc1_1, subtract_5_from_10);
    tcase_add_test(tc1_1, subtract_1_from_10);
    tcase_add_test(tc1_1, subtract_10_from_11);
    tcase_add_test(tc1_1, subtract_19_from_20);
    tcase_add_test(tc1_1, subtract_50_from_51);
    tcase_add_test(tc1_1, subtract_1_from_50);
    tcase_add_test(tc1_1, subtract_5_from_50);
    tcase_add_test(tc1_1, subtract_10_from_50);
    tcase_add_test(tc1_1, subtract_40_from_50);
    tcase_add_test(tc1_1, subtract_90_from_100);
    tcase_add_test(tc1_1, subtract_95_from_100);
    tcase_add_test(tc1_1, subtract_400_from_500);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
