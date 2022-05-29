/*
This code is like a litttle Ai which you random questions and you have to answer it, 
write whatever you want to write in answer then the code reads your answer and trys
to comment best on your answer input.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>

void reply(char randChar);
   int main()
   {
       char randChar = ' ';
       int randNum = 0;
// Provide seed for the random number  // generator.
     srand(time(NULL)); //only do this once
// The ASCII code for ‘a’ is 97, so     // add 97 to the random number to get       // a lower case letter.
// Type cast to character to convert      // it to a char type.
 randChar = (rand()%(90-65))+65; //65 is ASCII for capital A, 90 is ASCII for capital Z
         // printf ("Random char: %c\n", randChar);
    char Ans[70];
    fgets(Ans, sizeof(Ans), stdin);  // read string
    // printf("Notice please type full stop insted of space .\n\n");
//if(randChar != 0){
if(randChar == 'A'){
    printf("Whats your favorite way to spend a day off?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}
else if(randChar == 'B'){
    printf("What type of music are you like?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}
else if(randChar == 'C'){
    printf("What was the last thing you read?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}
else if(randChar == 'D'){
    printf("What's your favorite ice cream topping?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}
else if(randChar == 'E'){
    printf("What was the favorite TV show you being-watched?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}
else if(randChar == 'F'){
    printf("Are you into podcasts or do you only listen to music?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}
else if(randChar == 'G'){
    printf("Do you have a favorite holiday? Why or why not?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}else if(randChar == 'H'){
    printf("If you could only eat one food for the rest of your life, what would it be?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}else if(randChar == 'I'){
    printf("Do you like going to the movies or prefer watching at home?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}else if(randChar == 'J'){
    printf("What's your favorite sleeping position?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}else if(randChar == 'K'){
    printf("How old were you when you had your first celebrity crush, and who was it?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}else if(randChar == 'L'){
    printf("What's one thing that can instantly make your day better?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}else if(randChar == 'M'){
    printf("Do you have any pet yet?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}else if(randChar == 'N'){
    printf("Which meal is your favorite: breakfast, lunch, or dinner?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}else if(randChar == 'O'){
    printf("What song always gets you out on the dance floor?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}else if(randChar == 'P'){
    printf("Ideally, how would you spend your birthday?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}
else if(randChar == 'Q'){
    printf("Are you a fan of musicals instument. why or why not?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}
else if(randChar == 'R'){
    printf("What's your favorite season in the whole year and why?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}
else if(randChar == 'S'){
    printf("What's the best joke you've ever heard?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}
else if(randChar == 'T'){
    printf("What's the phone app you use most?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}
else if(randChar == 'U'){ 
    printf("Would you rather cook or order for your meel?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}
else if(randChar == 'V'){
    printf("Have your ever disliked something and then changed your mind?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}
else if(randChar == 'W'){
    printf("What's your favorite board game?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}
else if(randChar == 'X'){
    printf("What do you like tea or coffee?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}
else if(randChar == 'Y'){
    printf("Is there any product that you couldn't live without?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}
else if(randChar == 'Z'){
    printf("If you could have any animal as a pet, which would it be?\n");
    printf("Ans : ");
    scanf("%s", &Ans);
    
    reply(randChar);
}
//}

     return 0;
}
void reply(char randChar ){
    srand(time(NULL));
    randChar = (rand()%(90-65))+65;
    char Ans[100];
    fgets(Ans, sizeof(Ans), stdin);
    if(randChar == 'A'){
    printf("....*_*....ok");}
    else if(randChar == 'B'){
    printf("....*_*....good");}
    else if(randChar == 'C'){
    printf("....*_*....nice");}
    else if(randChar == 'D'){
    printf("....*_*....superb");}
    else if(randChar == 'E'){
    printf("....*_*....awesome");}
    else if(randChar == 'F'){
    printf("....*_*....Yeah i knew it");}
    else if(randChar == 'G'){
    printf("....*_*....bad");}
    else if(randChar == 'H'){
    printf("....*_*....lol");}
    else if(randChar == 'I'){
    printf("....*_*....sad");}
    else if(randChar == 'J'){
    printf("....*_*....trickly");}
    else if(randChar == 'K'){
    printf("....*_*....jucies");}
    else if(randChar == 'L'){
    printf("....*_*....i wonder");}
    else if(randChar == 'M'){
    printf("....*_*....Your ans is beautiful");}
    else if(randChar == 'N'){
    printf("....*_*....Most welcome");}
    else if(randChar == 'O'){
    printf("....*_*....congo");}
    else if(randChar == 'P'){
    printf("....*_*....romatic");}
    else if(randChar == 'Q'){
    printf("....*_*....i can't belive");}
    else if(randChar == 'R'){
    printf("....*_*....!oh no");}
    else if(randChar == 'S'){
    printf("....*_*....Thank you");}
    else if(randChar == 'T'){
    printf("....*_*....You seems quick");}
    else if(randChar == 'U'){
    printf("....*_*....really");}
    else if(randChar == 'V'){
    printf("....*_*....Me too");}
    else if(randChar == 'W'){
    printf("....*_*....you are right");}
    else if(randChar == 'X'){
    printf("....*_*....you deserve it");}
    else if(randChar == 'Y'){
    printf("....*_*....good thought");}
    else if(randChar == 'Z'){
    printf("....*_*....take care ,bye");}
}
/*

else if(randChar == 'A'){
    printf("");
    printf("Ans : ");
    scanf("%s" &Ans);
    
}
 

16. What’s your go-to guilty pleasure?

17. In the summer, would you rather go to the beach or go camping?

18. What’s your favorite quote from a TV show/movie/book? 

24. When you were a kid, did you eat the crusts on your sandwich or not?

25. What activity instantly calms you?

27. What do you do on your commute to/from work?

31. 


33. 

34. 
35. How do you take your coffee?

36 What's your most prized possession and why?

37. 
38. Do you sleep with a top sheet? Why or why not?

39. 

40. What would be the first thing you'd do if you won the lottery?

41. What’s your favorite way to unwind?

42. How do you enjoy spending your alone time?

43. What’s the best concert you’ve ever been to?

44. Do you have a favorite type of exercise?

45. What causes are you passionate about?

46. What’s something you’re excited about right now?

47. What’s your favorite content genre (horror, sci-fi, rom-com, etc.)?

48. What’s an essential part of your daily routine?

49. What’s the best gift you’ve ever received?

50. What’s the worst gift you’ve ever received, and what did you do about it?
*/