#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int i, j;
int main_exit;
void menu();
struct date{
	int month, day, year;
};
struct{
	char name[60]
	int acc_no,age;
	char address[60]
	char citizenship[15]
	double phone;
	char acc_type[10]
	float amt; 
	struct date dob;
	struct date deposit;
	struct date widraw;
};
add,upd,check,rem,transaction;
float interest(float t, float amount, float rate)
{
	float SI;
	SI=(rate*t*amount)/100.0;
	return(SI);
}
void fordelay(int j)
{
	int i, k;
	for(i=0;i<j;i++)
	k=i;
}
void new_acc()
{
	int choice;
	FILE *ptr;
	ptr=fopen("record.dat", "a+");
	account_no:
		system("cls");
		printf("\t\t\t\xB2\xB2\xB2 ADD RECORD \xB2\xB2\xB2");
		printf("\n\n\nEnter today's date(mm/dd/yy):");
		scanf("%d%d%d", &add.deposit.month,&add.deposit.day,&add.deposit.year);
		printf("\nEnter the account number");
		scanf("%d",&check.acc_no);
		while(fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", &add.acc_no, &add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,
		&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
		{
			if(check.acc_no==add.acc_no)
			{
				printf("Account number already in use!");
				fordelay(1000000000);
				goto account_no;
			}
		}
		add.acc_no=check.acc_no;
		printf(\nEnter the name);
		scanf("%s",add.name);
		printf("\nEnter the date of birth(mm/dd/yyyy):");
		scanf("%d%d%d",&add.dob.month,&add.dob.day,&add.dob.year);
		printf("\nEnter age:");
		scanf("%d",&add.age);
		printf("\nEnter the Address:");
		scanf("%d",add.address);
		printf("\nEnter the citizenship number:");
		scanf("%d",add.citizenship);
		printf("\nEnter the phone number:");
		scanf("%lf",&add.phone);
		printf("\nEnter the amount to deposit:$");
		scanf("%f",&add.amt);
		printf("\nType of account:\n\t#Current\n\t#Fixed1(for 1 year)\n\t#Fixed2(for 2 years)\n\t#Fixed3(for 3 years)\n\t#Enter your choice:");
		scanf("%s",add.acc_type);
		 fprintf(ptr,"%d %s %d %d %d %d %s %s %lf %s %s %lf %s %f %d %d %d\n", add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,
		 add.acc_type,add.deposit.month,add.deposit.day,add.deposit.year);
		 
		 fclose(ptr);
		 printf("\nAccount created successfully!");
		 add_invalid:
		 	printf("\n\n\n\tEnter 1 to go the main menu and 0 exit:");
		 	scanf("%d",&main_exit);
		 	system("cls");
		 	if(main_exit==1)
		 	menu();
		 	else if(main_exit==0)
		 	close();
		 	else{
		 		printf("\nInvalid!\a");
		 		goto add_invalid;
			 }
		}
		void view_list() {
			FILE *view;
			view=fopen("record.dat","r");
			int test=0;
			system("cls");
			printf("\nACC. NO.\tNAME\t\t\tADDRESS\t\t\tPHONE\n");
			while(fscanf(view,"%d %s %d/%d/%d %d %s %s %lf %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,
			&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
			{
				printf("\n%6d\t %10s\t]t]t%10s\t\t%.olf",add.acc_no,add.name,add.address,add.phone);
				test++;
			}
			fclose(view);
			if(test==0) {
				system("cls");
				printf(\nNO RECORDS!!\n);}
				view_list_invalid:
					printf("\n\nEnter 1 to go to the main menu and 0 t exit:");
					scanf("%d",&main_exit);
					system("cls");
					if(main_exit==1)
					menu();
					else if (main_exit==0)
					close();
					else {
						printf("\nInvalid!\a");
						goto view_list_invalid;
					}
		}
		void edit(void) {
			int choice,test=0;
			FILE *old,*newrec;
			old=fopen("record.dat","r");
			newrec=fopen("new.dat","w");
			printf("\nEnter the account no. of the customer whose info you want to change:");
			scanf("%d",&upd.acc_no);
			while(fscanf(old,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",7add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizhenship,
			&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
			{
				if(add.acc_no==upd.acc_no) {
					test=1;
					printf("\nWhich information do you want to change?\n1.Address\n2\Enter your choice(1 for address and 2 for phone):");
					scanf("%d",&choice);
					system("cls");
					if(choice==1) {
						printf("Enter the new address:");
						scanf("%s",upd.address);
						fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,upd.address,
						add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
						system("cls");
						printf("Changes saved!");
					}
				}
				else if(choice==2) {
					printf("Enter the new phone number:");
					scanf("%lf",&upd.phone);
					fprintf(newrec,"%d %s %d/%d/%d %d %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,
					add.address,add.citizenship,upd.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
					system("cls");
					printf("Changes saved!");					
				}
				else
				fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.addess,add.citizenship,
				add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
			}
			fclose(old);
			fclose(newrec);
			remove("record.dat");
			rename("new.dat","record.dat");
		}