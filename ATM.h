//
//  ATM.h
//  Atmosphere
//
//  Created by 樱樱 on 2022/9/7.
//

#ifndef ATM_h
#define ATM_h

#include <stdio.h>

#endif /* ATM_h */

double ATM_temperature_c(double h);//求解h海拔(米)下的温度(摄氏度)
double ATM_pressure_kpa(double h);//求解h海拔(米)下的大气压(kpa)
double ATM_density(double h);//求解h海拔(米)下的大气密度(kg/m3)
double ATM_temperature_k(double h);//求解h海拔(米)下的温度(开尔文)
double ATM_pressure_pa(double h);//求解h海拔(米)下的大气压(pa)
double ATM_resistance(double Cd,double v,double s,double h);//求解空气阻力(牛顿),Cd阻力系数,v速度m/s,s截面积m2,h海拔m
