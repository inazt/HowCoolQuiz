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
    DataManagement::addBehaviorItem(3,"1 สถานี",1);
    DataManagement::addBehaviorItem(3,"2 สถานี",2);
    DataManagement::addBehaviorItem(3,"3 สถานี",3);
    DataManagement::addBehaviorItem(3,"4 สถานี",4);
    DataManagement::addBehaviorItem(3,"5 สถานี",5);
    DataManagement::addBehaviorItem(3,"10 สถานี",10);
    DataManagement::addBehaviorItem(3,"15 สถานี",15);
    DataManagement::addBehaviorItem(3,"20 สถานี",20);
    DataManagement::addBehaviorItem(3,"25 สถานี",25);
    DataManagement::addBehaviorItem(3,"30 สถานี",30);
    DataManagement::addBehaviorItem(3,"35 สถานี",35);
    DataManagement::addBehaviorItem(3,"40 สถานี",40);
    DataManagement::addBehaviorItem(3,"45 สถานี",45);
    DataManagement::addBehaviorItem(3,"50 สถานี",50);

    DataManagement::addBehavior('รถไฟ',"images/icon/how-cool_07.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addFactor(6,0.434,0);
    DataManagement::addBehaviorItem(4,"สายเหนือ ",751);
    DataManagement::addBehaviorItem(4,"สายใต้ ",979.5);
    DataManagement::addBehaviorItem(4,"สายตะวันออก ",227.5);
    DataManagement::addBehaviorItem(4,"สายตะวันออกเฉียงเหนือ",601.25);
    DataManagement::addBehaviorItem(4,"สายตะวันตก",175.6);
    DataManagement::addBehaviorItem(4,"สายแม่กลอง ",32.5); 
     
    
    DataManagement::addBehavior('รถเมล์,รถทัวร์',"images/icon/how-cool_08.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addFactor(7,0.125,0);
    DataManagement::addBehaviorItem(7,"1 กิโลเมตร",1);
    DataManagement::addBehaviorItem(7,"3  กิโลเมตร",3);
    DataManagement::addBehaviorItem(7,"5 กิโลเมตร",5);
    DataManagement::addBehaviorItem(7,"10  กิโลเมตร",10);
    DataManagement::addBehaviorItem(7,"15  กิโลเมตร",15);
    DataManagement::addBehaviorItem(7,"20  กิโลเมตร",20);
    DataManagement::addBehaviorItem(7,"25 กิโลเมตร",25);
    DataManagement::addBehaviorItem(7,"30 กิโลเมตร",30);
    DataManagement::addBehaviorItem(7,"35 กิโลเมตร",35);
    DataManagement::addBehaviorItem(7,"40 กิโลเมตร",40);
    DataManagement::addBehaviorItem(7,"50 กิโลเมตร",50);
    DataManagement::addBehaviorItem(7,"60 กิโลเมตร",60);
    DataManagement::addBehaviorItem(7,"70 กิโลเมตร",70);
    DataManagement::addBehaviorItem(7,"80 กิโลเมตร",80);
    DataManagement::addBehaviorItem(7,"90 กิโลเมตร",90);
    DataManagement::addBehaviorItem(7,"100 กิโลเมตร",100);
    DataManagement::addBehaviorItem(7,"150 กิโลเมตร",150);
    DataManagement::addBehaviorItem(7,"200 กิโลเมตร",200);
    DataManagement::addBehaviorItem(7,"มากกว่าจำนวนในตัวเลือก",999);
    
          


    DataManagement::addBehavior('เครื่องบิน',"images/icon/how-cool_10.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addFactor(8,1,0);
    DataManagement::addBehaviorItem(8,"ในประเทศ",363);
    DataManagement::addBehaviorItem(8,"ในทวีปเอเชีย",2090);
    DataManagement::addBehaviorItem(8,"ออสเตรเลีย",3426);
    DataManagement::addBehaviorItem(8,"ประเทศในยุโรป",4090);
    DataManagement::addBehaviorItem(8,"ประเทศในแอฟริกา",4454);
    DataManagement::addBehaviorItem(8,"ประเทศในทวีปอเมริกาเหนือ",6226);
    DataManagement::addBehaviorItem(8,"ประเทศในทวีปอเมริกาใต้",7272);
 
    
    DataManagement::addBehavior('หลอดไฟ',"images/icon/how-cool_11.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addFactor(9,0.0088,0);
    
    DataManagement::addBehaviorItem(9,"1 ดวง",1);
    DataManagement::addBehaviorItem(9,"2 ดวง",2);
    DataManagement::addBehaviorItem(9,"3 ดวง",3);
    DataManagement::addBehaviorItem(9,"4 ดวง",4);
    DataManagement::addBehaviorItem(9,"5 ดวง",5);
    DataManagement::addBehaviorItem(9,"มากกว่าจำนวนในตัวเลือก",999);    
    
    
    DataManagement::addBehavior('เครื่องวิทยุ',"images/icon/how-cool_12.png",'คุณเปิดวิทยุกี่ชั่วโมง');
    DataManagement::addFactor(10,0.0057,0);
    for ($i=1;$i<=24;$i++) {
      DataManagement::addBehaviorItem(10,"$i ชั่วโมง",$i);
    }  
    
    
    DataManagement::addBehavior('โทรทัศน์',"images/icon/how-cool_13.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addFactor(11,0.012,0);
    for ($i=1;$i<=24;$i++) {
      DataManagement::addBehaviorItem(11,"$i ชั่วโมง",$i);
    } 
    
    DataManagement::addBehavior('เครื่องเล่นเกมส์',"images/icon/how-cool_14.png",'คุณเล่นเกมส์รวมแล้วเป็นเวลา');
    DataManagement::addFactor(12,0.0029,0);
    DataManagement::addBehaviorItem(12,"1 นาที",1);
    DataManagement::addBehaviorItem(12,"3 นาที",3);
    DataManagement::addBehaviorItem(12,"5 นาที",5);
    DataManagement::addBehaviorItem(12,"10 นาที",10);
    DataManagement::addBehaviorItem(12,"15 นาที",15);
    DataManagement::addBehaviorItem(12,"20 นาที",20);
    DataManagement::addBehaviorItem(12,"25 นาที",25);
    DataManagement::addBehaviorItem(12,"30 นาที",30);
    DataManagement::addBehaviorItem(12,"35 นาที",35);
    DataManagement::addBehaviorItem(12,"40 นาที",40);     
    DataManagement::addBehaviorItem(12,"45 นาที",45);
    DataManagement::addBehaviorItem(12,"100 นาที",50);
    DataManagement::addBehaviorItem(12,"120 นาที",55);
    DataManagement::addBehaviorItem(12,"300 นาที",60);
    DataManagement::addBehaviorItem(12,"นานกว่าในตัวเลือก",999); 
    
    
    
    DataManagement::addBehavior('คอมพิวเตอร์',"images/icon/how-cool_15.png",'คุณเปิดคอมพิวเตอร์เป็นเวลากี่ชั่วโมง');
    DataManagement::addFactor(13,0.03125,0);
    for ($i=1;$i<=24;$i++) {
      DataManagement::addBehaviorItem(13,"$i ชั่วโมง",$i);
    }     
    DataManagement::addBehaviorItem(13,"นานกว่าในตัวเลือก",999); 
    
    DataManagement::addBehavior('พัดลม',"images/icon/how-cool_16.png",'คุณเปิดพัดลมประมาณกี่ชั่วโมง');
    DataManagement::addFactor(14,0.061,0);
    for ($i=1;$i<=24;$i++) {
      DataManagement::addBehaviorItem(14,"$i ชั่วโมง",$i);
    }     
    DataManagement::addBehaviorItem(14,"นานกว่าในตัวเลือก",999); 
    
    DataManagement::addBehavior('เครื่องปรับอากาศ',"images/icon/how-cool_17.png",'คุณอยู่ในห้องแอร์กี่ชั่วโมง');
    DataManagement::addFactor(15,0.0849,0);
    for ($i=1;$i<=24;$i++) {
      DataManagement::addBehaviorItem(15,"$i ชั่วโมง",$i);
    }     
    DataManagement::addBehaviorItem(15,"นานกว่าในตัวเลือก",999);
    
    DataManagement::addBehavior('โทรศัพท์มือถือ',"images/icon/how-cool_18.png",'คุณใช้โทรศัพท์มือถือเป็นเวลากี่ชั่วโมง');
    DataManagement::addFactor(16,0.017,0);
    for ($i=1;$i<=24;$i++) {
      DataManagement::addBehaviorItem(16,"$i ชั่วโมง",$i);
    }    
    DataManagement::addBehaviorItem(16,"นานกว่าในตัวเลือก",999);
    
    
    DataManagement::addBehavior('เครื่องซักผ้า',"images/icon/how-cool_19.png",'คุณใช้เครื่องซักผ้าเป็นเวลากี่ชั่วโมง');
    DataManagement::addFactor(17,0.19,100);
    for ($i=1;$i<=24;$i++) {
      DataManagement::addBehaviorItem(17,"$i ชั่วโมง",$i);
    }    
    DataManagement::addBehaviorItem(17,"นานกว่าในตัวเลือก",999);
    
    DataManagement::addBehavior('เครื่องดูดฝุ่น',"images/icon/how-cool_20.png",'คุณมีเครื่องดูดฝุ่นกี่เครื่อง');
    DataManagement::addFactor(18,0.261,0);
    DataManagement::addBehaviorItem(18,"1 เครื่อง",1);
    DataManagement::addBehaviorItem(18,"2 เครื่อง",2);
    DataManagement::addBehaviorItem(18,"3 เครื่อง",3);
    DataManagement::addBehaviorItem(18,"4 เครื่อง",4);
    DataManagement::addBehaviorItem(18,"5 เครื่อง",5);
    DataManagement::addBehaviorItem(18,"6 เครื่อง",6);
    DataManagement::addBehaviorItem(18,"7 เครื่อง",7);
    DataManagement::addBehaviorItem(18,"8 เครื่อง",8);
    DataManagement::addBehaviorItem(18,"9 เครื่อง",9);
    DataManagement::addBehaviorItem(18,"10 เครื่อง",10);  
    
        
    
    DataManagement::addBehavior('ตู้เย็น',"images/icon/how-cool_21.png",'คุณมีตู้เย็นกี่เครื่อง');
    DataManagement::addFactor(19,0.261,0);
    DataManagement::addBehaviorItem(19,"1 เครื่อง",1);
    DataManagement::addBehaviorItem(19,"2 เครื่อง",2);
    DataManagement::addBehaviorItem(19,"3 เครื่อง",3);
    DataManagement::addBehaviorItem(19,"4 เครื่อง",4);
    DataManagement::addBehaviorItem(19,"5 เครื่อง",5);
    DataManagement::addBehaviorItem(19,"6 เครื่อง",6);
    DataManagement::addBehaviorItem(19,"7 เครื่อง",7);
    DataManagement::addBehaviorItem(19,"8 เครื่อง",8);
    DataManagement::addBehaviorItem(19,"9 เครื่อง",9);
    DataManagement::addBehaviorItem(19,"10 เครื่อง",10);  
    
    
    
    DataManagement::addBehavior('ไม่โครเวฟ',"images/icon/how-cool_22.png",'คุณใช้ไมโครเวฟรวมแล้วกี่นาที');
    DataManagement::addFactor(20,0.014,0);
    DataManagement::addBehaviorItem(20,"1 นาที",1);
    DataManagement::addBehaviorItem(20,"3 นาที",3);
    DataManagement::addBehaviorItem(20,"5 นาที",5);
    DataManagement::addBehaviorItem(20,"15 นาที",15);
    DataManagement::addBehaviorItem(20,"30 นาที",30);  
    DataManagement::addBehaviorItem(20,"45 นาที",45);
    DataManagement::addBehaviorItem(20,"90 นาที",50);
    DataManagement::addBehaviorItem(20,"120 นาที",55);
    DataManagement::addBehaviorItem(20,"300 นาที",60);
    DataManagement::addBehaviorItem(20,"นานกว่าในตัวเลือก",999);    
    
    
    DataManagement::addBehavior('เตาอบไฟฟ้า',"images/icon/how-cool_23.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addFactor(21,0.041,0);
    DataManagement::addBehaviorItem(21,"1 นาที",1);
    DataManagement::addBehaviorItem(21,"3 นาที",3);
    DataManagement::addBehaviorItem(21,"5 นาที",5);
    DataManagement::addBehaviorItem(21,"15 นาที",15);
    DataManagement::addBehaviorItem(21,"30 นาที",30);  
    DataManagement::addBehaviorItem(21,"45 นาที",45);
    DataManagement::addBehaviorItem(21,"90 นาที",50);
    DataManagement::addBehaviorItem(21,"120 นาที",55);
    DataManagement::addBehaviorItem(21,"300 นาที",60);
    DataManagement::addBehaviorItem(21,"นานกว่าในตัวเลือก",999);        
    
    
    DataManagement::addBehavior('เครื่องทำน้ำอุ่น',"images/icon/how-cool_24.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addFactor(22,0.435,0);
    DataManagement::addBehaviorItem(22,"1 เครื่อง",1);
    DataManagement::addBehaviorItem(22,"2 เครื่อง",2);
    DataManagement::addBehaviorItem(22,"3 เครื่อง",3);
    DataManagement::addBehaviorItem(22,"4 เครื่อง",4);
    DataManagement::addBehaviorItem(22,"5 เครื่อง",5);
    DataManagement::addBehaviorItem(22,"6 เครื่อง",6);
    DataManagement::addBehaviorItem(22,"7 เครื่อง",7);
    DataManagement::addBehaviorItem(22,"8 เครื่อง",8);
    DataManagement::addBehaviorItem(22,"9 เครื่อง",9);
    DataManagement::addBehaviorItem(22,"10 เครื่อง",10);  
    
    
    
    DataManagement::addBehavior('ฝักบัว',"images/icon/how-cool_25.png",'คุณใช้ฝักบัวอาบน้ำรวมทั้งวันประมาณกี่ครั้ง');
    DataManagement::addFactor(23,0.003,20);
    
    DataManagement::addBehaviorItem(23,"1 ครั้ง",1);
    DataManagement::addBehaviorItem(23,"2 ครั้ง",2);
    DataManagement::addBehaviorItem(23,"3 ครั้ง",3);
    DataManagement::addBehaviorItem(23,"4 ครั้ง",4);
    DataManagement::addBehaviorItem(23,"5 ครั้ง",5);
    DataManagement::addBehaviorItem(23,"มากกว่าจำนวนในตัวเลือก",999);
    
    
    DataManagement::addBehavior('ขันตักน้ำ',"images/icon/how-cool_26.png",'คุณใช้ขันตักน้ำรวมทั้งวันประมาณกี่ครั้ง');
    DataManagement::addFactor(24,0.000,1.2);
    
    DataManagement::addBehaviorItem(24,"1 ครั้ง",1);
    DataManagement::addBehaviorItem(24,"2  ครั้ง",2);
    DataManagement::addBehaviorItem(24,"3 ครั้ง",3);
    DataManagement::addBehaviorItem(24,"5  ครั้ง",5);
    DataManagement::addBehaviorItem(24,"10 ครั้ง",10);
    DataManagement::addBehaviorItem(24,"20 ครั้ง",20);
    DataManagement::addBehaviorItem(24,"30 ครั้ง",30);
    DataManagement::addBehaviorItem(24,"40 ครั้ง",40);
    DataManagement::addBehaviorItem(24,"50 ครั้ง",50);    
    DataManagement::addBehaviorItem(24,"มากกว่าจำนวนในตัวเลือก",999);
    
        
    DataManagement::addBehavior('อ่างอาบน้ำ',"images/icon/how-cool_27.png",'คุณใช้อ่างอาบน้ำรวมทั้งวันประมาณกี่ครั้ง');
    
    DataManagement::addFactor(25,0.003,110);
    
    DataManagement::addBehaviorItem(25,"1 ครั้ง",1);
    DataManagement::addBehaviorItem(25,"2  ครั้ง",2);
    DataManagement::addBehaviorItem(25,"3 ครั้ง",3);
    DataManagement::addBehaviorItem(25,"4  ครั้ง",4);
    DataManagement::addBehaviorItem(25,"5 ครั้ง",5);
    DataManagement::addBehaviorItem(25,"6 ครั้ง",6);
    DataManagement::addBehaviorItem(25,"7 ครั้ง",7);
    DataManagement::addBehaviorItem(25,"8 ครั้ง",8);
    DataManagement::addBehaviorItem(25,"9 ครั้ง",9);
    DataManagement::addBehaviorItem(25,"10 ครั้ง",10);    
    DataManagement::addBehaviorItem(25,"มากกว่าจำนวนในตัวเลือก",999);
 
    
      
    DataManagement::addBehavior('สุขภัณฑ์ราดน้ำ',"images/icon/how-cool_28.png",'คุณใช้สุขภัณฑ์ราดน้ำไปประมาณกี่ครั้ง');
    DataManagement::addFactor(26,0.000,2);
    
    DataManagement::addBehaviorItem(26,"1 ครั้ง",1);
    DataManagement::addBehaviorItem(26,"2  ครั้ง",2);
    DataManagement::addBehaviorItem(26,"3 ครั้ง",3);
    DataManagement::addBehaviorItem(26,"4  ครั้ง",4);
    DataManagement::addBehaviorItem(26,"5 ครั้ง",5);
    DataManagement::addBehaviorItem(26,"6 ครั้ง",6);
    DataManagement::addBehaviorItem(26,"7 ครั้ง",7);
    DataManagement::addBehaviorItem(26,"8 ครั้ง",8);
    DataManagement::addBehaviorItem(26,"9 ครั้ง",9);
    DataManagement::addBehaviorItem(26,"10 ครั้ง",10);    
    DataManagement::addBehaviorItem(26,"มากกว่าจำนวนในตัวเลือก",999);
        
    DataManagement::addBehavior('สุขภัณฑ์ชักโครก',"images/icon/how-cool_29.png",'คุณใช้สุขภัณฑ์ชักโครกไปประมาณกี่ครั้ง');
    DataManagement::addFactor(27,0.000,18.5);
    
    DataManagement::addBehaviorItem(27,"1 ครั้ง",1);
    DataManagement::addBehaviorItem(27,"2 ครั้ง",2);
    DataManagement::addBehaviorItem(27,"3 ครั้ง",3);
    DataManagement::addBehaviorItem(27,"4 ครั้ง",4);
    DataManagement::addBehaviorItem(27,"5 ครั้ง",5);
    DataManagement::addBehaviorItem(27,"6 ครั้ง",6);
    DataManagement::addBehaviorItem(27,"7 ครั้ง",7);
    DataManagement::addBehaviorItem(27,"8 ครั้ง",8);
    DataManagement::addBehaviorItem(27,"9 ครั้ง",9);
    DataManagement::addBehaviorItem(27,"10 ครั้ง",10);    
        
    
    
    DataManagement::addBehavior('โถปัสสาวะ',"images/icon/how-cool_30.png",'คุณใช้สุขภัณฑ์ปัสสาวะไปประมาณกี่ครั้ง');
    DataManagement::addFactor(28,0.000,6);
    
    DataManagement::addBehaviorItem(28,"1 ครั้ง",1);
    DataManagement::addBehaviorItem(28,"2 ครั้ง",2);
    DataManagement::addBehaviorItem(28,"3 ครั้ง",3);
    DataManagement::addBehaviorItem(28,"4 ครั้ง",4);
    DataManagement::addBehaviorItem(28,"5 ครั้ง",5);
    DataManagement::addBehaviorItem(28,"6 ครั้ง",6);
    DataManagement::addBehaviorItem(28,"7 ครั้ง",7);
    DataManagement::addBehaviorItem(28,"8 ครั้ง",8);
    DataManagement::addBehaviorItem(28,"9 ครั้ง",9);
    DataManagement::addBehaviorItem(28,"10 ครั้ง",10);  
    
    
    
    DataManagement::addBehavior('ก๊อกน้ำ',"images/icon/how-cool_31.png",'คุณเปิดก๊อกน้ำรวมทั้งวันเป็นเวลาประมาณกี่นาที');
    DataManagement::addFactor(29,0.000,6);
    
    DataManagement::addBehaviorItem(29,"1 นาที",1);
    DataManagement::addBehaviorItem(29,"3 นาที",3);
    DataManagement::addBehaviorItem(29,"5 นาที",5);
    DataManagement::addBehaviorItem(29,"10 นาที",10);
    DataManagement::addBehaviorItem(29,"15 นาที",15);
    DataManagement::addBehaviorItem(29,"20 นาที",20);
    DataManagement::addBehaviorItem(29,"25 นาที",25);
    DataManagement::addBehaviorItem(29,"30 นาที",30);
    DataManagement::addBehaviorItem(29,"35 นาที",35);
    DataManagement::addBehaviorItem(29,"40 นาที",40);     
    DataManagement::addBehaviorItem(29,"45 นาที",45);
    DataManagement::addBehaviorItem(29,"50 นาที",50);
    DataManagement::addBehaviorItem(29,"55 นาที",55);
    DataManagement::addBehaviorItem(29,"60 นาที",60);
    DataManagement::addBehaviorItem(29,"นานกว่าในตัวเลือก",999);      
    
    DataManagement::addBehavior('เครื่องเป่าผม',"images/icon/how-cool_32.png",'คุณใช้เครื่องเป่าผมรวมทั้งวันเป็นเวลาประมาณกี่นาที');
    DataManagement::addFactor(30,0.015,0);
    
    DataManagement::addBehaviorItem(30,"1 นาที",1);
    DataManagement::addBehaviorItem(30,"3 นาที",3);
    DataManagement::addBehaviorItem(30,"5 นาที",5);
    DataManagement::addBehaviorItem(30,"10 นาที",10);
    DataManagement::addBehaviorItem(30,"15 นาที",15);
    DataManagement::addBehaviorItem(30,"20 นาที",20);
    DataManagement::addBehaviorItem(30,"25 นาที",25);
    DataManagement::addBehaviorItem(30,"30 นาที",30);
    DataManagement::addBehaviorItem(30,"35 นาที",35);
    DataManagement::addBehaviorItem(30,"40 นาที",40);     
    DataManagement::addBehaviorItem(30,"45 นาที",45);
    DataManagement::addBehaviorItem(30,"50 นาที",50);
    DataManagement::addBehaviorItem(30,"55 นาที",55);
    DataManagement::addBehaviorItem(30,"60 นาที",60);
    DataManagement::addBehaviorItem(30,"นานกว่าในตัวเลือก",999);      
    
    
    DataManagement::addBehavior('กระดาษทิชชู่',"images/icon/how-cool_33.png",'คุณใช้กระดาษทิชชู่ไปทั้งหมดประมาณกี่แผ่น');
    DataManagement::addFactor(31,0.0018,0);
    
    DataManagement::addBehaviorItem(31,"1 แผ่น",1);
    DataManagement::addBehaviorItem(31,"2 แผ่น",2);
    DataManagement::addBehaviorItem(31,"3 แผ่น",3);
    DataManagement::addBehaviorItem(31,"4 แผ่น",4);
    DataManagement::addBehaviorItem(31,"5 แผ่น",5);
    DataManagement::addBehaviorItem(31,"6 แผ่น",6);
    DataManagement::addBehaviorItem(31,"7 แผ่น",7);
    DataManagement::addBehaviorItem(31,"8 แผ่น",8);
    DataManagement::addBehaviorItem(31,"9 แผ่น",9);
    DataManagement::addBehaviorItem(31,"10 แผ่น",10);   
    DataManagement::addBehaviorItem(31,"11 แผ่น",11);  
    DataManagement::addBehaviorItem(31,"12 แผ่น",12);    
    DataManagement::addBehaviorItem(31,"333 แผ่น (1 ม้วน)",12);        
    DataManagement::addBehaviorItem(31,"นานกว่าในตัวเลือก",999);     
      


    DataManagement::addBehavior('ถุงยางอนามัย',"images/icon/how-cool_34.png",'คุณใช้ถุงยางอนามัยไปทั้งหมดกี่ชิ้น');
    DataManagement::addFactor(32,0.016,0);
    
    DataManagement::addBehaviorItem(32,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(32,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(32,"3 ชิ้น (1 กล่อง)",3);
    DataManagement::addBehaviorItem(32,"4 ชิ้น",4);
    DataManagement::addBehaviorItem(32,"5 ชิ้น",5);
    DataManagement::addBehaviorItem(32,"6 ชิ้น",6);
    DataManagement::addBehaviorItem(32,"7 ชิ้น",7);
    DataManagement::addBehaviorItem(32,"8 ชิ้น",8);
    DataManagement::addBehaviorItem(32,"9 ชิ้น",9);
    DataManagement::addBehaviorItem(32,"10 ชิ้น",10);   
    DataManagement::addBehaviorItem(32,"11 ชิ้น",11);  
    DataManagement::addBehaviorItem(32,"12 ชิ้น",12);        
    DataManagement::addBehaviorItem(32,"นานกว่าในตัวเลือก",999);     
    
    
    DataManagement::addBehavior('ผ้าอนามัย',"images/icon/how-cool_35.png",'คุณใช้ผ้าอนามัยไปทั้งหมดกี่ชิ้น');
    DataManagement::addFactor(33,0.023,0);
    
    DataManagement::addBehaviorItem(33,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(33,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(33,"3 ชิ้น",3);
    DataManagement::addBehaviorItem(33,"4 ชิ้น",4);
    DataManagement::addBehaviorItem(33,"5 ชิ้น",5);
    DataManagement::addBehaviorItem(33,"6 ชิ้น",6);
    DataManagement::addBehaviorItem(33,"7 ชิ้น",7);
    DataManagement::addBehaviorItem(33,"8 ชิ้น",8);
    DataManagement::addBehaviorItem(33,"9 ชิ้น",9);
    DataManagement::addBehaviorItem(33,"10 ชิ้น",10);   
    DataManagement::addBehaviorItem(33,"11 ชิ้น",11);  
    DataManagement::addBehaviorItem(33,"12 ชิ้น",12);        
    DataManagement::addBehaviorItem(33,"นานกว่าในตัวเลือก",999);    
    
       
    DataManagement::addBehavior('บุหรี่',"images/icon/how-cool_36.png",'คุณสูบบุหรี่ไปทั้งหมดกี่มวน');
    DataManagement::addFactor(34,0.005,0);
    
    DataManagement::addBehaviorItem(34,"1 มวน",1);
    DataManagement::addBehaviorItem(34,"2 มวน",2);
    DataManagement::addBehaviorItem(34,"3 มวน",3);
    DataManagement::addBehaviorItem(34,"4 มวน",4);
    DataManagement::addBehaviorItem(34,"5 มวน",5);
    DataManagement::addBehaviorItem(34,"6 มวน",6);
    DataManagement::addBehaviorItem(34,"7 มวน",7);
    DataManagement::addBehaviorItem(34,"8 มวน",8);
    DataManagement::addBehaviorItem(34,"9 มวน",9);
    DataManagement::addBehaviorItem(34,"10 มวน",10);   
    DataManagement::addBehaviorItem(34,"11 มวน",11);  
    DataManagement::addBehaviorItem(34,"12 มวน",12);         
    DataManagement::addBehaviorItem(34,"20 มวน (1 ซอง)",20);   
    DataManagement::addBehaviorItem(34,"นานกว่าในตัวเลือก",999);      
    
    DataManagement::addBehavior('กระดาษ',"images/icon/how-cool_37.png",'ระยะที่ขับๆๆๆ');
    DataManagement::addFactor(35,0.016,0);
    DataManagement::addBehaviorItem(35,"1 แผ่น",1);
    DataManagement::addBehaviorItem(35,"2 แผ่น",2);
    DataManagement::addBehaviorItem(35,"3 แผ่น",3);
    DataManagement::addBehaviorItem(35,"4 แผ่น",4);
    DataManagement::addBehaviorItem(35,"5 แผ่น",5);
    DataManagement::addBehaviorItem(35,"10 แผ่น (หนังสือพิมพ์ข่าวกีฬา)",10);
    DataManagement::addBehaviorItem(35,"20 แผ่น",20);
    DataManagement::addBehaviorItem(35,"30 แผ่น",30);
    DataManagement::addBehaviorItem(35,"40 แผ่น (หนังสือพิมพ์)",40);
    DataManagement::addBehaviorItem(35,"50 แผ่น (หนังสือการ์ตูน)",50);   
    DataManagement::addBehaviorItem(35,"100 แผ่น (นิตยสาร)",100);  
    DataManagement::addBehaviorItem(35,"200 แผ่น (หนังสือพ๊อคเก็ท)",200);    
    DataManagement::addBehaviorItem(35,"300 แผ่น (หนังสือ textbook)",300);        
    DataManagement::addBehaviorItem(35,"นานกว่าในตัวเลือก",999);     
    
        
    DataManagement::addBehavior('ถุงพลาสติก',"images/icon/how-cool_38.png",'คุณรับถุงพลาสติกมากี่ใบ');
    DataManagement::addFactor(36,0.25,0);
    DataManagement::addBehaviorItem(36,"1 ใบ",1);
    DataManagement::addBehaviorItem(36,"2 ใบ",2);
    DataManagement::addBehaviorItem(36,"3 ใบ",3);
    DataManagement::addBehaviorItem(36,"4 ใบ",4);
    DataManagement::addBehaviorItem(36,"5 ใบ",5);
    DataManagement::addBehaviorItem(36,"6 ใบ",6);
    DataManagement::addBehaviorItem(36,"7 ใบ",7);
    DataManagement::addBehaviorItem(36,"8 ใบ",8);
    DataManagement::addBehaviorItem(36,"9 ใบ",9);
    DataManagement::addBehaviorItem(36,"10 ใบ",10);        
    DataManagement::addBehaviorItem(36,"นานกว่าในตัวเลือก",999);    
    
        
    DataManagement::addBehavior('ถุงกระดาษ',"images/icon/how-cool_39.png",'คุณรับถุงกระดาษมากี่ใบ');
    DataManagement::addFactor(37,0.1,0);
    DataManagement::addBehaviorItem(37,"1 ใบ",1);
    DataManagement::addBehaviorItem(37,"2 ใบ",2);
    DataManagement::addBehaviorItem(37,"3 ใบ",3);
    DataManagement::addBehaviorItem(37,"4 ใบ",4);
    DataManagement::addBehaviorItem(37,"5 ใบ",5);
    DataManagement::addBehaviorItem(37,"6 ใบ",6);
    DataManagement::addBehaviorItem(37,"7 ใบ",7);
    DataManagement::addBehaviorItem(37,"8 ใบ",8);
    DataManagement::addBehaviorItem(37,"9 ใบ",9);
    DataManagement::addBehaviorItem(37,"10 ใบ",10);        
    DataManagement::addBehaviorItem(37,"นานกว่าในตัวเลือก",999);    
    
    
        
    DataManagement::addBehavior('ภาชนะพลาสติก',"images/icon/how-cool_40.png",'คุณรับประทานอาหารจากภาชนะพลาสติกกี่ชิ้น');
    DataManagement::addBehaviorItem(38,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(38,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(38,"3 ชิ้น",3);
    DataManagement::addBehaviorItem(38,"4 ชิ้น",4);
    DataManagement::addBehaviorItem(38,"5 ชิ้น",5);
    DataManagement::addBehaviorItem(38,"6 ชิ้น",6);
    DataManagement::addBehaviorItem(38,"7 ชิ้น",7);
    DataManagement::addBehaviorItem(38,"8 ชิ้น",8);
    DataManagement::addBehaviorItem(38,"9 ชิ้น",9);
    DataManagement::addBehaviorItem(38,"10 ชิ้น",10);   
    DataManagement::addBehaviorItem(38,"11 ชิ้น",11);  
    DataManagement::addBehaviorItem(38,"12 ชิ้น",12);        
    DataManagement::addBehaviorItem(38,"นานกว่าในตัวเลือก",999);   
    
    DataManagement::addBehavior('ภาชนะโฟม',"images/icon/how-cool_41.png",'คุณรับประทานอาหารจากภาชนะโฟมกี่ชิ้น');
    DataManagement::addBehaviorItem(39,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(39,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(39,"3 ชิ้น",3);
    DataManagement::addBehaviorItem(39,"4 ชิ้น",4);
    DataManagement::addBehaviorItem(39,"5 ชิ้น",5);
    DataManagement::addBehaviorItem(39,"6 ชิ้น",6);
    DataManagement::addBehaviorItem(39,"7 ชิ้น",7);
    DataManagement::addBehaviorItem(39,"8 ชิ้น",8);
    DataManagement::addBehaviorItem(39,"9 ชิ้น",9);
    DataManagement::addBehaviorItem(39,"10 ชิ้น",10);   
    DataManagement::addBehaviorItem(39,"11 ชิ้น",11);  
    DataManagement::addBehaviorItem(39,"12 ชิ้น",12);        
    DataManagement::addBehaviorItem(39,"นานกว่าในตัวเลือก",999);   
    
    
    DataManagement::addBehavior('ภาชนะกระดาษ',"images/icon/how-cool_42.png",'คุณรับประทานอาหารจากภาชนะกระดาษกี่ชิ้น');
    DataManagement::addBehaviorItem(40,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(40,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(40,"3 ชิ้น",3);
    DataManagement::addBehaviorItem(40,"4 ชิ้น",4);
    DataManagement::addBehaviorItem(40,"5 ชิ้น",5);
    DataManagement::addBehaviorItem(40,"6 ชิ้น",6);
    DataManagement::addBehaviorItem(40,"7 ชิ้น",7);
    DataManagement::addBehaviorItem(40,"8 ชิ้น",8);
    DataManagement::addBehaviorItem(40,"9 ชิ้น",9);
    DataManagement::addBehaviorItem(40,"10 ชิ้น",10);   
    DataManagement::addBehaviorItem(40,"11 ชิ้น",11);  
    DataManagement::addBehaviorItem(40,"12 ชิ้น",12);        
    DataManagement::addBehaviorItem(40,"นานกว่าในตัวเลือก",999);
    
    
        
    DataManagement::addBehavior('ขวดพลาสติก',"images/icon/how-cool_43.png",'คุณรับประทานเครื่องดื่มจากภาชนะพลาสติกกี่ชิ้น');
    DataManagement::addBehaviorItem(41,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(41,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(41,"3 ชิ้น",3);
    DataManagement::addBehaviorItem(41,"4 ชิ้น",4);
    DataManagement::addBehaviorItem(41,"5 ชิ้น",5);
    DataManagement::addBehaviorItem(41,"6 ชิ้น",6);
    DataManagement::addBehaviorItem(41,"7 ชิ้น",7);
    DataManagement::addBehaviorItem(41,"8 ชิ้น",8);
    DataManagement::addBehaviorItem(41,"9 ชิ้น",9);
    DataManagement::addBehaviorItem(41,"10 ชิ้น",10);   
    DataManagement::addBehaviorItem(41,"11 ชิ้น",11);  
    DataManagement::addBehaviorItem(41,"12 ชิ้น",12);        
    DataManagement::addBehaviorItem(41,"นานกว่าในตัวเลือก",999);   
        
    DataManagement::addBehavior('ขวดแก้ว',"images/icon/how-cool_44.png",'คุณรับประทานเครื่องดื่มจากขวดแก้วกี่ชิ้น');
    DataManagement::addBehaviorItem(42,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(42,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(42,"3 ชิ้น",3);
    DataManagement::addBehaviorItem(42,"4 ชิ้น",4);
    DataManagement::addBehaviorItem(42,"5 ชิ้น",5);
    DataManagement::addBehaviorItem(42,"6 ชิ้น",6);
    DataManagement::addBehaviorItem(42,"7 ชิ้น",7);
    DataManagement::addBehaviorItem(42,"8 ชิ้น",8);
    DataManagement::addBehaviorItem(42,"9 ชิ้น",9);
    DataManagement::addBehaviorItem(42,"10 ชิ้น",10);   
    DataManagement::addBehaviorItem(42,"11 ชิ้น",11);  
    DataManagement::addBehaviorItem(42,"12 ชิ้น",12);        
    DataManagement::addBehaviorItem(42,"นานกว่าในตัวเลือก",999);       

    DataManagement::addBehavior('กระป๋อง',"images/icon/how-cool_45.png",'คุณรับประทานเครื่องดื่มจากกระป๋องทั้งหมดกี่ชิ้น');
    DataManagement::addBehaviorItem(43,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(43,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(43,"3 ชิ้น",3);
    DataManagement::addBehaviorItem(43,"4 ชิ้น",4);
    DataManagement::addBehaviorItem(43,"5 ชิ้น",5);
    DataManagement::addBehaviorItem(43,"6 ชิ้น",6);
    DataManagement::addBehaviorItem(43,"7 ชิ้น",7);
    DataManagement::addBehaviorItem(43,"8 ชิ้น",8);
    DataManagement::addBehaviorItem(43,"9 ชิ้น",9);
    DataManagement::addBehaviorItem(43,"10 ชิ้น",10);   
    DataManagement::addBehaviorItem(43,"11 ชิ้น",11);  
    DataManagement::addBehaviorItem(43,"12 ชิ้น",12);        
    DataManagement::addBehaviorItem(43,"นานกว่าในตัวเลือก",999);       
    
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
  
  function getAllDetail(){
    $mysql = "SELECT display.display_id, display.name, display.image_path, factor.carbon_factor, factor.water_factor
FROM display
JOIN factor ON display.display_id = factor.display_id";
    $result = db_query($mysql);
    $data = array();
    while ($row = db_fetch_object($result))
    {
      $display_id = $row->display_id;
      $data[$display_id]['name']=$row->name;
      $data[$display_id]['image_path']=$row->image_path;
      $data[$display_id]['carbon_factor']=$row->carbon_factor;
      $data[$display_id]['water_factor']=$row->water_factor;
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




