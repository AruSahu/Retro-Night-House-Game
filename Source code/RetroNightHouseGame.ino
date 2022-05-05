/* A simple program to sequentially turn on and turn off 12 LEDs */ 
  //#include "OneButton.h"
  
  int ButtonLeftValue;
  int ButtonRightValue;
  
  int successfully_exit_selector_function = 0;
  int single_multi_choice = 0;
  
  int delay_global = 21;
  int delay_blink = 250;
  int delay_point_blink = 700;
  int delay_halt = 400;
  int delay_winning = 800;
  int delay_boot = 800;
  
  int ButtonLeft  = A0;
  int ButtonRight = A1;
  
  int p = 0;
  
  int player1 = 0;
  int player2 = 0;
  
  int LED1 = 11;
  int LED2 = 10;
  int LED3 = 9;
  int LED4 = 8;
  int LED5 = 7;
  int LED6 = 6;
  int LED7 = 5;
  int LED8 = 4;
  int LED9 = 3;
  int LED10 = 2;
  
  void setup() {
  
     pinMode(ButtonLeft, INPUT);
     pinMode(ButtonRight, INPUT);
    
     pinMode(LED1, OUTPUT);
     pinMode(LED2, OUTPUT);
     pinMode(LED3, OUTPUT);
     pinMode(LED4, OUTPUT);
     pinMode(LED5, OUTPUT);
     pinMode(LED6, OUTPUT);
     pinMode(LED7, OUTPUT);
     pinMode(LED8, OUTPUT);
     pinMode(LED9, OUTPUT);
     pinMode(LED10, OUTPUT);
     boot_screen();
  }
  
  void loop() {
    check_score();
    if(single_multi_choice == 1) {
      single_player();
    }
    if(single_multi_choice == 2) {
      multi_player();
    }
  }
  
  int boot_screen() {
        digitalWrite(LED1, HIGH);
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        //single_multi_selector();
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED1, LOW);
        //single_multi_selector();
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        //single_multi_selector();
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED2, HIGH);
        //single_multi_selector();
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED2, LOW);
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED3, HIGH);
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED3, LOW);
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED4, HIGH);
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED4, LOW);
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED5, HIGH);
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED5, LOW);
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED6, HIGH);
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED6, LOW);
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED7, HIGH);
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED7, LOW);
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED8, HIGH);
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED8, LOW);
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED9, HIGH);
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED9, LOW);
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED10, HIGH);
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        if(single_multi_selector() != 0){
          return 0;
        }
        digitalWrite(LED10, LOW);
        if(single_multi_selector() != 0){
          return 0;
        }
        delay(delay_boot);
        if(single_multi_selector() != 0){
          return 0;
        }
      }
  
  int single_multi_selector(){
    ButtonLeftValue = digitalRead(ButtonLeft);
    ButtonRightValue = digitalRead(ButtonRight);
    if(ButtonLeftValue != LOW){
      single_multi_choice = 1;
      delay(800);
      successfully_exit_selector_function = 1;
      single_player();
    } 
    if(ButtonRightValue != LOW){
      single_multi_choice = 2;
      delay(800);
      successfully_exit_selector_function = 1;
      multi_player();
    }
    return successfully_exit_selector_function;
  }
  
  void check_score() {
    if(player1 == 5){
      if(player2 == 0){
        digitalWrite(LED1, HIGH);
        delay(delay_winning);
        digitalWrite(LED2, HIGH);
        delay(delay_winning);
        digitalWrite(LED3, HIGH);
        delay(delay_winning);
        digitalWrite(LED4, HIGH);
        delay(delay_winning);
        digitalWrite(LED5, HIGH);
        delay(delay_winning);
      }
      if(player2 == 1){
        digitalWrite(LED1, HIGH);
        digitalWrite(LED10, HIGH);
        delay(delay_winning);
        digitalWrite(LED2, HIGH);
        delay(delay_winning);
        digitalWrite(LED3, HIGH);
        delay(delay_winning);
        digitalWrite(LED4, HIGH);
        delay(delay_winning);
        digitalWrite(LED5, HIGH);
        delay(delay_winning);
      }
      if(player2 == 2){
        digitalWrite(LED1, HIGH);
        digitalWrite(LED10, HIGH);
        delay(delay_winning);
        digitalWrite(LED2, HIGH);
        digitalWrite(LED9, HIGH);
        delay(delay_winning);
        digitalWrite(LED3, HIGH);
        delay(delay_winning);
        digitalWrite(LED4, HIGH);
        delay(delay_winning);
        digitalWrite(LED5, HIGH);
        delay(delay_winning);
      }
      if(player2 == 3){
        digitalWrite(LED1, HIGH);
        digitalWrite(LED10, HIGH);
        delay(delay_winning);
        digitalWrite(LED2, HIGH);
        digitalWrite(LED9, HIGH);
        delay(delay_winning);
        digitalWrite(LED3, HIGH);
        digitalWrite(LED8, HIGH);
        delay(delay_winning);
        digitalWrite(LED4, HIGH);
        delay(delay_winning);
        digitalWrite(LED5, HIGH);
        delay(delay_winning);
      }
      if(player2 == 4){
        digitalWrite(LED1, HIGH);
        digitalWrite(LED10, HIGH);
        delay(delay_winning);
        digitalWrite(LED2, HIGH);
        digitalWrite(LED9, HIGH);
        delay(delay_winning);
        digitalWrite(LED3, HIGH);
        digitalWrite(LED8, HIGH);
        delay(delay_winning);
        digitalWrite(LED4, HIGH);
        digitalWrite(LED7, HIGH);
        delay(delay_winning);
        digitalWrite(LED5, HIGH);
        delay(delay_winning);
      }
      delay(10000);
      restart_game();
      boot_screen();
    }
    if(player2 == 5){
      if(player1 == 0){
        digitalWrite(LED10, HIGH);
        delay(delay_winning);
        digitalWrite(LED9, HIGH);
        delay(delay_winning);
        digitalWrite(LED8, HIGH);
        delay(delay_winning);
        digitalWrite(LED7, HIGH);
        delay(delay_winning);
        digitalWrite(LED6, HIGH);
        delay(delay_winning);
      }
      if(player1 == 1){
        digitalWrite(LED10, HIGH);
        digitalWrite(LED1, HIGH);
        delay(delay_winning);
        digitalWrite(LED9, HIGH);
        delay(delay_winning);
        digitalWrite(LED8, HIGH);
        delay(delay_winning);
        digitalWrite(LED7, HIGH);
        delay(delay_winning);
        digitalWrite(LED6, HIGH);
        delay(delay_winning);
      }
      if(player1 == 2){
        digitalWrite(LED10, HIGH);
        digitalWrite(LED1, HIGH);
        delay(delay_winning);
        digitalWrite(LED9, HIGH);
        digitalWrite(LED2, HIGH);
        delay(delay_winning);
        digitalWrite(LED8, HIGH);
        delay(delay_winning);
        digitalWrite(LED7, HIGH);
        delay(delay_winning);
        digitalWrite(LED6, HIGH);
        delay(delay_winning);
      }
      if(player1 == 3){
        digitalWrite(LED10, HIGH);
        digitalWrite(LED1, HIGH);
        delay(delay_winning);
        digitalWrite(LED9, HIGH);
        digitalWrite(LED2, HIGH);
        delay(delay_winning);
        digitalWrite(LED3, HIGH);
        digitalWrite(LED8, HIGH);
        delay(delay_winning);
        digitalWrite(LED7, HIGH);
        delay(delay_winning);
        digitalWrite(LED6, HIGH);
        delay(delay_winning);
      }
      if(player1 == 4){
        digitalWrite(LED1, HIGH);
        digitalWrite(LED10, HIGH);
        delay(delay_winning);
        digitalWrite(LED2, HIGH);
        digitalWrite(LED9, HIGH);
        delay(delay_winning);
        digitalWrite(LED3, HIGH);
        digitalWrite(LED8, HIGH);
        delay(delay_winning);
        digitalWrite(LED4, HIGH);
        digitalWrite(LED7, HIGH);
        delay(delay_winning);
        digitalWrite(LED6, HIGH);
        delay(delay_winning);
      }
      delay(10000);
      restart_game();
      boot_screen();
    }
    boot_screen();
  }
  
  void restart_game() {
        digitalWrite(LED1, LOW);
        digitalWrite(LED10, LOW);
        delay(delay_winning);
        digitalWrite(LED2, LOW);
        digitalWrite(LED9, LOW);
        delay(delay_winning);
        digitalWrite(LED3, LOW);
        digitalWrite(LED8, LOW);
        delay(delay_winning);
        digitalWrite(LED4, LOW);
        digitalWrite(LED7, LOW);
        delay(delay_winning);
        digitalWrite(LED5, LOW);
        digitalWrite(LED6, LOW);
        delay(delay_winning);
    
    ButtonLeftValue = 0;
    ButtonRightValue = 0;
    
    successfully_exit_selector_function = 0;
    single_multi_choice = 0;
      
    p = 0;
    
    player1 = 0;
    player2 = 0;
  }
  
  void multi_player() {
      digitalWrite(LED1, HIGH);   
      multi_player_stopper(1); 
      delay(delay_global);
      multi_player_stopper(1);  
      digitalWrite(LED1, LOW); 
      multi_player_stopper(1);     
      digitalWrite(LED2, HIGH);    
      multi_player_stopper(2); 
      delay(delay_global);
      multi_player_stopper(2); 
      digitalWrite(LED2, LOW);         
      multi_player_stopper(2); 
      digitalWrite(LED3, HIGH);    
      multi_player_stopper(3); 
      delay(delay_global);       
      multi_player_stopper(3); 
      digitalWrite(LED3, LOW);  
      multi_player_stopper(3); 
      digitalWrite(LED4, HIGH);    
      multi_player_stopper(4); 
      delay(delay_global);     
      multi_player_stopper(4);
      digitalWrite(LED4, LOW);        
      multi_player_stopper(4);
      digitalWrite(LED5, HIGH);    
      multi_player_stopper(5);
      delay(delay_global);    
      multi_player_stopper(5);
      digitalWrite(LED5, LOW);
      multi_player_stopper(5);
      digitalWrite(LED6, HIGH);
      multi_player_stopper(6);
      delay(delay_global);         
      multi_player_stopper(6);
      digitalWrite(LED6, LOW);
      multi_player_stopper(6);
      digitalWrite(LED7, HIGH);
      multi_player_stopper(7);
      delay(delay_global);         
      multi_player_stopper(7);
      digitalWrite(LED7, LOW);
      multi_player_stopper(7);
      digitalWrite(LED8, HIGH);
      multi_player_stopper(8);
      delay(delay_global);       
      multi_player_stopper(8);
      digitalWrite(LED8, LOW);
      multi_player_stopper(8);
      digitalWrite(LED9, HIGH);
      multi_player_stopper(9);
      delay(delay_global);         
      multi_player_stopper(9);
      digitalWrite(LED9, LOW);
      multi_player_stopper(9);
      digitalWrite(LED10, HIGH);
      multi_player_stopper(10);
      delay(delay_global);          
      multi_player_stopper(10);
      digitalWrite(LED10, LOW);
      multi_player_stopper(10);
      delay(delay_global); 
      multi_player_stopper(10);
      digitalWrite(LED9, HIGH);
      multi_player_stopper(9);
      delay(delay_global);         
      multi_player_stopper(9);
      digitalWrite(LED9, LOW);
      multi_player_stopper(9);
      digitalWrite(LED8, HIGH);
      multi_player_stopper(8);
      delay(delay_global);       
      multi_player_stopper(8);
      digitalWrite(LED8, LOW);
      multi_player_stopper(8);
      digitalWrite(LED7, HIGH);
      multi_player_stopper(7);
      delay(delay_global);         
      multi_player_stopper(7);
      digitalWrite(LED7, LOW);
      multi_player_stopper(7);
      digitalWrite(LED6, HIGH);
      multi_player_stopper(6);
      delay(delay_global);         
      multi_player_stopper(6);
      digitalWrite(LED6, LOW);
      multi_player_stopper(6);
      digitalWrite(LED5, HIGH);    
      multi_player_stopper(5);
      delay(delay_global);    
      multi_player_stopper(5);
      digitalWrite(LED5, LOW);
      multi_player_stopper(5);
      digitalWrite(LED4, HIGH);    
      multi_player_stopper(4); 
      delay(delay_global);     
      multi_player_stopper(4);
      digitalWrite(LED4, LOW);        
      multi_player_stopper(4);
      digitalWrite(LED3, HIGH);    
      multi_player_stopper(3); 
      delay(delay_global);       
      multi_player_stopper(3); 
      digitalWrite(LED3, LOW);  
      multi_player_stopper(3); 
      digitalWrite(LED2, HIGH);    
      multi_player_stopper(2); 
      delay(delay_global);
      multi_player_stopper(2); 
      digitalWrite(LED2, LOW);         
      multi_player_stopper(2); 
      digitalWrite(LED1, HIGH);   
      multi_player_stopper(1); 
      delay(delay_global);
      multi_player_stopper(1);  
      digitalWrite(LED1, LOW); 
      multi_player_stopper(1); 
  }
  
  void single_player() {
    //ButtonLeftValue = digitalRead(ButtonLeft);
    //ButtonRightValue = digitalRead(ButtonRight);
    //ButtonRightValue = 0;
      digitalWrite(LED1, HIGH);   
      single_player_stopper(1); 
      delay(delay_global);
      single_player_stopper(1);  
      digitalWrite(LED1, LOW); 
      single_player_stopper(1);     
      digitalWrite(LED2, HIGH);    
      single_player_stopper(2); 
      delay(delay_global);
      single_player_stopper(2); 
      digitalWrite(LED2, LOW);         
      single_player_stopper(2); 
      digitalWrite(LED3, HIGH);    
      single_player_stopper(3); 
      delay(delay_global);       
      single_player_stopper(3); 
      digitalWrite(LED3, LOW);  
      single_player_stopper(3); 
      digitalWrite(LED4, HIGH);    
      single_player_stopper(4); 
      delay(delay_global);     
      single_player_stopper(4);
      digitalWrite(LED4, LOW);        
      single_player_stopper(4);
      digitalWrite(LED5, HIGH);    
      single_player_stopper(5);
      delay(delay_global);    
      single_player_stopper(5);
      digitalWrite(LED5, LOW);
      single_player_stopper(5);
      digitalWrite(LED6, HIGH);
      single_player_stopper(6);
      delay(delay_global);         
      single_player_stopper(6);
      digitalWrite(LED6, LOW);
      single_player_stopper(6);
      digitalWrite(LED7, HIGH);
      single_player_stopper(7);
      delay(delay_global);         
      single_player_stopper(7);
      digitalWrite(LED7, LOW);
      single_player_stopper(7);
      digitalWrite(LED8, HIGH);
      single_player_stopper(8);
      delay(delay_global);       
      single_player_stopper(8);
      digitalWrite(LED8, LOW);
      single_player_stopper(8);
      digitalWrite(LED9, HIGH);
      single_player_stopper(9);
      delay(delay_global);         
      single_player_stopper(9);
      digitalWrite(LED9, LOW);
      single_player_stopper(9);
      digitalWrite(LED10, HIGH);
      single_player_stopper(9);
      delay(delay_global);          
      single_player_stopper(10);
      digitalWrite(LED10, LOW);
      single_player_stopper(10);
      delay(delay_global); 
      single_player_stopper(10);
      digitalWrite(LED9, HIGH);
      single_player_stopper(9);
      delay(delay_global);         
      single_player_stopper(9);
      digitalWrite(LED9, LOW);
      single_player_stopper(9);
      digitalWrite(LED8, HIGH);
      single_player_stopper(8);
      delay(delay_global);       
      single_player_stopper(8);
      digitalWrite(LED8, LOW);
      single_player_stopper(8);
      digitalWrite(LED7, HIGH);
      single_player_stopper(7);
      delay(delay_global);         
      single_player_stopper(7);
      digitalWrite(LED7, LOW);
      single_player_stopper(7);
      digitalWrite(LED6, HIGH);
      single_player_stopper(6);
      delay(delay_global);         
      single_player_stopper(6);
      digitalWrite(LED6, LOW);
      single_player_stopper(6);
      digitalWrite(LED5, HIGH);    
      single_player_stopper(5);
      delay(delay_global);    
      single_player_stopper(5);
      digitalWrite(LED5, LOW);
      single_player_stopper(5);
      digitalWrite(LED4, HIGH);    
      single_player_stopper(4); 
      delay(delay_global);     
      single_player_stopper(4);
      digitalWrite(LED4, LOW);        
      single_player_stopper(4);
      digitalWrite(LED3, HIGH);    
      single_player_stopper(3); 
      delay(delay_global);       
      single_player_stopper(3); 
      digitalWrite(LED3, LOW);  
      single_player_stopper(3); 
      digitalWrite(LED2, HIGH);    
      single_player_stopper(2); 
      delay(delay_global);
      single_player_stopper(2); 
      digitalWrite(LED2, LOW);         
      single_player_stopper(2); 
      digitalWrite(LED1, HIGH);   
      single_player_stopper(1); 
      delay(delay_global);
      single_player_stopper(1);  
      digitalWrite(LED1, LOW); 
      single_player_stopper(1); 
  }
  
  void multi_player_stopper(int led_value) {
    ButtonLeftValue = digitalRead(ButtonLeft);
    ButtonRightValue = digitalRead(ButtonRight);
    if(ButtonLeftValue != LOW){
     if(led_value == 1){
        while(1) {
          digitalWrite(LED1, HIGH);
          delay(delay_point_blink);
          digitalWrite(LED1, LOW);
          delay(delay_point_blink);         
          break;
        }
     }
     if(led_value == 10){
      player1++;
        digitalWrite(LED10, LOW);
        delay(delay_halt);
        for(int i = 0; i < player1; i++){
          digitalWrite(LED10, HIGH);
          delay(delay_point_blink);
          digitalWrite(LED10, LOW);
          delay(delay_point_blink); 
        }
        if(player1 == 5){
          check_score();
        }
        digitalWrite(LED10, HIGH);
        delay(250);
        digitalWrite(LED10, LOW);
       }
     }
    if(ButtonRightValue != LOW){
     if(led_value == 1){
      player2++;
        digitalWrite(LED1, LOW);
        delay(delay_halt);
        for(int i = 0; i < player2; i++){
          digitalWrite(LED1, HIGH);
          delay(delay_point_blink);
          digitalWrite(LED1, LOW);
          delay(delay_point_blink); 
        }
        if(player2 == 5){
          check_score();
        }
        digitalWrite(LED1, HIGH);
       delay(250);
     }
     if(led_value == 10){
        while(1) {
          digitalWrite(LED10, HIGH );
          delay(delay_point_blink);
          digitalWrite(LED10, LOW);
          delay(delay_point_blink); 
          break;
        }
     }
    }
    if(ButtonLeftValue != LOW || ButtonRightValue != LOW){
      if(led_value == 2){
        while(1) {
          digitalWrite(LED2, LOW);
          delay(delay_blink);
          digitalWrite(LED2, HIGH);
          delay(delay_blink);
          digitalWrite(LED2, LOW);
          delay(delay_blink);
          break;
        }
     }
     if(led_value == 3){
        while(1) {
          digitalWrite(LED3, LOW);
          delay(delay_blink);
          digitalWrite(LED3, HIGH);
          delay(delay_blink);
          digitalWrite(LED3, LOW);
          delay(delay_blink);
          break;
        }
     }
     if(led_value == 4){
        while(1) {
          digitalWrite(LED4, LOW);
          delay(delay_blink);
          digitalWrite(LED4, HIGH);
          delay(delay_blink);
          digitalWrite(LED4, LOW);
          delay(delay_blink);
          break;
        }
     }
     if(led_value == 5){
        while(1) {
          digitalWrite(LED5, LOW);
          delay(delay_blink);
          digitalWrite(LED5, HIGH);
          delay(delay_blink);
          digitalWrite(LED5, LOW);
          delay(delay_blink);
          break;
        }
     }
     if(led_value == 6){
        while(1) {
          digitalWrite(LED6, LOW);
          delay(delay_blink);
          digitalWrite(LED6, HIGH);
          delay(delay_blink);
          digitalWrite(LED6, LOW);
          delay(delay_blink);
          break;
        }
     }
     if(led_value == 7){
        while(1) {
          digitalWrite(LED7, LOW);
          delay(delay_blink);
          digitalWrite(LED7, HIGH);
          delay(delay_blink);
          digitalWrite(LED7, LOW);
          delay(delay_blink);
          break;
        }
     }
     if(led_value == 8){
        while(1) {
          digitalWrite(LED8, LOW);
          delay(delay_blink);
          digitalWrite(LED8, HIGH);
          delay(delay_blink);
          digitalWrite(LED8, LOW);
          delay(delay_blink);
          break;
        }
     }
     if(led_value == 9){
        while(1) {
          digitalWrite(LED9, LOW);
          delay(delay_blink);
          digitalWrite(LED9, HIGH);
          delay(delay_blink);
          digitalWrite(LED9, LOW);
          delay(delay_blink);
          break;
        }
     }
    }
  }
  
  void single_player_stopper(int led_value){
   ButtonLeftValue = digitalRead(ButtonLeft);
   //ButtonRightValue = digitalRead(ButtonRight);
   if(ButtonLeftValue != LOW){
     if(led_value == 1){
      while(1) {
          digitalWrite(LED1, LOW);
          delay(delay_blink);
          digitalWrite(LED1, HIGH);
          delay(delay_blink);
          digitalWrite(LED1, LOW);
          delay(delay_blink);
          break;
      }
     }
     if(led_value == 2){
        while(1) {
          digitalWrite(LED2, LOW);
          delay(delay_blink);
          digitalWrite(LED2, HIGH);
          delay(delay_blink);
          digitalWrite(LED2, LOW);
          delay(delay_blink);
          break;
        }
     }
     if(led_value == 3){
        while(1) {
          digitalWrite(LED3, LOW);
          delay(delay_blink);
          digitalWrite(LED3, HIGH);
          delay(delay_blink);
          digitalWrite(LED3, LOW);
          delay(delay_blink);
          break;
        }
     }
     if(led_value == 4){
        while(1) {
          digitalWrite(LED4, LOW);
          delay(delay_blink);
          digitalWrite(LED4, HIGH);
          delay(delay_blink);
          digitalWrite(LED4, LOW);
          delay(delay_blink);
          break;
        }
     }
     if(led_value == 5){
        while(1) {
          digitalWrite(LED5, LOW);
          delay(delay_blink);
          digitalWrite(LED5, HIGH);
          delay(delay_blink);
          digitalWrite(LED5, LOW);
          delay(delay_blink);
          break;
        }
     }
     if(led_value == 6){
        while(1) {
          digitalWrite(LED6, LOW);
          delay(delay_blink);
          digitalWrite(LED6, HIGH);
          delay(delay_blink);
          digitalWrite(LED6, LOW);
          delay(delay_blink);
          break;
        }
     }
     if(led_value == 7){
        while(1) {
          digitalWrite(LED7, LOW);
          delay(delay_blink);
          digitalWrite(LED7, HIGH);
          delay(delay_blink);
          digitalWrite(LED7, LOW);
          delay(delay_blink);
          break;
        }
     }
     if(led_value == 8){
        while(1) {
          digitalWrite(LED8, LOW);
          delay(delay_blink);
          digitalWrite(LED8, HIGH);
          delay(delay_blink);
          digitalWrite(LED8, LOW);
          delay(delay_blink);
          break;
        }
     }
     if(led_value == 9){
        while(1) {
          digitalWrite(LED9, LOW);
          delay(delay_blink);
          digitalWrite(LED9, HIGH);
          delay(delay_blink);
          digitalWrite(LED9, LOW);
          delay(delay_blink);
          break;
        } 
     }
     if(led_value == 10){
       player1++;
      digitalWrite(LED10, LOW);
      delay(delay_halt);
      for(int i = 0; i < player1; i++){
        digitalWrite(LED10, HIGH);
        delay(delay_point_blink);
        digitalWrite(LED10, LOW);
        delay(delay_point_blink); 
      }
      if(player1 == 5){
        check_score();
      }
      digitalWrite(LED10, HIGH);
      delay(250);
     }
    }
  }
