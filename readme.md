Left shifts 
int x = 5; 
cout << (x << 3) << "\n"; 

bits on off 
int x = 2; 

if(x & (1 << 2)){ 
cout << "bits trun on"<< "\n"; 
} 
else{ 
cout << "bits trun off\n";
}

ong long w = 1e13 + 9; 
//common mistake if (1LL) dosent give 
if(w & (1LL >> 40)){ 
cout << "on\n"; 
} 
else{ 
cout << "off\n"; 
} 



On k position bit 
int n = 11; 
cout << (n | (1 << 2)) << "\n"; 


off k position bit 
(2^k – 1) =1111 
int n = 6; 
cout << (n & ((1 << 2) -1)) << "\n"; 


First k ta bit on kore baki sob off kore dibo 
1111  first 2 ta bit on rakbo 
0011 
00 11  
N & (2^k – 1) 
N % 2^k same 


0 xor 1 xor 2 xor 3 = 0 khatay prove ache 
Building function 
Koyta one ache ta bole dibe 
15 = 1111 answer = 4 
int n = 15; 
cout << __builtin_popcount(n) << "\n";


count leading zero 
int n = 15; 
cout << __builtin_clz(n) << "\n"; 
count tralling zero 
int n = 8; 
cout << __builtin_ctz(n) << "\n";


Bitset<n>b (here n always work constant) 