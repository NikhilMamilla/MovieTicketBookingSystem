#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int hyd_show();
int mumbai_show();
int chennai_show();
int vizag_show();
int kolkata_show();
int seats();
int seats_selection();
void UPItransaction(float total_amount, int n, int a, int b);
void creditcard_transaction(float total_amount, int n, int a, int b);
void debitcard_transaction(float total_amount, int n, int a, int b);
int snacks();
int main() {
  int option, i, result, reg, num;
  char ph_num[11], entered[30];
  char name[30];
  char email[30], password[20], enteredpassword[20];
  printf("--------------------------------------------\n");
  printf("** Register your account **\n");
  printf("--------------------------------------------\n");
  printf("\nEnter 1 to login with mobile number");
  printf("\nEnter 2 to login with email\n");
  printf("Option:");
  scanf("%d", &option);
  printf("--------------------------------------------\n");

  switch (option) {
  case 1:
  number : {
    printf("\nEnter your mobile number: ");
    scanf("%s", ph_num);
  }
    if (ph_num[10] != '\0' || strlen(ph_num) < 10) {
      printf("\n----Check your mobile number-----");
      goto number;
    } else
      printf("\nMobile number registered successfully");
    break;

  case 2:
    printf("\nEnter your email id: ");
    scanf("%s", email);

    for (i = 0; i < strlen(email); i++) {
      if (email[i] == '\0')
        break;
    }

    if (i != strlen(email)) {
      printf("\nEnter a valid email id.\n");
    } else {
      printf("\nEmail registered successfully.\n");
    }
    break;
  }

  printf("\nEnter your name: ");
  scanf("%s", name);
  printf("\nCreate your password: ");
  scanf("%s", password);
  printf("--------------------------------------------\n");
reg : {
  printf("\nEnter your registered mobile number / email id: ");
  scanf("%s", entered);
}

  if (option == 1 && atoi(entered) == atoi(ph_num)) {
    printf("\nEnter your password: ");
  } else if (option == 2 && strcmp(entered, email) == 0) {
  check:
    printf("\nEnter your password: ");
  } else {
    printf("\nEnter registered mobile number or email id");
    goto reg;
    return 0;
  }

  scanf("%s", enteredpassword);
  result = strcmp(enteredpassword, password);

  if (result == 0) {
    printf("\nLogin successful. Welcome!\n");
    printf("--------------------------------------------\n");
  } else {
    printf("\nIncorrect password. Please try again");
    goto check;
  }
  printf("\n         WELCOME TO BOOK MY SHOW\n ");
valid_movie:
  printf("\n Select your city for bookings\n ");
  printf("\n--------Press 1 for HYDERABAD------");
  printf("\n--------Press 2 for  MUMBAI------");
  printf("\n--------press 3 for CHENNAI------");
  printf("\n--------Press 4 for VIZAG------");
  printf("\n--------Press 5 for KOLKATA------\n");
  printf("option:");
  scanf("%d", &num);
  printf("--------------------------------------------\n\n\n");
  if (num > 5 || num == 0) {
    printf("invalid choice\n");
    goto valid_movie;
  }
  switch (num) { // HYDERABAD
  case 1:
    printf("* CITY : HYDERABAD **\n");
    printf("\n BOX OFFICE\n ");
    printf("\n The available movies ");
  valid_movie1:
    printf("\n 1.ANIMAL ");
    printf("\n 2.HI NANNA ");
    printf("\n 3.GUNTURKARAM ");
    printf("\n 4.SALAAR ");
    printf("\n SELECT THE MOVIE\n ");
    printf("Option:");
    scanf("%d", &option);
    printf("--------------------------------------------\n");
    if (option == 0 || option > 4) {
      printf("Invalid choice\n");
      goto valid_movie1;
    } else if (option == 1) {
      printf("* MOVIE: ANIMAL *\n");
      int opt_movies;
    valid_theatre:
      printf("Available theatres\n");
      printf("1.AMB Cinemas \n 2.NEXAS  \n 3.PVR  \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid option\n");
        goto valid_theatre;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at AMB:\n");
        hyd_show();
        break;
      }
      case 2: {
        printf("shows available at NEXAS\n");
        hyd_show();
        break;
      }
      case 3: {
        printf("shows available at PVR\n");
        hyd_show();
        break;
      }
      }
    } else if (option == 2) {
      printf("* MOVIE: HI NANNA *\n");
      int opt_movies;
    valid_theatre1:
      printf("Available theatres\n");
      printf("1.INOX \n 2.NEXAS  \n 3.MIRAJ  \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid Choice\n");
        goto valid_theatre1;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at INOX:\n");
        hyd_show();
        break;
      }
      case 2: {
        printf("shows available at NEXAS\n");
        hyd_show();
        break;
      }
      case 3: {
        printf("shows available at MIRAJ\n");
        hyd_show();
        break;
      }
      }
    } else if (option == 3) {
      printf("* MOVIE: GUNTURKARAM *\n");
      int opt_movies;
    valid_theatre2:
      printf("Available theatres\n");
      printf("1.AMB Cinemas \n 2.AAA \n 3.SUDHARSHAN 35  \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid Choice\n");
        goto valid_theatre2;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at AMB:\n");
        hyd_show();
        break;
      }
      case 2: {
        printf("shows available at AAA\n");
        hyd_show();
        break;
      }
      case 3: {
        printf("shows available at SUDHARSHAN 35\n");
        hyd_show();
        break;
      }
      }
    } else {
      printf("* MOVIE: SALAAR *\n");
      int opt_movies;
    valid_theatre3:
      printf("Available theatres\n");
      printf("1.VISHAWANATH \n 2.PRASAD IMAX  \n 3.PVR  \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid Choice\n");
        goto valid_theatre3;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at VISHWANATH:\n");
        hyd_show();
        break;
      }
      case 2: {
        printf("shows available at PRASAD IMAX\n");
        hyd_show();
        break;
      }
      case 3: {
        printf("shows available at PVR\n");
        hyd_show();
        break;
      }
      }
    }
    break;
  case 2:
    printf("* CITY:MUMBAI**\n");
    printf("\n BOX OFFICE ");
  valid_movie2:
    printf("\n the available movies ");
    printf("\n 1.ANIMAL ");
    printf("\n 2.HI NANNA ");
    printf("\n 3.GUNTURKARAM ");
    printf("\n 4.SALAAR ");
    printf("\n SELECT THE MOVIE\n ");
    printf("Option:");
    scanf("%d", &option);
    printf("--------------------------------------------\n");
    if (option == 0 || option > 4) {
      printf("Invalid choice\n");
      goto valid_movie2;
    } else if (option == 1) {
      printf("* MOVIE: ANIMAL *\n");
      int opt_movies;
    valid_theatre4:
      printf("Available theatres\n");
      printf("1.Eros Cinemas \n 2.Carnival Cinemas  \n 3.Regal Cinemas \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid Choice\n");
        goto valid_theatre4;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at Eros Cinemas:\n");
        mumbai_show();
        break;
      }
      case 2: {
        printf("shows available at Carnival Cinemas\n");
        mumbai_show();
        break;
      }
      case 3: {
        printf("shows available at Regal Cinemas\n");
        mumbai_show();
        break;
      }
      }
    } else if (option == 2) {
      printf("* MOVIE: HI NANNA *\n");
      int opt_movies;
    valid_theatre5:
      printf("Available theatres\n");
      printf(
          "1.Prithvi Theatre \n 2.Carnival Cinemas  \n 3.Capitol Cinemas  \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid Choice\n");
        goto valid_theatre5;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at Prithvi Theatre:\n");
        mumbai_show();
        break;
      }
      case 2: {
        printf("shows available at Carnival Cinemas \n");
        mumbai_show();
        break;
      }
      case 3: {
        printf("shows available at Capitol Cinemas\n");
        mumbai_show();
        break;
      }
      }
    } else if (option == 3) {
      printf("* MOVIE: GUNTURKARAM *\n");
      int opt_movies;
    valid_theatre6:
      printf("Available theatres\n");
      printf("1.Tata Theatre \n 2.INOX  \n 3.Capitol Cinemas  \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid Choice\n");
        goto valid_theatre6;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at Tata Theatre :\n");
        mumbai_show();
        break;
      }
      case 2: {
        printf("shows available at INOX \n");
        mumbai_show();
        break;
      }
      case 3: {
        printf("shows available at Capitol Cinemas\n");
        mumbai_show();
        break;
      }
      }
    } else {
      printf("* MOVIE: SALAAR *\n");
      int opt_movies;
    valid_theatre7:
      printf("Available theatres\n");
      printf("1.Eros Cinemas \n 2.PVR   \n 3.Regal Cinemas  \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid Choice\n");
        goto valid_theatre7;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at Eros Cinemas:\n");
        mumbai_show();
        break;
      }
      case 2: {
        printf("shows available at PVR\n");
        mumbai_show();
        break;
      }
      case 3: {
        printf("shows available at Regal Cinemas\n");
        mumbai_show();
        break;
      }
      }
    }
    break;
  case 3:
    printf("* CITY:CHENNAI *\n");
    printf("\n BOX OFFICE ");
  valid_movie3:
    printf("\n the available movies ");
    printf("\n 1.ANIMAL ");
    printf("\n 2.HI NANNA ");
    printf("\n 3.GUNTURKARAM ");
    printf("\n 4.SALAAR ");
    printf("\n SELECT THE MOVIE \n");
    printf("Option:");
    scanf("%d", &option);
    printf("--------------------------------------------\n");
    if (option == 0 || option > 4) {
      printf("Invalid option\n");
      goto valid_movie3;
    } else if (option == 1) {
      printf("* MOVIE: ANIMAL *\n");
      int opt_movies;
    valid_theatre8:
      printf("Available theatres\n");
      printf("1.Ags Cinemas \n 2.S2 Cinemas  \n 3.Varadharajan Cinemas  \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid choice\n");
        goto valid_theatre8;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at Ags Cinemas:\n");
        chennai_show();
        break;
      }
      case 2: {
        printf("shows available at S2 Cinemas \n");
        chennai_show();
        break;
      }
      case 3: {
        printf("shows available at Varadharajan Cinemas\n");
        chennai_show();
        break;
      }
      }
    } else if (option == 2) {
      printf("* MOVIE: HI NANNA *\n");
      int opt_movies;
    valid_theatre9:
      printf("Available theatres\n");
      printf("1.Woodlands Cinemas \n 2.Kamala Cinemas  \n 3.S2 Cinemas  \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid choice\n");
        goto valid_theatre9;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at Woodlands Cinemas:\n");
        chennai_show();
        break;
      }
      case 2: {
        printf("shows available at Kamala Cinemas \n");
        chennai_show();
        break;
      }
      case 3: {
        printf("shows available at S2 Cinemas\n");
        chennai_show();
        break;
      }
      }
    } else if (option == 3) {
      printf("* MOVIE: GUNTURKARAM *\n");
      int opt_movies;
    valid_theatre10:
      printf("Available theatres\n");
      printf("1.Casino Cinemas \n 2.S2 Cinemas  \n 3.Kamala Cinemas  \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid choice\n");
        goto valid_theatre10;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at Casino Cinemas:\n");
        chennai_show();
        break;
      }
      case 2: {
        printf("shows available at S2 Cinemas \n");
        chennai_show();
        break;
      }
      case 3: {
        printf("shows available at Kamala Cinemas\n");
        chennai_show();
        break;
      }
      }
    } else {
      printf("* MOVIE: SALAAR *\n");
      int opt_movies;
    valid_theatre11:
      printf("Available theatres\n");
      printf("1.Ags Cinemas \n 2.S2 Cinemas  \n 3.Casinos Cinemas  \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid choice\n");
        goto valid_theatre11;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at Ags Cinemas:\n");
        chennai_show();
        break;
      }
      case 2: {
        printf("shows available at S2 Cinemas \n");
        chennai_show();
        break;
      }
      case 3: {
        printf("shows available at Casino Cinemas\n");
        chennai_show();
        break;
      }
      }
    }
    break;
  case 4:
    printf("*CITY:VIZAG*\n");
    printf("\n BOX OFFICE ");
  valid_movie4:
    printf("\n the available movies ");
    printf("\n 1.ANIMAL ");
    printf("\n 2.HINANNA ");
    printf("\n 3.GUNTURKARAM ");
    printf("\n 4.SALAAR ");
    printf("\n SELECT THE MOVIE \n");
    printf("Option:");
    scanf("%d", &option);
    printf("--------------------------------------------\n");
    if (option == 0 || option > 4) {
      printf("Invalid choice\n");
      goto valid_movie4;
    }
    if (option == 1) {
      printf("* MOVIE: ANIMAL **\n");
      int opt_movies;
    valid_theatre12:
      printf("Available theatres\n");
      printf("1.SVC Cinemas \n 2.INOX  \n 3. Cinepolis  \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid choice\n");
        goto valid_theatre12;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at SVC Cinemas:\n");
        vizag_show();
        break;
      }
      case 2: {
        printf("shows available at INOX \n");
        vizag_show();
        break;
      }
      case 3: {
        printf("shows available at Cinepolis\n");
        vizag_show();
        break;
      }
      }
    } else if (option == 2) {
      printf("* MOVIE: HI NANNA *\n");
      int opt_movies;
    valid_theatre13:
      printf("Available theatres\n");
      printf("1.Sangam Theatre \n 2.Anupama Theatre  \n 3.Cinepolis  \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid choice\n");
        goto valid_theatre13;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at Sangam Theatre:\n");
        vizag_show();
        break;
      }
      case 2: {
        printf("shows available at Anupama Theatre \n");
        vizag_show();
        break;
      }
      case 3: {
        printf("shows available at Cinepolis\n");
        vizag_show();
        break;
      }
      }
    } else if (option == 3) {
      printf("* MOVIE: GUNTURKARAM *\n");
      int opt_movies;
    valid_theatre14:
      printf("Available theatres\n");
      printf("1.SVC Cinemas \n 2.INOX  \n 3.Sangam Theatre  \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid choice\n");
        goto valid_theatre14;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at SVC Cinemas:\n");
        vizag_show();
        break;
      }
      case 2: {
        printf("shows available at INOX \n");
        vizag_show();
        break;
      }
      case 3: {
        printf("shows available at Sangam Theatre\n");
        vizag_show();
        break;
      }
      }
    } else {
      printf("* MOVIE: SALAAR *\n");
      int opt_movies;
    valid_theatre15:
      printf("Available theatres\n");
      printf("1.Cinepolis \n 2.Global Cinema  \n 3.INOX \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid choice\n");
        goto valid_theatre15;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at Cinepolis:\n");
        vizag_show();
        break;
      }
      case 2: {
        printf("shows available at Global Cinema \n");
        vizag_show();
        break;
      }
      case 3: {
        printf("shows available at INOX\n");
        vizag_show();
        break;
      }
      }
    }
    break;
  case 5:
    printf("*CITY:KOLKATA*\n");
    printf("\n BOX OFFICE ");
  valid_movie5:
    printf("\n the available movies ");
    printf("\n 1.ANIMAL ");
    printf("\n 2.HI NANNA ");
    printf("\n 3.GUNTURKARAM ");
    printf("\n 4.SALAAR ");
    printf("\n SELECT THE MOVIE\n ");
    printf("Option:");
    scanf("%d", &option);
    printf("--------------------------------------------\n");
    if (option == 0 || option > 4) {
      printf("Invalid choice\n");
      goto valid_movie5;
    }
    if (option == 1) {
      printf("* MOVIE: ANIMAL *\n");
      int opt_movies;
    valid_theatre16:
      printf("Available theatres\n");
      printf("1.Mitra Cinema \n 2.Star Theatre  \n 3.Minerva Theatre  \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid choice\n");
        goto valid_theatre16;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at Mitra Cinema:\n");
        kolkata_show();
        break;
      }
      case 2: {
        printf("shows available at Star Theatre \n");
        kolkata_show();
        break;
      }
      case 3: {
        printf("shows available at Minerva Theatre\n");
        kolkata_show();
        break;
      }
      }
    } else if (option == 2) {
      printf("* MOVIE: HI NANNA *\n");
      int opt_movies;
    valid_theatre17:
      printf("Available theatres\n");
      printf("1.Cinepolis \n 2.INOX \n 3.Ashoka Cinemas  \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid choice\n");
        goto valid_theatre17;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at Cinepolis:\n");
        kolkata_show();
        break;
      }
      case 2: {
        printf("shows available at INOX\n");
        kolkata_show();
        break;
      }
      case 3: {
        printf("shows available at Ashoka Cinemas\n");
        kolkata_show();
        break;
      }
      }
    } else if (option == 3) {
      printf("* MOVIE: GUNTURKARAM *\n");
      int opt_movies;
    valid_theatre18:
      printf("Available theatres\n");
      printf("1.Priya Cinema \n 2.Cinepolis \n 3. Star Theatre \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid choice\n");
        goto valid_theatre18;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at Priya Cinema:\n");
        kolkata_show();
        break;
      }
      case 2: {
        printf("shows available at Cinepolis \n");
        kolkata_show();
        break;
      }
      case 3: {
        printf("shows available at Star Theatre\n");
        kolkata_show();
        break;
      }
      }
    } else {
      printf("* MOVIE: SALAAR *\n");
      int opt_movies;
    valid_theatre19:
      printf("Available theatres\n");
      printf("1.INOX \n 2.Priya Theatres  \n 3.Minerva Theatre \n");
      printf("Option:");
      scanf("%d", &opt_movies);
      printf("--------------------------------------------\n");
      if (opt_movies == 0 || opt_movies > 3) {
        printf("Invalid choice\n");
        goto valid_theatre19;
      }
      switch (opt_movies) {
      case 1: {
        printf("shows available at INOX:\n");
        kolkata_show();
        break;
      }
      case 2: {
        printf("shows available at Priya Theatres \n");
        kolkata_show();
        break;
      }
      case 3: {
        printf("shows available at Minerva Theatre\n");
        kolkata_show();
        break;
      }
      }
    }
    break;
  }
}
int hyd_show() {
  int date, tim_choice, date_gt, timing;
date_gt : {
  printf("\n enter your preference date between 18 and 24\n:");
  scanf("%d", &date);
}
  if (date < 18) {
    printf("Invalid date");
    goto date_gt;
  } else if (date > 24) {
    printf("Info unavaiable on %d ", date);
    goto date_gt;
  }
  switch (date) {
  case 18:
    printf("Show timings available on 18 are\n");
    printf("\n1.9:00\n2.12:00\n3.3:00\n4.6:00\n");
  timing : {
    printf("Select your preferred timing \n");
    scanf("%d", &tim_choice);
  }
    if (tim_choice == 1) {
      printf("please select seats for 9:00 \n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 12:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 3:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 6:00");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 19:
    printf("shows available on 19 are");
    printf("\n1.9:00\n2.12:00\n3.3:00\n4.6:00\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 9:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 12:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 3:00");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 6:00");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 20:
    printf("shows available on 20 are");
    printf("\n1.9:00\n2.12:00\n3.3:00\n4.6:00\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 9:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 12:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 3:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 6:00\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 21:
    printf("shows available on 21 are");
    printf("\n1.9:00\n2.12:00\n3.3:00\n4.6:00\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 9:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 12:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 3:00");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("Please select seats for 6:00");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 22:
    printf("shows avaiable on 22 are");
    printf("\n1.9:00\n2.12:00\n3.3:00\n4.6:00\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 9:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 12:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 3:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 6:00\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 23:
    printf("shows avaiable on 23 are");
    printf("\n1.9:00\n2.12:00\n3.3:00\n4.6:00\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 9:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 12:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 3:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 6:00\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 24:
    printf("shows avaiable on 24 are");
    printf("\n1.9:00\n2.12:00\n3.3:00\n4.6:00\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 9:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 12:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 3:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 6:00\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;
  }
}

int mumbai_show() {
  int date_gt, tim_choice, date, timing;
date_gt : {
  printf("\n enter your preference date between 18 and 24\n:");
  scanf("%d", &date);
}
  if (date < 18) {
    printf("enter valid date");
    goto date_gt;
  } else if (date > 24) {
    printf("info unavaiable on %d ", date);
    goto date_gt;
  }
  switch (date) {
  case 18:
    printf("show available on 18 are\n");
    printf("\n10:00\n2.1:00\n3.4:00\n4.7:00\n");
  timing : {
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
  }
    if (tim_choice == 1) {
      printf("please select seats for 10:00 \n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 7:00\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 19:
    printf("shows available on 19 are");
    printf("\n1.10:00\n2.1:00\n3.4:00\n4.7:00\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 10:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 7:00\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 20:
    printf("shows available on 20 are");
    printf("\n1.10:00\n2.1:00\n3.4:00\n4.7:00\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 10:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 7:00\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 21:
    printf("shows available on 21 are");
    printf("\n1.10:00\n2.1:00\n3.4:00\n4.7:00\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 10:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("Please select seats for 7:00\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 22:
    printf("shows avaiable on 22 are");
    printf("\n1.10:00\n2.1:00\n3.4:00\n4.7:00\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 10:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 7:00\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 23:
    printf("shows avaiable on 23 are");
    printf("\n1.10:00\n2.1:00\n3.4:00\n4.7:00\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 10:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 7:00\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 24:
    printf("shows avaiable on 24 are");
    printf("\n1.10:00\n2.1:00\n3.4:00\n4.7:00\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 10:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:00\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 7:00\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;
  }
}
int chennai_show() {
  int date, tim_choice, date_gt, timing;
date_gt : {
  printf("\n enter your preference date between 18 and 24\n:");
  scanf("%d", &date);
}
  if (date < 18) {
    printf("enter valid date");
    goto date_gt;
  } else if (date > 24) {
    printf("info unavaiable on %d ", date);
    goto date_gt;
  }
  switch (date) {
  case 18:
    printf("show available on 18 are\n");
    printf("\n1.10:30\n2.1:30\n3.4:30\n4.7:30\n");
  timing : {
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
  }
    if (tim_choice == 1) {
      printf("please select seats for 10:30 \n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 7:30\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 19:
    printf("shows available on 19 are");
    printf("\n1.10:30\n2.1:30\n3.4:30\n4.7:30\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 10:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 7:30\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 20:
    printf("shows available on 20 are");
    printf("\n1.10:30\n2.1:30\n3.4:30\n4.7:30\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 10:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 7:30\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 21:
    printf("shows available on 21 are");
    printf("\n1.10:30\n2.1:30\n3.4:30\n4.7:30\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 10:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("Please select seats for 7:30\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 22:
    printf("shows available on 22 are");
    printf("\n1.10:30\n2.1:30\n3.4:30\n4.7:30\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 10:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 7:30\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 23:
    printf("shows available on 23 are");
    printf("\n1.10:30\n2.1:30\n3.4:30\n4.7:30\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 10:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 7:30\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 24:
    printf("shows available on 24 are");
    printf("\n1.10:30\n2.1:30\n3.4:30\n4.7:30\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 10:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 7:30\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;
  }
}
int vizag_show() {
  {
    int date_gt, tim_choice, date, timing;
  date_gt : {
    printf("\n enter your preference date between 18 and 24\n:");
    scanf("%d", &date);
  }
    if (date < 18) {
      printf("enter valid date");
      goto date_gt;
    } else if (date > 24) {
      printf("info unavailable on %d ", date);
      goto date_gt;
    }
    switch (date) {
    case 18:
      printf("show available on 18 are\n");
      printf("\n1.10:00\n2.1:00\n3.4:00\n4.7:00\n");
    timing : {
      printf("select your preferred timing \n");
      scanf("%d", &tim_choice);
    }
      if (tim_choice == 1) {
        printf("please select seats for 10:00 \n");
        seats();
        seats_selection();
      } else if (tim_choice == 2) {
        printf("please select seats for 1:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 3) {
        printf("please select seats for 4:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 4) {
        printf("please select seats for 7:00\n");
        seats();
        seats_selection();
      } else {
        printf("Invalid timing\n");
        goto timing;
      }
      break;

    case 19:
      printf("shows available on 19 are");
      printf("\n1.10:00\n2.1:00\n3.4:00\n4.7:00\n");
      printf("select your preferred timing \n");
      scanf("%d", &tim_choice);
      if (tim_choice == 1) {
        printf("please select seats for 10:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 2) {
        printf("please select seats for 1:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 3) {
        printf("please select seats for 4:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 4) {
        printf("please select seats for 7:00\n");
        seats();
        seats_selection();
      } else {
        printf("Invalid timing\n");
        goto timing;
      }
      break;

    case 20:
      printf("shows available on 20 are");
      printf("\n1.10:00\n2.1:00\n3.4:00\n4.7:00\n");
      printf("select your preferred timing \n");
      scanf("%d", &tim_choice);
      if (tim_choice == 1) {
        printf("please select seats for 10:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 2) {
        printf("please select seats for 1:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 3) {
        printf("please select seats for 4:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 4) {
        printf("please select seats for 7:00\n");
        seats();
        seats_selection();
      } else {
        printf("Invalid timing\n");
        goto timing;
      }
      break;

    case 21:
      printf("shows available on 21 are");
      printf("\n1.10:00\n2.1:00\n3.4:00\n4.7:00\n");
      printf("select your preferred timing \n");
      scanf("%d", &tim_choice);
      if (tim_choice == 1) {
        printf("please select seats for 10:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 2) {
        printf("please select seats for 1:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 3) {
        printf("please select seats for 4:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 4) {
        printf("Please select seats for 7:00\n");
        seats();
        seats_selection();
      } else {
        printf("Invalid timing\n");
        goto timing;
      }
      break;

    case 22:
      printf("shows available on 22 are");
      printf("\n1.10:00\n2.1:00\n3.4:00\n4.7:00\n");
      printf("select your preferred timing \n");
      scanf("%d", &tim_choice);
      if (tim_choice == 1) {
        printf("please select seats for 10:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 2) {
        printf("please select seats for 1:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 3) {
        printf("please select seats for 4:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 4) {
        printf("please select seats for 7:00\n");
        seats();
        seats_selection();
      } else {
        printf("Invalid timing\n");
        goto timing;
      }
      break;

    case 23:
      printf("shows available on 23 are");
      printf("\n1.10:00\n2.1:00\n3.4:00\n4.7:00\n");
      printf("select your preferred timing \n");
      scanf("%d", &tim_choice);
      if (tim_choice == 1) {
        printf("please select seats for 10:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 2) {
        printf("please select seats for 1:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 3) {
        printf("please select seats for 4:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 4) {
        printf("please select seats for 7:00\n");
        seats();
        seats_selection();
      } else {
        printf("Invalid timing\n");
        goto timing;
      }
      break;

    case 24:
      printf("shows available on 24 are");
      printf("\n1.10:00\n2.1:00\n3.4:00\n4.7:00\n");
      printf("select your preferred timing \n");
      scanf("%d", &tim_choice);
      if (tim_choice == 1) {
        printf("please select seats for 10:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 2) {
        printf("please select seats for 1:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 3) {
        printf("please select seats for 4:00\n");
        seats();
        seats_selection();
      } else if (tim_choice == 4) {
        printf("please select seats for 7:00\n");
        seats();
        seats_selection();
      } else {
        printf("Invalid timing\n");
        goto timing;
      }
      break;
    }
  }
}
int kolkata_show() {
  int date, tim_choice, date_gt, timing;
date_gt : {
  printf("\n enter your preference date between 18 and 24\n:");
  scanf("%d", &date);
}
  if (date < 18) {
    printf("enter valid date");
    goto date_gt;
  } else if (date > 24) {
    printf("info unavaiable on %d ", date);
    goto date_gt;
  }
  switch (date) {
  case 18:
    printf("show available on 18 are\n");
    printf("\n1.10:30\n2.1:30\n3.4:30\n4.7:30\n");
  timing : {
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
  }
    if (tim_choice == 1) {
      printf("please select seats for 10:30 \n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 7:30\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 19:
    printf("shows available on 19 are");
    printf("\n1.10:30\n2.1:30\n3.4:30\n4.7:30\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 10:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 7:30\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 20:
    printf("shows available on 20 are");
    printf("\n1.10:30\n2.1:30\n3.4:30\n4.7:30\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 10:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 7:30\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 21:
    printf("shows available on 21 are");
    printf("\n1.10:30\n2.1:30\n3.4:30\n4.7:30\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 10:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("Please select seats for 7:30\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 22:
    printf("shows available on 22 are");
    printf("\n1.10:30\n2.1:30\n3.4:30\n4.7:30\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 10:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 7:30\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 23:
    printf("shows available on 23 are");
    printf("\n1.10:30\n2.1:30\n3.4:30\n4.7:30\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 10:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 7:30\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;

  case 24:
    printf("shows available on 24 are");
    printf("\n1.10:30\n2.1:30\n3.4:30\n4.7:30\n");
    printf("select your preferred timing \n");
    scanf("%d", &tim_choice);
    if (tim_choice == 1) {
      printf("please select seats for 10:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 2) {
      printf("please select seats for 1:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 3) {
      printf("please select seats for 4:30\n");
      seats();
      seats_selection();
    } else if (tim_choice == 4) {
      printf("please select seats for 7:30\n");
      seats();
      seats_selection();
    } else {
      printf("Invalid timing\n");
      goto timing;
    }
    break;
  }
}
int seats() {
  int i, j;
  int letter = 1;

  printf("\n*** BALCONY **\n");
  for (i = 1; i <= 10; i++) {
    printf("%d", letter);
    for (j = 1; j <= 10; j++) {
      printf("_%d  ", j);
    }
    printf("\n");
    letter++;
  }
  printf("\n");
  printf("** FIRST CLASS **\n");
  for (i = 1; i <= 5; i++) {
    printf(" %d", letter);
    for (j = 1; j <= 10; j++) {
      printf("_%d  ", j);
    }
    letter++;
    printf("\n");
  }

  printf("\n___SCREEN_THIS_WAY_\n");
}
int seats_selection() {
  int i, seats_check, option;
  int n;
  int seat, b;
  int row, a;
seats_check : {
  printf("max number of seats is 6\n");
  printf("enter number of seats:");
  scanf("%d", &n);
}
  if (n > 6) {
    printf("enter number of seats less than 6*\n");
    goto seats_check;
  }
seats_confo : {
seats_row : {
  printf("enter row :");
  scanf("%d", &row);
}
  if (row > 15) {
    printf("Row not available\n");
    goto seats_row;
  }
valid_seat_num:
  printf("enter initial seat number:");
  scanf("%d", &seat);
  if (seat == 0 || seat > 10) {
    printf("Invalid seat number\n");
    goto valid_seat_num;
  }
  a = row;
  b = seat;
}

  printf("selected seats are:");
  printf("%d.  %d", row, seat);

  for (i = 1; i < n; i++) {
    seat++;
    if (seat > 10) {
      row++;
      printf("\n%d.  ", row);
      seat = 1;
    }
    printf(" %d", seat);
  }
  printf("\nenter 1 to confirm , enter 0 to modify");
  scanf("%d", &option);
  if (option == 0) {
    goto seats_confo;
  }
  int amount_snacks = snacks();
  float amount;
  float total_amount;
  float ticket_price = 275;
  char card_holder_name[20];
  char creditcard[12];
  char debitcard[12];
  char expiry_month[2];
  char expiry_year[4];
  char cvv[3];
  int choice;
payment_choice:
  printf("\nChoose payment method....\n");
  printf("Enter 1 for UPI \n");
  printf("Enter 2 for credit card \n");
  printf("Enter 3 for debit card\n");
  scanf("%d", &choice);
  if (choice > 3) {
    printf("Invalid Choice\n");
    goto payment_choice;
  }
  if (choice == 1 || choice == 2 || choice == 3) {
    amount = n * ticket_price;
    total_amount = amount + amount_snacks;
    printf("Amount for movie tickets=%f\n", amount);
    printf("Your total amount to be paid %.2f \n", total_amount);
  }
  switch (choice) {
  case 1:
    UPItransaction(total_amount, n, a, b);
    break;
  case 2:
  valid_credit : {
    printf("Enter credit card number \n");
    scanf("%s", creditcard);
  }
    if (strlen(creditcard) != 12) {
      printf("%d\n", strlen(creditcard));
      printf("Invalid credit card number\n");
      goto valid_credit;
    }
  valid_expiry:
    printf("Enter expiry month \n");
    scanf("%s", expiry_month);
    if (expiry_month[2] != '\0' || strlen(expiry_month) < 2) {
      printf("Invalid expiry month\n");
      goto valid_expiry;
    }
    printf("Enter expiry year \n");
    scanf("%s", expiry_year);
    printf("Enter credit card holder's name \n");
    scanf("%s", card_holder_name);
  valid_cvv:
    printf("Enter cvv \n");
    scanf("%s", cvv);
    if (strlen(cvv) != 3) {
      printf("Invalid cvv\n");
      goto valid_cvv;
    }
    creditcard_transaction(total_amount, n, a, b);
    break;
  case 3:
  valid_debit : {
    printf("Enter debit card number \n");
    scanf("%s", debitcard);
  }
    if (strlen(debitcard) != 12) {
      printf("%d\n", strlen(debitcard));
      printf("Invalid debit card number\n");
      goto valid_debit;
    }
  valid_expiry1 : {
    printf("Enter expiry month \n");
    scanf("%s", expiry_month);
  }
    if (strlen(expiry_month) != 2) {
      printf("Invalid expiry month\n");
      goto valid_expiry1;
    }
    printf("Enter expiry year \n");
    scanf("%s", expiry_year);
    printf("Enter debit card holder's name \n");
    scanf("%s", card_holder_name);
  valid_cvv1:
    printf("Enter cvv \n");
    scanf("%s", cvv);
    if (strlen(cvv) != 3) {
      printf("Invalid cvv\n");
      goto valid_cvv1;
    }
    debitcard_transaction(total_amount, n, a, b);
    break;
  default:
    printf("....Invalid transaction method.... \n");
    printf("Please try again...\n");
  }
  return 0;
}
void UPItransaction(float total_amount, int n, int a, int b) {
  char pin[6], UPI[10], user_name[30];
  printf("Intialising UPI transaction for amount %.2f \n", total_amount);
  printf("Enter user name\n");
  scanf("%s", user_name);
valid_UPI:
  printf("Enter UPI number\n");
  scanf("%s", UPI);
  if (UPI[10] != '\0' || strlen(UPI) < 10) {
    printf("Invalid UPI number\n");
    goto valid_UPI;
  }
valid_pin : {
  printf("Enter your 6-digit UPI PIN to proceed... \n");
  scanf("%s", pin);
}
  if (pin[6] != '\0' || strlen(pin) < 6) {
    printf("Invalid pin\n");
    goto valid_pin;
  }
  printf("-----------UPI TRANSACTION SUCCESS----------- \n\n\n");
  printf("**  CONFIRMATION  ***\n");
  printf("---------------------------------------------\n");
  printf("   NAME:%s\n", user_name);
  printf("   NUMBER OF SEATS:%d\n", n);
  printf("   ROW NUMBER:%d\n", a);
  printf("   SEAT NUMBER:%d. %d", a, b);
  int i;
  for (i = 1; i < n; i++) {
    b++;
    if (b > 10) 
    {
      a++;
      printf(" %d.", a);
      b = 1;
    }
    printf(" %d", b);
  }
  printf("\n   Amount= %.2f\n", total_amount);

  printf("\n---------Thank you for booking--------- \n");
}
void creditcard_transaction(float total_amount, int n, int a, int b)
{
  char pin[6], user_name[30];
  printf("Intialising CARD transaction for amount %.2f \n", total_amount);
  printf("Enter user name\n");
  scanf("%s", user_name);
valid_pin : {
  printf("Enter a 6 digit card pin to proceed \n");
  scanf("%s", pin);
}
  if (pin[6] != '\0' || strlen(pin) < 6) 
  {
    printf("Invalid pin\n");
    goto valid_pin;
  }
  printf("--------------CARD TRANSACTION SUCCESS-------------- \n\n");
  printf("-----------------------------------------------------\n\n");
  printf("**  CONFIRMATION  **\n");
  printf("   NAME:%s\n", user_name);
  printf("   NUMBER OF SEATS:%d\n", n);
  printf("   ROW NUMBER:%d\n", a);
  printf("   SEAT NUMBER:%d. %d", a, b);
  int i;
  for (i = 1; i < n; i++)
    {
    b++;
    if (b > 10)
    {
      a++;
      printf("%d.", a);
      b = 1;
    }
    printf(" %d", b);
  }
  printf("\n   Amount=%.2f\n", total_amount);

  printf("\n--------Thank You For Booking --------\n");
}
void debitcard_transaction(float total_amount, int n, int a, int b) {
  char pin[6], user_name[30];
  printf("Intialising CARD transaction for amount %.2f \n", total_amount);
  printf("Enter user name\n");
  scanf("%s", user_name);
valid_pin :
{
  printf("Enter a 6 digit card pin to proceed \n");
  scanf("%s", pin);
}
  if (pin[6] != '\0' || strlen(pin) < 6) {
    printf("Invalid pin\n");
    goto valid_pin;
  }
  printf("--------------CARD TRANSACTION SUCCESS--------------- \n\n");
  printf("-----------------------------------------------------\n\n");
  printf("      **  CONFIRMATION  **      \n");
  printf("   NAME: %s\n", user_name);
  printf("   NUMBER OF SEATS: %d\n", n);
  printf("   ROW NUMBER: %d\n", a);
  printf("   SEAT NUMBER: %d. %d", a, b);
  int i;
  for (i = 1; i < n; i++)
    {
    b++;
    if (b > 10) {
      a++;
      printf(" %d.", a);
      b = 1;
    }
    printf(" %d", b);
  }
  printf("\n   Amount= %.2f\n", total_amount);

  printf("---------\nThank You For Booking--------- \n");
}
int snacks()
{
  int option_snacks, amount;
  printf("--------------------------------------------\n");
  printf("* SNACKS MENU **\n");
  printf("---Pop-corn menu---\n1. Pop-corn regular (150/-)\n2.Pop-corn medium "
         "(200/-) \n3. Pop-corn large (250/-)\n ");
  printf("---Cool-drink menu---\n4. Coke-250ml (50/-)\n5. Coke-350ml (100/-) "
         "\n6. Coke-400ml (150/-)\n");
  printf("---Combo menu---\n7. Pop-corn(small)+Coke(250ml)-[175/-]\n8. "
         "Pop-corn(large)+Coke(350ml)-[300/-]\n");
  printf("Enter 0 to skip snacks section\n");
top_snacks : {
  printf("Enter your option :");
  scanf("%d", &option_snacks);
}
  if (option_snacks > 8) {
    printf("Enter valid option*\n");
    goto top_snacks;
  } else {
    switch (option_snacks) {
    case 0:
      printf("Snacks not selected\n");
      return 0;
      break;
    case 1:
      printf("Pop-corn regular selected - price 150/-\n");
      amount = 175;
      return (amount);
      break;

    case 2:
      printf("Pop-corn medium selected - price 200/-\n");
      amount = 200;
      return (amount);
      break;

    case 3:
      printf("Pop-corn large selected - price 250/-\n");
      amount = 250;
      return (amount);
      break;

    case 4:
      printf("Coke-250ml selected - price 50/-\n");
      amount = 50;
      return (amount);
      break;

    case 5:
      printf("Coke-350ml selected - price 100/-\n");
      amount = 100;
      return (amount);
      break;

    case 6:
      printf("Coke-400ml selected - price 150/-\n");
      amount = 150;
      return (amount);
      break;

    case 7:
      printf("Combo of  pop-corn(small)+coke(250ml) selected - price 175/- \n");
      amount = 175;
      return (amount);
      break;

    case 8:
      printf("Combo of pop-corn(large)+coke(350ml)-[300/-] - price 300/-");
      amount = 300;
      return (amount);
      break;
    }
    printf("--------------------------------------------\n");
  }
}