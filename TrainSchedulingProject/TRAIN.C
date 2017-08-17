#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<process.h>

void main()
 {

   char ch,option,choice,choice2,another,ch2,temp_str[50],rep_str[20],new_str[20],old_train[20],new_train[20]="o.txt",x7[20];
   FILE *f1,*f2,*f3;
   int c=10,a=0,b=0,x=0,i=0,y=0,g=0,count1=0,i3,z,t,q,max,o,i2,count,p;
   char d[20],f[5],str1[25],str2[25],u[20],u1[20],n[20],j[30],k[30],l[30],p1[20],w[20],e[20],v[20],r[20],s[20],m[20];
   clrscr();
       do{
	printf ("\t\t\t              WELCOME\n\n");
	printf ("\t\t\t                 TO  \n\n");
	printf ("\t\t\t           INDIAN RAILWAYS\n\n");
	printf ("\t\t\t            SPONSERED BY\n\n");
	printf ("\t\t\t               HMRITM\n\n");
	printf (" 1.Train Scheduling For Passengers. \n\n\n");
	printf (" 2.Official Access. \n\n\n");
	printf ("\n 3.Exit. \n\n\n");
	printf("\nEnter your choice(1,2,3)");
	scanf("%d",&a);
	switch(a)
	    {  case 1:clrscr();
		      printf("\n\t1.Do u want to know about a specific train.");
		      printf("\n\n\n\t2.Train schedule of all trains.");
		      printf("\n\n\n\t3.Exit(or for back to main menu).");
		      printf("\n\n\n\tEnter you choice(1,2,3). ");
		      scanf("%d",&b);
		      switch(b)
		      {   case 1:printf("\n\n\tPlease enter your train name. ");
				 scanf("%s",d);
				 printf("\n\n\tPlease enter up or down. ");
				 scanf("%s",f);
				 strcat(d,f);
				 strcat(d,".txt");
				 if((f1=fopen(d,"r"))==NULL)
				 {
				   printf("\n\n\n\tsorry, there is no train available with this name.");
				   break;
				 }
				 else
				 {
				   c=fgetc(f1);
				   while(c!=EOF)
				    {  printf("%c",c);
				       c=fgetc(f1);
				    }
				   fclose(f1);
				   break;
				  }
			 case 2:f1=fopen("trains.txt","r");
				x=fgetc(f1);
				while(x!=EOF)
				  { printf("%c",x);
				    x=fgetc(f1);
				   }
				fclose(f1);
				break;
			 case 3:break;

			 default:printf("\n\n\n\tyou have entered a worng choice");
		      }
		      break;

	       case 2:t=0;
		      z=0;
		      q=0;
		      f1=fopen("pass.txt","r");
		      t=fgetc(f1);
		      while(t!=EOF)
		      {str1[z]=t;
		       t=fgetc(f1);
		       z++;
		      }
		      fclose(f1);
		      printf("\n\nPlease enter password length. ");
		      scanf("%d",&q);
		      i3=0;
		      printf("\n\nPlease enter the password. ");
		      for(i3=0;i3<q;i3++)
		      { str2[i3]=getch();
			printf("*");
		      }
		      getch();
		      if(z>q)
		      {max=z;
		      }
		      if(q>=z)
		      {max=q;
		      }
		      count=0;
		      for(i=0;i<max;i++)
			 { if(str1[i]!=str2[i])
			     { count=count+1;
			     }
			  }
			o=0;
			for(o=0;str2[o]!='\0';o++)
			{  str2[o]=' ';
			}
			o=0;
			for(o=0;str1[o]!='\0';o++)
			{  str1[o]=' ';
			}
		       if (count==0)
		       {  clrscr();
			  printf ("\n\n\t\t\tGOOD MORNING SIR");
			  printf("\n\n\n\t1.Do u want to add a new train.");
			  printf("\n\n\n\t2.Do u want to change the password.");
			  printf("\n\n\n\t3.Edit some information in existing train.");
			  printf("\n\n\n\t4.Exit(for back to main menu).");
			  printf("\n\n\n\tEnter your choice. ");
			  scanf("%d",&y);
			  switch(y)
			  {case 1: another='n';
				   printf("\n\n\tplease enter your train name with up or down written in the end\n\t(ex-expressup or expressdown). ");
				   scanf("%s",u);
				   strcpy(n,u);
				   strcat(u,".txt");
				   if((f1=fopen(u,"r"))==NULL)
				   {
				    f2=fopen(u,"w");
				    do
				    { if(another=='n')
				      { fprintf(f2,"%s\t\t%s\t%s\t%s\t\t%s\t%s","STATION","SCH.ARRIVAL","SCH.DEPARTURE","STATUS","ACTUAL.AR","DELAY");
				      }
				     printf("\n\tPlease write station name. ");
				     scanf("%s",&j);
				     printf("\n\tPlease enter sch. arrival(ex-8:00AM and\n\t for first station wrtie source). ");
				     scanf("%s",&k);
				     printf("\n\tPlease enter sch. departure(ex-9:00AM). ");
				     scanf("%s",&l);
				     printf("\n\tPlease enter status(ex-departed,reached or notreached). ");
				     scanf("%s",&w);
				     printf("\n\tPlease enter actual arrival(ex-8:30AM). ");
				     scanf("%s",&e);
				     printf("\n\tPlease enter delay(ex-30min). ");
				     scanf("%s",&v);
				     if(another=='n')
				     { f3=fopen("trains.txt","a");
				       fprintf(f3,"%s",a);
				       printf("\n\tPlease enter Destination. ");
				       scanf("%s",&r);
				       printf("\n\tPlease enter Time Duration to reach from \n\tsource to destination.(ex-8:00AM-2:00PM) ");
				       scanf("%s",&s);
				       printf("\n\tPlease enter Return time Duration. ");
				       scanf("%s",&m);
				       fprintf(f3,"\n\n\n %s\t\t%s\t\t%s\t\t%s\t\t%s \n",n,j,r,s,m);
				       fclose(f3);
				     }
				     fprintf(f2,"\n\n\n %s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s \n",j,k,l,w,e,v);
				     fflush(stdin);
				     printf("\n\n\n\tFor entering more details enter(Y or y) and for exit press any key ");
				     scanf("%c",&another);
				    }while(another=='Y'||another=='y');
				    fclose(f2);
				    fclose(f1);
				    }
				    else
				    {printf("\n\n\n\tTrain with same name exits so change the name.");
				    }
				    break;
			   case 2:  f1=fopen("pass.txt","w");
				    printf("\n\n\tPlease enter new password length.(max 20 chracter) ");
				    scanf("%d",&p);
				    i=0;
				    printf("\n\tEnter new password. ");
				    for(i=0;i<p;i++)
				    {  p1[i]=getch();
				       fprintf(f1,"%c",p1[i]);
				       printf("*");
				    }
				    getch();
				    printf("\n\n\tNow restart the program for successfully change the password");
				    break;
			   case 3:  clrscr();
				    printf("\n\n\t1.Do you want to change something in existing train.");
				    printf("\n\n\n\t2.Do you want to add more station in same train.");
				    printf("\n\n\n\t3.Exit(for back to main menu.");
				    fflush(stdin);
				    scanf("%d",&g);
				    switch(g)
				    {
				       case 1:printf("\n\tEnter train name in which you want to change");
					      scanf("%s",&old_train);
					      strcat(old_train,".txt");
					      if((f1=fopen(old_train,"r"))==NULL)
						{
						   printf("\n\n\n\tsorry, there is no train available with this name.");
						   break;
						 }
					      else{
						   printf("\n\tThis is information of your train.\n\n");
						   x=fgetc(f1);
						   while(x!=EOF)
						   { printf("%c",x);
						     x=fgetc(f1);
						   }
						   fclose(f1);
						   printf("\n\tDo you want to change train name(press y or Y).");
						   fflush(stdin);
						   scanf("%c",&ch2);
						   if(ch2=='y'||ch2=='Y')
						    {
						       printf("\n\tEnter new name of the train.");
						       scanf("%s",new_train);
						       strcat(new_train,".txt");
						       strcpy(x7,new_train);

						    }
						   do{
						       f1=fopen(old_train,"r");
						       f2=fopen(new_train,"w");
						       printf("\n\tEnter String to find:");
						       scanf("%s",rep_str);
						       printf("\n\tEnter String to replace:");
						       scanf("%s",new_str);
						       i2=0;
						       while((ch=getc(f1))!=EOF)
							    {
							      if(ch==' ')
								{
								  temp_str[count1]='\0';
								  if(strcmp(temp_str,rep_str)==0)
								     {i2++;
								      i=1;
								      printf("\n\tDo u want to replace %d(y/n):",i);
								      option=getche();
								      if(option=='y'||option=='Y')
								       {
									 fprintf(f2,"%s ",new_str);
									 count1=0;
									}
								      else
								       {
									  fprintf(f2,"%s ",temp_str);
									  count1=0;
								       }
								       i++;
								       }
								    else
								      {
									fprintf(f2,"%s ",temp_str);
									count1=0;
								      }

								}
								else
								   {
								     temp_str[count1]=ch;
								     count1++;
								   }
							    }
							 if(i2==0)
							   {printf("\n\tsorry,no string found to replace. ");
							   }

							 fclose(f1);
							 fclose(f2);
							 printf("%s",old_train);
							 printf("%s",new_train);
							 remove(old_train);
							 rename(new_train,old_train);
							 printf("\n\n\tDo you want to change more(press y or Y).");
							 choice2=getche();
						   }while(choice2=='y'||choice2=='Y');
						   }
					      if(ch2=='y'||ch2=='Y')
						     {   rename(old_train,x7);
						     }

					      if(strcmp(old_train,"trains.txt")!=0)
						    { printf("\n\n\tNote:-Edit trains.txt also if required.");
						    }
					      break;
				       case 2:printf("\n\n\tplease enter your train name with up or down written in the end\n\t(ex-expressup or expressdown). ");
					      scanf("%s",u1);
					      strcat(u1,".txt");
					      if((f1=fopen(u1,"r"))!=NULL)
					      {
						f2=fopen(u1,"a");
						do
						 {
						   printf("\n\tPlease write station name. ");
						   scanf("%s",&j);
						   printf("\n\tPlease enter sch. arrival(ex-8:00AM). ");
						   scanf("%s",&k);
						   printf("\n\tPlease enter sch. departure(ex-9:00AM). ");
						   scanf("%s",&l);
						   printf("\n\tPlease enter status(ex-departed,reached or notreached). ");
						   scanf("%s",&w);
						   printf("\n\tPlease enter actual arrival(ex-8:30AM). ");
						   scanf("%s",&e);
						   printf("\n\tPlease enter delay(ex-30min). ");
						   scanf("%s",&v);
						   fprintf(f2,"\n\n\n %s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s \n",j,k,l,w,e,v);
						   fflush(stdin);
						   printf("\n\n\n\tFor entering more details enter(Y or y) and for exit press any key ");
						   scanf("%c",&another);

						}while(another=='Y'||another=='y');
						fclose(f2);
						fclose(f1);
						printf("\n\n\n\tNote:-Edit trains.txt also.");
						}
						else
						 { printf("\n\n\n\tThere is no train available for append with this name.");
						 }
					       break;
				       case 3: break;
				       default:printf("\n\n\n\tYou have entered a worng choice.");
				    }

				    break;

			   case 4: break;
			   default:printf("\n\n\n\tyou have a entered a wrong choice");
			  }
		       }
		       else
		       { clrscr();
			 printf("\n\n\n\n\tYou are not authorised.");

		       }
		       break;
	       case 3:clrscr();
		      printf("\n\n\n\n\n\n\n\n\n\t\t\tThank you for visit");
		      getch();
		      exit(0);
	       default:printf("\n\n\n\tYou have entered a wrong choice");
	}
	printf("\n\n\n\n\tDo you want to continue with the main menu(enter Y or y)\n\tAnd for exit press any key for exit). ");
	fflush(stdin);
	scanf("%c",&choice);
	clrscr();
	}while(choice=='Y'||choice=='y');
	clrscr();
	printf("\n\n\n\n\n\n\n\n\n\t\t\tThank you for visit");
	getch();
 }