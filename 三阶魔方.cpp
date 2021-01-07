void MoveEdgeBlock(MagicCube DstMagic,MagicCube SrcMagic)
{
 //把魔方的棱块转换到目标位置
 if (SrcMagic.y==1&&DstMagic.y==1)
 {
  if (((SrcMagic.x==0&&SrcMagic.z==1)&&(DstMagic.x==-1&&DstMagic.z==0))||
   ((SrcMagic.x==-1&&SrcMagic.z==0)&&(DstMagic.x==0&&DstMagic.z==-1))||
   ((SrcMagic.x==0&&SrcMagic.z==-1)&&(DstMagic.x==1&&DstMagic.z==0))||
   ((SrcMagic.x==1&&SrcMagic.z==0)&&(DstMagic.x==0&&DstMagic.z==1)))
  {
   chBuf[num++].ch="U0";
  }
  else if (((DstMagic.x==0&&DstMagic.z==1)&&(SrcMagic.x==-1&&SrcMagic.z==0))||
      ((DstMagic.x==-1&&DstMagic.z==0)&&(SrcMagic.x==0&&SrcMagic.z==-1))||
      ((DstMagic.x==0&&DstMagic.z==-1)&&(SrcMagic.x==1&&SrcMagic.z==0))||
      ((DstMagic.x==1&&DstMagic.z==0)&&(SrcMagic.x==0&&SrcMagic.z==1)))
  {
   chBuf[num++].ch="U1";
  }
  else if(((SrcMagic.x==DstMagic.x)&&(SrcMagic.z+DstMagic.z==0))||
      ((SrcMagic.z==DstMagic.z)&&(SrcMagic.x+DstMagic.x==0))
      )
  {
   chBuf[num++].ch="U2";
  }
 }
 else if (SrcMagic.y==-1&&DstMagic.y==-1)
 {
  if (((SrcMagic.x==0&&SrcMagic.z==1)&&(DstMagic.x==-1&&DstMagic.z==0))||
   ((SrcMagic.x==-1&&SrcMagic.z==0)&&(DstMagic.x==0&&DstMagic.z==-1))||
   ((SrcMagic.x==0&&SrcMagic.z==-1)&&(DstMagic.x==1&&DstMagic.z==0))||
   ((SrcMagic.x==1&&SrcMagic.z==0)&&(DstMagic.x==0&&DstMagic.z==1)))
  {
   chBuf[num++].ch="D1";
  }
  else if (((DstMagic.x==0&&DstMagic.z==1)&&(SrcMagic.x==-1&&SrcMagic.z==0))||
      ((DstMagic.x==-1&&DstMagic.z==0)&&(SrcMagic.x==0&&SrcMagic.z==-1))||
      ((DstMagic.x==0&&DstMagic.z==-1)&&(SrcMagic.x==1&&SrcMagic.z==0))||
      ((DstMagic.x==1&&DstMagic.z==0)&&(SrcMagic.x==0&&SrcMagic.z==1)))
  {
   chBuf[num++].ch="D0";
  }
  else if(((SrcMagic.x==DstMagic.x)&&(SrcMagic.z+DstMagic.z==0))||
      ((SrcMagic.z==DstMagic.z)&&(SrcMagic.x+DstMagic.x==0))
      )
  {
   chBuf[num++].ch="D2";
  }
 }
 else if (SrcMagic.x==-1&&DstMagic.x==-1)
 {
  if (((SrcMagic.y==1&&SrcMagic.z==0)&&(DstMagic.y==0&&DstMagic.z==1))||
   ((SrcMagic.y==0&&SrcMagic.z==1)&&(DstMagic.y==-1&&DstMagic.z==0))||
   ((SrcMagic.y==-1&&SrcMagic.z==0)&&(DstMagic.y==0&&DstMagic.z==-1))||
   ((SrcMagic.y==0&&SrcMagic.z==-1)&&(DstMagic.y==1&&DstMagic.z==0)))
  {
   chBuf[num++].ch="L0";
  }
  else if (((DstMagic.y==1&&DstMagic.z==0)&&(SrcMagic.y==0&&SrcMagic.z==1))||
      ((DstMagic.y==0&&DstMagic.z==1)&&(SrcMagic.y==-1&&SrcMagic.z==0))||
      ((DstMagic.y==-1&&DstMagic.z==0)&&(SrcMagic.y==0&&SrcMagic.z==-1))||
      ((DstMagic.y==0&&DstMagic.z==-1)&&(SrcMagic.y==1&&SrcMagic.z==0)))
  {
   chBuf[num++].ch="L1";
  }
  else if(((SrcMagic.y==DstMagic.y)&&(SrcMagic.z+DstMagic.z==0))||
      ((SrcMagic.z==DstMagic.z)&&(SrcMagic.y+DstMagic.y==0))
      )
  {
   chBuf[num++].ch="L2";
  }
 }
 else if (SrcMagic.x==1&&DstMagic.x==1)
 {
  if (((SrcMagic.y==1&&SrcMagic.z==0)&&(DstMagic.y==0&&DstMagic.z==1))||
   ((SrcMagic.y==0&&SrcMagic.z==1)&&(DstMagic.y==-1&&DstMagic.z==0))||
   ((SrcMagic.y==-1&&SrcMagic.z==0)&&(DstMagic.y==0&&DstMagic.z==-1))||
   ((SrcMagic.y==0&&SrcMagic.z==-1)&&(DstMagic.y==1&&DstMagic.z==0)))
  {
   chBuf[num++].ch="R1";
  }
  else if (((DstMagic.y==1&&DstMagic.z==0)&&(SrcMagic.y==0&&SrcMagic.z==1))||
      ((DstMagic.y==0&&DstMagic.z==1)&&(SrcMagic.y==-1&&SrcMagic.z==0))||
      ((DstMagic.y==-1&&DstMagic.z==0)&&(SrcMagic.y==0&&SrcMagic.z==-1))||
      ((DstMagic.y==0&&DstMagic.z==-1)&&(SrcMagic.y==1&&SrcMagic.z==0)))
  {
   chBuf[num++].ch="R0";
  }
  else if(((SrcMagic.y==DstMagic.y)&&(SrcMagic.z+DstMagic.z==0))||
      ((SrcMagic.z==DstMagic.z)&&(SrcMagic.y+DstMagic.y==0))
      )
  {
   chBuf[num++].ch="R2";
  }
 }
 else if (SrcMagic.z==1&&DstMagic.z==1)
 {
  if (((SrcMagic.x==0&&SrcMagic.y==1)&&(DstMagic.x==1&&DstMagic.y==0))||
   ((SrcMagic.x==1&&SrcMagic.y==0)&&(DstMagic.x==0&&DstMagic.y==-1))||
   ((SrcMagic.x==0&&SrcMagic.y==-1)&&(DstMagic.x==-1&&DstMagic.z==0))||
   ((SrcMagic.x==-1&&SrcMagic.y==0)&&(DstMagic.x==0&&DstMagic.y==1)))
  {
   chBuf[num++].ch="F0";
  }
  else if (((DstMagic.x==0&&DstMagic.y==1)&&(SrcMagic.x==1&&SrcMagic.y==0))||
      ((DstMagic.x==1&&DstMagic.y==0)&&(SrcMagic.x==0&&SrcMagic.y==-1))||
      ((DstMagic.x==0&&DstMagic.y==-1)&&(SrcMagic.x==-1&&SrcMagic.z==0))||
      ((DstMagic.x==-1&&DstMagic.y==0)&&(SrcMagic.x==0&&SrcMagic.y==1)))
  {
   chBuf[num++].ch="F1";
  }
  else if(((SrcMagic.y==DstMagic.y)&&(SrcMagic.x+DstMagic.x==0))||
      ((SrcMagic.x==DstMagic.x)&&(SrcMagic.y+DstMagic.y==0))
      )
  {
   chBuf[num++].ch="F2";
  }
 }
 else if (SrcMagic.z==-1&&DstMagic.z==-1)
 {
  if (((SrcMagic.x==0&&SrcMagic.y==1)&&(DstMagic.x==1&&DstMagic.y==0))||
   ((SrcMagic.x==1&&SrcMagic.y==0)&&(DstMagic.x==0&&DstMagic.y==-1))||
   ((SrcMagic.x==0&&SrcMagic.y==-1)&&(DstMagic.x==-1&&DstMagic.z==0))||
   ((SrcMagic.x==-1&&SrcMagic.y==0)&&(DstMagic.x==0&&DstMagic.y==1)))
  {
   chBuf[num++].ch="B1";
  }
  else if (((DstMagic.x==0&&DstMagic.y==1)&&(SrcMagic.x==1&&SrcMagic.y==0))||
      ((DstMagic.x==1&&DstMagic.y==0)&&(SrcMagic.x==0&&SrcMagic.y==-1))||
      ((DstMagic.x==0&&DstMagic.y==-1)&&(SrcMagic.x==-1&&SrcMagic.z==0))||
      ((DstMagic.x==-1&&DstMagic.y==0)&&(SrcMagic.x==0&&SrcMagic.y==1)))
  {
   chBuf[num++].ch="B0";
  }
  else if(((SrcMagic.y==DstMagic.y)&&(SrcMagic.x+DstMagic.x==0))||
      ((SrcMagic.x==DstMagic.x)&&(SrcMagic.y+DstMagic.y==0))
      )
  {
   chBuf[num++].ch="B2";
  }
 }
}
void SearchEdgeBlock(MagicCube up[][4],MagicCube down[][4],MagicCube left[][4],
        MagicCube right[][4],MagicCube front[][4],MagicCube back[][4],
     UINT color,UINT *pSurface,int *pLow,int *pCol)
{
 //寻找指定颜色的棱块
 if (up[1][2].color==color&&up[1][2].flag==0)
 {
  *pSurface=1;
  *pLow=1;
  *pCol=2;
 }
 else if (up[2][1].color==color&&up[2][1].flag==0)

 {
  *pSurface=1;
  *pLow=2;
  *pCol=1;
 }
    else if (up[2][3].color==color&&up[2][3].flag==0)
 {
  *pSurface=1;
  *pLow=2;
  *pCol=3;
 }
 else if (up[3][2].color==color&&up[3][2].flag==0)
 {
  *pSurface=1;
  *pLow=3;
  *pCol=2;
 }

 else if (back[1][2].color==color&&back[1][2].flag==0)
 {
  *pSurface=2;
  *pLow=1;
  *pCol=2;
 }
 else if (back[2][1].color==color&&back[2][1].flag==0)
 {
  *pSurface=2;
  *pLow=2;
  *pCol=1;
 }
    else if (back[2][3].color==color&&back[2][3].flag==0)
 {
  *pSurface=2;
  *pLow=2;
  *pCol=3;
 }
 else if (back[3][2].color==color&&back[3][2].flag==0)
 {
  *pSurface=2;
  *pLow=3;
  *pCol=2;
 }

 else if (front[1][2].color==color&&front[1][2].flag==0)
 {
  *pSurface=3;
  *pLow=1;
  *pCol=2;
 }
 else if (front[2][1].color==color&&front[2][1].flag==0)
 {
  *pSurface=3;
  *pLow=2;
  *pCol=1;
 }
    else if (front[2][3].color==color&&front[2][3].flag==0)
 {
  *pSurface=3;
  *pLow=2;
  *pCol=3;
 }
 else if (front[3][2].color==color&&front[3][2].flag==0)
 {
  *pSurface=3;
  *pLow=3;
  *pCol=2;
 }

 else if (down[1][2].color==color&&down[1][2].flag==0)
 {
  *pSurface=4;
  *pLow=1;
  *pCol=2;
 }
 else if (down[2][1].color==color&&down[2][1].flag==0)
 {
  *pSurface=4;
  *pLow=2;
  *pCol=1;
 }
    else if (down[2][3].color==color&&down[2][3].flag==0)
 {
  *pSurface=4;
  *pLow=2;
  *pCol=3;
 }
 else if (down[3][2].color==color&&down[3][2].flag==0)
 {
  *pSurface=4;
  *pLow=3;
  *pCol=2;
 }

 else if (right[1][2].color==color&&right[1][2].flag==0)
 {
  *pSurface=5;
  *pLow=1;
  *pCol=2;
 }
 else if (right[2][1].color==color&&right[2][1].flag==0)
 {
  *pSurface=5;
  *pLow=2;
  *pCol=1;
 }
    else if (right[2][3].color==color&&right[2][3].flag==0)
 {
  *pSurface=5;
  *pLow=2;
  *pCol=3;
 }
 else if (right[3][2].color==color&&right[3][2].flag==0)
 {
  *pSurface=5;
  *pLow=3;
  *pCol=2;
 }

 else if (left[1][2].color==color&&left[1][2].flag==0)
 {
  *pSurface=6;
  *pLow=1;
  *pCol=2;
 }
 else if (left[2][1].color==color&&left[2][1].flag==0)
 {
  *pSurface=6;
  *pLow=2;
  *pCol=1;
 }
    else if (left[2][3].color==color&&left[2][3].flag==0)
 {
  *pSurface=6;
  *pLow=2;
  *pCol=3;
 }
 else if (left[3][2].color==color&&left[3][2].flag==0)
 {
  *pSurface=6;
  *pLow=3;
  *pCol=2;
 }
}

