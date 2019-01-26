#include <stdio.h>
#include <stdlib.h>

int main()
{
    float yearlyweather[5][12]= {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    float yearlyaverage=0;
    float monthlyaverage[12];
    float totalrainfall=0;
    float total_rainfall_peryear[5];

    int i;
    int j;

    //total rainfall
    for (i=0;i<5;++i){
        for(j=0;j<12;++j){
                //entire total rainfall
            totalrainfall =totalrainfall+ yearlyweather[i][j];
                        // yearly Total rainfall
                        if (i==0)
                    total_rainfall_peryear[0] +=yearlyweather[i][j];
                        if (i==1)
                    total_rainfall_peryear[1] +=yearlyweather[i][j];
                        if (i==2)
                    total_rainfall_peryear[2] +=yearlyweather[i][j];
                        if (i==3)
                    total_rainfall_peryear[3] +=yearlyweather[i][j];
                        if (i==4)
                    total_rainfall_peryear[4] +=yearlyweather[i][j];
                    monthly total rainfall
                 if(j==0)
                monthlyaverage[0] += yearlyweather[i][j];
                 if(j==1)
                monthlyaverage[1] += yearlyweather[i][j];
                 if(j==2)
                monthlyaverage[2] += yearlyweather[i][j];
                 if(j==3)
                monthlyaverage[3] += yearlyweather[i][j];
                 if(j==4)
                monthlyaverage[4] += yearlyweather[i][j];
                 if(j==5)
                monthlyaverage[5] += yearlyweather[i][j];
                 if(j==6)
                monthlyaverage[6] += yearlyweather[i][j];
                 if(j==7)
                monthlyaverage[7] += yearlyweather[i][j];
                 if(j==8)
                monthlyaverage[8] += yearlyweather[i][j];
                 if(j==9)
                monthlyaverage[9] += yearlyweather[i][j];
                 if(j==10)
                monthlyaverage[10] += yearlyweather[i][j];
                 if(j==11)
                monthlyaverage[11] += yearlyweather[i][j];

        }

    }

    float yearly_average2;
    yearly_average2 = totalrainfall/5;
    float monthly_final_average[12];
    int m;
    float integer;
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
    for(m=0;m<12;++m){
        integer=(monthlyaverage[m])/5;
        printf("%.4f     ",integer);
    }
        printf ("Yearly Total rainfall is\n 2010        %f \n 2011        %f \n 2012        %f \n 2013        %f \n 2014        %f \n", total_rainfall_peryear[0],total_rainfall_peryear[1],total_rainfall_peryear[2],total_rainfall_peryear[3],total_rainfall_peryear[4]);
        printf ("Average yearly Rainfall is %f\n",yearly_average2);

    printf("Hello world!\n");
    return 0;
}
