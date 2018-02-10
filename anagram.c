#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char **argv){
	if(argc<3){
		printf("Please invoke as %s string1, string2\n",argv[0]);
		return 1;
	}

	char  *s1,*s2;
	int count1[256],count2[256];// store the number of letter
	for(int i=0;i<256;i++){
		count1[i]=0;
		count2[i]=0;
	}

	s1=argv[1];
	s2=argv[2];

	for(int i=0;i<strlen(s1);i++){
		if(s1[i]!='_'){
			if(s1[i]>='a'&&s1[i]<='z'){
				count1[(int)s1[i]-' ']++;
			}
			else{
				count1[(int)s1[i]]++;
			}
		}
	}
	for(int i=0;i<strlen(s2);i++){
		if(s2[i]!='_'){
			if(s2[i]>='a'&&s2[i]<='z'){
				count2[(int)s2[i]-' ']++;
			}
			else{
				count2[(int)s2[i]]++;
			}
		}
	}
	int flag=1;
	for(int i=0;i<256;i++){
		if(count1[i]!=count2[i]){
			flag=0;
			break;
		}
	}
	if(flag==0) printf("%s is not an anagram of %s\n",s1,s2);
	else printf("%s is an anagram of %s\n",s1,s2);	
	return 1;

}
