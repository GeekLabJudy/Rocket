//
//  ATM.c
//  Atmosphere
//
//  Created by 樱樱 on 2022/9/7.
#include <stdio.h>
#include<math.h>
#include "ATM.h"

double ATM_temperature_c(double h)//温度摄氏度,h单位是m
{
    double t;//摄氏度
    
if(h<11000)//对流层
{
    t=15.04-0.00649*h;
}
   else if(h>=11000 & h<=25000)//平流层下层
    {
        t=-56.46;
    }
   else//平流层上层
    {
        t=-131.31+0.00299*h;
    }
    return t;//摄氏度
}


double ATM_pressure_kpa(double h)//压力千帕斯卡,h单位是m
{
    double t,p;//p的单位是kpa,t是摄氏度
    double e=2.718281828459045;
    

if(h<11000)//对流层
{
    t=15.04-0.00649*h;
    p=101.29*pow(((t+273.1)/288.08),5.256);
}
   else if(h>=11000 & h<=25000)//平流层下层
    {
        t=-56.46;
        p=22.65*pow(e,(1.73-0.000157*h));
    }
   else//平流层上层
    {
        t=-131.31+0.00299*h;
        p=2.488*pow(((t+273.1)/216.6),-11.388);
        
    }
    return p;//单位kpa
}


double ATM_density(double h)//密度kg/m3,h单位是m
{
    double p=ATM_pressure_kpa(h);
    double t=ATM_temperature_c(h);
    double d=p/0.2869/(t+273.1);
    return d;
}

double ATM_pressure_pa(double h)//压力帕斯卡,h单位是m
{
    double p=ATM_pressure_kpa(h)*1000;
    return p;
}

double ATM_temperature_k(double h)//温度开尔文,h单位是m
{
    double t=ATM_temperature_c(h)-273.1;
    return t;
}

double ATM_resistance(double Cd,double v,double s,double h)//Cd阻力系数,v速度m/s,s截面积m2,h海拔m
{
    double d=ATM_density(h);
    double f=0.5*Cd*v*v*d*s;
    return f;
}
                            
