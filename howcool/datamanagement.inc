<?php
class DataManagement{
  public static function config_start(){
    $table = 'howcool_config';
    $data = array(
    'config_id' => '',
    'description' => 'Human Constant',
    'carbon' => 0.99,
    'water' => 5.75,
      );
    $result = drupal_write_record($table, $data);
    $data = array(
    'config_id' => '',
    'description' => 'cool',
    'carbon' => 4,
    'water' => 100,
      );
    $result .= drupal_write_record($table, $data);
    $data = array(
    'config_id' => '',
    'description' => 'ok',
    'carbon' => 7,
    'water' => 200,
      );
    $result .= drupal_write_record($table, $data);
    $data = array(
    'config_id' => '',
    'description' => 'bad',
    'carbon' => 11,
    'water' => 300,
      );
    $result .= drupal_write_record($table, $data);
    DataManagement::addBehavior('รถยนต์',"images/icon/how-cool_03.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addFactor(1,0.106,0);
    DataManagement::addBehaviorItem(1,"1 กิโลเมตร",1);
    DataManagement::addBehaviorItem(1,"3  กิโลเมตร",3);
    DataManagement::addBehaviorItem(1,"5 กิโลเมตร",5);
    DataManagement::addBehaviorItem(1,"10  กิโลเมตร",10);
    DataManagement::addBehaviorItem(1,"15  กิโลเมตร",15);
    DataManagement::addBehaviorItem(1,"20  กิโลเมตร",20);
    DataManagement::addBehaviorItem(1,"25 กิโลเมตร",25);
    DataManagement::addBehaviorItem(1,"30 กิโลเมตร",30);
    DataManagement::addBehaviorItem(1,"35 กิโลเมตร",35);
    DataManagement::addBehaviorItem(1,"40 กิโลเมตร",40);
    DataManagement::addBehaviorItem(1,"50 กิโลเมตร",50);
    DataManagement::addBehaviorItem(1,"60 กิโลเมตร",60);
    DataManagement::addBehaviorItem(1,"70 กิโลเมตร",70);
    DataManagement::addBehaviorItem(1,"80 กิโลเมตร",80);
    DataManagement::addBehaviorItem(1,"90 กิโลเมตร",90);
    DataManagement::addBehaviorItem(1,"100 กิโลเมตร",100);
    DataManagement::addBehaviorItem(1,"150 กิโลเมตร",150);
    DataManagement::addBehaviorItem(1,"200 กิโลเมตร",200);
    
    DataManagement::addBehavior('รถยนต์ขนาดใหญ่',"images/icon/how-cool_04.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addFactor(2,0.1516,0);
    DataManagement::addBehaviorItem(2,"1 กิโลเมตร",1);
    DataManagement::addBehaviorItem(2,"3  กิโลเมตร",3);
    DataManagement::addBehaviorItem(2,"5 กิโลเมตร",5);
    DataManagement::addBehaviorItem(2,"10  กิโลเมตร",10);
    DataManagement::addBehaviorItem(2,"15  กิโลเมตร",15);
    DataManagement::addBehaviorItem(2,"20  กิโลเมตร",20);
    DataManagement::addBehaviorItem(2,"25 กิโลเมตร",25);
    DataManagement::addBehaviorItem(2,"30 กิโลเมตร",30);
    DataManagement::addBehaviorItem(2,"35 กิโลเมตร",35);
    DataManagement::addBehaviorItem(2,"40 กิโลเมตร",40);
    DataManagement::addBehaviorItem(2,"50 กิโลเมตร",50);
    DataManagement::addBehaviorItem(2,"60 กิโลเมตร",60);
    DataManagement::addBehaviorItem(2,"70 กิโลเมตร",70);
    DataManagement::addBehaviorItem(2,"80 กิโลเมตร",80);
    DataManagement::addBehaviorItem(2,"90 กิโลเมตร",90);
    DataManagement::addBehaviorItem(2,"100 กิโลเมตร",100);
    DataManagement::addBehaviorItem(2,"150 กิโลเมตร",150);
    DataManagement::addBehaviorItem(2,"200 กิโลเมตร",200);
    
    DataManagement::addBehavior('รถจักรยานยนต์',"images/icon/how-cool_05.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addFactor(3,0.135,0);
    DataManagement::addBehaviorItem(3,"1 กิโลเมตร",1);
    DataManagement::addBehaviorItem(3,"3  กิโลเมตร",3);
    DataManagement::addBehaviorItem(3,"5 กิโลเมตร",5);
    DataManagement::addBehaviorItem(3,"10  กิโลเมตร",10);
    DataManagement::addBehaviorItem(3,"15  กิโลเมตร",15);
    DataManagement::addBehaviorItem(3,"20  กิโลเมตร",20);
    DataManagement::addBehaviorItem(3,"25 กิโลเมตร",25);
    DataManagement::addBehaviorItem(3,"30 กิโลเมตร",30);
    DataManagement::addBehaviorItem(3,"35 กิโลเมตร",35);
    DataManagement::addBehaviorItem(3,"40 กิโลเมตร",40);
    DataManagement::addBehaviorItem(3,"50 กิโลเมตร",50);
    DataManagement::addBehaviorItem(3,"60 กิโลเมตร",60);
    DataManagement::addBehaviorItem(3,"70 กิโลเมตร",70);
    DataManagement::addBehaviorItem(3,"80 กิโลเมตร",80);
    DataManagement::addBehaviorItem(3,"90 กิโลเมตร",90);
    DataManagement::addBehaviorItem(3,"100 กิโลเมตร",100);
    DataManagement::addBehaviorItem(3,"150 กิโลเมตร",150);
    DataManagement::addBehaviorItem(3,"200 กิโลเมตร",200);
        
    DataManagement::addBehavior('รถไฟฟ้า',"images/icon/how-cool_06.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addFactor(4,0.297,0);
    DataManagement::addBehaviorItem(4,"1 สถานี",1);
    DataManagement::addBehaviorItem(4,"2 สถานี",2);
    DataManagement::addBehaviorItem(4,"3 สถานี",3);
    DataManagement::addBehaviorItem(4,"4 สถานี",4);
    DataManagement::addBehaviorItem(4,"5 สถานี",5);
    DataManagement::addBehaviorItem(4,"10 สถานี",10);
    DataManagement::addBehaviorItem(4,"15 สถานี",15);
    DataManagement::addBehaviorItem(4,"20 สถานี",20);
    DataManagement::addBehaviorItem(4,"25 สถานี",25);
    DataManagement::addBehaviorItem(4,"30 สถานี",30);
    DataManagement::addBehaviorItem(4,"35 สถานี",35);
    DataManagement::addBehaviorItem(4,"40 สถานี",40);
    DataManagement::addBehaviorItem(4,"45 สถานี",45);
    DataManagement::addBehaviorItem(4,"50 สถานี",50);

    DataManagement::addBehavior('รถไฟ',"images/icon/how-cool_07.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('รถเมล์,รถทัวร์',"images/icon/how-cool_08.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('เครื่องบิน',"images/icon/how-cool_10.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('หลอดไฟ',"images/icon/how-cool_11.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('เครื่องวิทยุ',"images/icon/how-cool_12.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('โทรทัศน์',"images/icon/how-cool_13.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('เครื่องเล่นเกมส์',"images/icon/how-cool_14.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('คอมพิวเตอร์',"images/icon/how-cool_15.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('พัดลม',"images/icon/how-cool_16.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('เครื่องปรับอากาศ',"images/icon/how-cool_17.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('โทรศัพท์มือถือ',"images/icon/how-cool_18.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('เครื่องซักผ้า',"images/icon/how-cool_19.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('เครื่องดูดฝุ่น',"images/icon/how-cool_20.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('ตู้เย็น',"images/icon/how-cool_21.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('ไม่โครเวฟ',"images/icon/how-cool_22.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('เตาอบไฟฟ้า',"images/icon/how-cool_23.png",'ระยะที่ขับๆๆๆ');
    
    
    
    DataManagement::addBehavior('เครื่องทำน้ำอุ่น',"images/icon/how-cool_24.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addBehavior('ฝักบัว',"images/icon/how-cool_25.png",'คุณใช้ฝักบัวอาบน้ำรวมทั้งวันประมาณกี่ครั้ง');
    DataManagement::addFactor(43,0.003,20);
    
    DataManagement::addBehaviorItem(43,"1 ครั้ง",1);
    DataManagement::addBehaviorItem(43,"2  ครั้ง",2);
    DataManagement::addBehaviorItem(43,"3 ครั้ง",3);
    DataManagement::addBehaviorItem(43,"4  ครั้ง",4);
    DataManagement::addBehaviorItem(43,"5 ครั้ง",5);
    DataManagement::addBehaviorItem(43,"มากกว่าจำนวนในตัวเลือก",999);
    
    
    DataManagement::addBehavior('ขันตักน้ำ',"images/icon/how-cool_26.png",'คุณใช้ขันตักน้ำรวมทั้งวันประมาณกี่ครั้ง');
    DataManagement::addFactor(44,0.000,1.2);
    
    DataManagement::addBehaviorItem(44,"1 ครั้ง",1);
    DataManagement::addBehaviorItem(44,"2  ครั้ง",2);
    DataManagement::addBehaviorItem(44,"3 ครั้ง",3);
    DataManagement::addBehaviorItem(44,"5  ครั้ง",5);
    DataManagement::addBehaviorItem(44,"10 ครั้ง",10);
    DataManagement::addBehaviorItem(44,"20 ครั้ง",20);
    DataManagement::addBehaviorItem(44,"30 ครั้ง",30);
    DataManagement::addBehaviorItem(44,"40 ครั้ง",40);
    DataManagement::addBehaviorItem(44,"50 ครั้ง",50);    
    DataManagement::addBehaviorItem(44,"มากกว่าจำนวนในตัวเลือก",999);
    
        
    DataManagement::addBehavior('อ่างอาบน้ำ',"images/icon/how-cool_27.png",'คุณใช้อ่างอาบน้ำรวมทั้งวันประมาณกี่ครั้ง');
    
    DataManagement::addFactor(45,0.003,110);
    
    DataManagement::addBehaviorItem(45,"1 ครั้ง",1);
    DataManagement::addBehaviorItem(45,"2  ครั้ง",2);
    DataManagement::addBehaviorItem(45,"3 ครั้ง",3);
    DataManagement::addBehaviorItem(45,"4  ครั้ง",4);
    DataManagement::addBehaviorItem(45,"5 ครั้ง",5);
    DataManagement::addBehaviorItem(45,"6 ครั้ง",6);
    DataManagement::addBehaviorItem(45,"7 ครั้ง",7);
    DataManagement::addBehaviorItem(45,"8 ครั้ง",8);
    DataManagement::addBehaviorItem(45,"9 ครั้ง",9);
    DataManagement::addBehaviorItem(45,"10 ครั้ง",10);    
    DataManagement::addBehaviorItem(45,"มากกว่าจำนวนในตัวเลือก",999);
 
    
      
    DataManagement::addBehavior('สุขภัณฑ์ราดน้ำ',"images/icon/how-cool_28.png",'คุณใช้สุขภัณฑ์ราดน้ำไปประมาณกี่ครั้ง');
    DataManagement::addFactor(46,0.000,2);
    
    DataManagement::addBehaviorItem(46,"1 ครั้ง",1);
    DataManagement::addBehaviorItem(46,"2  ครั้ง",2);
    DataManagement::addBehaviorItem(46,"3 ครั้ง",3);
    DataManagement::addBehaviorItem(46,"4  ครั้ง",4);
    DataManagement::addBehaviorItem(46,"5 ครั้ง",5);
    DataManagement::addBehaviorItem(46,"6 ครั้ง",6);
    DataManagement::addBehaviorItem(46,"7 ครั้ง",7);
    DataManagement::addBehaviorItem(46,"8 ครั้ง",8);
    DataManagement::addBehaviorItem(46,"9 ครั้ง",9);
    DataManagement::addBehaviorItem(46,"10 ครั้ง",10);    
    DataManagement::addBehaviorItem(46,"มากกว่าจำนวนในตัวเลือก",999);
        
    DataManagement::addBehavior('สุขภัณฑ์ชักโครก',"images/icon/how-cool_29.png",'คุณใช้สุขภัณฑ์ชักโครกไปประมาณกี่ครั้ง');
    DataManagement::addFactor(47,0.000,18.5);
    
    DataManagement::addBehaviorItem(47,"1 ครั้ง",1);
    DataManagement::addBehaviorItem(47,"2  ครั้ง",2);
    DataManagement::addBehaviorItem(47,"3 ครั้ง",3);
    DataManagement::addBehaviorItem(47,"4  ครั้ง",4);
    DataManagement::addBehaviorItem(47,"5 ครั้ง",5);
    DataManagement::addBehaviorItem(47,"6 ครั้ง",6);
    DataManagement::addBehaviorItem(47,"7 ครั้ง",7);
    DataManagement::addBehaviorItem(47,"8 ครั้ง",8);
    DataManagement::addBehaviorItem(47,"9 ครั้ง",9);
    DataManagement::addBehaviorItem(47,"10 ครั้ง",10);    
        
    
    
    DataManagement::addBehavior('โถปัสสาวะ',"images/icon/how-cool_30.png",'คุณใช้สุขภัณฑ์ปัสสาวะไปประมาณกี่ครั้ง');
    DataManagement::addFactor(48,0.000,6);
    
    DataManagement::addBehaviorItem(48,"1 ครั้ง",1);
    DataManagement::addBehaviorItem(48,"2 ครั้ง",2);
    DataManagement::addBehaviorItem(48,"3 ครั้ง",3);
    DataManagement::addBehaviorItem(48,"4 ครั้ง",4);
    DataManagement::addBehaviorItem(48,"5 ครั้ง",5);
    DataManagement::addBehaviorItem(48,"6 ครั้ง",6);
    DataManagement::addBehaviorItem(48,"7 ครั้ง",7);
    DataManagement::addBehaviorItem(48,"8 ครั้ง",8);
    DataManagement::addBehaviorItem(48,"9 ครั้ง",9);
    DataManagement::addBehaviorItem(48,"10 ครั้ง",10);  
    
    
    
    DataManagement::addBehavior('ก๊อกน้ำ',"images/icon/how-cool_31.png",'คุณเปิดก๊อกน้ำรวมทั้งวันเป็นเวลาประมาณกี่นาที');
    DataManagement::addFactor(49,0.000,6);
    
    DataManagement::addBehaviorItem(49,"1 นาที",1);
    DataManagement::addBehaviorItem(49,"3 นาที",3);
    DataManagement::addBehaviorItem(49,"5 นาที",5);
    DataManagement::addBehaviorItem(49,"10 นาที",10);
    DataManagement::addBehaviorItem(49,"15 นาที",15);
    DataManagement::addBehaviorItem(49,"20 นาที",20);
    DataManagement::addBehaviorItem(49,"25 นาที",25);
    DataManagement::addBehaviorItem(49,"30 นาที",30);
    DataManagement::addBehaviorItem(49,"35 นาที",35);
    DataManagement::addBehaviorItem(49,"40 นาที",40);     
    DataManagement::addBehaviorItem(49,"45 นาที",45);
    DataManagement::addBehaviorItem(49,"50 นาที",50);
    DataManagement::addBehaviorItem(49,"55 นาที",55);
    DataManagement::addBehaviorItem(49,"60 นาที",60);
    DataManagement::addBehaviorItem(49,"นานกว่าในตัวเลือก",999);      
    
    DataManagement::addBehavior('เครื่องเป่าผม',"images/icon/how-cool_32.png",'คุณใช้เครื่องเป่าผมรวมทั้งวันเป็นเวลาประมาณกี่นาที');
    DataManagement::addFactor(50,0.015,0);
    
    DataManagement::addBehaviorItem(50,"1 นาที",1);
    DataManagement::addBehaviorItem(50,"3 นาที",3);
    DataManagement::addBehaviorItem(50,"5 นาที",5);
    DataManagement::addBehaviorItem(50,"10 นาที",10);
    DataManagement::addBehaviorItem(50,"15 นาที",15);
    DataManagement::addBehaviorItem(50,"20 นาที",20);
    DataManagement::addBehaviorItem(50,"25 นาที",25);
    DataManagement::addBehaviorItem(50,"30 นาที",30);
    DataManagement::addBehaviorItem(50,"35 นาที",35);
    DataManagement::addBehaviorItem(50,"40 นาที",40);     
    DataManagement::addBehaviorItem(50,"45 นาที",45);
    DataManagement::addBehaviorItem(50,"50 นาที",50);
    DataManagement::addBehaviorItem(50,"55 นาที",55);
    DataManagement::addBehaviorItem(50,"60 นาที",60);
    DataManagement::addBehaviorItem(50,"นานกว่าในตัวเลือก",999);      
    
    
    DataManagement::addBehavior('กระดาษทิชชู่',"images/icon/how-cool_33.png",'คุณใช้กระดาษทิชชู่ไปทั้งหมดประมาณกี่แผ่น');
    DataManagement::addFactor(51,0.0018,0);
    
    DataManagement::addBehaviorItem(51,"1 แผ่น",1);
    DataManagement::addBehaviorItem(51,"2 แผ่น",2);
    DataManagement::addBehaviorItem(51,"3 แผ่น",3);
    DataManagement::addBehaviorItem(51,"4 แผ่น",4);
    DataManagement::addBehaviorItem(51,"5 แผ่น",5);
    DataManagement::addBehaviorItem(51,"6 แผ่น",6);
    DataManagement::addBehaviorItem(51,"7 แผ่น",7);
    DataManagement::addBehaviorItem(51,"8 แผ่น",8);
    DataManagement::addBehaviorItem(51,"9 แผ่น",9);
    DataManagement::addBehaviorItem(51,"10 แผ่น",10);   
    DataManagement::addBehaviorItem(51,"11 แผ่น",11);  
    DataManagement::addBehaviorItem(51,"12 แผ่น",12);    
    DataManagement::addBehaviorItem(51,"333 แผ่น (1 ม้วน)",12);        
    DataManagement::addBehaviorItem(51,"นานกว่าในตัวเลือก",999);     
      


    DataManagement::addBehavior('ถุงยางอนามัย',"images/icon/how-cool_34.png",'คุณใช้ถุงยางอนามัยไปทั้งหมดกี่ชิ้น');
    DataManagement::addFactor(52,0.016,0);
    
    DataManagement::addBehaviorItem(52,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(52,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(52,"3 ชิ้น (1 กล่อง)",3);
    DataManagement::addBehaviorItem(52,"4 ชิ้น",4);
    DataManagement::addBehaviorItem(52,"5 ชิ้น",5);
    DataManagement::addBehaviorItem(52,"6 ชิ้น",6);
    DataManagement::addBehaviorItem(52,"7 ชิ้น",7);
    DataManagement::addBehaviorItem(52,"8 ชิ้น",8);
    DataManagement::addBehaviorItem(52,"9 ชิ้น",9);
    DataManagement::addBehaviorItem(52,"10 ชิ้น",10);   
    DataManagement::addBehaviorItem(52,"11 ชิ้น",11);  
    DataManagement::addBehaviorItem(52,"12 ชิ้น",12);        
    DataManagement::addBehaviorItem(52,"นานกว่าในตัวเลือก",999);     
    
    
    DataManagement::addBehavior('ผ้าอนามัย',"images/icon/how-cool_35.png",'คุณใช้ผ้าอนามัยไปทั้งหมดกี่ชิ้น');
    DataManagement::addFactor(53,0.023,0);
    
    DataManagement::addBehaviorItem(53,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(53,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(53,"3 ชิ้น",3);
    DataManagement::addBehaviorItem(53,"4 ชิ้น",4);
    DataManagement::addBehaviorItem(53,"5 ชิ้น",5);
    DataManagement::addBehaviorItem(53,"6 ชิ้น",6);
    DataManagement::addBehaviorItem(53,"7 ชิ้น",7);
    DataManagement::addBehaviorItem(53,"8 ชิ้น",8);
    DataManagement::addBehaviorItem(53,"9 ชิ้น",9);
    DataManagement::addBehaviorItem(53,"10 ชิ้น",10);   
    DataManagement::addBehaviorItem(53,"11 ชิ้น",11);  
    DataManagement::addBehaviorItem(53,"12 ชิ้น",12);        
    DataManagement::addBehaviorItem(53,"นานกว่าในตัวเลือก",999);    
    
       
    DataManagement::addBehavior('บุหรี่',"images/icon/how-cool_36.png",'คุณสูบบุหรี่ไปทั้งหมดกี่มวน');
    DataManagement::addFactor(54,0.005,0);
    
    DataManagement::addBehaviorItem(54,"1 มวน",1);
    DataManagement::addBehaviorItem(54,"2 มวน",2);
    DataManagement::addBehaviorItem(54,"3 มวน",3);
    DataManagement::addBehaviorItem(54,"4 มวน",4);
    DataManagement::addBehaviorItem(54,"5 มวน",5);
    DataManagement::addBehaviorItem(54,"6 มวน",6);
    DataManagement::addBehaviorItem(54,"7 มวน",7);
    DataManagement::addBehaviorItem(54,"8 มวน",8);
    DataManagement::addBehaviorItem(54,"9 มวน",9);
    DataManagement::addBehaviorItem(54,"10 มวน",10);   
    DataManagement::addBehaviorItem(54,"11 มวน",11);  
    DataManagement::addBehaviorItem(54,"12 มวน",12);         
    DataManagement::addBehaviorItem(54,"20 มวน (1 ซอง)",20);   
    DataManagement::addBehaviorItem(54,"นานกว่าในตัวเลือก",999);      
    
    DataManagement::addBehavior('กระดาษ',"images/icon/how-cool_37.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addFactor(55,0.016,0);
    DataManagement::addBehaviorItem(55,"1 แผ่น",1);
    DataManagement::addBehaviorItem(55,"2 แผ่น",2);
    DataManagement::addBehaviorItem(55,"3 แผ่น",3);
    DataManagement::addBehaviorItem(55,"4 แผ่น",4);
    DataManagement::addBehaviorItem(55,"5 แผ่น",5);
    DataManagement::addBehaviorItem(55,"10 แผ่น (หนังสือพิมพ์ข่าวกีฬา)",10);
    DataManagement::addBehaviorItem(55,"20 แผ่น",20);
    DataManagement::addBehaviorItem(55,"30 แผ่น",30);
    DataManagement::addBehaviorItem(55,"40 แผ่น (หนังสือพิมพ์)",40);
    DataManagement::addBehaviorItem(55,"50 แผ่น (หนังสือการ์ตูน)",50);   
    DataManagement::addBehaviorItem(55,"100 แผ่น (นิตยสาร)",100);  
    DataManagement::addBehaviorItem(55,"200 แผ่น (หนังสือพ๊อคเก็ท)",200);    
    DataManagement::addBehaviorItem(55,"300 แผ่น (หนังสือ textbook)",300);        
    DataManagement::addBehaviorItem(55,"นานกว่าในตัวเลือก",999);     
    
        
    DataManagement::addBehavior('ถุงพลาสติก',"images/icon/how-cool_38.png",'คุณรับถุงพลาสติกมากี่ใบ');
    DataManagement::addFactor(56,0.25,0);
    DataManagement::addBehaviorItem(56,"1 ใบ",1);
    DataManagement::addBehaviorItem(56,"2 ใบ",2);
    DataManagement::addBehaviorItem(56,"3 ใบ",3);
    DataManagement::addBehaviorItem(56,"4 ใบ",4);
    DataManagement::addBehaviorItem(56,"5 ใบ",5);
    DataManagement::addBehaviorItem(56,"6 ใบ",6);
    DataManagement::addBehaviorItem(56,"7 ใบ",7);
    DataManagement::addBehaviorItem(56,"8 ใบ",8);
    DataManagement::addBehaviorItem(56,"9 ใบ",9);
    DataManagement::addBehaviorItem(56,"10 ใบ",10);        
    DataManagement::addBehaviorItem(56,"นานกว่าในตัวเลือก",999);    
    
        
    DataManagement::addBehavior('ถุงกระดาษ',"images/icon/how-cool_39.png",'คุณรับถุงกระดาษมากี่ใบ');
    DataManagement::addFactor(57,0.1,0);
    DataManagement::addBehaviorItem(57,"1 ใบ",1);
    DataManagement::addBehaviorItem(57,"2 ใบ",2);
    DataManagement::addBehaviorItem(57,"3 ใบ",3);
    DataManagement::addBehaviorItem(57,"4 ใบ",4);
    DataManagement::addBehaviorItem(57,"5 ใบ",5);
    DataManagement::addBehaviorItem(57,"6 ใบ",6);
    DataManagement::addBehaviorItem(57,"7 ใบ",7);
    DataManagement::addBehaviorItem(57,"8 ใบ",8);
    DataManagement::addBehaviorItem(57,"9 ใบ",9);
    DataManagement::addBehaviorItem(57,"10 ใบ",10);        
    DataManagement::addBehaviorItem(57,"นานกว่าในตัวเลือก",999);    
    
    
        
    DataManagement::addBehavior('ภาชนะพลาสติก',"images/icon/how-cool_40.png",'คุณรับประทานอาหารจากภาชนะพลาสติกกี่ชิ้น');
    DataManagement::addBehaviorItem(58,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(58,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(58,"3 ชิ้น",3);
    DataManagement::addBehaviorItem(58,"4 ชิ้น",4);
    DataManagement::addBehaviorItem(58,"5 ชิ้น",5);
    DataManagement::addBehaviorItem(58,"6 ชิ้น",6);
    DataManagement::addBehaviorItem(58,"7 ชิ้น",7);
    DataManagement::addBehaviorItem(58,"8 ชิ้น",8);
    DataManagement::addBehaviorItem(58,"9 ชิ้น",9);
    DataManagement::addBehaviorItem(58,"10 ชิ้น",10);   
    DataManagement::addBehaviorItem(58,"11 ชิ้น",11);  
    DataManagement::addBehaviorItem(58,"12 ชิ้น",12);        
    DataManagement::addBehaviorItem(58,"นานกว่าในตัวเลือก",999);   
    
    DataManagement::addBehavior('ภาชนะโฟม',"images/icon/how-cool_41.png",'คุณรับประทานอาหารจากภาชนะโฟมกี่ชิ้น');
    DataManagement::addBehaviorItem(59,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(59,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(59,"3 ชิ้น",3);
    DataManagement::addBehaviorItem(59,"4 ชิ้น",4);
    DataManagement::addBehaviorItem(59,"5 ชิ้น",5);
    DataManagement::addBehaviorItem(59,"6 ชิ้น",6);
    DataManagement::addBehaviorItem(59,"7 ชิ้น",7);
    DataManagement::addBehaviorItem(59,"8 ชิ้น",8);
    DataManagement::addBehaviorItem(59,"9 ชิ้น",9);
    DataManagement::addBehaviorItem(59,"10 ชิ้น",10);   
    DataManagement::addBehaviorItem(59,"11 ชิ้น",11);  
    DataManagement::addBehaviorItem(59,"12 ชิ้น",12);        
    DataManagement::addBehaviorItem(59,"นานกว่าในตัวเลือก",999);   
    
    
    DataManagement::addBehavior('ภาชนะกระดาษ',"images/icon/how-cool_42.png",'คุณรับประทานอาหารจากภาชนะกระดาษกี่ชิ้น');
    DataManagement::addBehaviorItem(60,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(60,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(60,"3 ชิ้น",3);
    DataManagement::addBehaviorItem(60,"4 ชิ้น",4);
    DataManagement::addBehaviorItem(60,"5 ชิ้น",5);
    DataManagement::addBehaviorItem(60,"6 ชิ้น",6);
    DataManagement::addBehaviorItem(60,"7 ชิ้น",7);
    DataManagement::addBehaviorItem(60,"8 ชิ้น",8);
    DataManagement::addBehaviorItem(60,"9 ชิ้น",9);
    DataManagement::addBehaviorItem(60,"10 ชิ้น",10);   
    DataManagement::addBehaviorItem(60,"11 ชิ้น",11);  
    DataManagement::addBehaviorItem(60,"12 ชิ้น",12);        
    DataManagement::addBehaviorItem(60,"นานกว่าในตัวเลือก",
    
    
        
    DataManagement::addBehavior('ขวดพลาสติก',"images/icon/how-cool_43.png",'คุณรับประทานเครื่องดื่มจากภาชนะพลาสติกกี่ชิ้น');
    DataManagement::addBehaviorItem(61,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(61,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(61,"3 ชิ้น",3);
    DataManagement::addBehaviorItem(61,"4 ชิ้น",4);
    DataManagement::addBehaviorItem(61,"5 ชิ้น",5);
    DataManagement::addBehaviorItem(61,"6 ชิ้น",6);
    DataManagement::addBehaviorItem(61,"7 ชิ้น",7);
    DataManagement::addBehaviorItem(61,"8 ชิ้น",8);
    DataManagement::addBehaviorItem(61,"9 ชิ้น",9);
    DataManagement::addBehaviorItem(61,"10 ชิ้น",10);   
    DataManagement::addBehaviorItem(61,"11 ชิ้น",11);  
    DataManagement::addBehaviorItem(61,"12 ชิ้น",12);        
    DataManagement::addBehaviorItem(61,"นานกว่าในตัวเลือก",999);   
        
    DataManagement::addBehavior('ขวดแก้ว',"images/icon/how-cool_44.png",'คุณรับประทานเครื่องดื่มจากขวดแก้วกี่ชิ้น');
    DataManagement::addBehaviorItem(62,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(62,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(62,"3 ชิ้น",3);
    DataManagement::addBehaviorItem(62,"4 ชิ้น",4);
    DataManagement::addBehaviorItem(62,"5 ชิ้น",5);
    DataManagement::addBehaviorItem(62,"6 ชิ้น",6);
    DataManagement::addBehaviorItem(62,"7 ชิ้น",7);
    DataManagement::addBehaviorItem(62,"8 ชิ้น",8);
    DataManagement::addBehaviorItem(62,"9 ชิ้น",9);
    DataManagement::addBehaviorItem(62,"10 ชิ้น",10);   
    DataManagement::addBehaviorItem(62,"11 ชิ้น",11);  
    DataManagement::addBehaviorItem(62,"12 ชิ้น",12);        
    DataManagement::addBehaviorItem(62,"นานกว่าในตัวเลือก",999);       

    DataManagement::addBehavior('กระป๋อง',"images/icon/how-cool_45.png",'คุณรับประทานเครื่องดื่มจากกระป๋องทั้งหมดกี่ชิ้น');
    DataManagement::addBehaviorItem(63,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(63,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(63,"3 ชิ้น",3);
    DataManagement::addBehaviorItem(63,"4 ชิ้น",4);
    DataManagement::addBehaviorItem(63,"5 ชิ้น",5);
    DataManagement::addBehaviorItem(63,"6 ชิ้น",6);
    DataManagement::addBehaviorItem(63,"7 ชิ้น",7);
    DataManagement::addBehaviorItem(63,"8 ชิ้น",8);
    DataManagement::addBehaviorItem(63,"9 ชิ้น",9);
    DataManagement::addBehaviorItem(63,"10 ชิ้น",10);   
    DataManagement::addBehaviorItem(63,"11 ชิ้น",11);  
    DataManagement::addBehaviorItem(63,"12 ชิ้น",12);        
    DataManagement::addBehaviorItem(63,"นานกว่าในตัวเลือก",999);       
    
    return $result;
  }
   
   
   
  public static function addBehavior($name,$image_path,$subject){   
    $data = array(
    'display_id' => '',
    'name' => $name,
    'subject' => $subject,
    'image_path' => $image_path,
      );
    $table = 'display';
    $result = drupal_write_record($table, $data);
    return $result;
  }
   
   public static function addFactor($id,$carbon,$water){
      $data = array(
    'display_id' => $id,
    'carbon_factor' => $carbon,
    'water_factor' => $water,
    'factor_id' => '',
      );
    $table = 'factor';
    $result = drupal_write_record($table, $data);
    return $result;
   
   }
   
  function addBehaviorItem($id,$label,$value){
     $data = array(
    'item_id' => '',
    'display_id' => $id,
    'label' => $label,
    'value' => $value,
      );
    $table = 'display_item';
    $result = drupal_write_record($table, $data);
    return $result;

  }
  
  function getAllDisplayChecker(){
   $mysql = "SELECT * FROM display";
   $result = db_query($mysql);
   $data = array();
   $i = 0;
    while ($row = db_fetch_object($result))
    {
      //$data= array();
      $data['display_id'][$i] = $row->display_id;
      $data['name'][$i] = $row->name;
      $data['image_path'][$i] = $row->image_path;
      $data['subject'][$i] = $row->subject;
      $i++;
    }
    return $data;
  }
  
  function getScaleData(){
    /*$mysql = "
SELECT display.display_id, display.name, display.image_path, display.subject, display_item.item_id, display_item.label, display_item.value
FROM display
JOIN display_item ON display.display_id = display_item.display_id
";*/
    $mysql = "SELECT data.display_id, data.name, data.image_path, data.subject, data.item_id, data.label, data.value, factor.carbon_factor, factor.water_factor
FROM factor
JOIN (

SELECT display.display_id, display.name, display.image_path, display.subject, display_item.item_id, display_item.label, display_item.value
FROM display
JOIN display_item ON display.display_id = display_item.display_id
) AS data ON data.display_id = factor.display_id";
    
    $data = array();
    $result = db_query($mysql);
    $i = 0;
    $started = -1;
    $prev_display_id = -1;
    while ($row = db_fetch_object($result))
    {
      $display_id = $row->display_id;
      $item_id =$row->item_id;
      $data[$display_id]['image_path'] =$row->image_path; 
      $data[$display_id]['subject'] =$row->subject;
      $data[$display_id]['label'][$item_id] =$row->label;
      $data[$display_id]['value'][$item_id] =$row->value;
      $data[$display_id]['carbon'] = $row->carbon_factor;
      $data[$display_id]['water'] = $row->water_factor;
    }
    return $data;
  }
  
  function getAllDisplayData(){
    $data = array();
    $table  ='display';
    //$result = db_query("SELECT * FROM $table ");
    $array = array();
    $index = 0;
    
    $mysql = "SELECT data.display_id, data.name, data.image_path, data.subject, data.item_id, data.label, data.value, factor.carbon_factor, factor.water_factor
FROM factor
JOIN (

SELECT display.display_id, display.name, display.image_path, display.subject, display_item.item_id, display_item.label, display_item.value
FROM display
JOIN display_item ON display.display_id = display_item.display_id
) AS data ON data.display_id = factor.display_id";
    
    $result = db_query($mysql);
    $prev_display_id = -1;
    $i = 0;
    $j = 0;
    while ($row = db_fetch_object($result))
    {
      $display_id = $row->display_id;
      if($prev_display_id==-1){
        $prev_display_id=$display_id;
      }else if($prev_display_id!=$display_id){
        drupal_set_message('new one');
        $i++;
        $j=0;
        $prev_display_id=$display_id;
      }
      
      
      $data[$i]['display_id'] = $row->display_id;
      $data[$i]['name'] = $row->name;
      $data[$i]['image_path'] = $row->image_path;
      $data[$i]['subject'] = $row->subject;
      
      if($j ==0){
        $data[$i]['items'] = array();
      }
      
      $data[$i]['items'][$j]['label'] = $row->label;
      $data[$i]['items'][$j]['value'] = $row->value;
      $data[$i]['items'][$j]['carbon_factor'] = $row->carbon_factor;
      $data[$i]['items'][$j]['water_factor'] = $row->water_factor;
      $j++;
      //drupal_set_message(print_r($array['items'][0],1));
    }
    //drupal_set_message('---------------');
    //drupal_set_message(print_r($data[0]['items'][0],1));
    return $data;
  }
  public static function convertToData($input){
    $data = array();
    $data['carbon']=3;
    $data['water'] = 4;
  
    return $data;
  }

}
function data_view(){
  //$ans = DataManagement::addBehavior("รถไฟ","images/icon/how-cool_08.png","คุณนั่งรถไฟบ่อยแค่ไหน");
  //$ans = DataManagement::addBehavior("รถไฟฟ้า","images/icon/how-cool_09.png","คุณนั่งรถไฟฟ้าบ่อยแค่ไหน");
  //$ans = DataManagement::getAllDisplayData();
  //$ans = DataManagement::getScaleData();
  //$test = array_combine($ans[2]['value'],$ans[2]['label']);
  //$show = 'test'.print_r($test,1)."<br>";
  $ans = DataManagement::config_start();
  $show = 'start'.$ans; 
  return $show;
}




