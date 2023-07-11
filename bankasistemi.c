#include<stdio.h>
#include<conio.h>
#include<Windows.h>
void main()
{ 
	int bakiye=1000,yatanpara,cekilenpara,gonderilenpara;
	int k;
	char kullaniciadi[6]="kamer"; //Kullanıcı adı "kamer" olarak tanımlanmıştır.
	char kullanici[30]="0";
	int adkontrol=0;
	int kullanicisifresi=1206; //Kullanıcı şifresi 1206 olarak tanımlanmıştır.
	int sifre;
	char cevap;
	printf("\n\t\t\t =Banka Hesap Sistemi Programi=\n");
	for(;;)
	{ 
		printf("\n Kullanici Adinizi Giriniz:");
		scanf("%s",kullanici);
		fflush(stdin);
		adkontrol=strcmp(kullanici,kullaniciadi);
		if(adkontrol!=0)
		{ 	 
			printf("\n Yanlis Kullanici Adi Girdiniz.\n");
			printf(" Lutfen Tekrar Deneyiniz.\n");
			printf("\n Lutfen Bekleyiniz...");
			Sleep(2000);
			system("CLS");
			printf("\n\n");
			continue;
		}
         
		else
		{   
			printf("\n Kullanici Adiniz Dogrulanmaktadir...");
			Sleep(2000);
			system("CLS");
			printf("\n Kullanici Adiniz Dogrudur.\n");
			break;
		}
  	
	}
   	for(;;)
	{ 
	    printf("\n Lutfen Kullanici Sifrenizi Giriniz:");
	    scanf("%d",&sifre);
	    fflush(stdin);
	    if(kullanicisifresi!=sifre)
	    {	 
		    printf("\n Yanlis Sifre Girdiniz.\n");
	            printf(" Lutfen Tekrar Deneyiniz.\n");
		    printf("\n Lutfen Bekleyiniz...");
		    printf("\n\n");
		    Sleep(2000);
		    system("CLS");
		    continue;
            }

	    else
	    {   
		    printf("\n Kullanici Sifreniz Dogrulanmaktadir...");
		    Sleep(2000);
		    system("CLS");
		    printf("\n Kullanici Sifreniz Dogrudur.\n\n");
		    Sleep(1000);
		    system("CLS");
		    printf("\n Hosgeldiniz, ");
		    printf("%c\n",puts(kullanici));
		    do
		    { 
			Menu:
			printf(" ISLEM MENUSU\n");
			printf(" ============\n\n");
			printf(" 1-Hesap Bakiyesi Goruntuleme\n");
			printf(" 2-Hesaba Para Yatirma\n");
			printf(" 3-Hesaptan Para Cekme\n");
			printf(" 4-Para Gonderme\n");
			printf(" 5-Cikis\n");
			printf("\n Luften Rakam Girerek Yapacaginiz Islemi Seciniz (1/2/3/4/5): ");
			scanf("%d",&k);
			fflush(stdin);
			printf("\n");
			switch(k)
			{  					
				case 1:
					system("CLS");
					printf("\n Hesap Bakiyesi Goruntuleme");
					printf("\n --------------------------");
					printf("\n\n Hesabinizda Bulunan Para: %d TL \n",bakiye);
					printf("\n\n");
					break;

				case 2:
					system("CLS");
					printf("\n Hesaba Para Yatirma");
					printf("\n -------------------");
					printf("\n\n Hesabiniza Yatacak Para Tutarini Giriniz:");
					scanf("%d",&yatanpara);
					bakiye=bakiye+yatanpara;
					printf(" Hesabiniza Yatan Para: %d TL \n",yatanpara);
					printf(" Hesabinizda Bulunan Para: %d TL \n",bakiye);
					printf("\n\n");
					break;

				case 3:
					while(1)
					{	
						system("CLS");
						printf("\n Hesaptan Para Cekme");
						printf("\n -------------------");
						printf("\n\n Hesabinizdan Cekilecek Para Tutarini Giriniz:");
						scanf("%d",&cekilenpara);
						if(cekilenpara<=bakiye)
						{ 
							bakiye=bakiye-cekilenpara;
							printf(" Hesabinizdan Cekilen Para: %d TL \n",cekilenpara);
							printf(" Hesabinizda Kalan Para: %d TL \n",bakiye);
							break;
						}

						else
						{ 
							printf("\n Bakiyeniz Yetersiz.\n");
							printf(" Hesabinizdan Cekilecek Para Tutarini Tekrar Giriniz.\n\n");
							Sleep(2000);
							continue;
						}
					}
					printf("\n\n");
					break;

				case 4:
					while(1)
					{	
						system("CLS");
						printf("\n Para Gönderme");
						printf("\n -------------");
						printf("\n\n Hesabinizdan Gonderilecek Para Tutarini Giriniz:");
						scanf("%d",&gonderilenpara);
						if(bakiye>=gonderilenpara)
						{ 
							bakiye=bakiye-gonderilenpara;
							printf(" Hesabinizdan Gonderilen Para Tutari: %d TL \n",gonderilenpara);
							printf(" Hesabinizda Kalan Para: %d TL \n",bakiye);
							break;
						}
						else 
						{   
							printf("\n");
							printf(" Bakiyeniz Yetersiz.\n");
							printf(" Hesabinizdan Gonderilecek Para Tutarini Tekrar Giriniz.\n");
							Sleep(2000);
							continue;
						}

					}
					printf("\n\n");
					break;

				case 5:
					system("CLS");
					printf("\n");
					goto cikis;
       
					default:
					system("CLS");
					printf("\n Boyle Bir Islem Secenegi Yoktur. Lutfen Tekrar Deneyiniz.\n");
					printf("\n");
					goto Menu;
					break;
			} 
			printf(" Baska Islem Yapmak Istiyor Musunuz? ( (E)vet - (H)ayir )");
			cevap=getch();
			system("CLS");
			printf("\n");
		}
		while(cevap=='E' || cevap=='e');
		if(cevap=='H' || cevap=='h')
		break;
	      }
        }
	cikis:
        printf(" Cikis");
	printf("\n -----");
	printf("\n\n Banka Sistemi Programindan Cikis Yaptiniz.");
	printf("\n Banka Sistemi Programini Kullandiginiz Icin Tesekkur Ederiz.");
	Sleep(2000);
	system("CLS");
	printf("\n Programi Kapatmak Icin Bir Tusa Basiniz.");
	getch();
}