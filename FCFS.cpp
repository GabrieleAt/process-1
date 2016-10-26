/* 
	Author:Gabriele Atzori
	First Come First Served Algoritm
*/

#include <iostream>

int main(){
	int ProcessCount;

	std::cout <<"Insert the number of process: " <<std::endl; 
	std::cin >>ProcessCount;
	
	int BurstTime[ProcessCount];
	int WaitingTime[ProcessCount];
	int TournAroundTime[ProcessCount];
	
	for(int i=0;i<ProcessCount;i++){
		std::cout <<"Insert Burst Time n' "<<(i+1)<<": " <<std::endl;
		std::cin>>BurstTime[i];
	}
	WaitingTime[1]=0;
	
	for(int i=1;i<ProcessCount;i++){
		WaitingTime[i]=BurstTime[i-1]+WaitingTime[i-1];
		std::cout <<"The WaitingTime of "<<(i+1)<<" process is: "WaitingTime[i];
	}
	
	for(int i=1;i<ProcessCount;i++){
		
	}
	
}
