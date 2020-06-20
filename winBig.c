#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

struct player{
    int playerNumber;
    char name[20];
    int position; // 0 = WK, 1 = BTS, 2 = All, 3 = BOW
    float credits;
    //int isCaptain;// 1 = Captain
    //int isInternational; // 1 = International
    int gameCaptain;
    int gameViceCaptain;
};

int findId(char team[3]) {
    int teamId;
    if(strcmp(team,"MI") == 0 ||strcmp(team,"mi") == 0)
        teamId = 1;
    else if(strcmp(team,"CSK") == 0 ||strcmp(team,"csk") == 0)
        teamId = 2;
    else if(strcmp(team,"DC") == 0 ||strcmp(team,"dc") == 0)
        teamId = 3;
    else if(strcmp(team,"RR") == 0 ||strcmp(team,"rr") == 0)
        teamId = 4;
    else if(strcmp(team,"RCB") == 0 ||strcmp(team,"rcb") == 0)
        teamId = 5;
    else if(strcmp(team,"KKR") == 0 ||strcmp(team,"kkr") == 0)
        teamId = 6;
    else if(strcmp(team,"SRH") == 0 ||strcmp(team,"srh") == 0)
        teamId = 7;
    else if(strcmp(team,"KXP") == 0 ||strcmp(team,"kxp") == 0)
        teamId = 8;
  return teamId;
}

void chooseTeam(char team[3],int teamId) { // this function will take the team name and id and save all the playing players of that team to structure, then save those structures to file teamname.dat
    FILE *structureToFile; 
    char teamFile[8];
    strcpy(teamFile,team);
    strcat(teamFile,".dat");
    
    // open file for writing 
    structureToFile = fopen(teamFile, "w"); 
    if (structureToFile == NULL) 
    { 
        fprintf(stderr, "\nError opend file\n"); 
        exit (1); 
    }   
    
    struct player player1, player2, player3, player4, player5, player6, player7, player8, player9, player10, player11;

   switch(teamId) {
        case 1:    player1.playerNumber = 1; strcpy(player1.name, "Quinton de Kock");   player1.position = 0; player1.credits = 9;     player1.gameCaptain =  0; player1.gameViceCaptain =  0;
                   player2.playerNumber = 2; strcpy(player2.name, "Rohit Sharma");      player2.position = 1; player2.credits = 10;    player2.gameCaptain =  0; player2.gameViceCaptain =  0; 
                   player3.playerNumber = 3; strcpy(player3.name, "Suryakumar Yadav");  player3.position = 1; player3.credits = 9;     player3.gameCaptain =  0; player3.gameViceCaptain =  0;
                   player4.playerNumber = 4; strcpy(player4.name, "Ishan Kishan");      player4.position = 1; player4.credits = 8.5;   player4.gameCaptain =  0; player4.gameViceCaptain =  0; 
                   player5.playerNumber = 5; strcpy(player5.name, "Krunal Pandya");     player5.position = 2; player5.credits = 8.5;   player5.gameCaptain =  0; player5.gameViceCaptain =  0;
                   player6.playerNumber = 6; strcpy(player6.name, "Kieron Pollard");    player6.position = 1; player6.credits = 8.5;   player6.gameCaptain =  0; player6.gameViceCaptain =  0; 
                   player7.playerNumber = 7; strcpy(player7.name, "Hardik Pandya");     player7.position = 2; player7.credits = 9.5;   player7.gameCaptain =  0; player7.gameViceCaptain =  0;
                   player8.playerNumber = 8; strcpy(player8.name, "Alzarri Joseph");    player8.position = 3; player8.credits = 10;    player8.gameCaptain =  0; player8.gameViceCaptain =  0; 
                   player9.playerNumber = 9; strcpy(player9.name, "Jason Behrendorff"); player9.position = 3; player9.credits = 8.5;   player9.gameCaptain =  0; player9.gameViceCaptain =  0;
                   player10.playerNumber = 10; strcpy(player10.name, "Rahul Chahar");      player10.position = 3; player10.credits = 8; player10.gameCaptain =  0; player10.gameViceCaptain =  0; 
                   player11.playerNumber = 11; strcpy(player11.name, "Jasprit Bumrah");    player11.position = 3; player11.credits = 9; player11.gameCaptain =  0; player11.gameViceCaptain =  0;
                  
                   break;//Mumbai Indians
                   /*Rohit Sharma(captain), Ishan Kishan, Suryakumar Yadav, Yuvraj Singh,
                    Anmolpreet Singh, Aditya Tare, Siddhesh Lad, Evin Lewis, Quinton de Kock,
                    Hardik Pandya, Krunal Pandya, Pankaj Jaiswal, Anukul Roy, Kieron Pollard,
                    Ben Cutting, Mayank Markande, Rahul Chahar, Lasith Malinga, Jasprit Bumrah,
                    Mitchell McClenaghan, Adam Milne, Jason Behrendorff, Barinder Sran, Rasikh Salam, Jayant Yadav */

        case 2:    player1.playerNumber = 1; strcpy(player1.name, "MS Dhoni");            player1.position = 0; player1.credits = 9;     player1.gameCaptain =  0; player1.gameViceCaptain =  0;
                   player2.playerNumber = 2; strcpy(player2.name, "Shane Watson");        player2.position = 1; player2.credits = 10;    player2.gameCaptain =  0; player2.gameViceCaptain =  0; 
                   player3.playerNumber = 3; strcpy(player3.name, "Faf du Plessis");      player3.position = 1; player3.credits = 9;     player3.gameCaptain =  0; player3.gameViceCaptain =  0;
                   player4.playerNumber = 4; strcpy(player4.name, "Suresh Raina");        player4.position = 1; player4.credits = 9.5;   player4.gameCaptain =  0; player4.gameViceCaptain =  0; 
                   player5.playerNumber = 5; strcpy(player5.name, "Ambati Rayudu");       player5.position = 1; player5.credits = 9;     player5.gameCaptain =  0; player5.gameViceCaptain =  0;
                   player6.playerNumber = 6; strcpy(player6.name, "Kedar Jadhav");        player6.position = 1; player6.credits = 8.5;   player6.gameCaptain =  0; player6.gameViceCaptain =  0; 
                   player7.playerNumber = 7; strcpy(player7.name, "Ravindra Jadeja");     player7.position = 2; player7.credits = 8.5;   player7.gameCaptain =  0; player7.gameViceCaptain =  0;
                   player8.playerNumber = 8; strcpy(player8.name, "Deepar Chahar");       player8.position = 3; player8.credits = 8.5;   player8.gameCaptain =  0; player8.gameViceCaptain =  0; 
                   player9.playerNumber = 9; strcpy(player9.name, "Harbhajan Singh");     player9.position = 3; player9.credits = 8.5;   player9.gameCaptain =  0; player9.gameViceCaptain =  0;
                   player10.playerNumber = 10; strcpy(player10.name, "Scott Kuggeleijn"); player10.position = 3; player10.credits = 8;   player10.gameCaptain =  0; player10.gameViceCaptain =  0; 
                   player11.playerNumber = 11; strcpy(player11.name, "Imran Tahir");      player11.position = 3; player11.credits = 9;   player11.gameCaptain =  0; player11.gameViceCaptain =  0;
                  
                   break;//Chennai Super Kings
                   /*MS Dhoni(captain), Suresh Raina, Faf du Plessis, Murali Vijay, Sam Billings,
                    Ambati Rayudu, Dhruv Shorey, N Jagadeesan, Ruturaj Gaikwad, Shane Watson,
                    Ravindra Jadeja, Dwayne Bravo, David Willey, Kedar Jadhav, Chaitanya Bishnoi,
                    Harbhajan Singh, Karn Sharma, Imran Tahir, Mitchell Santner, Shardul Thakur,
                    Deepak Chahar, Lungi Ngidi, Mohit Sharma, KM Asif, Monu Kumar*/

        case 3:    player1.playerNumber = 1; strcpy(player1.name, "Rishabh Pant");            player1.position = 0; player1.credits = 10;     player1.gameCaptain =  0; player1.gameViceCaptain =  0;
                   player2.playerNumber = 2; strcpy(player2.name, "Shikhar Dhawan");          player2.position = 1; player2.credits = 9.5;    player2.gameCaptain =  0; player2.gameViceCaptain =  0; 
                   player3.playerNumber = 3; strcpy(player3.name, "Shreyas Iyer");             player3.position = 1; player3.credits = 9;     player3.gameCaptain =  0; player3.gameViceCaptain =  0;
                   player4.playerNumber = 4; strcpy(player4.name, "Prithvi Shaw");            player4.position = 1; player4.credits = 9;     player4.gameCaptain =  0; player4.gameViceCaptain =  0; 
                   player5.playerNumber = 5; strcpy(player5.name, "Colin Ingram");            player5.position = 1; player5.credits = 8.5;     player5.gameCaptain =  0; player5.gameViceCaptain =  0;
                   player6.playerNumber = 6; strcpy(player6.name, "Axar Patel");              player6.position = 1; player6.credits = 8.5;   player6.gameCaptain =  0; player6.gameViceCaptain =  0; 
                   player7.playerNumber = 7; strcpy(player7.name, "Chris Morris");            player7.position = 2; player7.credits = 9;   player7.gameCaptain =  0; player7.gameViceCaptain =  0;
                   player8.playerNumber = 8; strcpy(player8.name, "Rahul Tewatia");           player8.position = 3; player8.credits = 8;   player8.gameCaptain =  0; player8.gameViceCaptain =  0; 
                   player9.playerNumber = 9; strcpy(player9.name, "Kasigo Rabada");           player9.position = 3; player9.credits = 9;   player9.gameCaptain =  0; player9.gameViceCaptain =  0;
                   player10.playerNumber = 10; strcpy(player10.name, "Ishant Sharma");        player10.position = 3; player10.credits = 8.5;   player10.gameCaptain =  0; player10.gameViceCaptain =  0; 
                   player11.playerNumber = 11; strcpy(player11.name, "Sandeep Lamichhane");   player11.position = 3; player11.credits = 8.5;   player11.gameCaptain =  0; player11.gameViceCaptain =  0;
                 
                   break;//Delhi Capitals 
                   /*Shreyas Iyer(captain), Shikhar Dhawan, Hanuma Vihari, Rishabh Pant, Prithvi Shaw,
                    Colin Munro, Ankush Bains, Colin Ingram, Axar Patel, Harshal Patel, Manjot Kalra,
                    Chris Morris, Keemo Paul, Sherfane Rutherford, Jalaj Saxena, Amit Mishra, Rahul Tewatia,
                    Sandeep Lamichhane, Trent Boult, Kagiso Rabada, Avesh Khan, Ishant Sharma, Nathu Singh, Bandaru Ayyappa*/
        case 4:    player1.playerNumber = 1; strcpy(player1.name, "Jos Buttler");            player1.position = 0; player1.credits = 10.5;     player1.gameCaptain =  0; player1.gameViceCaptain =  0;
                   player2.playerNumber = 2; strcpy(player2.name, "Steven Smith");           player2.position = 1; player2.credits = 9;    player2.gameCaptain =  0; player2.gameViceCaptain =  0; 
                   player3.playerNumber = 3; strcpy(player3.name, "Ajinkya Rahane");          player3.position = 1; player3.credits = 9;     player3.gameCaptain =  0; player3.gameViceCaptain =  0;
                   player4.playerNumber = 4; strcpy(player4.name, "Rahul Tripathi");         player4.position = 1; player4.credits = 8.5;     player4.gameCaptain =  0; player4.gameViceCaptain =  0; 
                   player5.playerNumber = 5; strcpy(player5.name, "Ben Stokes");             player5.position = 2; player5.credits = 9.5;     player5.gameCaptain =  0; player5.gameViceCaptain =  0;
                   player6.playerNumber = 6; strcpy(player6.name, "Prashant Sharma");        player6.position = 1; player6.credits = 8;   player6.gameCaptain =  0; player6.gameViceCaptain =  0; 
                   player7.playerNumber = 7; strcpy(player7.name, "Krishnappa Gowtham");     player7.position = 2; player7.credits = 8.5;   player7.gameCaptain =  0; player7.gameViceCaptain =  0;
                   player8.playerNumber = 8; strcpy(player8.name, "Jofra Archer");           player8.position = 3; player8.credits = 8.5;   player8.gameCaptain =  0; player8.gameViceCaptain =  0; 
                   player9.playerNumber = 9; strcpy(player9.name, "Syreyas Gopal");          player9.position = 3; player9.credits = 8.5;   player9.gameCaptain =  0; player9.gameViceCaptain =  0;
                   player10.playerNumber = 10; strcpy(player10.name, "Dhawal Kulkarni");     player10.position = 3; player10.credits = 8.5;   player10.gameCaptain =  0; player10.gameViceCaptain =  0; 
                   player11.playerNumber = 11; strcpy(player11.name, "Sudhesan Midhun");     player11.position = 3; player11.credits = 8;   player11.gameCaptain =  0; player11.gameViceCaptain =  0;
                
                   break;//Rajasthan Royals
                   /*Ajinkya Rahane(captain), Steven Smith, Jos Buttler, Sanju Samson, Prashant Chopra, 
                   Manan Vohra, Aryaman Birla, Rahul Tripathi, Ben Stokes, Jofra Archer, Stuart Binny, 
                   Shreyas Gopal, Krishnappa Gowtham, Shashank Singh, Liam Livingstone, Shubham Ranjane, 
                   Ashton Turner, Riyan Parag, Mahipal Lomror, Ish Sodhi, Jaydev Unadkat, Dhawal Kulkarni, 
                   Varun Aaron, Oshane Thomas, Sudhesan Midhun*/ 
        case 5:    player1.playerNumber = 1; strcpy(player1.name, "Parthiv Patel");          player1.position = 0; player1.credits = 8.5;     player1.gameCaptain =  0; player1.gameViceCaptain =  0;
                   player2.playerNumber = 2; strcpy(player2.name, "Virat Kohli");            player2.position = 1; player2.credits = 11;    player2.gameCaptain =  0; player2.gameViceCaptain =  0; 
                   player3.playerNumber = 3; strcpy(player3.name, "AB de Villiers");          player3.position = 1; player3.credits = 10;     player3.gameCaptain =  0; player3.gameViceCaptain =  0;
                   player4.playerNumber = 4; strcpy(player4.name, "Akshdeep Nath");          player4.position = 1; player4.credits = 8;     player4.gameCaptain =  0; player4.gameViceCaptain =  0; 
                   player5.playerNumber = 5; strcpy(player5.name, "Marcus Stoinis");         player5.position = 2; player5.credits = 9;     player5.gameCaptain =  0; player5.gameViceCaptain =  0;
                   player6.playerNumber = 6; strcpy(player6.name, "Moeen Ali");              player6.position = 2; player6.credits = 8.5;   player6.gameCaptain =  0; player6.gameViceCaptain =  0; 
                   player7.playerNumber = 7; strcpy(player7.name, "Mohammed Siraj");         player7.position = 3; player7.credits = 8.5;   player7.gameCaptain =  0; player7.gameViceCaptain =  0;
                   player8.playerNumber = 8; strcpy(player8.name, "Navdeep Saini");          player8.position = 3; player8.credits = 8;   player8.gameCaptain =  0; player8.gameViceCaptain =  0; 
                   player9.playerNumber = 9; strcpy(player9.name, "Pawan Negi");             player9.position = 3; player9.credits = 8;   player9.gameCaptain =  0; player9.gameViceCaptain =  0;
                   player10.playerNumber = 10; strcpy(player10.name, "Tim Southee");         player10.position = 3; player10.credits = 8.5;   player10.gameCaptain =  0; player10.gameViceCaptain =  0; 
                   player11.playerNumber = 11; strcpy(player11.name, "Yuzvendra Chahal");    player11.position = 3; player11.credits = 9;   player11.gameCaptain =  0; player11.gameViceCaptain =  0;
               
                   break;//Royal Challengers Bangalore
                   /*Virat Kohli(captain), AB de Villiers, Parthiv Patel, Shimron Hetmyer, Devdutt Padikkal, 
                   Heinrich Klaasen, Himmat Singh, Yuzvendra Chahal, Marcus Stoinis, Colin de Grandhomme, 
                   Moeen Ali, Pawan Negi, Washington Sundar, Shivam Dube, Milind Kumar, Gurkeerat Singh Mann, 
                   Prayas Barman, Akshdeep Nath, Umesh Yadav, Navdeep Saini, Kulwant Khejroliya, Tim Southee, 
                   Mohammed Siraj, Nathan Coulter-Nile*/  
        case 6:    player1.playerNumber = 1; strcpy(player1.name, "Dinesh Karthik");      player1.position = 0; player1.credits = 9;     player1.gameCaptain =  0; player1.gameViceCaptain =  0;
                   player2.playerNumber = 2; strcpy(player2.name, "Chris Lynn");          player2.position = 1; player2.credits = 9.5;    player2.gameCaptain =  0; player2.gameViceCaptain =  0; 
                   player3.playerNumber = 3; strcpy(player3.name, "Nitish Rana");          player3.position = 1; player3.credits = 9;     player3.gameCaptain =  0; player3.gameViceCaptain =  0;
                   player4.playerNumber = 4; strcpy(player4.name, "Robin Uthappa");       player4.position = 1; player4.credits = 9;     player4.gameCaptain =  0; player4.gameViceCaptain =  0; 
                   player5.playerNumber = 5; strcpy(player5.name, "Shubman Gill");        player5.position = 1; player5.credits = 8;     player5.gameCaptain =  0; player5.gameViceCaptain =  0;
                   player6.playerNumber = 6; strcpy(player6.name, "Andre Russell");       player6.position = 2; player6.credits = 10.5;   player6.gameCaptain =  0; player6.gameViceCaptain =  0; 
                   player7.playerNumber = 7; strcpy(player7.name, "Sunil Narine");        player7.position = 2; player7.credits = 9;   player7.gameCaptain =  0; player7.gameViceCaptain =  0;
                   player8.playerNumber = 8; strcpy(player8.name, "Harry Gurney");        player8.position = 3; player8.credits = 8.5;   player8.gameCaptain =  0; player8.gameViceCaptain =  0; 
                   player9.playerNumber = 9; strcpy(player9.name, "Piyush Chawla");       player9.position = 3; player9.credits = 8.5;   player9.gameCaptain =  0; player9.gameViceCaptain =  0;
                   player10.playerNumber = 10; strcpy(player10.name, "Kuldeep Yadav");    player10.position = 3; player10.credits = 8.5;   player10.gameCaptain =  0; player10.gameViceCaptain =  0; 
                   player11.playerNumber = 11; strcpy(player11.name, "Prasidh Krishna");  player11.position = 3; player11.credits = 8;   player11.gameCaptain =  0; player11.gameViceCaptain =  0;
             
                   break;//Kolkata Knight Riders
                   /*Dinesh Karthik(captain), Robin Uthappa, Chris Lynn, Shubman Gill, Rinku Singh, 
                   Nikhil Naik, Joe Denly, Shrikant Mundhe, Carlos Brathwaite, Andre Russell, Sunil Narine, 
                   Nitish Rana, Piyush Chawla, Kuldeep Yadav, Shivam Mavi, Sandeep Warrier, Prasidh Krishna, 
                   Lockie Ferguson, Anrich Nortje, Harry Gurney, Yarra Prithviraj*/  
        case 7:    player1.playerNumber = 1; strcpy(player1.name, "Jonny Bairstow");         player1.position = 0; player1.credits = 9.5;     player1.gameCaptain =  0; player1.gameViceCaptain =  0;
                   player2.playerNumber = 2; strcpy(player2.name, "David Warner");           player2.position = 1; player2.credits = 11;    player2.gameCaptain =  0; player2.gameViceCaptain =  0; 
                   player3.playerNumber = 3; strcpy(player3.name, "Manish Pandey");           player3.position = 1; player3.credits = 8.5;     player3.gameCaptain =  0; player3.gameViceCaptain =  0;
                   player4.playerNumber = 4; strcpy(player4.name, "Deepak Hooda");           player4.position = 1; player4.credits = 8;     player4.gameCaptain =  0; player4.gameViceCaptain =  0; 
                   player5.playerNumber = 5; strcpy(player5.name, "Yusuf Pathan");           player5.position = 1; player5.credits = 8;     player5.gameCaptain =  0; player5.gameViceCaptain =  0;
                   player6.playerNumber = 6; strcpy(player6.name, "Mohammad Nabi");          player6.position = 2; player6.credits = 8.5;   player6.gameCaptain =  0; player6.gameViceCaptain =  0; 
                   player7.playerNumber = 7; strcpy(player7.name, "Vijay Shankar");          player7.position = 2; player7.credits = 9;   player7.gameCaptain =  0; player7.gameViceCaptain =  0;
                   player8.playerNumber = 8; strcpy(player8.name, "Sandeep Sharma");         player8.position = 3; player8.credits = 8;   player8.gameCaptain =  0; player8.gameViceCaptain =  0; 
                   player9.playerNumber = 9; strcpy(player9.name, "Siddarth Kaul");          player9.position = 3; player9.credits = 8.5;   player9.gameCaptain =  0; player9.gameViceCaptain =  0;
                   player10.playerNumber = 10; strcpy(player10.name, "Bhuvneshwar Kumar");   player10.position = 3; player10.credits = 8.5;   player10.gameCaptain =  0; player10.gameViceCaptain =  0; 
                   player11.playerNumber = 11; strcpy(player11.name, "Rashid Khan");         player11.position = 3; player11.credits = 9.5;   player11.gameCaptain =  0; player11.gameViceCaptain =  0;
            
                   break;//Sunrisers Hyderabad
                   /*David Warner, Kane Williamson(captain), Manish Pandey, Deepak Hooda, Ricky Bhui, 
                   Shreevats Goswami, Jonny Bairstow, Wriddhiman Saha, Martin Guptill, Rashid Khan, 
                   Shahbaz Nadeem, Shakib Al Hasan, Yusuf Pathan, Mohammad Nabi, Abhishek Sharma, Vijay Shankar, 
                   Bhuvneshwar Kumar, Siddarth Kaul, Basil Thampi, Sandeep Sharma, 
                   Billy Stanlake, K Khaleel Ahmed, T Natarajan*/
        case 8:    player1.playerNumber = 1; strcpy(player1.name, "Lokesh Rahul");           player1.position = 0; player1.credits = 10;     player1.gameCaptain =  0; player1.gameViceCaptain =  0;
                   player2.playerNumber = 2; strcpy(player2.name, "Chris Gayle");             player2.position = 1; player2.credits = 10.5;    player2.gameCaptain =  0; player2.gameViceCaptain =  0; 
                   player3.playerNumber = 3; strcpy(player3.name, "Mayank Agarwal");          player3.position = 1; player3.credits = 9;     player3.gameCaptain =  0; player3.gameViceCaptain =  0;
                   player4.playerNumber = 4; strcpy(player4.name, "David Miller");            player4.position = 1; player4.credits = 9;     player4.gameCaptain =  0; player4.gameViceCaptain =  0; 
                   player5.playerNumber = 5; strcpy(player5.name, "Sarfaraz Khan");           player5.position = 1; player5.credits = 8.5;     player5.gameCaptain =  0; player5.gameViceCaptain =  0;
                   player6.playerNumber = 6; strcpy(player6.name, "Mandeep Singh");           player6.position = 1; player6.credits = 8;   player6.gameCaptain =  0; player6.gameViceCaptain =  0; 
                   player7.playerNumber = 7; strcpy(player7.name, "Ravichandran Ashwin");     player7.position = 2; player7.credits = 8.5;   player7.gameCaptain =  0; player7.gameViceCaptain =  0;
                   player8.playerNumber = 8; strcpy(player8.name, "Sam Curran");              player8.position = 2; player8.credits = 8.5;   player8.gameCaptain =  0; player8.gameViceCaptain =  0; 
                   player9.playerNumber = 9; strcpy(player9.name, "Andrew Tye");              player9.position = 3; player9.credits = 9;   player9.gameCaptain =  0; player9.gameViceCaptain =  0;
                   player10.playerNumber = 10; strcpy(player10.name, "Murugan Ashwin");       player10.position = 3; player10.credits = 8;   player10.gameCaptain =  0; player10.gameViceCaptain =  0; 
                   player11.playerNumber = 11; strcpy(player11.name, "Mohammad Shami");       player11.position = 3; player11.credits = 8.5;   player11.gameCaptain =  0; player11.gameViceCaptain =  0;
           
                   break;//Kings XI Punjab
                   /*Ravichandran Ashwin(captain), Lokesh Rahul, Chris Gayle, Mayank Agarwal, Karun Nair, 
                   David Miller, Mandeep Singh, Simran Singh, Nicholas Pooran, Sarfaraz Khan, Mujeeb Ur Rahman, 
                   Murugan Ashwin, Mohammed Shami, Andrew Tye, Ankit Rajpoot, Hardus Viljoen, Arshdeep Singh, 
                   Moises Henriques, Varun Chakravarthy, Sam Curran, Darshan Nalkande, Agnivesh Ayachi, Harpreet Brar*/
        default : break;
    }
     
       
    // write struct to file 
    fwrite (&player1, sizeof(struct player), 1, structureToFile); 
    fwrite (&player2, sizeof(struct player), 1, structureToFile); 
    fwrite (&player3, sizeof(struct player), 1, structureToFile); 
    fwrite (&player4, sizeof(struct player), 1, structureToFile); 
    fwrite (&player5, sizeof(struct player), 1, structureToFile); 
    fwrite (&player6, sizeof(struct player), 1, structureToFile); 
    fwrite (&player7, sizeof(struct player), 1, structureToFile); 
    fwrite (&player8, sizeof(struct player), 1, structureToFile); 
    fwrite (&player9, sizeof(struct player), 1, structureToFile); 
    fwrite (&player10, sizeof(struct player), 1, structureToFile); 
    fwrite (&player11, sizeof(struct player), 1, structureToFile); 
          
   
    // close file 
    fclose (structureToFile); 
}

void saveToStructure(char team[3], struct player playing11[11]) { //this function will take team name and array of player then save all the playing players of that team to the array of structure from teamname.dat file.
    FILE *savedFile; 
    struct player input; 
    char teamFile[8];
    strcpy(teamFile,team);
    strcat(teamFile,".dat");

     
    
    savedFile = fopen(teamFile, "r"); 
    if (savedFile == NULL) 
    { 
        fprintf(stderr, "\nError opening file\n"); 
        exit (1); 
    } 
      int i = 0;
    // read file contents till end of file 
    while(fread(&input, sizeof(struct player), 1, savedFile)) {
        printf ("PlayerNumber = %i Name = %s Position = %i  Credits = %f \n", input.playerNumber, 
        input.name, input.position,input.credits); 
        playing11[i].playerNumber = input.playerNumber;
        strcpy(playing11[i].name,input.name);
        playing11[i].position = input.position;
        playing11[i].credits = input.credits;

        i++; 
    };
    // close file 

    fclose (savedFile); 
}

void changeAwayTeamPlayerNumber(struct player away[11]) { // changing playerNumber from 1-11 to 12-22 for convenience 
    for(int i = 0; i < 11; i++) {
        away[i].playerNumber += 11;
    }
}

bool chooseDifferentPlayer(int chosedPlayerNumbers[11],int chosedPlayer, int size) {
  for (int i = 0; i < size; i++) 
    if(chosedPlayerNumbers[i] == chosedPlayer) // If required number is found
      return true;
 return false;  
}

void dreamteam(struct player home[11],struct player away[11], struct player dream11[6][11]) { //this function will yeild 6 dream teams.
    for(int i = 0; i < 6; i++) { // for 6 teams
        float CREDITS = 0.0;
        int keeper = 1;
        int batsmen = 0;
        int bowler = 0;
        int allrounder = 0;
        int homePlayer = 0;
        int awayPlayer = 0;
        int chosedPlayerNumbers[11];

        int chooseWk = rand() % 2 + 1; // either 1 or 2 
         if(chooseWk == 1) {
            strcpy(dream11[i][0].name,home[0].name);
            dream11[i][0].position =  home[0].position;
            dream11[i][0].credits =  home[0].credits;
            dream11[i][0].playerNumber =  home[0].playerNumber;
        }
         else {
            strcpy(dream11[i][0].name,away[0].name);
            dream11[i][0].position =  away[0].position;
            dream11[i][0].credits =  away[0].credits;
            dream11[i][0].playerNumber =  home[0].playerNumber;
        } //there are only two choices for wicket keeper so we choose either one randomly
         CREDITS += dream11[i][0].credits;   
         chosedPlayerNumbers[0] = dream11[i][0].playerNumber;   

        for(int j = 1; j < 11; j++){ // for choosing 10 remaining players
            int choosePlayer = rand() % 22 + 1;
            
            while(chooseDifferentPlayer(chosedPlayerNumbers,choosePlayer,j)) 
              choosePlayer = rand() % 22 + 1;
            
            if(choosePlayer <= 11)
              homePlayer++;
            else
               awayPlayer++;
            
            struct player temp;           
            if(choosePlayer <= 11) { // this is because playerNumber for home team starts from 1 to 11, and 1 is reserved for wk
                strcpy(temp.name,home[choosePlayer-1].name);
                temp.position =  home[choosePlayer-1].position;
                temp.credits =  home[choosePlayer-1].credits;
                temp.playerNumber =  home[choosePlayer-1].playerNumber;
            }
            else {  // similarly playerNumber for away team starts from 12 to 22, and 12 is reserved for wk                
                strcpy(temp.name,away[choosePlayer-12].name);
               temp.position =  away[choosePlayer-12].position;
                temp.credits =  away[choosePlayer-12].credits;
                temp.playerNumber =  away[choosePlayer-12].playerNumber;
            }
            
            switch(temp.position) {
                case 0: keeper++;break;
                case 1: batsmen++; break;
                case 2: allrounder++; break;
                case 3: bowler++; break;
                default: break;
            }

            if(keeper > 1) {
              keeper--;
              j--;
              continue;
            }
            if(batsmen > 5) { // maximum batsmen allowed is 5
                batsmen--;
                j--;
                continue;
            }
            if(allrounder > 3) { // maximum allrounder can be 3
                allrounder--;
                j--;
                continue;
            }
            if(bowler > 5) { // maximum bowler = 5
                bowler--;
                j--;
                continue;
            }
            if(homePlayer > 7) { //max player from one team is 7
                homePlayer--;
                j--;
                continue;
            }
            if(awayPlayer > 7) {// same as above
                awayPlayer--;
                j--;
                continue;
            }
            
            dream11[i][j] = temp;
            CREDITS += dream11[i][j].credits;
            chosedPlayerNumbers[j] = dream11[i][j].playerNumber; 

        }

        if(CREDITS > 100 || batsmen < 3 || bowler < 3 || allrounder < 1) { // these are the restrictions 
            i--;
            continue;
        }

        int chooseCaptain = rand() % 11;
        int chooseViceCaptain = chooseCaptain;
        while(chooseCaptain == chooseViceCaptain) // so that vc and c are not same
            chooseViceCaptain = rand() % 11;
        dream11[i][chooseCaptain].gameCaptain = 1;
        dream11[i][chooseViceCaptain].gameViceCaptain = 1;
    }
}

void displayDreamTeam(struct player dream11[6][11]) { // to display dream teams
    for(int i = 0; i < 6; i++) {
        printf("\n\t\t\t Dream Team %i", i+1);
        printf("\n Players\t\tCredits\t  Position ");
        for(int j = 0; j < 11; j++) {
            printf("\n %*.*s",20,20, dream11[i][j].name);
            printf(" %*.*f",5,5, dream11[i][j].credits);
            switch(dream11[i][j].position) {
                case 0 :printf("\t Keeper");break;
                case 1 :printf("\t Batsmen");break;
                case 2 :printf("\t Allrounder");break;
                case 3 :printf("\t Bowler");break;
                default:break;
            }
            if(dream11[i][j].gameCaptain == 1)
            printf(" \tCaptain");
            else if(dream11[i][j].gameViceCaptain == 1)
            printf(" \tViceCaptian");
        }
    }
}

void displayTeam(struct player team[11]) {
  int i = 0;
   while(i < 11) {
      printf ("PlayerNumber = %i Name = %s Position = %i  Credits = %f \n", team[i].playerNumber, team[i].name, team[i].position, team[i].credits);
      i++;   
    }
}

int main(void) {
    
    srand(time(0)); //for randomness
    struct player home[11], away[11], dream11[6][11];
    char team[2]; int teamId;
    printf("Enter Home Team Name  \n  : "); //ex: MI for Mumbai Indians
    scanf("%s",team);
    teamId = findId(team);
    chooseTeam(team,teamId);
    saveToStructure(team,home);

    printf("\n Home team in main function: \n");
    displayTeam(home);

    printf("Enter Away Team Name  \n  : "); 
    scanf("%s",team);
    teamId = findId(team);
    chooseTeam(team,teamId);
    saveToStructure(team,away);
    changeAwayTeamPlayerNumber(away);
    printf("\n Away team after changing playerNumber:  \n");
    displayTeam(away);

    dreamteam(home,away,dream11);

    displayDreamTeam(dream11);

    printf("\n\n\t\t lets win Rs 1707500");

    return 0;
}