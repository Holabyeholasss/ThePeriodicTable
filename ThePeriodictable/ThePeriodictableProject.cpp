#include<iostream>             //Header Files
#include<cstring>
#include<string>
using namespace std;
struct element
{
    char sym[3],name[18],block[2],typ[15];       //Element's Properties
    int atmno,period,group;
    float massno,en;
    void display()
    {
        cout<<"ELEMENT SYMBOL: "<<sym<<endl;
        cout<<"ELEMENT NAME: "<<name<<endl;
        cout<<"ATOMIC NUMBER: "<<atmno<<endl;
        cout<<"MASS NUMBER: "<<massno<<endl;
        cout<<"ELECTRONEGATIVITY: "<<en<<endl;
        cout<<"BLOCK: "<<block<<endl;
        cout<<"TYPE: "<<typ<<endl;
        cout<<"PERIOD: "<<period<<endl;
        cout<<"GROUP: "<<group<<endl;
    }
}pt[119];
void search(int num)
{
    if(num<119&&num>0)
    {pt[num].display();} // Because Atomic Number is the Element's address in the array
    else {cout<<"Sorry but an element with such atomic number has not been discovered "<<endl;}
}
void search(int p, int b)
{
    int z=0;
     for(int i1=1;i1<119;i1++)
     {
         if(pt[i1].group==p && pt[i1].period==b)  //comparing user input with element's group number and period number
         {pt[i1].display();z++;}
     }
     if(z=0){cout<<"Please enter a valid period and group number"<<endl;}
}
void search(char sy[], int q)
{
     for(int i2=1;i2<119;i2++)
     {
         if(strcmp(pt[i2].sym,sy)==0) //comparing user input and symbol of element
         {pt[i2].display();}
     }
}
void search(char na[])
{
    int v=0;
     for(int i3=1;i3<119;i3++)
     {
         if(strcmp(pt[i3].name,na)==0) //comparing user input and name of element
         {
             pt[i3].display();
             v++;
         }
     }
     if(v=0){cout<<"Please enter a Name "<<endl;}

}
void assign()
{
    for(int i11=0;i11<119;i11++)      //Atomic Number Is address of Element in array
    {pt[i11].atmno=i11;}

    strcpy(pt[1].sym,"H");
    strcpy(pt[1].name,"Hydrogen");
    pt[1].massno=1.008;
    pt[1].en=2.1;
    strcpy(pt[1].block,"S");
    strcpy(pt[1].typ,"Hydrogen");
    pt[1].period=1;
    pt[1].group=1;

    strcpy(pt[3].sym,"Li");                //Alkali Metals
    strcpy(pt[3].name,"Lithium");
    pt[3].massno=6.94;
    pt[3].en=1;
    strcpy(pt[3].block,"S");
    strcpy(pt[3].typ,"Alkali Metals");
    pt[3].period=2;
    pt[3].group=1;

    strcpy(pt[11].sym,"Na");
    strcpy(pt[11].name,"Sodium");
    pt[11].massno=22.99;
    pt[11].en=0.9;
    strcpy(pt[11].block,"S");
    strcpy(pt[11].typ,"Alkali Metals");
    pt[11].period=3;
    pt[11].group=1;

    strcpy(pt[19].sym,"K");
    strcpy(pt[19].name,"Potassium");
    pt[19].massno=39.10;
    pt[19].en=0.8;
    strcpy(pt[19].block,"S");
    strcpy(pt[19].typ,"Alkali Metals");
    pt[19].period=4;
    pt[19].group=1;

    strcpy(pt[37].sym,"Rb");
    strcpy(pt[37].name,"Rubedium");
    pt[37].massno=85.47;
    pt[37].en=0.8;
    strcpy(pt[37].block,"S");
    strcpy(pt[37].typ,"Alkali Metals");
    pt[37].period=5;
    pt[37].group=1;

    strcpy(pt[55].sym,"Cs");
    strcpy(pt[55].name,"Cesium");
    pt[55].massno=132.91;
    pt[55].en=0.86;
    strcpy(pt[55].block,"S");
    strcpy(pt[55].typ,"Alkali Metals");
    pt[55].period=6;
    pt[55].group=1;

    strcpy(pt[87].sym,"Fr");
    strcpy(pt[87].name,"Francium");
    pt[87].massno=223.00;
    pt[87].en=0.7;
    strcpy(pt[87].block,"S");
    strcpy(pt[87].typ,"Alkali Metals");
    pt[87].period=7;
    pt[87].group=1;

    strcpy(pt[4].sym,"Be");             //Alkali Earth Metals
    strcpy(pt[4].name,"Beryllium");
    pt[4].massno=9.01;
    pt[4].en=1.5;
    strcpy(pt[4].block,"S");
    strcpy(pt[4].typ,"Alkali Earth Metals");
    pt[4].period=2;
    pt[4].group=2;

    strcpy(pt[12].sym,"Mg");
    strcpy(pt[12].name,"Magnesium");
    pt[12].massno=24.31;
    pt[12].en=1.2;
    strcpy(pt[12].block,"S");
    strcpy(pt[12].typ,"Alkali Earth Metals");
    pt[12].period=3;
    pt[12].group=2;

    strcpy(pt[20].sym,"Ca");
    strcpy(pt[20].name,"Calcium");
    pt[20].massno=40.08;
    pt[20].en=1.0;
    strcpy(pt[20].block,"S");
    strcpy(pt[20].typ,"Alkali Earth Metals");
    pt[20].period=4;
    pt[20].group=2;

    strcpy(pt[38].sym,"Sr");
    strcpy(pt[38].name,"Strontium");
    pt[38].massno=87.62;
    pt[38].en=1.0;
    strcpy(pt[38].block,"S");
    strcpy(pt[38].typ,"Alkali Earth Metals");
    pt[38].period=5;
    pt[38].group=2;

    strcpy(pt[56].sym,"Ba");
    strcpy(pt[56].name,"Barium");
    pt[56].massno=137.34;
    pt[56].en=0.9;
    strcpy(pt[56].block,"S");
    strcpy(pt[56].typ,"Alkali Earth Metals");
    pt[56].period=6;
    pt[56].group=2;

    strcpy(pt[88].sym,"Ra");
    strcpy(pt[88].name,"Radium");
    pt[88].massno=226;
    pt[88].en=0.9;
    strcpy(pt[88].block,"S");
    strcpy(pt[88].typ,"Alkali Earth Metals");
    pt[88].period=7;
    pt[88].group=2;

    strcpy(pt[21].sym,"Sc");                  //Transition Metals
    strcpy(pt[21].name,"Scandium");
    pt[21].massno=44.96;
    pt[21].en=1.3;
    strcpy(pt[21].block,"D");
    strcpy(pt[21].typ,"Transition Metals");
    pt[21].period=4;
    pt[21].group=3;

    strcpy(pt[39].sym,"Y");
    strcpy(pt[39].name,"Yttrium");
    pt[39].massno=88.91;
    pt[39].en=1.3;
    strcpy(pt[39].block,"D");
    strcpy(pt[39].typ,"Transition Metals");
    pt[39].period=5;
    pt[39].group=3;

    strcpy(pt[57].sym,"La");
    strcpy(pt[57].name,"Lanthanum");
    pt[57].massno=138.09;
    pt[57].en=1.1;
    strcpy(pt[57].block,"D");
    strcpy(pt[57].typ,"Transition Metals");
    pt[57].period=6;
    pt[57].group=3;

    strcpy(pt[89].sym,"Ac");
    strcpy(pt[89].name,"Actinium");
    pt[89].massno=227;
    pt[89].en=1.1;
    strcpy(pt[89].block,"D");
    strcpy(pt[89].typ,"Transition Metals");
    pt[89].period=7;
    pt[89].group=3;

    strcpy(pt[58].sym,"Ce");              //Lanthanoid Series
    strcpy(pt[58].name,"Cebium");
    pt[58].massno=140.12;
    pt[58].en=1.1;
    strcpy(pt[58].block,"F");
    strcpy(pt[58].typ,"Inner Transition Metals");
    pt[58].period=6;
    pt[58].group=3;

    strcpy(pt[59].sym,"Pr");
    strcpy(pt[59].name,"Praseodynium");
    pt[59].massno=140.91;
    pt[59].en=1.1;
    strcpy(pt[59].block,"F");
    strcpy(pt[59].typ,"Inner Transition Metals");
    pt[59].period=6;
    pt[59].group=3;

    strcpy(pt[60].sym,"Nd");
    strcpy(pt[60].name,"Neomethium");
    pt[60].massno=144;
    pt[60].en=1.07;
    strcpy(pt[60].block,"F");
    strcpy(pt[60].typ,"Inner Transition Metals");
    pt[60].period=6;
    pt[60].group=3;

    strcpy(pt[61].sym,"Pm");
    strcpy(pt[61].name,"Promthium");
    pt[61].massno=145;
    pt[61].en=1.07;
    strcpy(pt[61].block,"F");
    strcpy(pt[61].typ,"Inner Transition Metals");
    pt[61].period=6;
    pt[61].group=3;

    strcpy(pt[62].sym,"Sm");
    strcpy(pt[62].name,"Samarium");
    pt[62].massno=150.40;
    pt[62].en=1.01;
    strcpy(pt[62].block,"F");
    strcpy(pt[62].typ,"Inner Transition Metals");
    pt[62].period=6;
    pt[62].group=3;

    strcpy(pt[63].sym,"Eu");
    strcpy(pt[63].name,"Europium");
    pt[63].massno=151.06;
    pt[63].en=1.01;
    strcpy(pt[63].block,"F");
    strcpy(pt[63].typ,"Inner Transition Metals");
    pt[63].period=6;
    pt[63].group=3;

    strcpy(pt[64].sym,"Gd");
    strcpy(pt[64].name,"Gadolinium");
    pt[64].massno=157.06;
    pt[64].en=1.1;
    strcpy(pt[64].block,"F");
    strcpy(pt[64].typ,"Inner Transition Metals");
    pt[64].period=6;
    pt[64].group=3;

    strcpy(pt[65].sym,"Tb");
    strcpy(pt[65].name,"Terbium");
    pt[65].massno=158.93;
    pt[65].en=1.2;
    strcpy(pt[65].block,"F");
    strcpy(pt[65].typ,"Inner Transition Metals");
    pt[65].period=6;
    pt[65].group=3;

    strcpy(pt[66].sym,"Dy");
    strcpy(pt[66].name,"Dysprosium");
    pt[66].massno=162.50;
    pt[66].en=1.1;
    strcpy(pt[66].block,"F");
    strcpy(pt[66].typ,"Inner Transition Metals");
    pt[66].period=6;
    pt[66].group=3;

    strcpy(pt[67].sym,"Ho");
    strcpy(pt[67].name,"Holonium");
    pt[67].massno=164.93;
    pt[67].en=1.2;
    strcpy(pt[67].block,"F");
    strcpy(pt[67].typ,"Inner Transition Metals");
    pt[67].period=6;
    pt[67].group=3;

    strcpy(pt[68].sym,"Er");
    strcpy(pt[68].name,"Eribinium");
    pt[68].massno=167.26;
    pt[68].en=1.1;
    strcpy(pt[68].block,"F");
    strcpy(pt[68].typ,"Inner Transition Metals");
    pt[68].period=6;
    pt[68].group=3;

    strcpy(pt[69].sym,"Tm");
    strcpy(pt[69].name,"Thulium");
    pt[69].massno=168.93;
    pt[69].en=1.1;
    strcpy(pt[69].block,"F");
    strcpy(pt[69].typ,"Inner Transition Metals");
    pt[69].period=6;
    pt[69].group=3;

    strcpy(pt[70].sym,"Yb");
    strcpy(pt[70].name,"Ytterbuim");
    pt[70].massno=173;
    pt[70].en=1.1;
    strcpy(pt[70].block,"F");
    strcpy(pt[70].typ,"Inner Transition Metals");
    pt[70].period=6;
    pt[70].group=3;

    strcpy(pt[71].sym,"Lu");
    strcpy(pt[71].name,"Lutetium");
    pt[71].massno=175;
    pt[71].en=1.2;
    strcpy(pt[71].block,"F");
    strcpy(pt[71].typ,"Inner Transition Metals");
    pt[71].period=6;
    pt[71].group=3;

    strcpy(pt[90].sym,"Th");              //Actinoid Series
    strcpy(pt[90].name,"Thorium");
    pt[90].massno=232.04;
    pt[90].en=1.3;
    strcpy(pt[90].block,"F");
    strcpy(pt[90].typ,"Actinoid Series");
    pt[90].period=7;
    pt[90].group=3;

    strcpy(pt[91].sym,"Pa");
    strcpy(pt[91].name,"Protoactinium");
    pt[91].massno=231;
    pt[91].en=1.1;
    strcpy(pt[91].block,"F");
    strcpy(pt[91].typ,"Actinoid Series");
    pt[91].period=7;
    pt[91].group=3;

    strcpy(pt[92].sym,"U");
    strcpy(pt[92].name,"Uranium");
    pt[92].massno=238.03;
    pt[92].en=1.22;
    strcpy(pt[92].block,"F");
    strcpy(pt[92].typ,"Actinoid Series");
    pt[92].period=7;
    pt[92].group=3;

    strcpy(pt[93].sym,"Np");
    strcpy(pt[93].name,"Neptunium");
    pt[93].massno=237.05;
    pt[93].en=1.3;
    strcpy(pt[93].block,"F");
    strcpy(pt[93].typ,"Actinoid Series");
    pt[93].period=7;
    pt[93].group=3;

    strcpy(pt[94].sym,"Pu");
    strcpy(pt[94].name,"Plutonium");
    pt[94].massno=242;
    pt[94].en=1.3;
    strcpy(pt[94].block,"F");
    strcpy(pt[94].typ,"Actinoid Series");
    pt[94].period=7;
    pt[94].group=3;

    strcpy(pt[95].sym,"Am");
    strcpy(pt[95].name,"Americium");
    pt[95].massno=243;
    pt[95].en=1.3;
    strcpy(pt[95].block,"F");
    strcpy(pt[95].typ,"Actinoid Series");
    pt[95].period=7;
    pt[95].group=3;

    strcpy(pt[96].sym,"Cm");
    strcpy(pt[96].name,"Curium");
    pt[96].massno=247;
    pt[96].en=1.3;
    strcpy(pt[96].block,"F");
    strcpy(pt[96].typ,"Actinoid Series");
    pt[96].period=7;
    pt[96].group=3;

    strcpy(pt[97].sym,"Bk");
    strcpy(pt[97].name,"Berkelium");
    pt[97].massno=249;
    pt[97].en=1.3;
    strcpy(pt[97].block,"F");
    strcpy(pt[97].typ,"Actinoid Series");
    pt[97].period=7;
    pt[97].group=3;

    strcpy(pt[98].sym,"Cf");
    strcpy(pt[98].name,"Californium");
    pt[98].massno=251;
    pt[98].en=1.3;
    strcpy(pt[98].block,"F");
    strcpy(pt[98].typ,"Actinoid Series");
    pt[98].period=7;
    pt[98].group=3;

    strcpy(pt[99].sym,"Es");
    strcpy(pt[99].name,"Einstenium");
    pt[99].massno=254;
    pt[99].en=1.3;
    strcpy(pt[99].block,"F");
    strcpy(pt[99].typ,"Actinoid Series");
    pt[99].period=7;
    pt[99].group=3;

    strcpy(pt[100].sym,"Fm");
    strcpy(pt[100].name,"Fermium");
    pt[100].massno=253;
    pt[100].en=1.3;
    strcpy(pt[100].block,"F");
    strcpy(pt[100].typ,"Actinoid Series");
    pt[100].period=7;
    pt[100].group=3;

    strcpy(pt[101].sym,"Md");
    strcpy(pt[101].name,"Mendelivium");
    pt[101].massno=256;
    pt[101].en=1.3;
    strcpy(pt[101].block,"F");
    strcpy(pt[101].typ,"Actinoid Series");
    pt[101].period=7;
    pt[101].group=3;

    strcpy(pt[102].sym,"No");
    strcpy(pt[102].name,"Nobelium");
    pt[102].massno=254;
    pt[102].en=1.3;
    strcpy(pt[102].block,"F");
    strcpy(pt[102].typ,"Actinoid Series");
    pt[102].period=7;
    pt[102].group=3;

    strcpy(pt[103].sym,"Lr");
    strcpy(pt[103].name,"Lawrencium");
    pt[103].massno=257;
    pt[103].en=1.7;
    strcpy(pt[103].block,"F");
    strcpy(pt[103].typ,"Actinoid Series");
    pt[103].period=7;
    pt[103].group=3;

    strcpy(pt[22].sym,"Ti");           //Transition Metals Continued...
    strcpy(pt[22].name,"Titanium");
    pt[22].massno=48;
    pt[22].en=1.5;
    strcpy(pt[22].block,"D");
    strcpy(pt[22].typ,"Transition Metals");
    pt[22].period=4;
    pt[22].group=4;

    strcpy(pt[40].sym,"Zr");
    strcpy(pt[40].name,"Zirconium");
    pt[40].massno=91.22;
    pt[40].en=1.3;
    strcpy(pt[40].block,"D");
    strcpy(pt[40].typ,"Transition Metals");
    pt[40].period=5;
    pt[40].group=4;

    strcpy(pt[72].sym,"Hf");
    strcpy(pt[72].name,"Hafnium");
    pt[72].massno=178.5;
    pt[72].en=1.3;
    strcpy(pt[72].block,"D");
    strcpy(pt[72].typ,"Transition Metals");
    pt[72].period=6;
    pt[72].group=4;

    strcpy(pt[104].sym,"Rf");
    strcpy(pt[104].name,"Rutherfordium");
    pt[104].massno=261.11;
    pt[104].en=0;
    strcpy(pt[104].block,"D");
    strcpy(pt[104].typ,"Transition Metals");
    pt[104].period=7;
    pt[104].group=4;

    strcpy(pt[23].sym,"V");
    strcpy(pt[23].name,"Vanadium");
    pt[23].massno=51;
    pt[23].en=1.6;
    strcpy(pt[23].block,"D");
    strcpy(pt[23].typ,"Transition Metals");
    pt[23].period=4;
    pt[23].group=5;

    strcpy(pt[41].sym,"Nb");
    strcpy(pt[41].name,"Niobium");
    pt[41].massno=93;
    pt[41].en=1.6;
    strcpy(pt[41].block,"D");
    strcpy(pt[41].typ,"Transition Metals");
    pt[41].period=5;
    pt[41].group=5;

    strcpy(pt[73].sym,"Ta");
    strcpy(pt[73].name,"Tantalium");
    pt[73].massno=181;
    pt[73].en=1.53;
    strcpy(pt[73].block,"D");
    strcpy(pt[73].typ,"Transition Metals");
    pt[73].period=6;
    pt[73].group=5;

    strcpy(pt[105].sym,"Db");
    strcpy(pt[105].name,"Dubnium");
    pt[105].massno=262;
    pt[105].en=0;
    strcpy(pt[105].block,"D");
    strcpy(pt[105].typ,"Transition Metals");
    pt[105].period=7;
    pt[105].group=5;

    strcpy(pt[24].sym,"Cr");
    strcpy(pt[24].name,"Chromium");
    pt[24].massno=52;
    pt[24].en=1.6;
    strcpy(pt[24].block,"D");
    strcpy(pt[24].typ,"Transition Metals");
    pt[24].period=4;
    pt[24].group=6;

    strcpy(pt[42].sym,"Mo");
    strcpy(pt[42].name,"Molybdenum");
    pt[42].massno=96;
    pt[42].en=2.2;
    strcpy(pt[42].block,"D");
    strcpy(pt[42].typ,"Transition Metals");
    pt[42].period=5;
    pt[42].group=6;

    strcpy(pt[74].sym,"W");
    strcpy(pt[74].name,"Tungsten");
    pt[74].massno=184;
    pt[74].en=1.7;
    strcpy(pt[74].block,"D");
    strcpy(pt[74].typ,"Transition Metals");
    pt[74].period=6;
    pt[74].group=6;

    strcpy(pt[106].sym,"Sg");
    strcpy(pt[106].name,"Seaborgium");
    pt[106].massno=263;
    pt[106].en=0;
    strcpy(pt[106].block,"D");
    strcpy(pt[106].typ,"Transition Metals");
    pt[106].period=7;
    pt[106].group=6;

    strcpy(pt[25].sym,"Mn");
    strcpy(pt[25].name,"Manganese");
    pt[25].massno=55;
    pt[25].en=1.6;
    strcpy(pt[25].block,"D");
    strcpy(pt[25].typ,"Transition Metals");
    pt[25].period=4;
    pt[25].group=7;

    strcpy(pt[43].sym,"Tc");
    strcpy(pt[43].name,"Technitium");
    pt[43].massno=99;
    pt[43].en=2.1;
    strcpy(pt[43].block,"D");
    strcpy(pt[43].typ,"Transition Metals");
    pt[43].period=5;
    pt[43].group=7;

    strcpy(pt[75].sym,"Re");
    strcpy(pt[75].name,"Rhenium");
    pt[75].massno=186.20;
    pt[75].en=1.9;
    strcpy(pt[75].block,"D");
    strcpy(pt[75].typ,"Transition Metals");
    pt[75].period=6;
    pt[75].group=7;

    strcpy(pt[107].sym,"Bh");
    strcpy(pt[107].name,"Bohrium");
    pt[107].massno=262;
    pt[107].en=0;
    strcpy(pt[107].block,"D");
    strcpy(pt[107].typ,"Transition Metals");
    pt[107].period=7;
    pt[107].group=7;

    strcpy(pt[26].sym,"Fe");
    strcpy(pt[26].name,"Iron");
    pt[26].massno=56;
    pt[26].en=1.8;
    strcpy(pt[26].block,"D");
    strcpy(pt[26].typ,"Transition Metals");
    pt[26].period=4;
    pt[26].group=8;

    strcpy(pt[44].sym,"Ru");
    strcpy(pt[44].name,"Ruthenium");
    pt[44].massno=101.07;
    pt[44].en=2.2;
    strcpy(pt[44].block,"D");
    strcpy(pt[44].typ,"Transition Metals");
    pt[44].period=5;
    pt[44].group=8;

    strcpy(pt[76].sym,"Os");
    strcpy(pt[76].name,"Osmium");
    pt[76].massno=190;
    pt[76].en=2.2;
    strcpy(pt[76].block,"D");
    strcpy(pt[76].typ,"Transition Metals");
    pt[76].period=6;
    pt[76].group=8;

    strcpy(pt[108].sym,"Hs");
    strcpy(pt[108].name,"Hassium");
    pt[108].massno=265;
    pt[108].en=0;
    strcpy(pt[108].block,"D");
    strcpy(pt[108].typ,"Transition Metals");
    pt[108].period=7;
    pt[108].group=8;

    strcpy(pt[27].sym,"Co");
    strcpy(pt[27].name,"Cobalt");
    pt[27].massno=59;
    pt[27].en=1.8;
    strcpy(pt[27].block,"D");
    strcpy(pt[27].typ,"Transition Metals");
    pt[27].period=4;
    pt[27].group=9;

    strcpy(pt[45].sym,"Rh");
    strcpy(pt[45].name,"Rhodium");
    pt[45].massno=103;
    pt[45].en=2.2;
    strcpy(pt[45].block,"D");
    strcpy(pt[45].typ,"Transition Metals");
    pt[45].period=5;
    pt[45].group=9;

    strcpy(pt[77].sym,"Ir");
    strcpy(pt[77].name,"Iridium");
    pt[77].massno=192;
    pt[77].en=2.2;
    strcpy(pt[77].block,"D");
    strcpy(pt[77].typ,"Transition Metals");
    pt[77].period=6;
    pt[77].group=9;

    strcpy(pt[109].sym,"Mt");
    strcpy(pt[109].name,"Meitneium");
    pt[109].massno=266;
    pt[109].en=0;
    strcpy(pt[109].block,"D");
    strcpy(pt[109].typ,"Transition Metals");
    pt[109].period=7;
    pt[109].group=9;

    strcpy(pt[28].sym,"Ni");
    strcpy(pt[28].name,"Nickel");
    pt[28].massno=59;
    pt[28].en=1.8;
    strcpy(pt[28].block,"D");
    strcpy(pt[28].typ,"Transition Metals");
    pt[28].period=4;
    pt[28].group=10;

    strcpy(pt[46].sym,"Pd");
    strcpy(pt[46].name,"Palladium");
    pt[46].massno=106.5;
    pt[46].en=2.2;
    strcpy(pt[46].block,"D");
    strcpy(pt[46].typ,"Transition Metals");
    pt[46].period=5;
    pt[46].group=10;

    strcpy(pt[78].sym,"Pt");
    strcpy(pt[78].name,"Platinum");
    pt[78].massno=195.1;
    pt[78].en=2.2;
    strcpy(pt[78].block,"D");
    strcpy(pt[78].typ,"Transition Metals");
    pt[78].period=6;
    pt[78].group=10;

    strcpy(pt[110].sym,"Ds");
    strcpy(pt[110].name,"Ununnilenium");
    pt[110].massno=271;
    pt[110].en=0;
    strcpy(pt[110].block,"D");
    strcpy(pt[110].typ,"Transition Metals");
    pt[110].period=7;
    pt[110].group=10;

    strcpy(pt[29].sym,"Cu");
    strcpy(pt[29].name,"Copper");
    pt[29].massno=63.5;
    pt[29].en=1.9;
    strcpy(pt[29].block,"D");
    strcpy(pt[29].typ,"Transition Metals");
    pt[29].period=4;
    pt[29].group=11;

    strcpy(pt[47].sym,"Ag");
    strcpy(pt[47].name,"Silver");
    pt[47].massno=108;
    pt[47].en=1.9;
    strcpy(pt[47].block,"D");
    strcpy(pt[47].typ,"Transition Metals");
    pt[47].period=5;
    pt[47].group=11;

    strcpy(pt[79].sym,"Au");
    strcpy(pt[79].name,"Gold");
    pt[79].massno=197;
    pt[79].en=2.4;
    strcpy(pt[79].block,"D");
    strcpy(pt[79].typ,"Transition Metals");
    pt[79].period=6;
    pt[79].group=11;

    strcpy(pt[111].sym,"Rg");
    strcpy(pt[111].name,"Roentgenium");
    pt[111].massno=272;
    pt[111].en=0;
    strcpy(pt[111].block,"D");
    strcpy(pt[111].typ,"Transition Metals");
    pt[111].period=7;
    pt[111].group=11;

    strcpy(pt[30].sym,"Zn");
    strcpy(pt[30].name,"Zinc");
    pt[30].massno=65.4;
    pt[30].en=1.6;
    strcpy(pt[30].block,"D");
    strcpy(pt[30].typ,"Transition Metals");
    pt[30].period=4;
    pt[30].group=12;

    strcpy(pt[48].sym,"Cd");
    strcpy(pt[48].name,"Cadmium");
    pt[48].massno=112.5;
    pt[48].en=1.7;
    strcpy(pt[48].block,"D");
    strcpy(pt[48].typ,"Transition Metals");
    pt[48].period=5;
    pt[48].group=12;

    strcpy(pt[80].sym,"Hg");
    strcpy(pt[80].name,"Mercury");
    pt[80].massno=200.59;
    pt[80].en=2.9;
    strcpy(pt[80].block,"D");
    strcpy(pt[80].typ,"Transition Metals");
    pt[80].period=6;
    pt[80].group=12;

    strcpy(pt[112].sym,"Uub");
    strcpy(pt[112].name,"Ununbium");
    pt[112].massno=285;
    pt[112].en=0;
    strcpy(pt[112].block,"D");
    strcpy(pt[112].typ,"Transition Metals");
    pt[112].period=7;
    pt[112].group=12;

    strcpy(pt[5].sym,"B");                 //Boron Family
    strcpy(pt[5].name,"Boron");
    pt[5].massno=11;
    pt[5].en=2;
    strcpy(pt[5].block,"P");
    strcpy(pt[5].typ,"Boron Family");
    pt[5].period=2;
    pt[5].group=13;

    strcpy(pt[13].sym,"Al");
    strcpy(pt[13].name,"Aluminium");
    pt[13].massno=27;
    pt[13].en=1.6;
    strcpy(pt[13].block,"P");
    strcpy(pt[13].typ,"Boron Family");
    pt[13].period=3;
    pt[13].group=13;

    strcpy(pt[31].sym,"Ga");
    strcpy(pt[31].name,"Gallium");
    pt[31].massno=70;
    pt[31].en=1.8;
    strcpy(pt[31].block,"P");
    strcpy(pt[31].typ,"Boron Family");
    pt[31].period=4;
    pt[31].group=13;

    strcpy(pt[49].sym,"In");
    strcpy(pt[49].name,"Indium");
    pt[49].massno=115;
    pt[49].en=1.7;
    strcpy(pt[49].block,"P");
    strcpy(pt[49].typ,"Boron Family");
    pt[49].period=5;
    pt[49].group=13;

    strcpy(pt[81].sym,"Tl");
    strcpy(pt[81].name,"Thallium");
    pt[81].massno=204.3;
    pt[81].en=1.8;
    strcpy(pt[81].block,"P");
    strcpy(pt[81].typ,"Boron Family");
    pt[81].period=6;
    pt[81].group=13;

    strcpy(pt[113].sym,"Uut");
    strcpy(pt[113].name,"Ununtrium");
    pt[113].massno=284;
    pt[113].en=0;
    strcpy(pt[113].block,"P");
    strcpy(pt[113].typ,"Boron Family");
    pt[113].period=7;
    pt[113].group=13;

    strcpy(pt[6].sym,"C");               //Carbon Family
    strcpy(pt[6].name,"Carbon");
    pt[6].massno=12;
    pt[6].en=2.5;
    strcpy(pt[6].block,"P");
    strcpy(pt[6].typ,"Carbon Family");
    pt[6].period=2;
    pt[6].group=14;

    strcpy(pt[14].sym,"Si");
    strcpy(pt[14].name,"Silicon");
    pt[14].massno=63.5;
    pt[14].en=1.8;
    strcpy(pt[14].block,"P");
    strcpy(pt[14].typ,"Carbon Family");
    pt[14].period=5;
    pt[14].group=14;

    strcpy(pt[32].sym,"Ge");
    strcpy(pt[32].name,"Germanium");
    pt[32].massno=72.59;
    pt[32].en=1.9;
    strcpy(pt[32].block,"P");
    strcpy(pt[32].typ,"Carbon Family");
    pt[32].period=4;
    pt[32].group=14;

    strcpy(pt[50].sym,"Sn");
    strcpy(pt[50].name,"Tin");
    pt[50].massno=118.69;
    pt[50].en=2.0;
    strcpy(pt[50].block,"P");
    strcpy(pt[50].typ,"Carbon Family");
    pt[50].period=5;
    pt[50].group=14;

    strcpy(pt[82].sym,"Pb");
    strcpy(pt[82].name,"Lead");
    pt[82].massno=207.19;
    pt[82].en=1.8;
    strcpy(pt[82].block,"P");
    strcpy(pt[82].typ,"Carbon Family");
    pt[82].period=6;
    pt[82].group=14;

    strcpy(pt[114].sym,"Uuq");
    strcpy(pt[114].name,"Ununquadium");
    pt[114].massno=289;
    pt[114].en=0;
    strcpy(pt[114].block,"P");
    strcpy(pt[114].typ,"Carbon Family");
    pt[114].period=7;
    pt[114].group=14;

    strcpy(pt[7].sym,"N");                           //Pnictogen
    strcpy(pt[7].name,"Nitrogen");
    pt[7].massno=14;
    pt[7].en=3;
    strcpy(pt[7].block,"P");
    strcpy(pt[7].typ,"Pnictogen Family");
    pt[7].period=2;
    pt[7].group=15;

    strcpy(pt[15].sym,"P");
    strcpy(pt[15].name,"Phosphorus");
    pt[15].massno=31;
    pt[15].en=2.1;
    strcpy(pt[15].block,"P");
    strcpy(pt[15].typ,"Pnictogen Family");
    pt[15].period=3;
    pt[15].group=15;

    strcpy(pt[33].sym,"As");
    strcpy(pt[33].name,"Arsenic");
    pt[33].massno=75;
    pt[33].en=2.2;
    strcpy(pt[33].block,"P");
    strcpy(pt[33].typ,"Pnictogen Family");
    pt[33].period=4;
    pt[33].group=15;

    strcpy(pt[51].sym,"Sb");
    strcpy(pt[51].name,"Antimony");
    pt[51].massno=122;
    pt[51].en=2.1;
    strcpy(pt[51].block,"P");
    strcpy(pt[51].typ,"Pnictogen Family");
    pt[51].period=5;
    pt[51].group=15;

    strcpy(pt[82].sym,"Bi");
    strcpy(pt[82].name,"Bismuth");
    pt[82].massno=209;
    pt[82].en=1.9;
    strcpy(pt[82].block,"P");
    strcpy(pt[82].typ,"Pnictogen Family");
    pt[82].period=6;
    pt[82].group=15;

    strcpy(pt[115].sym,"Uup");
    strcpy(pt[115].name,"Ununpendium");
    pt[115].massno=288;
    pt[115].en=0;
    strcpy(pt[115].block,"P");
    strcpy(pt[115].typ,"Pnictogen Family");
    pt[115].period=7;
    pt[115].group=15;

    strcpy(pt[8].sym,"O");               //Chalcogens
    strcpy(pt[8].name,"Oxygen");
    pt[8].massno=16;
    pt[8].en=3.5;
    strcpy(pt[8].block,"P");
    strcpy(pt[8].typ,"Chalcogen Family");
    pt[8].period=2;
    pt[8].group=16;

    strcpy(pt[16].sym,"S");
    strcpy(pt[16].name,"Sulphur");
    pt[16].massno=32;
    pt[16].en=2.6;
    strcpy(pt[16].block,"P");
    strcpy(pt[16].typ,"Chalcogen Family");
    pt[16].period=3;
    pt[16].group=16;

    strcpy(pt[34].sym,"Se");
    strcpy(pt[34].name,"Selenium");
    pt[34].massno=79;
    pt[34].en=2.6;
    strcpy(pt[34].block,"P");
    strcpy(pt[34].typ,"Chalcogen Family");
    pt[34].period=4;
    pt[34].group=16;

    strcpy(pt[52].sym,"Te");
    strcpy(pt[52].name,"Tellurium");
    pt[52].massno=127.60;
    pt[52].en=2.1;
    strcpy(pt[52].block,"P");
    strcpy(pt[52].typ,"Chalcogen Family");
    pt[52].period=5;
    pt[52].group=16;

    strcpy(pt[84].sym,"Po");
    strcpy(pt[84].name,"Polonium");
    pt[84].massno=209;
    pt[84].en=2.0;
    strcpy(pt[84].block,"P");
    strcpy(pt[84].typ,"Chalcogen Family");
    pt[84].period=6;
    pt[84].group=16;

    strcpy(pt[116].sym,"Uuh");
    strcpy(pt[116].name,"Ununhexium");
    pt[116].massno=292;
    pt[116].en=0;
    strcpy(pt[116].block,"P");
    strcpy(pt[116].typ,"Chalcogen Family");
    pt[116].period=7;
    pt[116].group=16;

    strcpy(pt[9].sym,"F");            //Halogens
    strcpy(pt[9].name,"Fluorine");
    pt[9].massno=19;
    pt[9].en=4;
    strcpy(pt[9].block,"P");
    strcpy(pt[9].typ,"Halogen Family");
    pt[9].period=2;
    pt[9].group=17;

    strcpy(pt[17].sym,"Cl");
    strcpy(pt[17].name,"Chlorine");
    pt[17].massno=35.45;
    pt[17].en=3;
    strcpy(pt[17].block,"P");
    strcpy(pt[17].typ,"Halogen Family");
    pt[17].period=3;
    pt[17].group=17;

    strcpy(pt[35].sym,"Br");
    strcpy(pt[35].name,"Bromine");
    pt[35].massno=80;
    pt[35].en=3;
    strcpy(pt[35].block,"P");
    strcpy(pt[35].typ,"Halogen Family");
    pt[35].period=4;
    pt[35].group=17;

    strcpy(pt[53].sym,"I");
    strcpy(pt[53].name,"Iodine");
    pt[53].massno=127;
    pt[53].en=2.6;
    strcpy(pt[53].block,"P");
    strcpy(pt[53].typ,"Halogen Family");
    pt[53].period=5;
    pt[53].group=17;

    strcpy(pt[85].sym,"At");
    strcpy(pt[85].name,"Astatine");
    pt[85].massno=210;
    pt[85].en=2.2;
    strcpy(pt[85].block,"P");
    strcpy(pt[85].typ,"Halogen Family");
    pt[85].period=6;
    pt[85].group=17;

    strcpy(pt[117].sym,"Uus");
    strcpy(pt[117].name,"Ununseptium");
    pt[117].massno=293;
    pt[117].en=0;
    strcpy(pt[117].block,"P");
    strcpy(pt[117].typ,"Halogen Family");
    pt[117].period=7;
    pt[117].group=17;

    strcpy(pt[2].sym,"He");             //Noble Gases
    strcpy(pt[2].name,"Helium");
    pt[2].massno=4;
    pt[2].en=0;
    strcpy(pt[2].block,"P");
    strcpy(pt[2].typ,"Noble Gas Family");
    pt[2].period=1;
    pt[2].group=18;

    strcpy(pt[10].sym,"Ne");
    strcpy(pt[10].name,"Neon");
    pt[10].massno=20;
    pt[10].en=0;
    strcpy(pt[10].block,"P");
    strcpy(pt[10].typ,"Noble Gas Family");
    pt[10].period=2;
    pt[10].group=18;

    strcpy(pt[18].sym,"Ar");
    strcpy(pt[18].name,"Argon");
    pt[18].massno=40;
    pt[18].en=0;
    strcpy(pt[18].block,"P");
    strcpy(pt[18].typ,"Noble Gas Family");
    pt[18].period=3;
    pt[18].group=18;

    strcpy(pt[36].sym,"Kr");
    strcpy(pt[36].name,"Krypton");
    pt[36].massno=84;
    pt[36].en=0;
    strcpy(pt[36].block,"P");
    strcpy(pt[36].typ,"Noble Gas Family");
    pt[36].period=4;
    pt[36].group=18;

    strcpy(pt[54].sym,"Xe");
    strcpy(pt[54].name,"Xenon");
    pt[54].massno=131.3;
    pt[54].en=0;
    strcpy(pt[54].block,"P");
    strcpy(pt[54].typ,"Noble Gas Family");
    pt[54].period=5;
    pt[54].group=18;

    strcpy(pt[86].sym,"Rn");
    strcpy(pt[86].name,"Radon");
    pt[86].massno=222;
    pt[86].en=0;
    strcpy(pt[86].block,"P");
    strcpy(pt[86].typ,"Noble Gas Family");
    pt[86].period=6;
    pt[86].group=18;

    strcpy(pt[118].sym,"Uuo");
    strcpy(pt[118].name,"Ununoctium");
    pt[118].massno=294;
    pt[118].en=0;
    strcpy(pt[118].block,"P");
    strcpy(pt[118].typ,"Noble Gas Family");
    pt[118].period=7;
    pt[118].group=18;

}
int main()
{   assign();
    int no=0,grp=0,prd=0,a=0,b=1;  //atomic number , group, period
    char symb[3],nm1[15];  //name and symbol
    cout<<"The Following is The Computer Science Project of ABHISHEK KUMAR SWAIN "<<endl<<"THE PERIODIC TABLE"<<endl;
     cout<<"Here are the codes for elements searching:"<<endl<<"1: Search by Atomic Number"<<endl<<"2: Search by Group and Period"<<endl<<"3: Search by Symbol"<<endl<<"4: Search By Name "<<endl;
     cin>>a;
     switch (a)     //to make program menu driven
     {
        case 1: cout<<"Enter Atomic Number of Element to be searched"<<endl;
                cin>>no;
                search(no);
                no=0;
                break;
        case 2: cout<<"Enter the Group number and Period number respectivey"<<endl;
                cin>>grp;
                cin>>prd;
                search(grp,prd);
                grp=0;prd=0;
                break;
        case 3: cout<<"Enter the symbol"<<endl;
                cin>>symb;
                search(symb,1);
                break;
        case 4: cout<<"Enter the name"<<endl;
                cin>>nm1;
                search(nm1);
                break;
        default: cout<<"Please enter a valid number from 1 to 4 ";
                break;
     }
    return 0;
}