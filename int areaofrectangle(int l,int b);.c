int areaofrectangle(int l,int b);

int main()
{
  int l,b;
  printf("enter the length and breadth:\n");
  scanf("%d%d",&l,&b);
  int s=areaofrectangle(l,b);
  printf("area is:%d\n",s);
    return 0;
}


int areaofrectangle(int l,int b)
{
   return l*b;


}







