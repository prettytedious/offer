/*
  1.字符串以\0结尾
*/

class Solution {
public:
    void replaceSpace(char *str,int length) {
        if(str == NULL||length<=0)
            return;
        int len = 0;
        int count = 0;
        int i=0;
        while(str[i]!='\0')
        {
            if(str[i]==' ')
                count++;
            len++;
            i++;
        }
         
        int newlen=len+count*2;
        if(length<newlen)
            return;
        int a=len;
        int b=newlen;
        while(a>=0&&b>=0)
        {
            if(str[a]==' ')
            {
                str[b--]='0';
                str[b--]='2';
                str[b--]='%';
            }
            else{
                str[b]=str[a];
                b--;
            }
            a--;
        }
        return;
    }
};
