#include <iostream>

using namespace std;

// Made by Arpan Doogar.

/*

We can use this code to find every logic gate there is but only for two inputs the hypothesis (p) and conclusion (q).

*/

struct Logic_Gate
{
    string p;
    string q;

        void read()
            {

                cout<<"Enter the binary string for the hypothesis"<<endl;
                getline(cin,p);
                cout<<"Enter the binary string for the conclusion"<<endl;
                getline(cin,q);
            }

        void display()
            {
                cout<<"The hypothesis is: "<<p<<endl;
                cout<<"The conclusion is: "<<q<<endl;
            }

        void AND(string p,string q)
            {
            string s = "";
            for(int i=0;p[i] != '\0';i++)
            {
                if (p[i] == '1' && q[i] == '1')
                {
                    s+= '1';
                }
                else
                {
                    s+='0';
                }
            }
            cout<<"The AND Gate Truth Table for the hypothesis and the conclusion is: "<<s<<endl;
            }

        void OR(string p,string q)

            {
            string s = "";
            for(int i=0;p[i] != '\0';i++)
            {
                if (p[i] == '0' && q[i] == '0')
                {
                    s+= '0';
                }
                else 
                {
                    s+= '1';
                }
            }
            cout<<"The OR Gate Truth Table for the hypothesis and conclusion is: "<<s<<endl;
            }

        void NAND(string p,string q)

            {
            string s = "";
            for(int i=0;p[i] != '\0';i++){
                if (p[i] == '1' && q[i] == '1')
                {
                    s+= '0';
                }
                else 
                {
                    s+= '1';
                }
            }
            cout<<"The NAND Gate Truth Table for the hypothesis and conclusinon: "<<s<<endl;
            }

        void NOR(string p,string q)

            {
            string s = "";
            for(int i=0;p[i] != '\0';i++){
                if (p[i] == '0' && q[i] == '0')
                {
                    s+= '1';
                }
                else
                {
                    s+='0';
                }
            }
            cout<<"The NOR Gate Truth Table for the hypothesis and conclusion is: "<<s<<endl;
            }

        void NOT(string p)

            {
            string s = "";
            for (int i=0;p[i] != '\0';i++)
            {
                if (p[i]=='1')
                {
                    s+= '0';
                }
                else
                {
                    s+= '1';
                }
            }
            cout<<s<<endl;
            }

        void XOR(string p,string q)

            {
            string s = "";
            for (int i=0;p[i] != '\0';i++)
            {
                if (p[i]==q[i])
                {
                    s+= '0';
                }
                else
                {
                    s+= '1';
                }
            }
            cout<<"The XOR Gate Truth Table for the hypothesis and conclusion is: "<<s<<endl;
            }

        void XNOR(string p,string q)

            {
            string s = "";
            for (int i=0;p[i] != '\0';i++)
            {
                if (p[i]==q[i])
                {
                    s+= '1';
                }
                else
                {
                    s+= '0';
                }
            }
            cout<<"The XNOR Gate Truth Table for the hypothesis and conclusion is: "<<s<<endl;
            }

};

int main()

{

    Logic_Gate L1;

    L1.read();
    L1.display();

    string p = L1.p;
    string q = L1.q;

    int c1 = 0,c2 = 0;
    
    // To find the frequency of '1's and '0's in the hypothesis string.

    for (int i=0; p[i] != '\0'; i++) 

    {
        if (p[i] == '1' || p[i] == '0')
        {
            c1++;
        }
    }
    
    // To find the frequency of '0's and '1's in the conclusion string.

    for (int i=0; q[i] != '\0';i++)

    {
        if (q[i] == '1' || q[i] == '0')
        {
            c2++;
        }
    }

    if (p.size() != q.size())
    {
        cout<<"the length of the binary strings is not the same."<<endl;
    }
    else
    {
        if (c1 != p.size() || c2 != q.size())
        {
            cout<<"The String entered is not a binary string, please enter a binary string."<<endl;
        }
        else
        {

            cout<<"----------------------------------------------------------------"<<endl;
            
            cout<<"Enter a for AND operation"<<endl;
            
            cout<<"Enter b for OR operation"<<endl;
            
            cout<<"Enter c for NAND operation"<<endl;
            
            cout<<"Enter d for NOR operation"<<endl;
            
            cout<<"Enter e for NOT operation"<<endl;
            
            cout<<"Enter f for XOR operation"<<endl;

            cout<<"Enter g for XNOR operation"<<endl;
            
            cout<<"Enter h for ALL operations"<<endl;
            
            cout<<endl;
            
            cout<<"----------------------------------------------------------------"<<endl;
            
            char d;
            
            cout<<"Enter your choice: ";
            
            cin >> d;
            
            cout<<endl;


            switch (d)
            {
            case 'a':
                L1.AND(p,q);
                break;
            case 'b':
                L1.OR(p,q);
                break;
            case 'c':
                L1.NAND(p,q);
                break;
            case 'd':
                L1.NOR(p,q);
                break;
            case 'e':
                cout<<"The NOT Gate Truth table for the hypothesis: ";
                L1.NOT(p);
                cout<<'\n';
                cout<<"The NOT Gate Truth table for the conclusion is: "<<endl;
                L1.NOT(q);
                cout<<'\n';
                break;
            case 'f':
                L1.XOR(p,q);
                break;
            case 'g':
                L1.XNOR(p,q);
                break;
            case 'h':
                L1.AND(p,q);
                L1.OR(p,q);
                L1.NAND(p,q);
                L1.NOR(p,q);
                cout<<"The NOT Gate Truth table for the hypothesis: ";
                L1.NOT(p);
                cout<<"The NOT Gate Truth table for the conclusion is: ";
                L1.NOT(q);
                L1.XOR(p,q);
                L1.XNOR(p,q);
                break;
            default:
                cout<<"INCORRECT operation selected please select the correct operation"<<endl;
                break;

            }
            
        }
    cout<<"End of 1st operation"<<endl;
    cout<<'\n'<<endl;
    // Where 1 denotes true and 0 denotes false in the Truth Tables

    }   

Logic_Gate L2;

    L2.read();

    L2.display();

    string p1 = L2.p;
    string q1 = L2.q;

    int c3 = 0,c4 = 0;

    // To find the frequency of '1's and '0's in the hypothesis string.

    for (int i=0; p1[i] != '\0'; i++) 

    {
        if (p1[i] == '1' || p1[i] == '0')
        {
            c3++;
        }
    }
    
    // To find the frequency of '0's and '1's in the conclusion string.

    for (int i=0; q1[i] != '\0';i++)

    {
        if (q1[i] == '1' || q1[i] == '0')
        {
            c4++;
        }
    }

    if (p1.size() != q1.size())
    {
        cout<<"the length of the binary strings is not the same."<<endl;
    }
    else
    {
        if (c3 != p1.size() || c4 != q1.size())
        {
            cout<<"The String entered is not a binary string, please enter a binary string."<<endl;
        }
        else
        {
    
    cout<<"----------------------------------------------------------------"<<endl;
    
    cout<<"Enter a for AND operation"<<endl;
    
    cout<<"Enter b for OR operation"<<endl;
    
    cout<<"Enter c for NAND operation"<<endl;
    
    cout<<"Enter d for NOR operation"<<endl;
    
    cout<<"Enter e for NOT operation"<<endl;
    
    cout<<"Enter f for XOR operation"<<endl;

    cout<<"Enter g for XNOR operation"<<endl;
    
    cout<<"Enter h for ALL operations"<<endl;
    
    cout<<endl;
    
    cout<<"----------------------------------------------------------------"<<endl;
    
    char d;
    
    cout<<"Enter your choice: ";
    
    cin >> d;
    
    cout<<endl;

            switch (d)
            {
            case 'a':
                L2.AND(p1,q1);
                break;
            case 'b':
                L2.OR(p1,q1);
                break;
            case 'c':
                L2.NAND(p1,q1);
                break;
            case 'd':
                L2.NOR(p1,q1);
                break;
            case 'e':
                cout<<"The NOT Gate Truth table for the hypothesis: ";
                L2.NOT(p1);
                cout<<'\n';
                cout<<"The NOT Gate Truth table for the conclusion is: "<<endl;
                L2.NOT(q1);
                cout<<'\n';
                break;
            case 'f':
                L2.XOR(p1,q1);
                break;
            case 'g':
                L2.XNOR(p1,q1);
                break;
            case 'h':
                L2.AND(p1,q1);
                L2.OR(p1,q1);
                L2.NAND(p1,q1);
                L2.NOR(p1,q1);
                cout<<"The NOT Gate Truth table for the hypothesis: ";
                L2.NOT(p1);
                cout<<"The NOT Gate Truth table for the conclusion is: ";
                L2.NOT(q1);
                L2.XOR(p1,q1);
                L2.XNOR(p1,q1);
                break;
            default:
                cout<<"INCORRECT operation selected please select the correct operation"<<endl;
                break;

            }
            
        }

    // Where 1 denotes true and 0 denotes false in the Truth Tables

    }

return 0;

}
