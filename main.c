#include <stdio.h>
int countNumber(long long n);
int twelveDeigit(long long n);
int nineDeigit(long long n);
void findMonthDay(int n,char Gender,int Year);


int main() {
    long long NICNo;
    printf("Please Enter Your NIC Number : ");
    scanf("%lli",&NICNo);
    int numberOfDigit = countNumber(NICNo);
    if(numberOfDigit == 12){
        twelveDeigit(NICNo);
    } else if (numberOfDigit == 9){
        nineDeigit(NICNo);
    } else {
        printf("this is %d NIC number : %lli",numberOfDigit,NICNo);
    }
    return 0;
}
int countNumber(long long n){
    int count;
    do {
        n /= 10;
        ++count;
    } while (n != 0);
    return count;
}
int twelveDeigit(long long n){
    int firstSixDigit,nextThreeDigit,year;
    char gender;
    firstSixDigit = n/100000;
    nextThreeDigit = firstSixDigit%1000;
    if(nextThreeDigit < 500){
        gender = 'M';
    } else{
        gender = 'F';
        nextThreeDigit -= 500;
    }
    year = firstSixDigit/1000;
    findMonthDay(nextThreeDigit,gender,year);

}
int nineDeigit(long long n){
    int firstFiveDigit,nextThreeDigit,year;
    char gender;
    firstFiveDigit = n/10000;
    nextThreeDigit = firstFiveDigit%1000;
    if(nextThreeDigit < 500){
        gender = 'M';
    } else{
        gender = 'F';
        nextThreeDigit -= 500;
    }
    year = firstFiveDigit/1000+1900;
    findMonthDay(nextThreeDigit,gender,year);
}
void findMonthDay(int n,char Gender,int Year){
    int month,day;
    if (0 < n && n <= 31){
        month = 1;
        day = n;
    }else if(31 < n && n <=60){
        month = 2;
        day = n-31;
    }else if(60 < n && n <= 91){
        month = 3;
        day = n-60;
    }else if(91 < n && n <= 121){
        month = 4;
        day = n-91;
    }else if(121 < n && n <= 152){
        month = 5;
        day =n-121;
    }else if(152 < n && n <= 182){
        month = 6;
        day = n-152;
    }else if(182 < n && n <= 213){
        month = 7;
        day = n-182;
    }else if(213 < n && n <= 224){
        month = 8;
        day = n-213;
    }else if(224 < n && n <= 274){
        month = 9;
        day = n-244;
    }else if(274 < n && n <= 305){
        month = 10;
        day = n-274;
    }else if(335 < n && n <=335){
        month = 11;
        day = n-305;
    }else if(335 < n && n <=366){
        month = 12;
        day = n-335;
    }

    switch(month){
        case 1:
            printf("Gender : %c\n",Gender);
            printf("Date of Birth : %d - January - %d",day,Year);
            break;
        case 2:
            printf("Gender : %c\n",Gender);
            printf("Date of Birth : %d - February - %d",day,Year);
            break;
        case 3:
            printf("Gender : %c\n",Gender);
            printf("Date of Birth : %d - March - %d",day,Year);
            break;
        case 4:
            printf("Gender : %c\n",Gender);
            printf("Date of Birth : %d - April - %d",day,Year);
            break;
        case 5:
            printf("Gender : %c\n",Gender);
            printf("Date of Birth : %d - May - %d",day,Year);
            break;
        case 6:
            printf("Gender : %c\n",Gender);
            printf("Date of Birth : %d - June - %d",day,Year);
            break;
        case 7:
            printf("Gender : %c",Gender);
            printf("Date of Birth : %d - July - %d",day,Year);
            break;
        case 8:
            printf("Gender : %c\n",Gender);
            printf("Date of Birth : %d - Auguest - %d",day,Year);
            break;
        case 9:
            printf("Gender : %c\n",Gender);
            printf("Date of Birth : %d - September - %d",day,Year);
            break;
        case 10:
            printf("Gender : %c\n",Gender);
            printf("Date of Birth : %d - october - %d",day,Year);
            break;
        case 11:
            printf("Gender : %c\n",Gender);
            printf("Date of Birth : %d - November - %d",day,Year);
            break;
        case 12:
            printf("Gender : %c\n",Gender);
            printf("Date of Birth : %d - December - %d",day,Year);
            break;
        default:
            printf("Something Went Wrong");
            break;
    }

}
