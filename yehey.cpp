#include "yehey.h"
    int day,month,year;
    #define MAX	200000
#define LL	long long
#define LIMIT	1000
    bool composite[MAX + 1];
    vector<int> primes;
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <stdint.h>

using namespace std;


yehey::yehey()
{
	//ctor
}

yehey::~yehey()
{
	//dtor
}

void yehey::multiple_3and5()//PROBLEM NO.1
{

	int num=1000, y=0;


	for (int i=1;i<num;++i)
	{

		if ((i%3==0 )|| (i%5==0))
		{

			y=y+i;

		}

	}

	cout<<"      The sum of all the multiples of 3 or 5 below 1000 is "<<y <<endl;
}

void yehey::even_fibonacce()//PROBLEM NO.2
{
    long a = 1;
	long b = 2;
	long x = 0;
	long evenSum=2;


	while (a+b<4000000) {

		x = a + b;
		a = b;
		b = x;

		if (x%2==0)
			evenSum+=x;
	}

	cout<<"             The sum of even value terms is "<< evenSum   <<endl;


}

void yehey::largest_prime_factor()//PROBLEM NO.3
{
    long long x=600851475143;

    for(int i=2;i<=sqrt(x);i++){
        while(x%i==0 && x!= i){
            x=x/i;
        }
    }

	 cout<<"       The largest prime factor of the number 600851475143 is "<< x <<endl;

}

void yehey::largest_palindrome()//PROBLEM NO.4
{
    int answer = 0;

	for(unsigned int i = 999; i != 99; i--)
		for(unsigned int j = 999; j != 99; j--) {

			int product = i*j;
			stringstream mystr2;
			mystr2 << product;
			string mystr = mystr2.str();
			unsigned int length = mystr.length();
			bool check = true;
			for(unsigned int k = 0; k < length/2; k++)
				if(mystr[k] != mystr[(length-k)-1]) {

					check = false;
					break;

					}

				if(answer <= product && check)
					answer = product;
			}


	cout<<"                          The Largest Palindrome              "<<endl;
	cout<<"          Made From The Product Of Two 3-digit Numbers is "<<answer <<endl;

}

void yehey::smallest_multiple()//PROBLEM NO.5
{

    int num = 20, flag = 0;

    while(flag == 0) {
        if ((num%2) == 0 && (num%3) == 0 && (num%4) == 0    && (num%5) == 0 && (num%6) == 0
            && (num%7) == 0 && (num%8) == 0 && (num%9) == 0 && (num%10) == 0 && (num%11) == 0 && (num%12) ==0
            && (num%13) == 0 && (num%14) == 0 && (num%15) == 0 && (num%16) == 0 && (num%17) == 0 && (num%18)==0
            && (num%19) == 0    && (num%20) == 0)

        {
                flag =  1;

                cout<<"               The smallest positive number that is evenly         "<<endl;
                cout<<"         divisible by all of the numbers from 1 to 20 is "<<num <<endl;

        }

        num++;
    }

}

void yehey::sum_square_diff()//PROBLEM NO.6
{
    long sum1 = 0;
    long sum2 = 0;
    int diff = 0;

    for (int i=1; i != 101; i++)
    {
        sum1 = sum1 + (pow(i, 2));
    }

    for (int j=1; j != 101; j++)
    {
        sum2 = sum2 + j;
    }

    diff = (sum2*sum2) - sum1;

    cout<<"         The difference between the sum of the squares of the first  "<<endl;
    cout<<"         one hundred natural numbers and the square of the sum is "<< endl;
    cout<<                             diff                            <<endl;

}

void yehey::ten_th_1st_prime()//PROBLEM NO.7
{
    int counter = 0;
    for (int i=2; ; i++)
    {
        bool prime=true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
            {
                prime=false;
                break;
            }
        }
        if(prime) {
            counter++;
			if (counter==10001) {

				cout<<"       |               The 10 001st prime number is "<< i <<endl;


				break;
			}
		}
    }
}


void yehey::largest_product_in_series()//PROBLEM NO.8
{



	int product=0,n=0,prod=0,b=0,a=0,c=0,d=0,e=0;



string number = "73167176531330624919225119674426574742355349194934"
"96983520312774506326239578318016984801869478851843"
"85861560789112949495459501737958331952853208805511"
"12540698747158523863050715693290963295227443043557"
"66896648950445244523161731856403098711121722383113"
"62229893423380308135336276614282806444486645238749"
"30358907296290491560440772390713810515859307960866"
"70172427121883998797908792274921901699720888093776"
"65727333001053367881220235421809751254540594752243"
"52584907711670556013604839586446706324415722155397"
"53697817977846174064955149290862569321978468622482"
"83972241375657056057490261407972968652414535100474"
"82166370484403199890008895243450658541227588666881"
"16427171479924442928230863465674813919123162824586"
"17866458359124566529476545682848912883142607690042"
"24219022671055626321111109370544217506941658960408"
"07198403850962455444362981230987879927244284909188"
"84580156166097919133875499200524063689912560717606"
"05886116467109405077541002256983155200055935729725"
"71636269561882670428252483600823257530420752963450";


			while(n < 995 )
		{
					a=number[n];
					a=a-48;
					b=number[n+1];
					b=b-48;
					c=number[n+2];
					c=c-48;
					d=number[n+3];
					d=d-48;
					e=number[n+4];
					e=e-48;
					prod =a*b*c*d*e;
				if(prod>product)
					{
						product = prod;
					}
				n++;
		}

		cout<<"         The greatest product of five consecutive digits in the 1000 "<<endl;
		cout<<"               digit number of the following numbers is "<<product <<endl;


		//cout<<product<<endl;
		//cout
}

void yehey::special_pytho_triplet()//PROBLEM NO.9
{
	int a = 0, b = 0, c = 0, sum = 1000, product;
	bool test = false;

	for (a = 1; a < sum / 3 && !test; a++)
		{
			for (b = a; b < sum / 2 && !test; b++)
				{
					c = sum - a - b;

					if ((a*a) + (b*b) == (c*c) )
							{
								test = true;
								product=a*b*c;

								cout<<"              One Pythagorean triplet for which a + b + c = 1000.    "<<endl;
								cout<<"                         The product of abc is "<<product <<endl;

								break;
							}
				}
		}
}


void yehey::summation_of_primes()//PROBLEM NO.10
{
    long num = 2000000;
    long long x = 0;
    long long i;
    for (i=2; i<num; i++)
    {
        bool prime=true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
            {
                prime=false;
                break;
            }
        }
        if(prime) {
            //cout << i << endl;
            x=x+i;
		}
    }

    cout<<"         The sum of all the primes below two million is "<< x <<endl;
}

void yehey::largest_product_in_grid()
{
    int num_container[20][20] = {
                                                        { 8,02,22,97,38,15,00,40,00,75,04,05,07,78,52,12,50,77,91, 8},
                                                        {49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48,04,56,62,00},
                                                        {81,49,31,73,55,79,14,29,93,71,40,67,53,88,30,03,49,13,36,65},
                                                        {52,70,95,23,04,60,11,42,69,24,68,56,01,32,56,71,37,02,36,91},
                                                        {22,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80},
                                                        {24,47,32,60,99,03,45,02,44,75,33,53,78,36,84,20,35,17,12,50},
                                                        {32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70},
                                                        {67,26,20,68,02,62,12,20,95,63,94,39,63, 8,40,91,66,49,94,21},
                                                        {24,55,58,05,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72},
                                                        {21,36,23, 9,75,00,76,44,20,45,35,14,00,61,33,97,34,31,33,95},
                                                        {78,17,53,28,22,75,31,67,15,94,03,80,04,62,16,14, 9,53,56,92},
                                                        {16,39,05,42,96,35,31,47,55,58,88,24,00,17,54,24,36,29,85,57},
                                                        {86,56,00,48,35,71,89,07,05,44,44,37,44,60,21,58,51,54,17,58},
                                                        {19,80,81,68,05,94,47,69,28,73,92,13,86,52,17,77,04,89,55,40},
                                                        {04,52, 8,83,97,35,99,16,07,97,57,32,16,26,26,79,33,27,98,66},
                                                        {88,36,68,87,57,62,20,72,03,46,33,67,46,55,12,32,63,93,53,69},
                                                        {04,42,16,73,38,25,39,11,24,94,72,18, 8,46,29,32,40,62,76,36},
                                                        {20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74,04,36,16},
                                                        {20,73,35,29,78,31,90,01,74,31,49,71,48,86,81,16,23,57,05,54},
                                                        {01,70,54,71,83,51,54,69,16,92,33,48,61,43,52,01,89,19,67,48},
                                                        };

    int start = 0;
    int end = 3;
    int product = 1;

    vector<long int>final_results;

    //left/right/up/down//
    for(int i=0; i<20; i++)
    {
        for(int j=start; j<=end; j++)

        {
            product=product*num_container[i][j];
            if(j==end)

            {
            final_results.push_back(product);
            product=1;
            start++;
            end++;
            }

            if(j==19)break;
        }

        start=0;
        end=3;

        for(int k=start; k<=end; k++)
        {
            product=product*num_container[k][i];
            if(k==end)

            {
            final_results.push_back(product);
            product=1;
            start++;
            end++;
            }

            if(k==19)

            {
            start=0;
            end=3;
            break;
            }
        }
    }

    //Diagonal_top-right_to_bot-left//and_vice_versa//
    int current_row = 0;
    for(int i=0; i<=16; i++)

    {
        for(int j=0; j<=16; j++)

        {
            current_row = i;
            for(int k=start; k<=end; k++)

            {
                product = product * num_container[current_row][k];
                current_row++;
                if (k==end)
                    final_results.push_back(product);
            }

            product = 1;
            start++;
            end++;
        }

        start = 0;
        end = 3;

        for(int j=0; j<=16; j++)

        {
            current_row = i+3;
            for(int k=start; k<=end; k++)

            {
                product = product * num_container[current_row][k];
                current_row--;
                if (k==end)
                    final_results.push_back(product);
            }

            product = 1;
            start++;
            end++;
        }

        start = 0;
        end = 3;
    }

    int max_product=0;
    for(unsigned p=0; p<final_results.size(); p++)

    {
        if(final_results[p]>max_product)
            max_product=final_results[p];
    }

    cout << "Greatest Product: " << max_product << endl;
}

void yehey::highly_divisible_triangular_number()
{
    int triangle=0;
    int n=1;
    while(yehey::number_divisors(triangle)<500)

    {
        triangle+=n;
        n++;
    }

    cout<<  "Value of the First Triangle: " << triangle << endl;
}

    int yehey::number_divisors(int number)
    {
        int numberDivisor = 0;
        int root = sqrt(number);

        for(int i = 1; i<= root; i++)

        {
        if(number % i == 0)

        {
            numberDivisor += 2;
        }
        }

        if (root * root == number)

        {
        numberDivisor--;
        }

        return numberDivisor;
}

void yehey::large_sum()
{
    int numbers[100][50];
    string line;
    int sum=0;
    int carry=0,remainder=0;
        vector<int>largenumber;

    ifstream myfile;
    myfile.open("LargestSum.txt");

    int j=0;
    while(myfile.good())
    {
        getline(myfile,line);
        for(int i=0;i<50;i++)
            numbers[j][i]=charToInt(line[i]);
            j++;
    }

    myfile.close();

    int a=49;
    while(a>=0)
    {
        sum=0;
        for(int b=0; b<100; b++)

        {
            sum =sum + numbers[b][a];
        }

        sum=sum+carry;
        carry=sum/10;
        remainder=sum-carry*10;
        largenumber.insert(largenumber.begin(),remainder);
        a--;
        }

        largenumber.insert(largenumber.begin(),carry);

        for(int i=0;i<9;i++)
            cout<<largenumber[i];
            cout<<"\n";
}

    int yehey::charToInt(char line)
    {
        if(line == '0')
            return 0;

        if (line == '1')
            return 1;

        if (line == '2')
            return 2;

        if (line == '3')
            return 3;

        if (line == '4')
            return 4;

        if (line == '5')
            return 5;

        if (line == '6')
            return 6;

        if (line == '7')
            return 7;

        if (line == '8')
            return 8;

        if (line == '9')
            return 9;

    return 0;
}

void yehey::longest_collatz_sequence()
{
    long int num_of_terms=0;
    long int highest_term=0;
    int num_with_highestTerm=0;

    for(int i=999999; i>1; i--)

    {
        num_of_terms=collatz_func(i);
        if(num_of_terms>highest_term)

        {
            highest_term=num_of_terms;
            num_with_highestTerm=i;
        }

    }
        cout << "Number with Highest Term: " << num_with_highestTerm<< endl;
}

    int yehey::collatz_func(long long num)
    {
        long int terms=1;
        while (num != 1)

        {
            if (num%2 == 0)
                num = num/2;

            else if (num%2 == 1)
                num = 3*num + 1;
                    terms++;
        }

        return terms;
}

void yehey::diophantine_reciprocals_a()
{
    seive(MAX);
	for (int N = 1000; N < MAX; N++)

	{
		if (!composite[N])
			continue;

    // Compute number of divisors of N squared
    int numdiv = 1, cn = N;
    for (unsigned i = 0; 1 != cn && i < primes.size(); i++)

		{
			int	count = 0;
			while (cn % primes[i] == 0)

			{
				cn /= primes[i];
				count++;
			}

			numdiv *= (count * 2 + 1);
		}

		int ans = (numdiv + 1) / 2;
		if (ans > LIMIT)

		{
			cout << "Value of N: " << N << endl;
			break;
		}
	}
}

void yehey::seive(int n)
{
	int	i, j;
	for (i = 2; i * i <= n; i++)

	{
		if (composite[i])
			continue;

		for (j = 2 * i; j <= n; j += i)
			composite[j] = 1;
            primes.push_back(i);
	}

	for (; i <= n; i++)
		if (!composite[i])
			primes.push_back(i);
}

void yehey::power_digit_sum()
{
    stringstream ss;
    string num = "";
    int answer = 0;
    ss.setf(ios::fixed);
    ss << setprecision(0) << pow(2, 1000);
    ss >> num;
    for(unsigned int i = 0; i < num.length(); i++)
        answer += atoi(num.substr(i,1).c_str());

    cout <<"Sum: " << answer << endl;
}

void yehey::number_letter_counts()
{
    string dictionary1[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    string dictionary2[18] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    string dictionary3[10] = { "onehundred", "twohundred", "threehundred", "fourhundred", "fivehundred", "sixhundred", "sevenhundred", "eighthundred", "ninehundred", "onethousand" };

    int sum_of_all_letters=0;
    int i=0,start,j,k;
    while(i<10)

    {
        sum_of_all_letters+=dictionary1[i].length();
        i++;
    }

        sum_of_all_letters-=4;
        i=0;

    while(i<10)

    {
        sum_of_all_letters+=dictionary2[i].length();
        i++;
    }

    start=10;
    while(start<18)

    {
        sum_of_all_letters+=dictionary2[start].length();
        for(i=1; i<10; i++)
        sum_of_all_letters+=dictionary2[start].length()+dictionary1[i].length();
        start++;
    }

    j=0;
    start=10;
    while(j<9)

    {
        sum_of_all_letters+=dictionary3[j].length();
        for(i=1; i<10; i++)
            sum_of_all_letters+=dictionary3[j].length()+dictionary1[i].length()+3;
        for(k=0; k<10; k++)
            sum_of_all_letters+=dictionary3[j].length()+dictionary2[k].length()+3;
        for(int p=10; p<18; p++)
            sum_of_all_letters+=dictionary3[j].length()+dictionary2[p].length()+3;

        while(start<18)
        {
            for(int a=1; a<10; a++)
                sum_of_all_letters+=dictionary3[j].length()+dictionary2[start].length()+dictionary1[a].length()+3;
            start++;
        }

        start=10;
        j++;
    }

        sum_of_all_letters+=dictionary3[9].length();
        cout<< "Sum of all Letters: "<<sum_of_all_letters<<endl;
}

void yehey::maximum_path_sum_I()
{
    int tri [15][15] = {
                                    {75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                    {95, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                    {17, 47, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                    {18, 35, 87, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                    {20, 4, 82, 47, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                    {19, 1, 23, 75, 3, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                    {88, 2, 77, 73, 7, 63, 67, 0, 0, 0, 0, 0, 0, 0, 0},
                                    {99, 65, 4, 28, 6, 16, 70, 92, 0, 0, 0, 0, 0, 0, 0},
                                    {41, 41, 26, 56, 83, 40, 80, 70, 33, 0, 0, 0, 0, 0, 0},
                                    {41, 48, 72, 33, 47, 32, 37, 16, 94, 29, 0, 0, 0, 0, 0},
                                    {53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14, 0, 0, 0, 0},
                                    {70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57, 0, 0, 0},
                                    {91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48, 0, 0},
                                    {63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31, 0},
                                    {4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23}
                                    };

        cout << "Maximum Total: "<<path(15, tri) << endl;
}

    /* Finds largest of 3 and adds to upper num */
    int yehey::maxsum (int num1, int num2, int up)

    {
    int biggest = num1;
    if(num2 > biggest)
        biggest = num2;
    return biggest + up;
    }

    /* Finds largest path */
    int yehey::path(int num, int tri[][15])

    {
        for(int i = num-1; i >= 0; i--)

        {
            for(int j = 0; j+1 < num && tri[i][j+1] != 0; j++)
            tri[i-1][j] = maxsum(tri[i][j], tri[i][j+1], tri[i-1][j]);
        }

        return tri[0][0];
}

void yehey::counting_sundays()
{
    setStartDate(6, 1, 1901);
    cout << "Number of Sundays: "<<sundaysOnFirst(2000) << endl;
}

void yehey::setStartDate(int startDay, int startMonth, int startYear)
{
   day = startDay;
   month = startMonth;
   year = startYear;
}

    bool yehey::isLeapYear()

    {
    if(year % 100 == 0)

        {
            //if century
            if(year % 400 == 0)

            //if divisible by 400
            return true;

    else
            return false;
        }

    else if(year % 4 == 0)

    //else if divisible by 4
        return true;

    else
        return false;
}

    int yehey::daysInMonth()
    {
    if(month == 2)

        {
        if(isLeapYear())
            return 29;

        else
            return 28;
        }

     else if((month == 4) || (month == 6) || (month == 9) || (month == 11))
        return 30;

    else
        return 31;
}

    /* Variable 'numDays' must not be greater than 27*/
void yehey::updateDate(int numDays)
{
    day += numDays;
    if(day > daysInMonth())

    {
        day -= daysInMonth();
        month++;
    }

    if(month > 12)

    {
        month = 1;
        year++;
    }
}

/* Global variable 'day' must be set to a Sunday */
int yehey::sundaysOnFirst(int endYear)
{
    int sundays = 0;
    for(; year <= endYear; updateDate(7))

    {
        if(day == 1)
            sundays++;
    }

    return sundays;
}

void yehey::factorial_digit_sum()
{
    string s = "93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000";
    cout <<"Sum of the Digits: "<< sumDigits(s) << endl;
}

    int yehey::sumDigits(string s)
    {
        int answer = 0;
        for(unsigned int i = 0; i < s.length(); i++)
        answer += atoi(s.substr(i,1).c_str());
        return answer;
    }
void  yehey::name_scores()//PROBLEM NO.21
{

    fstream myfile("names.txt");
    string line, key;
    string temp = "";
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int rank_Range = alphabet.length();
    getline(myfile, line);
    int range = line.length();
    int arraySize = 1;
    int indexNum = 0;
    int letterSum = 0, product = 0, namesRank = 0;
    unsigned long total = 0;

    for (int i = 0; i < range; i++) {
        if (line.at(i) == ',') {
            arraySize++;
        }
    }

    string names[arraySize];

    for (int j = 1; j < range; j++) {
        if (line.at(j) == '"' || line.at(j) == ',') {
            if (temp != "") {
                names[indexNum] = temp;
                temp = "";
                indexNum++;
            }
            continue;
        }
        temp += line.at(j);
    }


    for (int i = 0; i < arraySize; i++) {
        int j;
        for (j = i+1; j < arraySize; j++) {
            if (names[i] > names[j]) {
                key = names[j];
                names[j] = names[i];
                names[i] = key;
            }
        }
   }

   for (int i = 0; i < arraySize; i++) {
        letterSum = 0;
        namesRank = i+1;
        int namesRange = names[i].length();
        for (int j = 0; j < namesRange; j++) {
            for (int k = 0; k < rank_Range; k++) {
                if (names[i].at(j) == alphabet.at(k))
                {
                    letterSum += k + 1;
                    break;
                }
            }
        }
        product = namesRank*letterSum;
        total += product;
   }



   /*for (int i = 0; i < arraySize; i++) {
    cout << names[i] << " ";
   }*/

   cout<<" The total of all the name scores in the file is " << total<<endl;


}

