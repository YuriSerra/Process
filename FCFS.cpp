#include <iostream>

int main()
{
	int processCount,i;
	std::cout<<"This programm emulate the algorithm of FCFS "<<std::endl<<std::endl;
	std::cout<<"Insert the number of processes "<<std::endl;
	std::cin>>processCount;
	
	int burstTime[processCount], waitingTime[processCount], tournaroundTime[processCount];
	
	for(i=0;i<processCount;i++)
	{
		std::cout<<"Insert the ("<<i+1<<") input of BurstTime"<<std::endl;
		std::cin>>burstTime[i];
		waitingTime[0]=0;
		if(i>0)
		{
			waitingTime[i]=waitingTime[i-1]+burstTime[i-1];
		}
		tournaroundTime[i]=	waitingTime[i]+burstTime[i];
	
	}
	for(i=0;i<processCount;i++)
	{
		std::cout<<"Il ("<<i+1<<") waitingTime vale ("<<waitingTime[i]<<")"<<std::endl;
	}
		for(i=0;i<processCount;i++)
	{
		std::cout<<"Il ("<<i+1<<") tournaroundTime vale ("<<tournaroundTime[i]<<")"<<std::endl;
	}
	
	system("pause");
}
