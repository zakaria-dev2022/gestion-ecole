#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
//**********gotoxy()**********
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//************gotoxy()************

//************les couleurs()************
int color(int couleurDuTexte,int couleurDeFond){
    HANDLE H= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}
//************les couleurs()************

typedef struct tdate{
    int jour;
    int  mois;
    int annee;
}tdate;
/*typedef struct theure{
    int heure;
    int minute;
}theure;*/
    //structure pour les etudiants
typedef struct etudiants{
    char N_etudiants[5];
    char nom[50] ;
    char prenom[50] ;
    char branche[50] ;
    char niveau [50];
    char tel[20] ;
    tdate date_naissance;
    char annee_scolaire[10];
}etudiants;
//*******structure pour les professeurs
typedef struct professeur{
    char N_professeur[5];
    char nom[50] ;
    char prenom[50] ;
    char filier[50] ;
    char tel[20] ;
    char salle[4];
    char annee_scolaire[10];
}professeur;
//*******structure pour les matieres
typedef struct matiere{
    char n_matiere[5];
    char nom_matiere[50] ;
    char prof_matiere[100] ;
    int Coefficient ;
}matiere;
//*******structure pour Les absences
typedef struct absence{
     char N_etudiant[5];
    char nom[50] ;
    char prenom[50] ;
    char branche[50] ;
    tdate date ;
    char niveau [50];
    //theure heure ;
    //int heure;
    //int minute;
    char Nom_administrateur[50];
}absence;
typedef struct note{
   // int N_etudiants;
    //char nom[50] ;
   // char prenom[50] ;
   // char branche[50] ;
   // char niveau [50];
   // float noteO;
    //float noteE;
}note;
int main()
{

    int n;//reponse pour le menu
    char rep;//reponse pour enregistrer
    int chois;// pour choisir dans la barre modifier/nv/sortir
    int chois_modifier;//variable diyal modifier
    int N_matier;//nombre de matier case 5
    float moy,moyG=0;//case 5 calculer le moyenne
    etudiants etudiant;//structure pour etudiant
    professeur professeur;//structure pour prof
    matiere matiere;//structure pour matier
    absence absence;//structure pour absence
    //note note;
    //menu
    menu://fonction goto
    do{
   color(0,15);
    system("cls");
     color(3,7);
     for(int i=0;i<120;i++){
        gotoxy(i,1);printf(" ");
        gotoxy(i,2);printf(" ");
        gotoxy(i,3);printf(" ");
     }
    color(12,7);//couleur de titre de menu

    gotoxy(45,2);printf("=====Gestion Des Etudiants=====");
    color(0,15);//couleur de menu
  gotoxy(30,6);   printf("1-GESTION DES ETUDIANTS");
  gotoxy(30,8);   printf("2-GESTION DU PROFESSEUR");
  gotoxy(30,10);   printf("3-GESTION DES MATIERES");
  gotoxy(30,12);  printf("4-GESTION D\'ABSENCE");
  gotoxy(30,14);  printf("5-GESTIONS DE NOTES");
  gotoxy(30,16);  printf("6-QUITTER");

   gotoxy(70,20); printf("Entrer votre choix : ");

    // afficher la barre
    color(9,7);
     for(int i=0;i<120;i++){
        gotoxy(i,26);printf(" ");
        gotoxy(i,27);printf(" ");
        gotoxy(i,28);printf(" ");
        gotoxy(i,29);printf(" ");
     }
     color(0,7);//couleur de phrase dans la barre
     gotoxy(5,27);printf("Realise par :");
     gotoxy(80,27);printf("Encadre par :");
     color(4,7);//couleur de phrase dans la barre
     gotoxy(19,27);printf("Zakaria Rebibi & Nouhaila Touati & Zakaria Essallamy");
     gotoxy(94,27);printf("Mme.Sara Ouahabi");
   color(10,15);//couleur de reponse du menu
   gotoxy(91,20); scanf("%d",&n);//reponse du menu
    system("cls");//Efface l'écran dans un environnement Windows
    switch (n){
        //******************************** debut de case 1****************************************
    case 1:{
   nouveau_etd:  //fonction goto
         system("cls"); //afficher a l'utilisateur les colones
        color(1,7);
     for(int i=0;i<120;i++){
        gotoxy(i,1);printf(" ");
        gotoxy(i,2);printf(" ");
        gotoxy(i,3);printf(" ");
     }
   gotoxy(45,2); printf("Entrer les cordonnes de l'etudiant\n");
    color(0,15);
   gotoxy(15,6);  printf("N_etudiants       : ");
   gotoxy(15,8);  printf("Nom               : ");
   gotoxy(15,10); printf("Prenom            : ");
   gotoxy(15,12); printf("Branche           : ");
   gotoxy(15,14); printf("Niveau_scolaire   : ");
   gotoxy(15,16); printf("Tel               : ");
   gotoxy(15,18); printf("Annee_scolaire    : ");
   gotoxy(15,20); printf("Date_naissance    : ");
   gotoxy(60,22); printf("Entrer votre choix : ");// pour choisir dans la barre
   // afficher la barre
    color(1,7);
     for(int i=0;i<120;i++){
        gotoxy(i,26);printf(" ");
        gotoxy(i,27);printf(" ");
        gotoxy(i,28);printf(" ");
        gotoxy(i,29);printf(" ");
     }
     for(int i=26;i<30;i++){
        gotoxy(30,i);printf("|");
        gotoxy(60,i);printf("|");
        gotoxy(90,i);printf("|");
     }
     gotoxy(10,27);printf("Nouveau = 1");
     gotoxy(40,27);printf("Modifier = 2");
     gotoxy(70,27);printf("Enregistrer = 3");
     gotoxy(100,27);printf("Sortir = 4");

   //donne a l'utilisateur la main pour entrer les données
    color(2,15);
     gotoxy(35,6); gets(etudiant.N_etudiants);
     gotoxy(35,6); gets(etudiant.N_etudiants);
     gotoxy(35,8); gets(etudiant.nom);
     gotoxy(35,10); gets(etudiant.prenom);
     gotoxy(35,12); gets(etudiant.branche);
     gotoxy(35,14); gets(etudiant.niveau);
     gotoxy(35,16); gets(etudiant.tel);
     gotoxy(35,18); gets(etudiant.annee_scolaire);
     gotoxy(35,20); scanf("%d%d%d",&etudiant.date_naissance.jour,&etudiant.date_naissance.mois,&etudiant.date_naissance.annee);
  question_etd:  //fonction goto
       gotoxy(81,22); scanf("%d",&chois);// pour choisir dans la barre



   do{ switch (chois){//switch pour executer le fonction dans la barre

        case 1: system("cls");//nouveau
                goto nouveau_etd;
        break;

        case 2://modifier
            color(12,15);
            gotoxy(13,6);  printf("1-");
            gotoxy(13,8);  printf("2-");
            gotoxy(13,10); printf("3-");
            gotoxy(13,12); printf("4-");
            gotoxy(13,14); printf("5-");
            gotoxy(13,16); printf("6-");
            gotoxy(13,18); printf("7-");
            gotoxy(13,20); printf("8-");


  modifier_etd:

       gotoxy(60,24);printf("Entrer nombre de l'element que tu veux changer? :");
            color(2,15);
            gotoxy(110,24); scanf("%d",&chois_modifier);
            do{switch(chois_modifier){
            case 1:color(1,15);
                gotoxy(13,6); printf("  N_etudiants       : ");
                color(2,15);
                gotoxy(35,6); gets(etudiant.N_etudiants);
                gotoxy(35,6); gets(etudiant.N_etudiants);
                goto question_etd;
                break;
            case 2:color(1,15);
                gotoxy(13,8); printf("  Nom               : ");
                color(2,15);
                gotoxy(35,8); gets(etudiant.nom);
                gotoxy(35,8); gets(etudiant.nom);
                goto question_etd;
            break;
            case 3: color(1,15);
                gotoxy(13,10);printf("  Prenom            : ");
                color(2,15);
                    gotoxy(35,10); gets(etudiant.prenom);
                    gotoxy(35,10); gets(etudiant.prenom);
                    goto question_etd;
                break;
            case 4: color(1,15);
                gotoxy(13,12);printf("  Branche           : ");
                color(2,15);
                    gotoxy(35,12); gets(etudiant.branche);
                    gotoxy(35,12); gets(etudiant.branche);
                    goto question_etd;
                break;
            case 5:color(1,15);
                gotoxy(13,14);printf("  Niveau_scolaire   : ");
                color(2,15);
                    gotoxy(35,14); gets(etudiant.niveau);
                    gotoxy(35,14); gets(etudiant.niveau);
                    goto question_etd;
                break;
            case 6: color(1,15);
                gotoxy(13,16);printf("  Tel               : ");
                color(2,15);
                    gotoxy(35,16); gets(etudiant.tel);
                    gotoxy(35,16); gets(etudiant.tel);
                    goto question_etd;
                break;
            case 7: color(1,15);
                gotoxy(13,18);printf("  Annee_scolaire    : ");
                color(2,15);
                    gotoxy(35,18); gets(etudiant.annee_scolaire);
                    gotoxy(35,18); gets(etudiant.annee_scolaire);
                    goto question_etd;
                break;
            case 8:  color(1,15);
                gotoxy(13,20);printf("  Date_naissance    : ");
                color(2,15);
                     gotoxy(35,20); scanf("%d%d%d",&etudiant.date_naissance.jour,&etudiant.date_naissance.mois,&etudiant.date_naissance.annee);
                    goto question_etd;
                break;
            default:color(12,15);
                gotoxy(10,25);printf("ce element n'existe pas!!");
            goto modifier_etd;
            break;
            }
            }while(chois_modifier<5 || chois_modifier>0);
        break;
        case 3://pour Enregistre
            system("cls");
            goto donner_etd;
        break;
        case 4: goto menu;//pour Sortir
        break;
        default:
            goto question_etd;
    }
    }while(chois<5 || chois>0);//fin de switch de barre

    system("cls");

    color(1,7);
     for(int i=0;i<120;i++){
        gotoxy(i,1);printf(" ");
        gotoxy(i,2);printf(" ");
        gotoxy(i,3);printf(" ");
     }//color diyal la barre en haut
     for(int i=26;i<30;i++){
        gotoxy(30,i);printf("|");
        gotoxy(60,i);printf("|");
        gotoxy(90,i);printf("|");

     }
     gotoxy(10,27);printf("Nouveau = 1");
     gotoxy(40,27);printf("Modifier = 2");
     gotoxy(70,27);printf("Enregistrer = 3");
     gotoxy(100,27);printf("Sortir = 4");
donner_etd:
    system("cls");
     color(1,7);

     for(int i=0;i<120;i++){
        gotoxy(i,1);printf(" ");
        gotoxy(i,2);printf(" ");
        gotoxy(i,3);printf(" ");
     }

   gotoxy(45,2); printf("voila les cordoner que vous avez enter d'etudiant ");
   color(0,15);
   gotoxy(15,6); printf("N_etudiants       : ");
   gotoxy(15,8); printf("Nom               : ");
   gotoxy(15,10); printf("Prenom            : ");
   gotoxy(15,12); printf("Branche           : ");
   gotoxy(15,14); printf("Niveau_scolaire   : ");
   gotoxy(15,16); printf("Tel               : ");
   gotoxy(15,18); printf("Annee_scolaire    : ");
   gotoxy(15,20); printf("Date_naissance    : ");
   color(2,15);
   gotoxy(35,6); printf("%s",etudiant.N_etudiants);
   gotoxy(35,8); printf("%s",etudiant.nom);
   gotoxy(35,10); printf("%s",etudiant.prenom);
   gotoxy(35,12); printf("%s",etudiant.branche);
   gotoxy(35,14); printf("%s",etudiant.niveau);
   gotoxy(35,16); printf("%s",etudiant.tel);
   gotoxy(35,18); printf("%s",etudiant.annee_scolaire);
   gotoxy(35,20); printf("%d / %d / %d ",etudiant.date_naissance.jour,etudiant.date_naissance.mois,etudiant.date_naissance.annee);
   color(0,15);

    do{
    gotoxy(70,25);printf("Est ce que vous voulez enregistrer O/N : ");
    color(2,15);
    scanf(" %c",&rep);
     }while(rep!='o'&& rep!='O'&& rep!='n'&& rep!='N');
    if(rep=='o'|| rep=='O'){
             FILE * et;
        et=fopen("etudiant.txt","a");
        if(et==NULL){
                   color(4,15);
           gotoxy(15,27); printf("Le fichier n'exicte pas");
            exit(1);
        }
      gotoxy(15,27);  printf("Les donnes est enregistrer");
        getch();
    fprintf(et,"\n\n \t\tvoila les cordoner que vous avez enter d'etudiant \n\n");
    fprintf(et,"\tN_etudiants       : %s \n",etudiant.N_etudiants);
    fprintf(et,"\tNom               : %s\n",etudiant.nom);
    fprintf(et,"\tPrenom            : %s \n",etudiant.prenom);
    fprintf(et,"\tBranche           : %s \n",etudiant.branche);
    fprintf(et,"\tNiveau_scolaire   : %s\n",etudiant.niveau);
    fprintf(et,"\tTel               : %s \n",etudiant.tel);
    fprintf(et,"\tAnnee_scolaire    : %s\n",etudiant.annee_scolaire);
    fprintf(et,"\tDate_naissance    : %d / %d / %d \n",etudiant.date_naissance.jour,etudiant.date_naissance.mois,etudiant.date_naissance.annee);
    fclose(et);
    }else{
        system("cls");
        goto menu;
    }
    break;    }// acolade de case1
//**********************************case 1***********************************************
//**********************************case 2***********************************************
    case 2:{
    nouveau_prof://fonction goto
        //afficher a l'utilisateur les colones
         color(12,7);
     for(int i=0;i<120;i++){
        gotoxy(i,1);printf(" ");
        gotoxy(i,2);printf(" ");
        gotoxy(i,3);printf(" ");
     }
    gotoxy(45,2);  printf("Entrer les cordonnes de professeur ");

    color(0,15);//color donner
    gotoxy(15,6);  printf("N_professeur         : ");
    gotoxy(15,8);  printf("Nom                  : ");
    gotoxy(15,10); printf("Prenom               : ");
    gotoxy(15,12); printf("Filier               : ");
    gotoxy(15,14); printf("Tel                  : ");
    gotoxy(15,16); printf("Salle                : ");
    gotoxy(15,18); printf("Annee_scolaire       : ");
    gotoxy(60,22); printf("Entrer votre choix : ");

    // afficher la barre
   color(1,7);
     for(int i=0;i<120;i++){
        gotoxy(i,26);printf(" ");
        gotoxy(i,27);printf(" ");
        gotoxy(i,28);printf(" ");
        gotoxy(i,29);printf(" ");
     }for(int i=26;i<30;i++){
        gotoxy(30,i);printf("|");
        gotoxy(60,i);printf("|");
        gotoxy(90,i);printf("|");
     }
     gotoxy(10,27);printf("Nouveau = 1");
     gotoxy(40,27);printf("Modifier = 2");
     gotoxy(70,27);printf("Enregistrer = 3");
     gotoxy(100,27);printf("Sortir = 4");

     //donne a l'utilisateur la main pour entrer les données
    color(2,15);
    gotoxy(38,6);gets(professeur.N_professeur);
    gotoxy(38,6);gets(professeur.N_professeur);
    gotoxy(38,8);gets(professeur.nom);
    gotoxy(38,10);gets(professeur.prenom);
    gotoxy(38,12);gets(professeur.filier);
    gotoxy(38,14);gets(professeur.tel);
    gotoxy(38,16);gets(professeur.salle);
    gotoxy(38,18);gets(professeur.annee_scolaire);
    question_prof: gotoxy(81,22);scanf(" %d",&chois);



   do{ switch (chois){

        case 1: system("cls");
                goto nouveau_prof;
        break;
        case 2:
            color(12,15);
            gotoxy(13,6); printf("1-");
            gotoxy(13,8); printf("2-");
            gotoxy(13,10); printf("3-");
            gotoxy(13,12); printf("4-");
            gotoxy(13,14); printf("5-");
            gotoxy(13,16); printf("6-");
            gotoxy(13,18); printf("7-");

    modifier_prof:
            gotoxy(60,24);printf("Entrer nombre de l'element que tu veux changer? :");
            color(2,15);
            gotoxy(110,24); scanf("%d",&chois_modifier);
            do{switch(chois_modifier){
            case 1:color(1,15);
                gotoxy(13,6); printf("  N_professeur         : ");
                color(2,15);
                gotoxy(38,6);gets(professeur.N_professeur);
                gotoxy(38,6);gets(professeur.N_professeur);
                goto question_prof;
                break;
            case 2:color(1,15);
                gotoxy(13,8); printf("  Nom                  : ");
                color(2,15);
                gotoxy(38,8);gets(professeur.nom);
                gotoxy(38,8);gets(professeur.nom);
                goto question_prof;
            break;
            case 3:color(1,15);
                gotoxy(13,10); printf("  Prenom               : ");
                color(2,15);
                    gotoxy(38,10);gets(professeur.prenom);
                    gotoxy(38,10);gets(professeur.prenom);
                    goto question_prof;
                break;
            case 4:color(1,15);
                gotoxy(13,12); printf("  Filier               : ");
                color(2,15);
                    gotoxy(38,12);gets(professeur.filier);
                    gotoxy(38,12);gets(professeur.filier);
                    goto question_prof;
                break;
            case 5:color(1,15);
                gotoxy(13,14); printf("  Tel                  : ");
                color(2,15);
                    gotoxy(38,14);gets(professeur.tel);
                    gotoxy(38,14);gets(professeur.tel);
                    goto question_prof;
                break;
            case 6:color(1,15);
                gotoxy(13,16); printf("  Salle                : ");
                color(2,15);
                   gotoxy(38,16);gets(professeur.salle);
                   gotoxy(38,16);gets(professeur.salle);
                    goto question_prof;
                break;

            case 7:color(1,15);
                gotoxy(13,18); printf("  Annee_scolaire       : ");
                color(2,15);
                    gotoxy(38,18);gets(professeur.annee_scolaire);
                    gotoxy(38,18);gets(professeur.annee_scolaire);
                    goto question_prof;
                break;
            default:color(12,15);
                gotoxy(10,25);printf("ce element n'existe pas!!");
            goto modifier_prof;
            break;
            }
            }while(chois_modifier<5 || chois_modifier>0);
        break;
        case 3:
            system("cls");
            goto donner_prof;
        break;
        case 4: goto menu;
        break;
        default:
            goto question_prof;
    }
    }while(chois<5 || chois>0);

    system("cls");

    color(1,7);
     for(int i=0;i<120;i++){
        gotoxy(i,1);printf(" ");
        gotoxy(i,2);printf(" ");
        gotoxy(i,3);printf(" ");
     }
     for(int i=26;i<30;i++){
        gotoxy(30,i);printf("|");
        gotoxy(60,i);printf("|");
        gotoxy(90,i);printf("|");

     }
     gotoxy(10,27);printf("Nouveau = 1");
     gotoxy(40,27);printf("Modifier = 2");
     gotoxy(70,27);printf("Enregistrer = 3");
     gotoxy(100,27);printf("Sortir = 4");

donner_prof:


     system("cls");
     color(1,7);
     for(int i=0;i<120;i++){
        gotoxy(i,1);printf(" ");
        gotoxy(i,2);printf(" ");
        gotoxy(i,3);printf(" ");
     }
    gotoxy(45,2);printf("Voila les cordoner que vous avez enter de professeur ");
    color(0,15);
    gotoxy(15,6);printf("N_professeur        : ");
    gotoxy(15,8);printf("Nom                 : ");
    gotoxy(15,10);printf("Prenom              : ");
    gotoxy(15,12);printf("Filier              : ");
    gotoxy(15,14);printf("Tel                 : ");
    gotoxy(15,16);printf("Salle               : ");
    gotoxy(15,18);printf("Annee_scolaire      : ");
    color(2,15);
    gotoxy(37,6);printf("%s",professeur.N_professeur);
    gotoxy(37,8);printf("%s",professeur.nom);
    gotoxy(37,10);printf("%s",professeur.prenom);
    gotoxy(37,12);printf("%s",professeur.filier);
    gotoxy(37,14);printf("%s",professeur.tel);
    gotoxy(37,16);printf("%s",professeur.salle);
    gotoxy(37,18);printf("%s",professeur.annee_scolaire);

    color(0,15);
    do{
    gotoxy(70,25);printf("est ce que vous voulez enregistrer O/N \t");
    color(2,15);
    scanf(" %c",&rep);
    }while(!rep=='o'|| !rep=='O'||!rep=='n'|| !rep=='N');
    if(rep=='o'|| rep=='O'){
             FILE * pf;

        pf=fopen("professeur.txt","a");
        if(pf==NULL){
                color(4,15);
           gotoxy(15,27); printf("Le fichier n'exicte pas");
            exit(1);
        }
      gotoxy(15,27);  printf("Les donnes est enregistrer");
        getch();

    fprintf(pf," \n\n \t\tvoila les cordoner que vous avez enter de professeur\n\n");
    fprintf(pf,"\tN_professeur        : %s \n",professeur.N_professeur);
    fprintf(pf,"\tNom                 : %s\n",professeur.nom);
    fprintf(pf,"\tPrenom              : %s \n",professeur.prenom);
    fprintf(pf,"\tFilier              : %s\n",professeur.filier);
    fprintf(pf,"\tTel                 : %s\n",professeur.tel);
    fprintf(pf,"\tSalle               : %s\n",professeur.salle);
    fprintf(pf,"\tAnnee_scolaire      : %s\n",professeur.annee_scolaire);
    fclose(pf);
    }else{
        system("cls");
        goto menu;
    }
break;}// acolade de case2
//**********************************case 2***********************************************
//**********************************case 3***********************************************
    case 3:{
     nouveau_mtr:
          system("cls"); //afficher a l'utilisateur les colones
         color(12,7);
     for(int i=0;i<120;i++){
        gotoxy(i,1);printf(" ");
        gotoxy(i,2);printf(" ");
        gotoxy(i,3);printf(" ");
     }
        //afficher a l'utilisateur les colones
    gotoxy(45,2);printf("Entrer les cordonnes de matiere");
    color(0,15);
    gotoxy(15,6);printf("N_matiere             : ");
    gotoxy(15,8);printf("Nom de matiere        : ");
    gotoxy(15,10);printf("Professeur de matiere : ");
    gotoxy(15,12);printf("Coefficient           : ");
    gotoxy(60,22); printf("Entrer votre choix : ");

    // afficher la barre
   color(1,7);
     for(int i=0;i<120;i++){
        gotoxy(i,26);printf(" ");
        gotoxy(i,27);printf(" ");
        gotoxy(i,28);printf(" ");
        gotoxy(i,29);printf(" ");
     }for(int i=26;i<30;i++){
        gotoxy(30,i);printf("|");
        gotoxy(60,i);printf("|");
        gotoxy(90,i);printf("|");
     }
     gotoxy(10,27);printf("Nouveau = 1");
     gotoxy(40,27);printf("Modifier = 2");
     gotoxy(70,27);printf("Enregistrer = 3");
     gotoxy(100,27);printf("Sortir = 4");


     //donne a l'utilisateur la main pour entrer les données
     color(10,15);
    gotoxy(39,6); gets(matiere.n_matiere);
    gotoxy(39,6); gets(matiere.n_matiere);
    gotoxy(39,8); gets(matiere.nom_matiere);
    gotoxy(39,10); gets(matiere.prof_matiere);
    gotoxy(39,12);scanf("%d",&matiere.Coefficient);
    question_mtr:   gotoxy(81,22); scanf("%d",&chois);
    do{ switch (chois){

        case 1: system("cls");
                goto nouveau_mtr;
        break;
        case 2:
            color(12,15);
            gotoxy(13,6); printf("1-");
            gotoxy(13,8); printf("2-");
            gotoxy(13,10); printf("3-");
            gotoxy(13,12); printf("4-");

           modifier_mtr :
            gotoxy(60,24);printf("Entrer nombre de l'element que tu veux changer? :");
            color(2,15);
            gotoxy(110,24); scanf("%d",&chois_modifier);
            do{switch(chois_modifier){
            case 1:color(1,15);
                gotoxy(13,6);printf("  N_matiere             : ");
                color(2,15);
                gotoxy(39,6); gets(matiere.n_matiere);
                gotoxy(39,6); gets(matiere.n_matiere);
                goto question_mtr;
                break;
            case 2:color(1,15);
                gotoxy(13,8);printf("  Nom de matiere        : ");
                color(2,15);
                gotoxy(39,8); gets(matiere.nom_matiere);
                gotoxy(39,8); gets(matiere.nom_matiere);
                goto question_mtr;
            break;
            case 3:color(1,15);
                gotoxy(13,10);printf("  Professeur de matiere : ");
                color(2,15);
                    gotoxy(39,10); gets(matiere.prof_matiere);
                    gotoxy(39,10); gets(matiere.prof_matiere);
                    goto question_mtr;
                break;
            case 4:color(1,15);
                gotoxy(13,12);printf("  Coefficient           : ");
                color(2,15);
                    gotoxy(39,12);scanf("%d",&matiere.Coefficient);
                    goto question_mtr;
                break;
            default:
                color(12,15);
                gotoxy(10,25);printf("ce element n'existe pas!!");
            goto modifier_mtr;
            break;
            }
            }while(chois_modifier<5 || chois_modifier>0);
        break;
        case 3:
            system("cls");
            goto donner_mtr;
        break;
        case 4: goto menu;
        break;
        default:
            goto question_mtr;
    }
    }while(chois<5 || chois>0);


    system("cls");

     color(1,7);
     for(int i=0;i<120;i++){
        gotoxy(i,1);printf(" ");
        gotoxy(i,2);printf(" ");
        gotoxy(i,3);printf(" ");
     }
          for(int i=26;i<30;i++){
        gotoxy(30,i);printf("|");
        gotoxy(60,i);printf("|");
        gotoxy(90,i);printf("|");

     }
     gotoxy(10,27);printf("Nouveau = 1");
     gotoxy(40,27);printf("Modifier = 2");
     gotoxy(70,27);printf("Enregistrer = 3");
     gotoxy(100,27);printf("Sortir = 4");

donner_mtr:
    system("cls");
     color(1,7);

     for(int i=0;i<120;i++){
        gotoxy(i,1);printf(" ");
        gotoxy(i,2);printf(" ");
        gotoxy(i,3);printf(" ");
     }

    gotoxy(45,2);printf("Voila les cordoner que vous avez enter de matiere ");
    color(0,15);
    gotoxy(15,6);printf("N_matiere             : ");
    gotoxy(15,8);printf("Nom de matiere        : ");
    gotoxy(15,10);printf("Professeur de matiere : ");
    gotoxy(15,12);printf("Coefficient           : ");
    color(2,15);
    gotoxy(39,6);printf("%s",matiere.n_matiere);
    gotoxy(39,8);printf("%s",matiere.nom_matiere);
    gotoxy(39,10);printf("%s",matiere.prof_matiere);
    gotoxy(39,12);printf("%d",matiere.Coefficient);
    color(0,15);
    do{
    gotoxy(70,25);printf("est ce que vous voulez enregistrer O/N : ");
    color(2,15);
    scanf(" %c",&rep);
    }while(!rep=='o'|| !rep=='O'||!rep=='n'|| !rep=='N');
    if(rep=='o'|| rep=='O'){
            FILE * mt;

        mt=fopen("matiere.txt","a");
        if(mt==NULL){
                color(4,15);
           gotoxy(15,27); printf("Le fichier n'exicte pas");
            exit(1);
        }
      gotoxy(15,27);  printf("Les donnes est enregistrer");
        getch();

    fprintf(mt,"\n\n \t\t voila les cordoner que vous avez enter d'etudiant\n\n");
    fprintf(mt,"\tN_matiere             : %s \n",matiere.n_matiere);
    fprintf(mt,"\tNom de matiere        : %s \n",matiere.nom_matiere);
    fprintf(mt,"\tProfesseur de matiere : %s \n",matiere.prof_matiere);
    fprintf(mt,"\tCoefficient           : %d \n",matiere.Coefficient);
    fclose(mt);
    }else{
        system("cls");
        goto menu;
    }

        break;}// acolade de case3
    //**********************************case 3***********************************************
    case 4:{
    nouveau_abs:
         color(1,7);
     for(int i=0;i<120;i++){
        gotoxy(i,1);printf(" ");
        gotoxy(i,2);printf(" ");
        gotoxy(i,3);printf(" ");
     }
    gotoxy(45,2);printf("Entrer les cordonnes de l'absence");
    color(0,15);
    gotoxy(15,6);printf("N_etudiant            : ");
    gotoxy(15,8);printf("Nom de l'etudiant     : ");
    gotoxy(15,10);printf("Prenom de l'etudiant  : ");
    gotoxy(15,12);printf("Branche               : ");
    gotoxy(15,14);printf("Niveau d'etude        : ");
    gotoxy(15,16);printf("Nom d'administrateur  : ");
    gotoxy(15,18);printf("Date d'entrer         : ");

    gotoxy(60,22); printf("Entrer votre choix : ");

    // afficher la barre
    color(1,7);
     for(int i=0;i<120;i++){
        gotoxy(i,26);printf(" ");
        gotoxy(i,27);printf(" ");
        gotoxy(i,28);printf(" ");
        gotoxy(i,29);printf(" ");
     }for(int i=26;i<30;i++){
        gotoxy(30,i);printf("|");
        gotoxy(60,i);printf("|");
        gotoxy(90,i);printf("|");
     }
     gotoxy(10,27);printf("Nouveau = 1");
     gotoxy(40,27);printf("Modifier = 2");
     gotoxy(70,27);printf("Enregistrer = 3");
     gotoxy(100,27);printf("Sortir = 4");


    //donne a l'utilisateur la main pour entrer les données

    color(10,15);
    gotoxy(40,6);gets(absence.N_etudiant);
    gotoxy(40,6);gets(absence.N_etudiant);
    gotoxy(40,8);gets(absence.nom);
    gotoxy(40,10);gets(absence.prenom);
    gotoxy(40,12);gets(absence.branche);
    gotoxy(40,14);gets(absence.niveau);
    gotoxy(40,16);gets(absence.Nom_administrateur);
    gotoxy(40,18);scanf("%d%d%d",&etudiant.date_naissance.jour,&etudiant.date_naissance.mois,&etudiant.date_naissance.annee);
    question_abs: gotoxy(81,22);scanf(" %d",&chois);


   do{ switch (chois){

        case 1: system("cls");
                goto nouveau_abs;
        break;
        case 2:
            color(12,15);
            gotoxy(13,6); printf("1-");
            gotoxy(13,8); printf("2-");
            gotoxy(13,10); printf("3-");
            gotoxy(13,12); printf("4-");
            gotoxy(13,14); printf("5-");
            gotoxy(13,16); printf("6-");
            gotoxy(13,18); printf("7-");

           modifier_abs :gotoxy(60,24);printf("Entrer nombre de l'element que tu veux changer? :");
            color(2,15);
            gotoxy(110,24); scanf("%d",&chois_modifier);
            do{switch(chois_modifier){
            case 1:
                color(1,15);
                gotoxy(13,6);printf("  N_etudiant            : ");
                color(2,15);
                gotoxy(40,6);gets(absence.N_etudiant);
                gotoxy(40,6);gets(absence.N_etudiant);
                goto question_abs;
                break;
            case 2:
                color(1,15);
                gotoxy(13,8);printf("  Nom de l'etudiant     : ");
                color(2,15);
                gotoxy(40,8);gets(absence.nom);
                gotoxy(40,8);gets(absence.nom);
                goto question_abs;
            break;
            case 3:
                color(1,15);
                gotoxy(13,10);printf("  Prenom de l'etudiant  : ");
                color(2,15);
                    gotoxy(40,10);gets(absence.prenom);
                    gotoxy(40,10);gets(absence.prenom);
                    goto question_abs;
                break;
            case 4:
                color(1,15);
                gotoxy(13,12);printf("  Branche               : ");
                color(2,15);
                    gotoxy(40,12);gets(absence.branche);
                    gotoxy(40,12);gets(absence.branche);
                    goto question_abs;
                break;
            case 5:
                color(1,15);
                gotoxy(13,14);printf("  Niveau d'etude        : ");
                color(2,15);
                   gotoxy(40,14);gets(absence.niveau);
                   gotoxy(40,14);gets(absence.niveau);
                    goto question_abs;
                break;

            case 6:
                color(1,15);
                gotoxy(13,16);printf("  Nom d'administrateur  : ");
                color(2,15);
                    gotoxy(40,16);gets(absence.Nom_administrateur);
                    gotoxy(40,16);gets(absence.Nom_administrateur);
                    goto question_abs;
                break;
            case 7:
                color(1,15);
                gotoxy(13,18);printf("  Date d'entrer         : ");
                color(2,15);
                    gotoxy(40,18);scanf("%d%d%d",&etudiant.date_naissance.jour,&etudiant.date_naissance.mois,&etudiant.date_naissance.annee);
                    goto question_abs;
                break;
            default:color(12,15);
                gotoxy(10,25);printf("ce element n'existe pas!!");
            goto modifier_abs;
            break;
            }
            }while(chois_modifier<5 || chois_modifier>0);
        break;
        case 3:
            system("cls");
            goto donner_abs;
        break;
        case 4: goto menu;
        break;
        default:
             goto question_abs;
    }
    }while(chois<5 || chois>0);

    system("cls");

    color(1,7);
     for(int i=0;i<120;i++){
        gotoxy(i,1);printf(" ");
        gotoxy(i,2);printf(" ");
        gotoxy(i,3);printf(" ");
     }
     for(int i=26;i<30;i++){
        gotoxy(30,i);printf("|");
        gotoxy(60,i);printf("|");
        gotoxy(90,i);printf("|");

     }
     gotoxy(10,27);printf("Nouveau = 1");
     gotoxy(40,27);printf("Modifier = 2");
     gotoxy(70,27);printf("Enregistrer = 3");
     gotoxy(100,27);printf("Sortir = 4");

donner_abs:
    system("cls");

     color(1,7);
     for(int i=0;i<120;i++){
        gotoxy(i,1);printf(" ");
        gotoxy(i,2);printf(" ");
        gotoxy(i,3);printf(" ");
     }



    gotoxy(45,2);printf("Voila les cordoner que vous avez enter d'etudiant ");
    color(0,15);
    gotoxy(15,6);printf("N_etudiant            : ");
    gotoxy(15,8);printf("Nom de l'etudiant     : ");
    gotoxy(15,10);printf("Prenom de l'etudiant  : ");
    gotoxy(15,12);printf("Branche               : ");
    gotoxy(15,14);printf("Niveau d'etude        : ");
    gotoxy(15,16);printf("Nom d'administrateur  : ");
    gotoxy(15,18);printf("Date d'entrer         : ");
    color(2,15);
    gotoxy(39,6);printf("%s",absence.N_etudiant);
    gotoxy(39,8);printf("%s",absence.nom);
    gotoxy(39,10);printf("%s",absence.prenom);
    gotoxy(39,12);printf("%s",absence.branche);
    gotoxy(39,14);printf("%s",absence.niveau);
    gotoxy(39,16);printf("%s",absence.Nom_administrateur);
    gotoxy(39,18);printf("%d / %d / %d ",etudiant.date_naissance.jour,etudiant.date_naissance.mois,etudiant.date_naissance.annee);

    do{
            color(0,15);
    gotoxy(70,25);printf("est ce que vous voulez enregistrer O/N \t");
    color(2,15);
    scanf(" %c",&rep);
    }while(!rep=='o'|| !rep=='O'||!rep=='n'|| !rep=='N');
    if(rep=='o'|| rep=='O'){
               FILE * ab;

        ab=fopen("Absence.txt","a");
        if(ab==NULL){
           color(4,15);
           gotoxy(15,27); printf("Le fichier n'exicte pas");
            exit(1);
        }
      gotoxy(15,27);  printf("Les donnes est enregistrer");
        getch();

    fprintf(ab,"\n\n\t\t voila les cordoner que vous avez enter d'etudiant \n\n");
    fprintf(ab,"\tN_etudiants          : %s \n",absence.N_etudiant);
    fprintf(ab,"\tNom                  : %s \n",absence.nom);
    fprintf(ab,"\tPrenom               : %s \n",absence.prenom);
    fprintf(ab,"\tNiveau_scolaire      : %s \n",absence.niveau);
    fprintf(ab,"\tNom d'administrateur : %s \n",absence.Nom_administrateur);
    fprintf(ab,"\tDate d'entrer        : %d / %d / %d ",etudiant.date_naissance.jour,etudiant.date_naissance.mois,etudiant.date_naissance.annee);
    fclose(ab);
    }else{
        system("cls");
        goto menu;
    }
        break;}// acolade de case4
    //**********************************case 4***********************************************
    /*case 5:{
    //**********************************case 5 ancien***********************************************

         color(12,7);
     for(int i=0;i<120;i++){
        gotoxy(i,1);printf(" ");
        gotoxy(i,2);printf(" ");
        gotoxy(i,3);printf(" ");
     }
        //donne a l'utilisateur la main pour entrer les données
    gotoxy(45,2);printf("Entrer les cordonnes de l'etudiant");
    color(0,15);
    gotoxy(15,6);printf("N_etudiants : ");
    gotoxy(15,8);printf("Nom : ");
    gotoxy(15,10);printf("Prenom : ");
    gotoxy(15,12);printf("Branche : ");
    gotoxy(15,14);printf("Niveau_scolaire : ");
    gotoxy(15,16);printf("Annee_scolaire : ");

    //donne a l'utilisateur la main pour entrer les données
    color(10,15);
    gotoxy(29,6);scanf("%d",&etudiant.N_etudiants);
    gotoxy(21,8);scanf("%s",&etudiant.nom);
    gotoxy(24,10);scanf("%s",&etudiant.prenom);
    gotoxy(25,12);scanf("%s",&etudiant.branche);
    gotoxy(32,14);scanf("%s",&etudiant.niveau);
    gotoxy(32,16);scanf("%s",&etudiant.annee_scolaire);
   //gotoxy(63,18);scanf("%d",&N_matier);
    /*
    gotoxy(38,16);scanf("%f",&note.noteO);
    gotoxy(38,18);scanf("%f",&note.noteE);/

     do{
    gotoxy(25,18);printf("Entrer combien des matiers Vous avez: ");
    gotoxy(63,18);scanf("%d",&N_matier);
    }while(N_matier<3 || N_matier>8 );
    //gotoxy(5,22);  printf("Matier :");
     //   gotoxy(5,23);  printf("Moyenne :");
    /*for(int i=0;i<=N_matier;i++){
       gotoxy(15,20);  printf("Entrer moyenne de matier %d :",i+1);
       gotoxy(43,20);scanf("%.2f",&moy);
        moyG+=moy;
    }

    printf("le moyenne general est :%.f",moyG);/

            for(int j=20;j<20+N_matier;j++){
    for(int i=0; i< N_matier; i++){
        gotoxy(15,j);printf("Entrer moyenne de matier %d :",i+1);
        gotoxy(43,j);scanf("%f",&moy);
        //printf("le moyenne de matier %d est : %.2f\n",i+1,moy);
       moyG+=moy;
       break;
       }
    }
    gotoxy(5,25);printf("le moyenne general 1 est :%.2f",moyG);
    gotoxy(40,25);printf("le moyenne general 2 est :%.2f",moyG/N_matier);
    getch();


    // afficher la barre
    color(9,14);
     for(int i=0;i<120;i++){
        gotoxy(i,26);printf(" ");
        gotoxy(i,27);printf(" ");
        gotoxy(i,28);printf(" ");
        gotoxy(i,29);printf(" ");
     }



        system("cls");

     color(12,7);
     for(int i=0;i<120;i++){
        gotoxy(i,1);printf(" ");
        gotoxy(i,2);printf(" ");
        gotoxy(i,3);printf(" ");
     }
    gotoxy(45,2);printf("Voila les cordoner que vous avez enter d'etudiant ");
    gotoxy(15,6);printf("N_etudiants : %d",etudiant.N_etudiants);
    gotoxy(15,8);printf("Nom : %s\n",etudiant.nom);
    gotoxy(15,10);printf("Prenom : %s",etudiant.prenom);
    gotoxy(15,12);printf("Branche : %s",etudiant.branche);
    gotoxy(15,14);printf("Niveau_scolaire : %s",etudiant.niveau);

    gotoxy(15,20);printf("Annee_scolaire : %s",etudiant.annee_scolaire);

    do{
     gotoxy(70,25);printf("est ce que vous voulez enregistrer O/N \t");
    scanf(" %c",&rep);
    //printf("s'il vous plaît enter soit \'O\' ou \'N\'");
    }while(!rep=='o'|| !rep=='O'||!rep=='n'|| !rep=='N');
    if(rep=='o'|| rep=='O'){
            //*******************
    }else{
        system("cls");
        goto menu;
    }
        break;}// acolade de case5*/
    case 5:{
        nouveau_note:
         color(12,7);
     for(int i=0;i<120;i++){
        gotoxy(i,1);printf(" ");
        gotoxy(i,2);printf(" ");
        gotoxy(i,3);printf(" ");
     }
        //donne a l'utilisateur la main pour entrer les données
    gotoxy(45,2);printf("Entrer les cordonnes de l'etudiant");
    color(0,15);
    gotoxy(15,6);printf ("N_etudiants          : ");
    gotoxy(15,8);printf ("Nom                  : ");
    gotoxy(15,10);printf("Prenom               : ");
    gotoxy(15,12);printf("Branche              : ");
    gotoxy(15,14);printf("Niveau_scolaire      : ");
    gotoxy(15,16);printf("Annee_scolaire       : ");

    gotoxy(60,22); printf("Entrer votre choix : ");


    // afficher la barre
   color(1,7);
     for(int i=0;i<120;i++){
        gotoxy(i,26);printf(" ");
        gotoxy(i,27);printf(" ");
        gotoxy(i,28);printf(" ");
        gotoxy(i,29);printf(" ");
     }for(int i=26;i<30;i++){
        gotoxy(30,i);printf("|");
        gotoxy(60,i);printf("|");
        gotoxy(90,i);printf("|");
     }
     gotoxy(10,27);printf("Nouveau = 1");
     gotoxy(40,27);printf("Modifier = 2");
     gotoxy(70,27);printf("Enregistrer = 3");
     gotoxy(100,27);printf("Sortir = 4");

    //donne a l'utilisateur la main pour entrer les données
    color(10,15);
    gotoxy(38,6);gets(etudiant.N_etudiants);
    gotoxy(38,6);gets(etudiant.N_etudiants);
    gotoxy(38,8);gets(etudiant.nom);
    gotoxy(38,10);gets(etudiant.prenom);
    gotoxy(38,12);gets(etudiant.branche);
    gotoxy(38,14);gets(etudiant.niveau);
    gotoxy(38,16);gets(etudiant.annee_scolaire);
    mdf_note:
    do{
            color(0,15);//couleur de question
    gotoxy(65,6);printf("Entrer combien des matiers Vous avez: ");
            color(10,15);//couleur de reponse
    gotoxy(103,6);scanf("%d",&N_matier);
    }while(N_matier<3 || N_matier>7 );
    moyG=0;
    int z=1;
            for(int j=8;j<8+N_matier;j++){
    for(int i=0; i< N_matier; i++){
        color(0,15);
        gotoxy(75,j);printf("Entrer moyenne de matier %d :",z);
        color(10,15);
        do{
        gotoxy(104,j);scanf("%f",&moy);
        }while(moy<0 || moy>20);
       moyG+=moy;
        z++;
       break;
       }
       }
       color(0,15);
    gotoxy(75,18);printf("le moyenne general est :");
    color(10,15);
    gotoxy(100,18);printf("%.2f",moyG/N_matier);


    question_note:   gotoxy(81,22); scanf("%d",&chois);
    do{ switch (chois){

        case 1: system("cls");
                goto nouveau_note;
        break;
        case 2:
            color(12,15);
            gotoxy(13,6); printf("1-");
            gotoxy(13,8); printf("2-");
            gotoxy(13,10); printf("3-");
            gotoxy(13,12); printf("4-");
            gotoxy(13,14); printf("5-");
            gotoxy(13,16); printf("6-");
            gotoxy(63,6); printf("7-");

           modifier_note :
            gotoxy(60,24);printf("Entrer nombre de l'element que tu veux changer? :");
            color(2,15);
            gotoxy(110,24); scanf("%d",&chois_modifier);
            do{switch(chois_modifier){
            case 1:color(1,15);
                gotoxy(13,6);printf ("  N_etudiants          : ");
                color(2,15);
                gotoxy(38,6); gets(etudiant.N_etudiants);
                gotoxy(38,6); gets(etudiant.N_etudiants);
                goto question_note;
                break;
            case 2:color(1,15);
               gotoxy(13,8);printf("  Nom                  : ");
               color(2,15);
                gotoxy(38,8); gets(etudiant.nom);
                gotoxy(38,8); gets(etudiant.nom);
                goto question_note;
            break;
            case 3:color(1,15);
               gotoxy(13,10);printf("  Prenom               : ");
               color(2,15);
                    gotoxy(38,10); gets(etudiant.prenom);
                    gotoxy(38,10); gets(etudiant.prenom);
                    goto question_note;
                break;
            case 4:color(1,15);
               gotoxy(13,12);printf("  Branche              : ");
               color(2,15);
                    gotoxy(38,12);gets(etudiant.branche);
                    gotoxy(38,12);gets(etudiant.branche);
                    goto question_note;
                break;
            case 5:color(1,15);
                gotoxy(13,14);printf("  Niveau scolaire      : ");
                color(2,15);
                    gotoxy(38,14);gets(etudiant.niveau);
                    gotoxy(38,14);gets(etudiant.niveau);
                    goto question_note;
                break;
            case 6: color(1,15);
                gotoxy(13,16);printf("  Annee scolaire       : ");
                color(2,15);
                    gotoxy(38,16);gets(etudiant.annee_scolaire);
                    gotoxy(38,16);gets(etudiant.annee_scolaire);
                    goto question_note;
                break;
            case 7:
    goto mdf_note;
    goto question_note;
            default:
                color(12,15);
                gotoxy(10,25);printf("ce element n'existe pas!!");
            goto modifier_note;
            break;
            }
            }while(chois_modifier<5 || chois_modifier>0);
        break;
        case 3:
            system("cls");
            goto donner_note;
        break;
        case 4: goto menu;
        break;
        default: goto question_note;
    }
    }while(chois<5 || chois>0);


    system("cls");

     color(1,7);
     for(int i=0;i<120;i++){
        gotoxy(i,1);printf(" ");
        gotoxy(i,2);printf(" ");
        gotoxy(i,3);printf(" ");
     }
          for(int i=26;i<30;i++){
        gotoxy(30,i);printf("|");
        gotoxy(60,i);printf("|");
        gotoxy(90,i);printf("|");

     }
     gotoxy(10,27);printf("Nouveau = 1");
     gotoxy(40,27);printf("Modifier = 2");
     gotoxy(70,27);printf("Enregistrer = 3");
     gotoxy(100,27);printf("Sortir = 4");

donner_note:
    system("cls");
     color(1,7);

     for(int i=0;i<120;i++){
        gotoxy(i,1);printf(" ");
        gotoxy(i,2);printf(" ");
        gotoxy(i,3);printf(" ");
     }
    gotoxy(45,2);printf("Voila les cordoner que vous avez enter d'etudiant ");
    color(0,15);
    gotoxy(15,6);printf("N_etudiants      : ");
    gotoxy(15,8);printf("Nom              : ");
    gotoxy(15,10);printf("Prenom           : ");
    gotoxy(15,12);printf("Branche          : ");
    gotoxy(15,14);printf("Niveau_scolaire  : ");
    gotoxy(15,16);printf("Annee_scolaire   : ");
    gotoxy(15,18);printf("Moyenne General  : ");
    color(2,15);
    gotoxy(34,6);printf("%s",etudiant.N_etudiants);
    gotoxy(34,8);printf("%s",etudiant.nom);
    gotoxy(34,10);printf("%s",etudiant.prenom);
    gotoxy(34,12);printf("%s",etudiant.branche);
    gotoxy(34,14);printf("%s",etudiant.niveau);
    gotoxy(34,16);printf("%s",etudiant.annee_scolaire);
    gotoxy(34,18);printf("%.2f",moyG/N_matier);
    color(0,15);
    if((moyG/N_matier)<10 && (moyG/N_matier)>0 ){
    gotoxy(35,22);printf("Mr(Mme).%s %s est : ",etudiant.nom,etudiant.prenom);
    color(4,15);
    printf("echec");
    }
    else{
    gotoxy(35,22);printf("Mr(Mme).%s %s est : ",etudiant.nom,etudiant.prenom);
    color(2,15);
    printf("admis");
    }
    color(0,15);
    do{
     gotoxy(70,25);printf("est ce que vous voulez enregistrer O/N : ");
     color(2,15);
    scanf(" %c",&rep);
    }while(!rep=='o'|| !rep=='O'||!rep=='n'|| !rep=='N');
    if(rep=='o'|| rep=='O'){
             FILE * nt;

        nt=fopen("Note.txt","a");
        if(nt==NULL){
           color(4,15);
           gotoxy(15,27); printf("Le fichier n'exicte pas");
            exit(1);
        }
      gotoxy(15,27);  printf("Les donnes est enregistrer");
        getch();

    fprintf(nt,"\n\n \t\t voila les cordoner que vous avez enter d'etudiant \n\n");
    fprintf(nt,"\tN_etudiants     : %s \n",etudiant.N_etudiants);
    fprintf(nt,"\tNom             : %s\n",etudiant.nom);
    fprintf(nt,"\tPrenom          : %s \n",etudiant.prenom);
    fprintf(nt,"\tBranche         : %s \n",etudiant.branche);
    fprintf(nt,"\tNiveau_scolaire : %s\n",etudiant.niveau);
    fprintf(nt,"\tAnnee_scolaire  : %s\n",etudiant.annee_scolaire);
    fprintf(nt,"\tMoyenne General : %.2f\n",moyG/N_matier);
    if((moyG/N_matier)<10 && (moyG/N_matier)>0 ){
    fprintf(nt,"\tMr(Mme).%s %s est echec  ",etudiant.nom,etudiant.prenom);
    }
    else{
    fprintf(nt,"\tMr(Mme).%s %s est admis  ",etudiant.nom,etudiant.prenom);
    }
    fclose(nt);
    }else{
        system("cls");
        goto menu;
    }
        break;}// acolade de case5

    //**********************************case 5***********************************************
    case 6:{
qst:
        color(12,0);
        system("cls");
        gotoxy(5,2); printf("Voulez-vous sortir O/N (\'O\' = Oui \'N\' = Non) ?? :");
        color(15,0);
        gotoxy(55,2);scanf(" %c",&rep) ;

    if(rep=='o'|| rep=='O'){
            color(15,0);
            gotoxy(8,4);printf("Fin de Programme!");
            break;
    }else if(rep=='n'|| rep=='N'){
        system("cls");
        goto menu;
    }else{
    goto qst ;
    }

        }// acolade de case6
    //**********************************case 6***********************************************
    default:{
        color(12,0);
        system("cls");
        gotoxy(10,2);printf("Tu dois choisir un nombre entre[1-6]!!! ");
        getch();
        system("cls");
        }// acolade de default
}// acolade de swith
        }while(n!=6); // acolade de boucle1
    getch();
    return 0;
}
