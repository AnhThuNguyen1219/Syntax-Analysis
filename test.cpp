#include<iostream>
#include <fstream>
#define n 1000000
#include<string.h>
#include<stdio.h>
using namespace std;
char x[n];
char khkt;
int i=-1;
char dockh();void baoloi();
void START();void KB();void TV();void TENTV();void TEN();void TEN_PHAY();void KH();
//void BIEN();
void KIEU();void SO();void SN();void D();void S();void S_PHAY(); void LK();void LK_PHAY();
void B();void HANG(); void MAIN(); void TRA_VE();void X();void CT();void CT_PHAY();void IN();void OUT();
void STRING();void STR();void LOOP(); void BT(); void BT_PHAY();

void STEP(); 

//
void OP(); void OP_PHAY(); 
void TTTG(); void TTTG_PHAY();
void TTG();
void TTTH(); void A(); void GT(); void P_TOAN(); void P_TG(); void P_G();
void TTQH();

void P_SO();

char tenbien[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','_'};
char tenbien_[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','_'};


int main() {
	ifstream file("E:/Nam 3 Ki II/Do An/DO AN/CODE/CT.txt");
	string str;
	string file_contents;
	while (getline(file, str))
	{
	  file_contents += str;
	  file_contents.push_back('\n');
	}  
	//cout<<file_contents;
	file_contents.copy(x,file_contents.size()+1);
	x[file_contents.size()]='\0';
	cout<<x<<'\n';
	khkt=dockh();
//	cout<<khkt;
	if(khkt!='\0')
	{
	START();
   // if(khkt=='\0') cout<<"Accept";
   if(isspace(khkt)!=0) cout<<"Accept";
	}
    else baoloi();
return 0;
	
}
void baoloi()
{
	cout<<"Error "<<i<< " '"<<x[i]<<"' ";
}
char dockh()
{
	i++;
	return x[i];
}

void skipblank()
{
	while(isspace(khkt)!=0)
	{
		khkt=dockh();
	}
}

void checkc()
{
	khkt=dockh();
	skipblank();
}

void START()
{
	OP();
	
}


//void TEN()
//{
//	bool check=false;
//	for(int k=0;k<sizeof(tenbien)/sizeof(char);k++)
//	{	
//		if(khkt==tenbien[k])
//		{
//			check=true;
//			break;
//		}	
//	}
//	if(check){
//	khkt=dockh();
//	cout<<khkt;
//	TEN_PHAY();		
//	}
//	
//}

void TEN()
{
	while(khkt)
	{
		if(khkt=='+'||khkt=='-'||khkt=='='||khkt=='*'||khkt=='/'||khkt=='%'||khkt==';'||khkt=='>'||khkt=='<'||khkt=='!')
		{
			break;	
		}
		else khkt=dockh();
	}
}

void TEN_PHAY()
{
	bool check=false;
	for(int k=0;k<sizeof(tenbien_)/sizeof(char);k++)
	{
		if(khkt==tenbien_[k]){	
			check=true;
			break;
		}
	}
	if(check)
	{
		khkt=dockh();
		cout<<khkt;
		TEN_PHAY();
	}
	else khkt=dockh();
	
}

void IN()
{
	if(khkt=='s')
	{
		//khkt= dockh(); 
		checkc();
		if(khkt=='c')
		{
			//khkt= dockh();
			checkc();
			if(khkt=='a')
			{
				//khkt= dockh();
				checkc();
				if(khkt=='n')
				{
					//khkt= dockh();
					checkc();
					if(khkt=='f')
					{
						//khkt=dockh();
						checkc();
						if(khkt=='(')
						{
							//khkt=dockh();
							checkc();
							if(khkt=='"')
							{
								STRING();
								//khkt==dockh();
								checkc();
								if (khkt=='"')
								{
									//khkt==dockh();
									checkc();
									if(khkt==')')
									{
										//khkt==dockh();
										checkc();
										if(khkt==';') checkc();
										else baoloi();
									}
									else baoloi();
								}
								else baoloi();
							}
							else baoloi();
						}
						else baoloi();
					}
					else baoloi();
				}
				else baoloi();
			}
			else baoloi();
		}
		else baoloi();
	}
	else baoloi();
}

void OUT()
{
	if(khkt=='p')
	{
		//khkt= dockh();
		checkc(); 
		if(khkt=='r')
		{
			//khkt= dockh();
			checkc();
			if(khkt=='i')
			{
				//khkt= dockh();
				checkc();
				if(khkt=='n')
				{
					//khkt= dockh();
					checkc();
					if(khkt=='t')
					{
						//khkt=dockh();
						checkc();
						if(khkt=='f')
						{
							//khkt=dockh();
							checkc();
							if(khkt=='(')
							{
								//khkt==dockh();
								checkc();
								if (khkt=='"')
								{
									STRING();
									//khkt==dockh();
									checkc();
									if(khkt=='"')
									{
										//khkt==dockh();
										checkc();
										if(khkt==')') 
										{
											//khkt==dockh();
											checkc();
											if(khkt==';') checkc();
											else baoloi();
										}
										else baoloi();
									}
									else baoloi();
								}
								else baoloi();
							}
							else baoloi();
						}
						else baoloi();
					}
					else baoloi();
				}
				else baoloi();
			}
			else baoloi();
		}
		else baoloi();
	}
	else baoloi();
	
}

void STRING()
{
	
}

//vong lap
//kiem tra lai toan bo tu
void LOOP()
{
	//while
	if(khkt=='w')
	{
		khkt= dockh(); 
		//checkc();
		if(khkt=='h')
		{
			khkt= dockh();
//			checkc();
			if(khkt=='i')
			{
//				checkc();
				khkt= dockh();
				if(khkt=='l')
				{
//					checkc();
					khkt= dockh();
					if(khkt=='e')
					{
//						khkt=dockh();
						checkc();
						if(khkt=='(')
						{
							checkc();
//							khkt=dockh();
						//	BT();
							if(khkt==')')
							{
								checkc();
//								khkt=dockh();
								if (khkt=='{')
								{
//									CT();
									checkc();
									if(khkt=='}')
									{
//										checkc();
										khkt=dockh();
										if(khkt==';')
										{
											checkc();
//											khkt=dockh();
										}
									}
									else baoloi();			
								}
								else baoloi();	
							}
							else baoloi();
						}
						else baoloi();
					}
					else baoloi();
				}
				else baoloi();
			}
			else baoloi();
		}
		else baoloi();
	}
	else if(khkt=='d')
	{
		//do while
//		checkc();
		khkt=dockh();
		if(khkt=='o')
		{
			checkc();
//			khkt=dockh();
			if(khkt=='{')
			{
				checkc();
//				khkt=dockh();
				CT();
				if(khkt=='}')
				{
					checkc();
//					khkt=dockh();
					if(khkt=='w')
					{
						khkt= dockh(); 
//						checkc();
						if(khkt=='h')
						{
							khkt= dockh();
//							checkc();
							if(khkt=='i')
							{
//								checkc();
								khkt= dockh();
								if(khkt=='l')
								{
//									checkc();
									khkt= dockh();
									if(khkt=='e')
									{
										khkt=dockh();
//										checkc();
										if(khkt=='(')
										{
//											checkc();
											khkt=dockh();
											BT();
											if(khkt==')')
											{
//												checkc();
												khkt=dockh();
												if(khkt==';')
												{
													checkc();
												}
												else baoloi();
											}
											else baoloi();
										}
										else baoloi();
									}
									else baoloi();
								}
								else baoloi();
							}
							else baoloi();
						}
						else baoloi();
					}
					else baoloi();
				}
				else baoloi();
			}
			else baoloi();
		}
		else baoloi();
	}
	else if(khkt=='f')
	{
		//for: da xong
		khkt=dockh();
		if(khkt=='o')
		{
			khkt=dockh();
			if(khkt=='r')
			{
				khkt=dockh();
				if(khkt=='(')
				{
					khkt=dockh();
//					BIEN();
					if(khkt==';')
					{
						khkt=dockh();
						BT();
						if(khkt==';')
						{
							khkt=dockh();
							OP();
							if(khkt==')')
							{
								khkt=dockh();
								if(khkt==';')
								{
									checkc();
								}
								else if(khkt=='{')
								{
									checkc();
									CT();
									if(khkt=='}')
									{
										checkc();
									}
									else baoloi();
								}
								else baoloi();
							}
							else baoloi();
						}
						else baoloi();
					}
					else baoloi();
				}
				else baoloi();
			}
			else baoloi();
		}
		else baoloi();
	}
}


//
void BT()
{
	TEN();
	P_SO();	
}

void P_SO()
{
	if(khkt=='!'||khkt=='=')
	{
		khkt=dockh();
		if(khkt=='=')
		{
			khkt=dockh();
			TEN();
		}	
	}
	else if(khkt=='<'||khkt=='>')
	{
		khkt=dockh();
		if(khkt=='=')
		{
			khkt=dockh();
			TEN();
		}
		else TEN();
	}
	else khkt=dockh();
}



void STEP()
{
	if(khkt=='c')
	{
		khkt=dockh();
		if(khkt=='o')
		{
			khkt=dockh();
			if(khkt=='n')
			{
				khkt=dockh();
				if(khkt=='t')
				{
					khkt=dockh();
					if(khkt=='i')
					{
						khkt=dockh();
						if(khkt=='n')
						{
							khkt=dockh();
							if(khkt=='u')
							{
								khkt=dockh();
								if(khkt=='t')
								{
									khkt=dockh();
									if(khkt=='e')
									{
										khkt=dockh();
										if(khkt==';')
										{
											checkc();
										}
										else baoloi();
									}
									else baoloi();
								}
								else baoloi();
							}
							else baoloi();
						}
						else baoloi();
					}	
					else baoloi();
				}
				else baoloi();
			}
			else baoloi();
		}
		else baoloi();
	}
	else if(khkt=='b')
	{
		khkt=dockh();
		if(khkt=='r')
		{
			khkt=dockh();
			if(khkt=='e')
			{
				khkt=dockh();
				if(khkt=='a')
				{
					khkt=dockh();
					if(khkt=='k')
					{
						khkt=dockh();
						if(khkt==';')
						{
							checkc();
						}
						else baoloi();
					}
					else baoloi();
				}
				else baoloi();
			}
			else baoloi();
		}
		else baoloi();
	}
}

void OP()
{
	OP_PHAY();
	if(khkt==';')
	{
		cout<<"Correct";
	}
	else baoloi();
}

void OP_PHAY()
{
	//TOAN TU SIZE
	if(khkt=='s')
	{
		khkt=dockh();
		if(khkt=='i')
		{
			khkt=dockh();
			if(khkt=='z')
			{
				khkt=dockh();
				if(khkt=='e')
				{
					khkt=dockh();
					if(khkt=='o')
					{
						khkt=dockh();
						if(khkt=='f')
						{
							khkt=dockh();
							if(khkt=='(')
							{
							//goi den ham ttkt
							} else TEN();
						}else TEN();
					}else TEN();
				}else TEN();
			}else TEN();
		}else TEN();
	} 
	
	//toan tu tang giam voi mau ++TEN va --TEN
	else if(khkt=='+')
	{
		khkt=dockh();
		if(khkt=='+')
		{
			khkt=dockh();
			TTTG();
		} 
		else baoloi();	
	}
	
	else if(khkt=='-')
	{
		khkt=dockh();
		if(khkt=='-')
		{
			khkt=dockh();
			TTTG();
		}
		else baoloi();
	}
	
	else
	{
		TEN();
		//TOAN TU TOAN HOC: form : TEN=A
		if(khkt=='=')
		{
			khkt=dockh();
			if(khkt=='=')
			{
				khkt=dockh();
				TEN();
			}
			else TTTH();
		}
		else if(khkt=='<'||khkt=='>'||khkt=='!')
		{
			TTQH();
		}
		
		else if(khkt=='+')
		{
			khkt=dockh();
			if(khkt=='+')//TOAN TU TANG GIAM form TEN++|--
			{
				TTTG_PHAY();
			}
			else if(khkt=='=')//TOAN TU GAN form TEN +=|-=|*=|/=|%= A
			{
				TTG();
			}
			else baoloi();
		}
		else if(khkt=='-')
		{
			khkt=dockh();
			if(khkt=='-')//TOAN TU TANG GIAM form TEN++|--
			{
				TTTG_PHAY();
			}
			else if(khkt=='=')//TOAN TU GAN form TEN +=|-=|*=|/=|%= A
			{
				TTG();
			}
			else baoloi();
		}
		
		else if(khkt=='*'||khkt=='%'||khkt=='/')//TOAN TU GAN form TEN +=|-=|*=|/=|%= A
		{
			khkt=dockh();
			TTG();
		}	
	}
}

//TOAN TU TANG GIAM 1: FORM ++ | -- TEN;
void TTTG()
{
	TEN();
}

//TOAN TU TANG GIAM 2: FORM TEN ++|--
void TTTG_PHAY()
{
	khkt=dockh();
}


//TOAN TU GAN form TEN +=|-=|*=|/=|%= A
void TTG()
{
	if(khkt=='=')
	{
		khkt=dockh();
		TEN();
	} 
}

//TOAN TU TOAN HOC
void TTTH()
{
	A();
}

//xem lai van pham
void A()
{
	if(khkt=='(')
	{
		GT();
		P_TOAN();
		if(khkt==')')
		{
			P_TOAN();
			checkc();
		}
		else baoloi();
	}
	else
	{
		TEN();
		P_TOAN();	
	}	
}

void P_TOAN()
{
	if(khkt=='+'||khkt=='-'||khkt=='/'||khkt=='%'||khkt=='*')
	{
		khkt=dockh();
		A();	
	}
//	else checkc();			
}

void GT()
{
	TEN();
	//SO();
}

//TOAN TU QUAN HE: VIET LAI
void TTQH()
{
	P_SO();
}

//VIET LAI
void CT()
{
	if(khkt=='{') {
	checkc();
	if(khkt=='}')khkt=dockh();else baoloi();
	}else baoloi();
}


