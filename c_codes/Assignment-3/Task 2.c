#include<stdio.h>
int calculateFuel(int fuel, int consumption, int recharge, int solarBonus, int planet, int totalPlanets);
int main(){
int fuel,consumption,recharge,solarBonus,planet=0,totalPlanets;
printf("Enter fuel ");
scanf("%d",&fuel);
printf("Enter consumption to reach another planet ");
scanf("%d",&consumption);
printf("Enter recharge ");
scanf("%d",&recharge);
printf("Enter solar recharge ");
scanf("%d",&solarBonus);
printf("Enter total planets it will cover ");
scanf("%d",&totalPlanets);

calculateFuel(fuel,consumption,recharge,solarBonus,planet,totalPlanets);
return 0;
}
 
int calculateFuel(int fuel, int consumption, int recharge, int solarBonus, int planet, int totalPlanets) {
 
if(fuel<=0 || totalPlanets==0){//base case if fuel become less or equal to 0 or it visited total planets
 if(fuel>=consumption)//to check that if enough fuel left to complete its journey
  printf("Spacecraft have enough fuel to reach its destination");
  
  else
  printf("Spacecraft not have enough fuel to reach its destination");
  
  return 0;
}
 printf("Planet %d: Fuel Remaining = %d\n",planet,fuel); 
 if((planet+1)%4==0) //if spacecraft reach 4th planet it will gain solar bonus 
 return calculateFuel(fuel-consumption+solarBonus+recharge,consumption,recharge,solarBonus,planet+1,totalPlanets-1);  
 
 else  
 return calculateFuel(fuel-consumption+recharge,consumption,recharge,solarBonus,planet+1,totalPlanets-1);//on every planetary stop fuel will be minus from consumption and it will recharge some fuel due to gravitational force and planet will increment by 1 that determines it has cover this number of planets and total planets will be decrement by 1 to show remaining planets left to complete its journey
}