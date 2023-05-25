// CODE BY BARCIBAY - KARTIKAY JAISWAL


#include <stdio.h>
#include <conio.h>

int main (){

    int time_table;
    int day_num;
    int mumb_day_num_train;
    int pune_day_num_train;
    int delhi_day_num_train;

//FUNCTIONS USED
    // void timetable(void);  //Timetable
    // void weektrain(void);  //Weektrain
    // void mumb_exp_sun(void);
    // void mumb_exp_mon(void);
    // void mumb_exp_wed(void);
    // void mumb_exp_thur(void);
    // void pune_exp_mon(void);
    // void pune_exp_tues(void);
    // void pune_exp_thurs(void);
    // void pune_exp_fri(void);
    // void delhi_exp_tues(void);
    // void delhi_exp_wed(void);
    // void delhi_exp_fri(void);
    // void delhi_exp_sat(void);
    // void mumbai_exp(void); //calls main mumbai train function 
    // void pune_exp(void); //calls main pune train function 
    // void delhi_exp(void); //calls main delhi train function 

    void timetable(void)
    {
    printf("-------------------------------");	
	printf("\n      DAY\t  TRAINS\n");
	printf("-------------------------------");
	printf("\n1>>  SUNDAY  \tMUMBAI");
	printf("\n2>>  MONDAY  \tMUMBAI & PUNE");
	printf("\n3>>  TUESDAY  \tPUNE & DELHI");
	printf("\n4>>  WEDNESDAY\tDELHI & MUMBAI");
	printf("\n5>>  THURSDAY\tMUMBAI & PUNE");
	printf("\n6>>  FRIDAY  \tDELHI & PUNE");
    printf("\n7>>  SATURDAY\tDELHI");
    }

    void weektrain(void)
    {
        printf("There are 3 types of TRAIN");
        printf("\n1>> MUMBAI EXPRESS");
        printf("\n2>> PUNE EXPRESS");
        printf("\n3>> DELHI EXPRESS");
    }

    void mumb_exp_sun(void)
    {
        printf("You have Selected MUMBAI EXPRESS of SUNDAY\n");
        printf("Some Details to Note\n");
        printf("\n");
        printf("\nNumber of Coaches -\t 15 Coaches");
        printf("\nSitting Arrangement -\t Given Below\n");
        printf("Coach 1 S1 (1 - 72)\n");
        printf("Coach 2 S2 (1 - 72)\n");
        printf("Coach 3 S3 (1 - 72)\n");
        printf("Coach 4 S4 (1 - 72)\n");
        printf("Coach 5 S5 (1 - 72)\n");
        printf("Coach 6 S6 (1 - 72)\n");
        printf("Coach 7 S7 (1 - 72)\n");
        printf("Coach 8 B1 (1 - 72)\n");
        printf("Coach 9 B2 (1 - 72)\n");
        printf("Coach 10 B3 (1 - 72)\n");
        printf("Coach 11 B4 (1 - 72)\n");
        printf("Coach 12 A1 (1 - 72)\n");
        printf("Coach 13 A2 (1 - 72)\n");
        printf("Coach 14 A3 (1 - 72)\n");
        printf("Coach 15 A4 (1 - 72)\n");
        printf("\nPlatform of Arrival -\t Platform A\n");
        printf("\n");
        printf("\tWARNING NOTE\n");
        printf("There is a entry system who allow passager with ticket and deny who doesnt have\n");
        printf("After the train starts if passangers who don't have ticket have to give fine of 1000 Rs\n");
    }

    void mumb_exp_mon(void)
    {
        printf("You have Selected MUMBAI EXPRESS of MONDAY\n");
        printf("Some Details to Note\n");
        printf("\n");
        printf("\nNumber of Coaches -\t 15 Coaches");
        printf("\nSitting Arrangement -\t Given Below\n");
        printf("Coach 1 S1 (1 - 72)\n");
        printf("Coach 2 S2 (1 - 72)\n");
        printf("Coach 3 S3 (1 - 72)\n");
        printf("Coach 4 S4 (1 - 72)\n");
        printf("Coach 5 S5 (1 - 72)\n");
        printf("Coach 6 S6 (1 - 72)\n");
        printf("Coach 7 S7 (1 - 72)\n");
        printf("Coach 8 B1 (1 - 72)\n");
        printf("Coach 9 B2 (1 - 72)\n");
        printf("Coach 10 B3 (1 - 72)\n");
        printf("Coach 11 B4 (1 - 72)\n");
        printf("Coach 12 A1 (1 - 72)\n");
        printf("Coach 13 A2 (1 - 72)\n");
        printf("Coach 14 A3 (1 - 72)\n");
        printf("Coach 15 A4 (1 - 72)\n");
        printf("\nPlatform of Arrival -\t Platform A\n");
        printf("\n");
        printf("\tWARNING NOTE\n");
        printf("There is a entry system who allow passager with ticket and deny who doesnt have\n");
        printf("After the train starts if passangers who don't have ticket have to give fine of 1000 Rs\n");
    }

    void mumb_exp_wed(void)
    {
        printf("You have Selected MUMBAI EXPRESS of WEDNESDAY\n");
        printf("Some Details to Note\n");
        printf("\n");
        printf("\nNumber of Coaches -\t 15 Coaches");
        printf("\nSitting Arrangement -\t Given Below\n");
        printf("Coach 1 S1 (1 - 72)\n");
        printf("Coach 2 S2 (1 - 72)\n");
        printf("Coach 3 S3 (1 - 72)\n");
        printf("Coach 4 S4 (1 - 72)\n");
        printf("Coach 5 S5 (1 - 72)\n");
        printf("Coach 6 S6 (1 - 72)\n");
        printf("Coach 7 S7 (1 - 72)\n");
        printf("Coach 8 B1 (1 - 72)\n");
        printf("Coach 9 B2 (1 - 72)\n");
        printf("Coach 10 B3 (1 - 72)\n");
        printf("Coach 11 B4 (1 - 72)\n");
        printf("Coach 12 A1 (1 - 72)\n");
        printf("Coach 13 A2 (1 - 72)\n");
        printf("Coach 14 A3 (1 - 72)\n");
        printf("Coach 15 A4 (1 - 72)\n");
        printf("\nPlatform of Arrival -\t Platform A\n");
        printf("\n");
        printf("\tWARNING NOTE\n");
        printf("There is a entry system who allow passager with ticket and deny who doesnt have\n");
        printf("After the train starts if passangers who don't have ticket have to give fine of 1000 Rs\n");
    }

    void mumb_exp_thur(void)
    {
        printf("You have Selected MUMBAI EXPRESS of THURSDAY\n");
        printf("Some Details to Note\n");
        printf("\n");
        printf("\nNumber of Coaches -\t 15 Coaches");
        printf("\nSitting Arrangement -\t Given Below\n");
        printf("Coach 1 S1 (1 - 72)\n");
        printf("Coach 2 S2 (1 - 72)\n");
        printf("Coach 3 S3 (1 - 72)\n");
        printf("Coach 4 S4 (1 - 72)\n");
        printf("Coach 5 S5 (1 - 72)\n");
        printf("Coach 6 S6 (1 - 72)\n");
        printf("Coach 7 S7 (1 - 72)\n");
        printf("Coach 8 B1 (1 - 72)\n");
        printf("Coach 9 B2 (1 - 72)\n");
        printf("Coach 10 B3 (1 - 72)\n");
        printf("Coach 11 B4 (1 - 72)\n");
        printf("Coach 12 A1 (1 - 72)\n");
        printf("Coach 13 A2 (1 - 72)\n");
        printf("Coach 14 A3 (1 - 72)\n");
        printf("Coach 15 A4 (1 - 72)\n");
        printf("\nPlatform of Arrival -\t Platform A\n");
        printf("\n");
        printf("\tWARNING NOTE\n");
        printf("There is a entry system who allow passager with ticket and deny who doesnt have\n");
        printf("After the train starts if passangers who don't have ticket have to give fine of 1000 Rs\n");
    }

    void pune_exp_mon(void)
    {
        printf("You have Selected PUNE EXPRESS of MONDAY\n");
        printf("Some Details to Note\n");
        printf("\n");
        printf("\nNumber of Coaches -\t 12 Coaches");
        printf("\nSitting Arrangement -\t Given Below\n");
        printf("Coach 1 S1 (1 - 72)\n");
        printf("Coach 2 S2 (1 - 72)\n");
        printf("Coach 3 S3 (1 - 72)\n");
        printf("Coach 4 S4 (1 - 72)\n");
        printf("Coach 5 S5 (1 - 72)\n");
        printf("Coach 6 S6 (1 - 72)\n");
        printf("Coach 7 B1 (1 - 72)\n");
        printf("Coach 8 B2 (1 - 72)\n");
        printf("Coach 9 B3 (1 - 72)\n");
        printf("Coach 10 B4 (1 - 72)\n");
        printf("Coach 11 A1 (1 - 72)\n");
        printf("Coach 12 A2 (1 - 72)\n");
        printf("\nPlatform of Arrival -\t Platform B\n");
        printf("\n");
        printf("\tWARNING NOTE\n");
        printf("There is a entry system who allow passager with ticket and deny who doesnt have\n");
        printf("After the train starts if passangers who don't have ticket have to give fine of 1000 Rs\n");
    }

        void pune_exp_tues(void)
    {
        printf("You have Selected PUNE EXPRESS of TUESDAY\n");
        printf("Some Details to Note\n");
        printf("\n");
        printf("\nNumber of Coaches -\t 12 Coaches");
        printf("\nSitting Arrangement -\t Given Below\n");
        printf("Coach 1 S1 (1 - 72)\n");
        printf("Coach 2 S2 (1 - 72)\n");
        printf("Coach 3 S3 (1 - 72)\n");
        printf("Coach 4 S4 (1 - 72)\n");
        printf("Coach 5 S5 (1 - 72)\n");
        printf("Coach 6 S6 (1 - 72)\n");
        printf("Coach 7 B1 (1 - 72)\n");
        printf("Coach 8 B2 (1 - 72)\n");
        printf("Coach 9 B3 (1 - 72)\n");
        printf("Coach 10 B4 (1 - 72)\n");
        printf("Coach 11 A1 (1 - 72)\n");
        printf("Coach 12 A2 (1 - 72)\n");
        printf("\nPlatform of Arrival -\t Platform B\n");
        printf("\n");
        printf("\tWARNING NOTE\n");
        printf("There is a entry system who allow passager with ticket and deny who doesnt have\n");
        printf("After the train starts if passangers who don't have ticket have to give fine of 1000 Rs\n");
    }

        void pune_exp_thurs(void)
    {
        printf("You have Selected PUNE EXPRESS of Thursday\n");
        printf("Some Details to Note\n");
        printf("\n");
        printf("\nNumber of Coaches -\t 12 Coaches");
        printf("\nSitting Arrangement -\t Given Below\n");
        printf("Coach 1 S1 (1 - 72)\n");
        printf("Coach 2 S2 (1 - 72)\n");
        printf("Coach 3 S3 (1 - 72)\n");
        printf("Coach 4 S4 (1 - 72)\n");
        printf("Coach 5 S5 (1 - 72)\n");
        printf("Coach 6 S6 (1 - 72)\n");
        printf("Coach 7 B1 (1 - 72)\n");
        printf("Coach 8 B2 (1 - 72)\n");
        printf("Coach 9 B3 (1 - 72)\n");
        printf("Coach 10 B4 (1 - 72)\n");
        printf("Coach 11 A1 (1 - 72)\n");
        printf("Coach 12 A2 (1 - 72)\n");
        printf("\nPlatform of Arrival -\t Platform B\n");
        printf("\n");
        printf("\tWARNING NOTE\n");
        printf("There is a entry system who allow passager with ticket and deny who doesnt have\n");
        printf("After the train starts if passangers who don't have ticket have to give fine of 1000 Rs\n");
    }


    void pune_exp_fri(void)
    {
        printf("You have Selected PUNE EXPRESS of FRIDAY\n");
        printf("Some Details to Note\n");
        printf("\n");
        printf("\nNumber of Coaches -\t 12 Coaches");
        printf("\nSitting Arrangement -\t Given Below\n");
        printf("Coach 1 S1 (1 - 72)\n");
        printf("Coach 2 S2 (1 - 72)\n");
        printf("Coach 3 S3 (1 - 72)\n");
        printf("Coach 4 S4 (1 - 72)\n");
        printf("Coach 5 S5 (1 - 72)\n");
        printf("Coach 6 S6 (1 - 72)\n");
        printf("Coach 7 B1 (1 - 72)\n");
        printf("Coach 8 B2 (1 - 72)\n");
        printf("Coach 9 B3 (1 - 72)\n");
        printf("Coach 10 B4 (1 - 72)\n");
        printf("Coach 11 A1 (1 - 72)\n");
        printf("Coach 12 A2 (1 - 72)\n");
        printf("\nPlatform of Arrival -\t Platform B\n");
        printf("\n");
        printf("\tWARNING NOTE\n");
        printf("There is a entry system who allow passager with ticket and deny who doesnt have\n");
        printf("After the train starts if passangers who don't have ticket have to give fine of 1000 Rs\n");
    }

    void delhi_exp_tues(void)
    {
        printf("You have Selected DELHI EXPRESS of TUESDAY\n");
        printf("Some Details to Note\n");
        printf("\n");
        printf("\nNumber of Coaches -\t 8 Coaches");
        printf("\nSitting Arrangement -\t Given Below\n");
        printf("Coach 1 S1 (1 - 72)\n");
        printf("Coach 2 S2 (1 - 72)\n");
        printf("Coach 3 S3 (1 - 72)\n");
        printf("Coach 4 S4 (1 - 72)\n");
        printf("Coach 5 B1 (1 - 72)\n");
        printf("Coach 6 B2 (1 - 72)\n");
        printf("Coach 7 A1 (1 - 72)\n");
        printf("Coach 8 A2 (1 - 72)\n");
        printf("\nPlatform of Arrival -\t Platform C\n");
        printf("\n");
        printf("\tWARNING NOTE\n");
        printf("There is a entry system who allow passager with ticket and deny who doesnt have\n");
        printf("After the train starts if passangers who don't have ticket have to give fine of 1000 Rs\n");
    }

    void delhi_exp_wed(void)
    {
        printf("You have Selected DELHI EXPRESS of WEDNESDAY\n");
        printf("Some Details to Note\n");
        printf("\n");
        printf("\nNumber of Coaches -\t 8 Coaches");
        printf("\nSitting Arrangement -\t Given Below\n");
        printf("Coach 1 S1 (1 - 72)\n");
        printf("Coach 2 S2 (1 - 72)\n");
        printf("Coach 3 S3 (1 - 72)\n");
        printf("Coach 4 S4 (1 - 72)\n");
        printf("Coach 5 B1 (1 - 72)\n");
        printf("Coach 6 B2 (1 - 72)\n");
        printf("Coach 7 A1 (1 - 72)\n");
        printf("Coach 8 A2 (1 - 72)\n");
        printf("\nPlatform of Arrival -\t Platform C\n");
        printf("\n");
        printf("\tWARNING NOTE\n");
        printf("There is a entry system who allow passager with ticket and deny who doesnt have\n");
        printf("After the train starts if passangers who don't have ticket have to give fine of 1000 Rs\n");
    }

    void delhi_exp_fri(void)
    {
        printf("You have Selected DELHI EXPRESS of FRIDAY\n");
        printf("Some Details to Note\n");
        printf("\n");
        printf("\nNumber of Coaches -\t 8 Coaches");
        printf("\nSitting Arrangement -\t Given Below\n");
        printf("Coach 1 S1 (1 - 72)\n");
        printf("Coach 2 S2 (1 - 72)\n");
        printf("Coach 3 S3 (1 - 72)\n");
        printf("Coach 4 S4 (1 - 72)\n");
        printf("Coach 5 B1 (1 - 72)\n");
        printf("Coach 6 B2 (1 - 72)\n");
        printf("Coach 7 A1 (1 - 72)\n");
        printf("Coach 8 A2 (1 - 72)\n");
        printf("\nPlatform of Arrival -\t Platform C\n");
        printf("\n");
        printf("\tWARNING NOTE\n");
        printf("There is a entry system who allow passager with ticket and deny who doesnt have\n");
        printf("After the train starts if passangers who don't have ticket have to give fine of 1000 Rs\n");
    }

    void delhi_exp_sat(void)
    {
        printf("You have Selected DELHI EXPRESS of SATURDAY\n");
        printf("Some Details to Note\n");
        printf("\n");
        printf("\nNumber of Coaches -\t 8 Coaches");
        printf("\nSitting Arrangement -\t Given Below\n");
        printf("Coach 1 S1 (1 - 72)\n");
        printf("Coach 2 S2 (1 - 72)\n");
        printf("Coach 3 S3 (1 - 72)\n");
        printf("Coach 4 S4 (1 - 72)\n");
        printf("Coach 5 B1 (1 - 72)\n");
        printf("Coach 6 B2 (1 - 72)\n");
        printf("Coach 7 A1 (1 - 72)\n");
        printf("Coach 8 A2 (1 - 72)\n");
        printf("\nPlatform of Arrival -\t Platform C\n");
        printf("\n");
        printf("\tWARNING NOTE\n");
        printf("There is a entry system who allow passager with ticket and deny who doesnt have\n");
        printf("After the train starts if passangers who don't have ticket have to give fine of 1000 Rs\n");
    }

    void mumbai_exp(void)
    {
        printf("You have selected MUMBAI EXPRESS\n");
        printf("\n");
        printf("Mumbai Express is available on this particular Days- \n");
        printf("\n");
        printf("1>> Sunday\n");
        printf("2>> Monday\n");
        printf("3>> Wednesday\n");
        printf("4>> Thursday\n");

        printf("\n\n\nPress the number and check Information related to Trains - ");
        scanf("%d",&mumb_day_num_train);
        printf("\n");
        switch(mumb_day_num_train)
{
    case 1:
    mumb_exp_sun();
    break;

    case 2:
    mumb_exp_mon();
    break;

    case 3:
    mumb_exp_wed();
    break;

    case 4:
    mumb_exp_thur();
    break;

    default:
    printf("invalid choice");
}
}


void pune_exp(void)
    {
        printf("You have selected PUNE EXPRESS\n");
        printf("\n");
        printf("PUNE Express is available on this particular Days- \n");
        printf("\n");
        printf("1>> Monday\n");
        printf("2>> Tuesday\n");
        printf("3>> Thursday\n");
        printf("4>> Friday\n");

        printf("\n\n\nPress the number and check Information related to Trains - ");
        scanf("%d",&pune_day_num_train);
        printf("\n");
        switch(pune_day_num_train)
{
    case 1:
    pune_exp_mon();
    break;

    case 2:
    pune_exp_tues();
    break;

    case 3:
    pune_exp_thurs();
    break;

    case 4:
    pune_exp_fri();
    break;

    default:
    printf("invalid choice");
}
}

void delhi_exp(void)
    {
        printf("You have selected DELHI EXPRESS\n");
        printf("\n");
        printf("DELHI Express is available on this particular Days - \n");
        printf("\n");
        printf("1>> Tuesday\n");
        printf("2>> Wednesday\n");
        printf("3>> Friday\n");
        printf("4>> Saturday\n");

        printf("\n\n\nPress the number and check Information related to Trains - ");
        scanf("%d",&delhi_day_num_train);
        printf("\n");
        switch(delhi_day_num_train)
{
    case 1:
    delhi_exp_tues();
    break;

    case 2:
    delhi_exp_wed();
    break;

    case 3:
    delhi_exp_fri();
    break;

    case 4:
    delhi_exp_sat();
    break;

    default:
    printf("invalid choice");
}
    }

    printf("\t\t=================================================\n");
	printf("\t\t                                               \n");
	printf("\t\t        -----------------------------          \n");
	printf("\t\t           Railway Counter Simulator           \n");
	printf("\t\t        -----------------------------          \n");
	printf("\t\t                                               \n");
	printf("\t\t             Code By barcibay                  \n");
	printf("\t\t                                               \n");
	printf("\t\t=================================================\n\n");


    printf(" \n Press any key to continue:");
	
	getch();

    printf("\n\n\n=================================\n");
	printf("    Railway Counter Simulator");
	printf("\n=================================");
	printf("\n1>> Get the Train Time Table (Press 1)");
	printf("\n---------------------------------------------------");
    printf("\n2>> Get How many days a train is weekly (Press 2)");
	printf("\n---------------------------------------------------");
	printf("\n3>> Exit (Press 3)");
	printf("\n---------------------------------------------------\n\n");;
   
    printf("\nPress the number and hit enter - ");
    scanf("%d", &time_table);
    printf("\n");
    switch(time_table)
{
    case 1:
    timetable();
    return(0);

    case 2:
    weektrain();
    break;

    case 3:
    return(0);

    default:
    printf("Invalid Choice\n");
}


printf("\n\n\nPress the number and check on which particular day train is available - ");
scanf("%d",&day_num);
printf("\n");
switch(day_num)
{
    case 1:
    mumbai_exp();
    break;

    case 2:
    pune_exp();
    break;

    case 3:
    delhi_exp();
    break;

    default:
    printf("Invaid Choice");
}
return 0;
}

