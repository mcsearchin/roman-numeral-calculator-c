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
	ck_assert_str_eq(add("XXX", "XC"), "CXX");
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

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
