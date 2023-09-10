#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
#include <math.h>

int DateCheck(int date, int m, int year, int hyear); //function for checking the input
void DayOutput(int day, int date, int m, int year); //function for date output
int LeapYear(int year); //function to determine if the year is leap or not


main(){

    int date, m, year, n;

    int day;
    char buffer[12]; //temporary input storage

    while(1){
        printf("Please, enter the date in following format: day.month.year : ");

        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%d.%d.%d", &date, &m, &year);
        fflush(stdin);


        int hyear = LeapYear(year);

        if ((date <= 0 ) || (m <= 0) || (year <=0)){
            printf("Incorrect format.\n");
        }
        else if(m>12){
            printf("Month can't be greater than 12\n");
        }
        else if(year > 2099){
            printf("Year can't be greater than 2099\n"); //The formula used in this project can only accurately calculate years up to 2099.
        }
        else if(DateCheck(date, m, year, hyear) != 1){

        }

        else{
            break;
        }

    }

    if ((year%100 != 0 && year%4 == 0) || (year%100 == 0 && year%400 == 0)){ //Check for the leap year to determine the corrector n.

        if (m  <= 2){
            n = 1;

        }
        else if (m>2){
            n = 0;
        }
    }
    else{
        if(m <= 2){
            n = 2;
        }
        else if(m>2){
            n = 0;
        }

    }


    day = ((int)(365.25*year) + (int)(30.56*m) + date + n)%7; //Formula to find the day
    DayOutput(day, date, m, year);
    getch();






}
int LeapYear(int year){
    int hyear;
    if ((year%100 != 0 && year%4 == 0) || (year%100 == 0 && year%400 == 0)){
        hyear = 1;
        return hyear;
    }

    else{
        hyear = 0;
        return hyear;

    }
}

int DateCheck(int date, int m, int year, int hyear){
    int result;

        switch(m){
            case 1:
                if (date > 31){
                    printf("January has only 31 days.\n");
                    break;
                }
                else{
                    int result = 1;
                    return result;
                }
            case 2:
                if(hyear == 0){
                    if (date > 28){
                        printf("February has only 28 days in this year.\n");
                        break;\
                    }
                    else{
                        int result = 1;
                        return result;
                    }

                }
                else if(hyear ==1){

                    if (date > 29){
                        printf("February has only 29 days in this year.\n");
                        break;
                    }
                    else{
                        int result = 1;
                        return result;
                    }


                }
            case 3:
                if (date > 31){
                    printf("March has only 31 days.\n");
                    break;
                }
                else{
                    int result = 1;
                    return result;
                }
            case 4:
                if (date > 30){
                    printf("April has only 30 days.\n");
                    break;
                }
                else{
                    int result = 1;
                    return result;
                }
            case 5:
                if (date > 31){
                    printf("May has only 31 days.\n");
                    break;
                }
                else{
                    int result = 1;
                    return result;
                }
            case 6:
                if (date > 30){
                    printf("Juny has only 30 days.\n");
                    break;
                }
                else{
                    int result = 1;
                    return result;
                }
            case 7:
                if (date > 31){
                    printf("July has only 31 days.\n");
                    break;
                }
                else{
                    int result = 1;
                    return result;
                }
            case 8:
                if (date > 31){
                    printf("August has only 31 days.\n");
                    break;
                }
                else{
                    int result = 1;
                    return result;
                }
            case 9:
                if (date > 30){
                    printf("September has only 30 days.\n");
                    break;
                }
                else{
                    int result = 1;
                    return result;
                }
            case 10:
                if (date > 31){
                    printf("October has only 31 days.\n");
                    break;
                }
                else{
                    int result = 1;
                    return result;
                }
            case 11:
                if (date > 30){
                    printf("November has only 30 days.\n");
                    break;
                }
                else{
                    int result = 1;
                    return result;
                }
            case 12:
                if (date > 31){
                    printf("December has only 31 days.\n");
                    break;
                }
                else{
                    int result = 1;
                    return result;
                }

    }

}


void DayOutput(int day, int date, int m, int year){
    switch(day)
    {
        case 0:
            printf("%d.%d.%d : Monday\n", date, m, year);
            break;
        case 1:
            printf("%d.%d.%d : Tuesday\n", date, m, year);
            break;
        case 2:
            printf("%d.%d.%d : Wednesday\n", date, m, year);
            break;
        case 3:
            printf("%d.%d.%d : Thursday\n", date, m, year);
            break;
        case 4:
            printf("%d.%d.%d : Friday\n", date, m, year);
            break;
        case 5:
            printf("%d.%d.%d : Saturday\n", date, m, year);
            break;
        case 6:
            printf("%d.%d.%d : Sunday\n", date, m, year);
            break;

    }
}
