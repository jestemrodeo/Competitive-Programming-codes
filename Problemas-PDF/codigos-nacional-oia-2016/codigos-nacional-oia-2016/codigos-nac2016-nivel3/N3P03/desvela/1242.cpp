#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,sc,sc1,sc2,sc3,sc4,se;
    string abc;
    s="DER";
    se="ARJHNRIUCGQHPFGQFHTXPDEHTLNOC";
    abc="ABCDEFGHIJKLMNOPQSRTUXYZ";



    /*

         char a='A';
          int b;
          for(int i=0;i<1;i++)
         { cin>>a;
        b=a;
          cout<<" "<<b;}
    */
    cin>>s;
    int secuencia,secuencia2;
    bool c=false,c2=false,c3=false;

        for(int i=0; i<s.size(); i++)
        {
        for(int j=0,h=0; j<25; j++,h++)
        {
            if(c==false)
            {
                if((s[i]+j)>'Z')

                    sc[i]=(s[i]+j)-26;
                else
                    sc[i]=s[i]+j;

                if(c2==false)
                {
                    sc1=sc[i];
                    c2=true;
                }
                else
                {
                    sc2=sc[i];
                    c2=false;
                }

                c=true;
            }
            if(c==true)
            {
                if((s[i]+h)>'Z')

                    sc[i]=(s[i]+h)-26;
                else
                    sc[i]=s[i]+h;
                if(c3=false)
                {
                    sc3=sc[h];
                    c3=true;
                }
                else
                {
                    sc4=sc[h];
                    c3=false;
                }



                c=false;
            }
            //cout<<sc[i]<<" ";
            cout<<" "<<sc1[j]<<" "<<sc2[j]<<" "<<sc3[j]<<" "<<sc4[j]<<endl;

        }
        // cout<<endl;
    }

   /* bool encontre=false;

    for(int i=0; i<se.size(); i++)

    {
        for(int j=0; j<sc1.size(); j++)
        {
            if(se[i]==sc1[j])
            {
                if(encontre==false)
                {
                    secuencia=se[i]-sc1[j];
                    encontre=true;
                }
            }

            if(se[i]==sc3[j])
            {
                if(encontre==false)
                {
                    secuencia2=se[i]-sc1[j];
                    encontre=true;
                }
            }
            if(se[i]==sc2[j])
            {
                if(encontre==true)
                {
                    secuencia=se[i]-sc1[j];
                    encontre=false;
                }
            }

            if(se[i]==sc4[j])
            {
                if(encontre==true)
                {
                    secuencia2=se[i]-sc1[j];
                    encontre=false;
                }
            }


        cout<<" "<<sc1[j]<<" "<<sc2[j]<<" "<<sc3[j]<<" "<<sc4[j]<<endl;
        }

    }

    cout<<secuencia<<"  "<<secuencia2;*/

    return 0;
}
