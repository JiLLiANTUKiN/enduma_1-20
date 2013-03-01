#ifndef YEHEY_H
#define YEHEY_H
#include "math.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <sstream>
#include <string.h>
#include <iomanip>
#include <set>

using namespace std;

class yehey
{
    public:
        yehey();
        virtual ~yehey();
        void multiple_3and5();
		void even_fibonacce();
		void largest_prime_factor();
		void largest_palindrome();
		void smallest_multiple();
		void sum_square_diff();
		void ten_th_1st_prime();
		void largest_product_in_series();
		void special_pytho_triplet();
		void summation_of_primes();

		 void largest_product_in_grid();
            void highly_divisible_triangular_number();
                int number_divisors(int number);
            void large_sum();
                int charToInt(char line);
            void longest_collatz_sequence();
                int collatz_func(long long num);
            void diophantine_reciprocals_a();
                void seive(int n);
            void power_digit_sum();
            void number_letter_counts();
            void maximum_path_sum_I();
                int maxsum (int num1, int num2, int up);
                int path(int num, int tri[][15]);
            void counting_sundays();
                void setStartDate(int startDay, int startMonth, int startYear);
                bool isLeapYear();
                int daysInMonth();
                void updateDate(int numDays);
                int sundaysOnFirst(int endYear);
            void factorial_digit_sum();
                int sumDigits(string s);

                bool Prime_check(long num);
            void  name_scores();//PROBLEM NO.21

    protected:
    private:
};

#endif // YEHEY_H
