#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>



typedef struct
{
    char day[10];
    float temp;
}weather_t;

int max_week_days =7;

weather_t week_forecast[7]; // created an array of structures

int input_data(weather_t *pBaseAddr, int max_week_days)
{
    int i;
    int start_day =1;
    for(i=0;i<max_week_days;i++)
    {
        printf("\n Enter Week Day:\t");
        scanf("%s",(pBaseAddr[i]).day);
        printf("\n Enter Week Day %d temp:\t",start_day);
        scanf("%f",&(pBaseAddr[i]).temp);
        start_day++;
    }
    return 0;
}


int show_data(weather_t *pBaseAddr, int max_week_days)
{
    int i;
    for(i=0;i<max_week_days;i++)
    {
        printf("\n Week : %s\t Temperature:%f \n", (pBaseAddr+i)->day, (pBaseAddr+i)->temp);
        printf("\n");
    }
return 0;
}

float average_temp(weather_t *pBaseAddr,int max_weeek_days)
{
    int i;
    float average=0;
    for(i=0;i<max_week_days;i++)
    {
    average += ((pBaseAddr+i)->temp);
    }
    average = average/max_week_days;
    printf("Average temperature = %f\n", average);
    return average;
}
typedef struct
{
    int temp_array[7];
    float temp_temperature;
}temp_struct_t;

temp_struct_t temp[];


int sort_temperature(weather_t *pBaseAddr,temp_struct_t *pBase_Addr_temp, int max_week_days)
{
    int i;

    for(i=0;i<max_week_days;i++)
    {
        int j=1;
        if((pBaseAddr[i].temp)< (pBaseAddr[j].temp))
           {
               (pBase_Addr_temp[i].temp_array) =  (pBaseAddr[i].day);
               (pBase_Addr_temp[i].temp_temperature) =  (pBaseAddr[i].temp);
               printf(" Sorted Temperature and Day\n",);
               printf("Day: %s\t, Temperature: %f \n", pBase_Addr_temp[i].temp_array,pBase_Addr_temp.temp_temperature);
           }
           else
           {
               (pBase_Addr_temp[i].temp_array) =  (pBaseAddr[j].day);
               (pBase_Addr_temp[i].temp_temperature) =  (pBaseAddr[j].temp);
                printf("Day: %s\t, Temperature: %f \n", pBase_Addr_temp[i].temp_array,pBase_Addr_temp.temp_temperature);
           }
            j++;
    return 0;
}

int main()
{
    printf("------------Weather forecast Records----- -------\n");
    input_data(week_forecast,max_week_days);
    show_data(week_forecast,max_week_days);
    average_temp(week_forecast, max_week_days);
    sort_temperature(week_forecast, max_week_days);
    while(1);

}

