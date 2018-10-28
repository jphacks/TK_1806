const uint DATS[4] = { 7, 6, 5, 4 };
const uint CLK = 9;
const float OUT_VOL[4] = { 0.001f, 0.001f, 0.001f, 0.001f };
const float LOAD[4] = { 2000.0f, 10000.0f, 2000.0f, 2000.0f};
float offsets[4] = {};
 
void setup() {
    Serial.begin(9600);
    Serial.println("start");
    pinMode(CLK, OUTPUT);
    for( int pin = 0; pin < 4; ++pin )
    {
       pinMode(DATS[pin], INPUT);
      offsets[pin] = Read(pin);
    }
      
}
 
void loop() { 
    float data;
    for( int pin = 0; pin < 4; ++pin )
    {
      data = Read( pin );
      Serial.print( pin );
      Serial.print( ":" );
      Serial.print( -data, 2 );
      Serial.println("g");
    }
    delay(250);
}
 
float Read( int pin ){
    long sum = 0;
    for (int i = 0; i < 10; i++) {
        long data=0;
        while(digitalRead(DATS[pin])!=0);
        for(char i=0;i<24;i++) {
            digitalWrite(CLK,1);
            delayMicroseconds(1);
            digitalWrite(CLK,0);
            delayMicroseconds(1);
            data = (data<<1)|(digitalRead(DATS[pin]));
        }
        digitalWrite(CLK,1); //gain=128
        delayMicroseconds(1);
        digitalWrite(CLK,0);
        delayMicroseconds(1);
        data = data^0x800000;
        sum += data;
    }
    float data = sum /10;
    float volt;float gram;
    volt =data*(4.2987/16777216.0/128);
    gram=volt/(OUT_VOL[pin]*4.2987/LOAD[pin]);
    return gram-offsets[pin];
}
