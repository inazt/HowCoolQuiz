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
    DataManagement::addBehavior('รถยนต์',"images/icon/how-cool_03.png",'คุณเดินทางด้วยรถยนต์เป็นระยะทางรวมประมาณเท่าไหร่');
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
    
    DataManagement::addBehavior('รถยนต์ขนาดใหญ่',"images/icon/how-cool_04.png",'คุณเดินทางด้วยรถยนต์ขนาดใหญ่เป็นระยะทางรวมประมาณเท่าไหร่');
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
    
    DataManagement::addBehavior('รถจักรยานยนต์',"images/icon/how-cool_05.png",'คุณเดินทางด้วยรถจักรยานยนต์เป็นระยะทางรวมประมาณเท่าไหร่');
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
        
    DataManagement::addBehavior('รถไฟฟ้า',"images/icon/how-cool_06.png",'คุณเดินทางด้วยรถไฟฟ้าเป็นระยะทางรวมประมาณกี่สถานี');
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

    DataManagement::addBehavior('รถไฟ',"images/icon/how-cool_07.png",'คุณเดินทางด้วยรถไฟเป็นระยะทางรวมประมาณเท่าไหร่');
    DataManagement::addFactor(5,0.434,0);
    DataManagement::addBehaviorItem(5,"สายเหนือ ",751);
    DataManagement::addBehaviorItem(5,"สายใต้ ",979.5);
    DataManagement::addBehaviorItem(5,"สายตะวันออก ",227.5);
    DataManagement::addBehaviorItem(5,"สายตะวันออกเฉียงเหนือ",601.25);
    DataManagement::addBehaviorItem(5,"สายตะวันตก",175.6);
    DataManagement::addBehaviorItem(5,"สายแม่กลอง ",32.5); 
     
    
    DataManagement::addBehavior('รถเมล์,รถทัวร์',"images/icon/how-cool_08.png",'คุณเดินทางด้วยรถเมล์เป็นระยะทางรวมประมาณเท่าไหร่');
    DataManagement::addFactor(6,0.125,0);
    DataManagement::addBehaviorItem(6,"1 กิโลเมตร",1);
    DataManagement::addBehaviorItem(6,"3  กิโลเมตร",3);
    DataManagement::addBehaviorItem(6,"5 กิโลเมตร",5);
    DataManagement::addBehaviorItem(6,"10  กิโลเมตร",10);
    DataManagement::addBehaviorItem(6,"15  กิโลเมตร",15);
    DataManagement::addBehaviorItem(6,"20  กิโลเมตร",20);
    DataManagement::addBehaviorItem(6,"25 กิโลเมตร",25);
    DataManagement::addBehaviorItem(6,"30 กิโลเมตร",30);
    DataManagement::addBehaviorItem(6,"35 กิโลเมตร",35);
    DataManagement::addBehaviorItem(6,"40 กิโลเมตร",40);
    DataManagement::addBehaviorItem(6,"50 กิโลเมตร",50);
    DataManagement::addBehaviorItem(6,"60 กิโลเมตร",60);
    DataManagement::addBehaviorItem(6,"70 กิโลเมตร",70);
    DataManagement::addBehaviorItem(6,"80 กิโลเมตร",80);
    DataManagement::addBehaviorItem(6,"90 กิโลเมตร",90);
    DataManagement::addBehaviorItem(6,"100 กิโลเมตร",100);
    DataManagement::addBehaviorItem(6,"150 กิโลเมตร",150);
    DataManagement::addBehaviorItem(6,"200 กิโลเมตร",200);
    DataManagement::addBehaviorItem(6,"มากกว่าจำนวนในตัวเลือก",999);
    
          


    DataManagement::addBehavior('เครื่องบิน',"images/icon/how-cool_10.png",'คุณเดินทางด้วยเครื่องบินไปที่ใด');
    DataManagement::addFactor(7,1,0);
    DataManagement::addBehaviorItem(7,"ในประเทศ",363);
    DataManagement::addBehaviorItem(7,"ในทวีปเอเชีย",2090);
    DataManagement::addBehaviorItem(7,"ออสเตรเลีย",3426);
    DataManagement::addBehaviorItem(7,"ประเทศในยุโรป",4090);
    DataManagement::addBehaviorItem(7,"ประเทศในแอฟริกา",4454);
    DataManagement::addBehaviorItem(7,"ประเทศในทวีปอเมริกาเหนือ",6226);
    DataManagement::addBehaviorItem(7,"ประเทศในทวีปอเมริกาใต้",7272);
 
    
    DataManagement::addBehavior('หลอดไฟ',"images/icon/how-cool_11.png",'คุณใช้หลอดไฟรวมทั้งหมดกี่ดวง');
    DataManagement::addFactor(8,0.0088,0);
    
    DataManagement::addBehaviorItem(8,"1 ดวง",1);
    DataManagement::addBehaviorItem(8,"2 ดวง",2);
    DataManagement::addBehaviorItem(8,"3 ดวง",3);
    DataManagement::addBehaviorItem(8,"4 ดวง",4);
    DataManagement::addBehaviorItem(8,"5 ดวง",5);
    DataManagement::addBehaviorItem(8,"มากกว่าจำนวนในตัวเลือก",999);    
    
    
    DataManagement::addBehavior('เครื่องวิทยุ',"images/icon/how-cool_12.png",'คุณเปิดวิทยุกี่ชั่วโมง');
    DataManagement::addFactor(9,0.0057,0);
    for ($i=1;$i<=24;$i++) {
      DataManagement::addBehaviorItem(9,"$i ชั่วโมง",$i);
    }  
    
    
    DataManagement::addBehavior('โทรทัศน์',"images/icon/how-cool_13.png",'คุณเปิดโทรทัศน์เป็นเวลากี่ชั่วโมง');
    DataManagement::addFactor(10,0.012,0);
    for ($i=1;$i<=24;$i++) {
      DataManagement::addBehaviorItem(10,"$i ชั่วโมง",$i);
    } 
    
    DataManagement::addBehavior('เครื่องเล่นเกมส์',"images/icon/how-cool_14.png",'คุณเล่นเกมส์รวมแล้วเป็นเวลา');
    DataManagement::addFactor(11,0.0029,0);
    DataManagement::addBehaviorItem(11,"1 นาที",1);
    DataManagement::addBehaviorItem(11,"3 นาที",3);
    DataManagement::addBehaviorItem(11,"5 นาที",5);
    DataManagement::addBehaviorItem(11,"10 นาที",10);
    DataManagement::addBehaviorItem(11,"15 นาที",15);
    DataManagement::addBehaviorItem(11,"20 นาที",20);
    DataManagement::addBehaviorItem(11,"25 นาที",25);
    DataManagement::addBehaviorItem(11,"30 นาที",30);
    DataManagement::addBehaviorItem(11,"35 นาที",35);
    DataManagement::addBehaviorItem(11,"40 นาที",40);     
    DataManagement::addBehaviorItem(11,"45 นาที",45);
    DataManagement::addBehaviorItem(11,"100 นาที",50);
    DataManagement::addBehaviorItem(11,"120 นาที",55);
    DataManagement::addBehaviorItem(11,"300 นาที",60);
    DataManagement::addBehaviorItem(11,"นานกว่าในตัวเลือก",999); 
    
    
    
    DataManagement::addBehavior('คอมพิวเตอร์',"images/icon/how-cool_15.png",'คุณเปิดคอมพิวเตอร์เป็นเวลากี่ชั่วโมง');
    DataManagement::addFactor(12,0.03125,0);
    for ($i=1;$i<=24;$i++) {
      DataManagement::addBehaviorItem(12,"$i ชั่วโมง",$i);
    }     
    DataManagement::addBehaviorItem(12,"นานกว่าในตัวเลือก",999); 
    
    DataManagement::addBehavior('พัดลม',"images/icon/how-cool_16.png",'คุณเปิดพัดลมประมาณกี่ชั่วโมง');
    DataManagement::addFactor(13,0.061,0);
    for ($i=1;$i<=24;$i++) {
      DataManagement::addBehaviorItem(13,"$i ชั่วโมง",$i);
    }     
    DataManagement::addBehaviorItem(13,"นานกว่าในตัวเลือก",999); 
    
    DataManagement::addBehavior('เครื่องปรับอากาศ',"images/icon/how-cool_17.png",'คุณอยู่ในห้องแอร์กี่ชั่วโมง');
    DataManagement::addFactor(14,0.0849,0);
    for ($i=1;$i<=24;$i++) {
      DataManagement::addBehaviorItem(14,"$i ชั่วโมง",$i);
    }     
    DataManagement::addBehaviorItem(14,"นานกว่าในตัวเลือก",999);
    
    DataManagement::addBehavior('โทรศัพท์มือถือ',"images/icon/how-cool_18.png",'คุณใช้โทรศัพท์มือถือเป็นเวลากี่ชั่วโมง');
    DataManagement::addFactor(15,0.017,0);
    for ($i=1;$i<=24;$i++) {
      DataManagement::addBehaviorItem(15,"$i ชั่วโมง",$i);
    }    
    DataManagement::addBehaviorItem(15,"นานกว่าในตัวเลือก",999);
    
    
    DataManagement::addBehavior('เครื่องซักผ้า',"images/icon/how-cool_19.png",'คุณใช้เครื่องซักผ้าเป็นเวลากี่ชั่วโมง');
    DataManagement::addFactor(16,0.19,100);
    for ($i=1;$i<=24;$i++) {
      DataManagement::addBehaviorItem(16,"$i ชั่วโมง",$i);
    }    
    DataManagement::addBehaviorItem(16,"นานกว่าในตัวเลือก",999);
    
    DataManagement::addBehavior('เครื่องดูดฝุ่น',"images/icon/how-cool_20.png",'คุณมีเครื่องดูดฝุ่นกี่เครื่อง');
    DataManagement::addFactor(17,0.261,0);
    DataManagement::addBehaviorItem(17,"1 เครื่อง",1);
    DataManagement::addBehaviorItem(17,"2 เครื่อง",2);
    DataManagement::addBehaviorItem(17,"3 เครื่อง",3);
    DataManagement::addBehaviorItem(17,"4 เครื่อง",4);
    DataManagement::addBehaviorItem(17,"5 เครื่อง",5);
    DataManagement::addBehaviorItem(17,"6 เครื่อง",6);
    DataManagement::addBehaviorItem(17,"7 เครื่อง",7);
    DataManagement::addBehaviorItem(17,"8 เครื่อง",8);
    DataManagement::addBehaviorItem(17,"9 เครื่อง",9);
    DataManagement::addBehaviorItem(17,"10 เครื่อง",10);  
    
        
    
    DataManagement::addBehavior('ตู้เย็น',"images/icon/how-cool_21.png",'คุณมีตู้เย็นกี่เครื่อง');
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
    
    
    
    DataManagement::addBehavior('ไมโครเวฟ',"images/icon/how-cool_22.png",'คุณใช้ไมโครเวฟรวมแล้วกี่นาที');
    DataManagement::addFactor(19,0.014,0);
    DataManagement::addBehaviorItem(19,"1 นาที",1);
    DataManagement::addBehaviorItem(19,"3 นาที",3);
    DataManagement::addBehaviorItem(19,"5 นาที",5);
    DataManagement::addBehaviorItem(19,"15 นาที",15);
    DataManagement::addBehaviorItem(19,"30 นาที",30);  
    DataManagement::addBehaviorItem(19,"45 นาที",45);
    DataManagement::addBehaviorItem(19,"90 นาที",50);
    DataManagement::addBehaviorItem(19,"120 นาที",55);
    DataManagement::addBehaviorItem(19,"300 นาที",60);
    DataManagement::addBehaviorItem(19,"นานกว่าในตัวเลือก",999);    
    
    
    DataManagement::addBehavior('เตาอบไฟฟ้า',"images/icon/how-cool_23.png",'คุณใช้เตาอบไฟฟ้ารวมแล้วกี่นาที');
    DataManagement::addFactor(20,0.041,0);
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
    
    
    DataManagement::addBehavior('เครื่องทำน้ำอุ่น',"images/icon/how-cool_24.png",'คุณมีเครื่องทำน้ำอุ่นกี่เครื่อง');
    DataManagement::addFactor(21,0.435,0);
    DataManagement::addBehaviorItem(21,"1 เครื่อง",1);
    DataManagement::addBehaviorItem(21,"2 เครื่อง",2);
    DataManagement::addBehaviorItem(21,"3 เครื่อง",3);
    DataManagement::addBehaviorItem(21,"4 เครื่อง",4);
    DataManagement::addBehaviorItem(21,"5 เครื่อง",5);
    DataManagement::addBehaviorItem(21,"6 เครื่อง",6);
    DataManagement::addBehaviorItem(21,"7 เครื่อง",7);
    DataManagement::addBehaviorItem(21,"8 เครื่อง",8);
    DataManagement::addBehaviorItem(21,"9 เครื่อง",9);
    DataManagement::addBehaviorItem(21,"10 เครื่อง",10);  
    
    
    
    DataManagement::addBehavior('ฝักบัว',"images/icon/how-cool_25.png",'คุณใช้ฝักบัวอาบน้ำรวมทั้งวันประมาณกี่ครั้ง');
    DataManagement::addFactor(22,0.003,20);
    
    DataManagement::addBehaviorItem(22,"1 ครั้ง",1);
    DataManagement::addBehaviorItem(22,"2 ครั้ง",2);
    DataManagement::addBehaviorItem(22,"3 ครั้ง",3);
    DataManagement::addBehaviorItem(22,"4 ครั้ง",4);
    DataManagement::addBehaviorItem(22,"5 ครั้ง",5);
    DataManagement::addBehaviorItem(22,"มากกว่าจำนวนในตัวเลือก",999);
    
    
    DataManagement::addBehavior('ขันตักน้ำ',"images/icon/how-cool_26.png",'คุณใช้ขันตักน้ำรวมทั้งวันประมาณกี่ครั้ง');
    DataManagement::addFactor(23,0.000,1.2);
    
    DataManagement::addBehaviorItem(23,"1 ครั้ง",1);
    DataManagement::addBehaviorItem(23,"2  ครั้ง",2);
    DataManagement::addBehaviorItem(23,"3 ครั้ง",3);
    DataManagement::addBehaviorItem(23,"5  ครั้ง",5);
    DataManagement::addBehaviorItem(23,"10 ครั้ง",10);
    DataManagement::addBehaviorItem(23,"20 ครั้ง",20);
    DataManagement::addBehaviorItem(23,"30 ครั้ง",30);
    DataManagement::addBehaviorItem(23,"40 ครั้ง",40);
    DataManagement::addBehaviorItem(23,"50 ครั้ง",50);    
    DataManagement::addBehaviorItem(23,"มากกว่าจำนวนในตัวเลือก",999);
    
        
    DataManagement::addBehavior('อ่างอาบน้ำ',"images/icon/how-cool_27.png",'คุณใช้อ่างอาบน้ำรวมทั้งวันประมาณกี่ครั้ง');
    
    DataManagement::addFactor(24,0.003,110);
    
    DataManagement::addBehaviorItem(24,"1 ครั้ง",1);
    DataManagement::addBehaviorItem(24,"2  ครั้ง",2);
    DataManagement::addBehaviorItem(24,"3 ครั้ง",3);
    DataManagement::addBehaviorItem(24,"4  ครั้ง",4);
    DataManagement::addBehaviorItem(24,"5 ครั้ง",5);
    DataManagement::addBehaviorItem(24,"6 ครั้ง",6);
    DataManagement::addBehaviorItem(24,"7 ครั้ง",7);
    DataManagement::addBehaviorItem(24,"8 ครั้ง",8);
    DataManagement::addBehaviorItem(24,"9 ครั้ง",9);
    DataManagement::addBehaviorItem(24,"10 ครั้ง",10);    
    DataManagement::addBehaviorItem(24,"มากกว่าจำนวนในตัวเลือก",999);
 
    
      
    DataManagement::addBehavior('สุขภัณฑ์ราดน้ำ',"images/icon/how-cool_28.png",'คุณใช้สุขภัณฑ์ราดน้ำไปประมาณกี่ครั้ง');
    DataManagement::addFactor(25,0.000,2);
    
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
        
    DataManagement::addBehavior('สุขภัณฑ์ชักโครก',"images/icon/how-cool_29.png",'คุณใช้สุขภัณฑ์ชักโครกไปประมาณกี่ครั้ง');
    DataManagement::addFactor(26,0.000,18.5);
    
    DataManagement::addBehaviorItem(26,"1 ครั้ง",1);
    DataManagement::addBehaviorItem(26,"2 ครั้ง",2);
    DataManagement::addBehaviorItem(26,"3 ครั้ง",3);
    DataManagement::addBehaviorItem(26,"4 ครั้ง",4);
    DataManagement::addBehaviorItem(26,"5 ครั้ง",5);
    DataManagement::addBehaviorItem(26,"6 ครั้ง",6);
    DataManagement::addBehaviorItem(26,"7 ครั้ง",7);
    DataManagement::addBehaviorItem(26,"8 ครั้ง",8);
    DataManagement::addBehaviorItem(26,"9 ครั้ง",9);
    DataManagement::addBehaviorItem(26,"10 ครั้ง",10);    
        
    
    
    DataManagement::addBehavior('โถปัสสาวะ',"images/icon/how-cool_30.png",'คุณใช้สุขภัณฑ์ปัสสาวะไปประมาณกี่ครั้ง');
    DataManagement::addFactor(27,0.000,6);
    
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
    
    
    
    DataManagement::addBehavior('ก๊อกน้ำ',"images/icon/how-cool_31.png",'คุณเปิดก๊อกน้ำรวมทั้งวันเป็นเวลาประมาณกี่นาที');
    DataManagement::addFactor(28,0.000,6);
    
    DataManagement::addBehaviorItem(28,"1 นาที",1);
    DataManagement::addBehaviorItem(28,"3 นาที",3);
    DataManagement::addBehaviorItem(28,"5 นาที",5);
    DataManagement::addBehaviorItem(28,"10 นาที",10);
    DataManagement::addBehaviorItem(28,"15 นาที",15);
    DataManagement::addBehaviorItem(28,"20 นาที",20);
    DataManagement::addBehaviorItem(28,"25 นาที",25);
    DataManagement::addBehaviorItem(28,"30 นาที",30);
    DataManagement::addBehaviorItem(28,"35 นาที",35);
    DataManagement::addBehaviorItem(28,"40 นาที",40);     
    DataManagement::addBehaviorItem(28,"45 นาที",45);
    DataManagement::addBehaviorItem(28,"50 นาที",50);
    DataManagement::addBehaviorItem(28,"55 นาที",55);
    DataManagement::addBehaviorItem(28,"60 นาที",60);
    DataManagement::addBehaviorItem(28,"นานกว่าในตัวเลือก",999);      
    
    DataManagement::addBehavior('เครื่องเป่าผม',"images/icon/how-cool_32.png",'คุณใช้เครื่องเป่าผมรวมทั้งวันเป็นเวลาประมาณกี่นาที');
    DataManagement::addFactor(29,0.015,0);
    
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
    
    
    DataManagement::addBehavior('กระดาษทิชชู่',"images/icon/how-cool_33.png",'คุณใช้กระดาษทิชชู่ไปทั้งหมดประมาณกี่แผ่น');
    DataManagement::addFactor(30,0.0018,0);
    
    DataManagement::addBehaviorItem(30,"1 แผ่น",1);
    DataManagement::addBehaviorItem(30,"2 แผ่น",2);
    DataManagement::addBehaviorItem(30,"3 แผ่น",3);
    DataManagement::addBehaviorItem(30,"4 แผ่น",4);
    DataManagement::addBehaviorItem(30,"5 แผ่น",5);
    DataManagement::addBehaviorItem(30,"6 แผ่น",6);
    DataManagement::addBehaviorItem(30,"7 แผ่น",7);
    DataManagement::addBehaviorItem(30,"8 แผ่น",8);
    DataManagement::addBehaviorItem(30,"9 แผ่น",9);
    DataManagement::addBehaviorItem(30,"10 แผ่น",10);   
    DataManagement::addBehaviorItem(30,"11 แผ่น",11);  
    DataManagement::addBehaviorItem(30,"12 แผ่น",12);    
    DataManagement::addBehaviorItem(30,"333 แผ่น (1 ม้วน)",12);        
    DataManagement::addBehaviorItem(30,"นานกว่าในตัวเลือก",999);     
      


    DataManagement::addBehavior('ถุงยางอนามัย',"images/icon/how-cool_34.png",'คุณใช้ถุงยางอนามัยไปทั้งหมดกี่ชิ้น');
    DataManagement::addFactor(31,0.016,0);
    
    DataManagement::addBehaviorItem(31,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(31,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(31,"3 ชิ้น (1 กล่อง)",3);
    DataManagement::addBehaviorItem(31,"4 ชิ้น",4);
    DataManagement::addBehaviorItem(31,"5 ชิ้น",5);
    DataManagement::addBehaviorItem(31,"6 ชิ้น",6);
    DataManagement::addBehaviorItem(31,"7 ชิ้น",7);
    DataManagement::addBehaviorItem(31,"8 ชิ้น",8);
    DataManagement::addBehaviorItem(31,"9 ชิ้น",9);
    DataManagement::addBehaviorItem(31,"10 ชิ้น",10);   
    DataManagement::addBehaviorItem(31,"11 ชิ้น",11);  
    DataManagement::addBehaviorItem(31,"12 ชิ้น",12);        
    DataManagement::addBehaviorItem(31,"นานกว่าในตัวเลือก",999);     
    
    
    DataManagement::addBehavior('ผ้าอนามัย',"images/icon/how-cool_35.png",'คุณใช้ผ้าอนามัยไปทั้งหมดกี่ชิ้น');
    DataManagement::addFactor(32,0.023,0);
    
    DataManagement::addBehaviorItem(32,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(32,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(32,"3 ชิ้น",3);
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
    
       
    DataManagement::addBehavior('บุหรี่',"images/icon/how-cool_36.png",'คุณสูบบุหรี่ไปทั้งหมดกี่มวน');
    DataManagement::addFactor(33,0.005,0);
    
    DataManagement::addBehaviorItem(33,"1 มวน",1);
    DataManagement::addBehaviorItem(33,"2 มวน",2);
    DataManagement::addBehaviorItem(33,"3 มวน",3);
    DataManagement::addBehaviorItem(33,"4 มวน",4);
    DataManagement::addBehaviorItem(33,"5 มวน",5);
    DataManagement::addBehaviorItem(33,"6 มวน",6);
    DataManagement::addBehaviorItem(33,"7 มวน",7);
    DataManagement::addBehaviorItem(33,"8 มวน",8);
    DataManagement::addBehaviorItem(33,"9 มวน",9);
    DataManagement::addBehaviorItem(33,"10 มวน",10);   
    DataManagement::addBehaviorItem(33,"11 มวน",11);  
    DataManagement::addBehaviorItem(33,"12 มวน",12);         
    DataManagement::addBehaviorItem(33,"20 มวน (1 ซอง)",20);   
    DataManagement::addBehaviorItem(33,"นานกว่าในตัวเลือก",999);      
    
    DataManagement::addBehavior('กระดาษ',"images/icon/how-cool_37.png",'คุณใช้กระดาษไปทั้งหมดกี่แผ่น');
    DataManagement::addFactor(34,0.016,0);
    DataManagement::addBehaviorItem(34,"1 แผ่น",1);
    DataManagement::addBehaviorItem(34,"2 แผ่น",2);
    DataManagement::addBehaviorItem(34,"3 แผ่น",3);
    DataManagement::addBehaviorItem(34,"4 แผ่น",4);
    DataManagement::addBehaviorItem(34,"5 แผ่น",5);
    DataManagement::addBehaviorItem(34,"10 แผ่น (หนังสือพิมพ์ข่าวกีฬา)",10);
    DataManagement::addBehaviorItem(34,"20 แผ่น",20);
    DataManagement::addBehaviorItem(34,"30 แผ่น",30);
    DataManagement::addBehaviorItem(34,"40 แผ่น (หนังสือพิมพ์)",40);
    DataManagement::addBehaviorItem(34,"50 แผ่น (หนังสือการ์ตูน)",50);   
    DataManagement::addBehaviorItem(34,"100 แผ่น (นิตยสาร)",100);  
    DataManagement::addBehaviorItem(34,"200 แผ่น (หนังสือพ๊อคเก็ท)",200);    
    DataManagement::addBehaviorItem(34,"300 แผ่น (หนังสือ textbook)",300);        
    DataManagement::addBehaviorItem(34,"นานกว่าในตัวเลือก",999);     
    
        
    DataManagement::addBehavior('ถุงพลาสติก',"images/icon/how-cool_38.png",'คุณรับถุงพลาสติกมากี่ใบ');
    DataManagement::addFactor(35,0.25,0);
    DataManagement::addBehaviorItem(35,"1 ใบ",1);
    DataManagement::addBehaviorItem(35,"2 ใบ",2);
    DataManagement::addBehaviorItem(35,"3 ใบ",3);
    DataManagement::addBehaviorItem(35,"4 ใบ",4);
    DataManagement::addBehaviorItem(35,"5 ใบ",5);
    DataManagement::addBehaviorItem(35,"6 ใบ",6);
    DataManagement::addBehaviorItem(35,"7 ใบ",7);
    DataManagement::addBehaviorItem(35,"8 ใบ",8);
    DataManagement::addBehaviorItem(35,"9 ใบ",9);
    DataManagement::addBehaviorItem(35,"10 ใบ",10);        
    DataManagement::addBehaviorItem(35,"นานกว่าในตัวเลือก",999);    
    
        
    DataManagement::addBehavior('ถุงกระดาษ',"images/icon/how-cool_39.png",'คุณรับถุงกระดาษมากี่ใบ');
    DataManagement::addFactor(36,0.1,0);
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
    
    
        
    DataManagement::addBehavior('ภาชนะพลาสติก',"images/icon/how-cool_40.png",'คุณรับประทานอาหารจากภาชนะพลาสติกกี่ชิ้น');
        DataManagement::addFactor(37,0.2,0);
    DataManagement::addBehaviorItem(37,"1 ชิ้น",1);
    DataManagement::addBehaviorItem(37,"2 ชิ้น",2);
    DataManagement::addBehaviorItem(37,"3 ชิ้น",3);
    DataManagement::addBehaviorItem(37,"4 ชิ้น",4);
    DataManagement::addBehaviorItem(37,"5 ชิ้น",5);
    DataManagement::addBehaviorItem(37,"6 ชิ้น",6);
    DataManagement::addBehaviorItem(37,"7 ชิ้น",7);
    DataManagement::addBehaviorItem(37,"8 ชิ้น",8);
    DataManagement::addBehaviorItem(37,"9 ชิ้น",9);
    DataManagement::addBehaviorItem(37,"10 ชิ้น",10);   
    DataManagement::addBehaviorItem(37,"11 ชิ้น",11);  
    DataManagement::addBehaviorItem(37,"12 ชิ้น",12);        
    DataManagement::addBehaviorItem(37,"นานกว่าในตัวเลือก",999);   
    
    DataManagement::addBehavior('ภาชนะโฟม',"images/icon/how-cool_41.png",'คุณรับประทานอาหารจากภาชนะโฟมกี่ชิ้น');
      DataManagement::addFactor(38,0.2,0);
        for($i=1;$i<=12;$i++) {
          DataManagement::addBehaviorItem(38,"$i ชิ้น",$i);
        }        
    DataManagement::addBehaviorItem(38,"นานกว่าในตัวเลือก",999);   
    
    
    DataManagement::addBehavior('ภาชนะกระดาษ',"images/icon/how-cool_42.png",'คุณรับประทานอาหารจากภาชนะกระดาษกี่ชิ้น');
      DataManagement::addFactor(39,0.11,0);
        for($i=1;$i<=12;$i++) {
          DataManagement::addBehaviorItem(39,"$i ชิ้น",$i);
        }        
    DataManagement::addBehaviorItem(39,"นานกว่าในตัวเลือก",999);   
    
    
        
    DataManagement::addBehavior('ขวดพลาสติก',"images/icon/how-cool_43.png",'คุณรับประทานเครื่องดื่มจากภาชนะพลาสติกกี่ชิ้น');
      DataManagement::addFactor(40,0.5,0);
        for($i=1;$i<=12;$i++) {
          DataManagement::addBehaviorItem(40,"$i ชิ้น",$i);
        }        
    DataManagement::addBehaviorItem(40,"นานกว่าในตัวเลือก",999);   
        
    DataManagement::addBehavior('ขวดแก้ว',"images/icon/how-cool_44.png",'คุณรับประทานเครื่องดื่มจากขวดแก้วกี่ชิ้น');
       DataManagement::addFactor(41,0.496,0);
        for($i=1;$i<=12;$i++) {
          DataManagement::addBehaviorItem(41,"$i ชิ้น",$i);
        }      
    DataManagement::addBehaviorItem(41,"นานกว่าในตัวเลือก",999);    
       

    DataManagement::addBehavior('กระป๋อง',"images/icon/how-cool_45.png",'คุณรับประทานเครื่องดื่มจากกระป๋องทั้งหมดกี่ชิ้น');
       DataManagement::addFactor(42,0.170,0);
        for($i=1;$i<=12;$i++) {
          DataManagement::addBehaviorItem(42,"$i ชิ้น",$i);
        }      
    DataManagement::addBehaviorItem(42,"นานกว่าในตัวเลือก",999);    
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
  
  function getDetailData($hash){
    $result = db_query("SELECT * FROM howcool_behav WHERE hash = '$hash'");
    $data=array();
    while ($row = db_fetch_object($result))
    {
       $data = $row->selects;
    
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




