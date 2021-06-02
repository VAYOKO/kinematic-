//robot 6 dof x y z by Varis Vipavanich 3/6/2021
//distance of robot unit mm ระยะเเขนกล หน่วยเป็น มิลลิเมตร
int L_1 = 120, L_2 = 150, L3A = 50, L3B = 10;

//formula    สูตรคำนวณ
int x , y , z;
int r1 = sqrt(x * x + y*y);
int r2 = L_1 - (L3A + L3B);
int R_1 = sqrt((r2*r2) + (L_1*L_1));
int ang_P = (acos(r2 / R_1) * 180 / 3.14); // acos
int ang_PU = ((180 / 3.14) * ang_P); //convert red to ang #1
int OPP = L_2;          //หาค่าโคซาย
int adj_A1 = L_2;
int adj_A2 = R_1;
int den_1 = 2 * adj_A1 * adj_A2;
int C_1 = ((adj_A1 * adj_A1 + adj_A2 * adj_A2 - OPP*OPP) / den);
int theta_1 = acos(C_1);
int theta_1U = ((180 / 3.14) * theta_1 ); //convert red to ang #2
int adj_B1 = L3A;
int adj_B2 = L3A;
int den_2 = 2 * adj_B1 * adj_B2;
int C_2 = ((adj_B1 * adj_B1 + adj_B2 * adj_B2 - OPP*OPP) / den);
int theta_2 = acos(C_2);
int theta_2U = ((180 / 3.14) * theta_2 );   //convert red to ang #3
int ang_PU - 1 =  ang_PU + theta_1 ; //เอาค่าเรเดี้ยนมาบวกกัน
int ang_S = ang_PU - 1;
int ang_SU =  ((180 / 3.14) * ang_S + theta_2 - 3.14);
