//============================================================================
// Name        : euler.cpp
// Author      : Benjamin3er
// Version     :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>

int main() {
	long combinations = 0;
	for(int p2 = 0; p2<=1; p2++)
	{
		for(int p1 = 0; p1<=2; p1++)
		{
			for(int c50 = 0; c50<=4; c50++)
			{
				for(int c20 = 0; c20<=10; c20++)
				{
					for(int c10 = 0; c10<=20; c10++)
					{
						for(int c5 = 0; c5<=40; c5++)
						{
							for(int c2 = 0; c2<=100; c2++)
							{
								for(int c1 = 0; c1<=200; c1++)
								{
									if(p2*200 + p1*100 + c50*50 + c20*20 + c10*10 + c5*5 + c2*2 + c1 == 200)
									{
										combinations++;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	std::cout<<combinations<<std::endl;
}
