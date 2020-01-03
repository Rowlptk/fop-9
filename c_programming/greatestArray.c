void main()
{
    int ary[10],i;
    int max,min,sum=0;
    float avg;
    printf("Enter 10 Values : \n");
    for(i=0;i<=9;i++)
    {
        printf("ary[%d] = ",i);
        scanf("%d",&ary[i]);
    }
    max = ary[0];
    min = ary[0];
// 10 ==> total sum and Avg
    for(i=0;i<=9;i++)
    {
        if(max<ary[i])
        {
            max = ary[i];
        }
    }

    for(i=0;i<=9;i++)
    {
        if(min>ary[i])
        {
            min = ary[i];
        }
    }
    // two dimension array ==> matrix, string, string function ==> login
    // functions, structure, file handling, banking app
    for(i=0;i<=9;i++)
    {
        sum = sum + ary[i];
        //sum += ary[i];
    }

    avg = (float)sum/10;

    printf("Maximum Value = %d\n",max);
    printf("Minimum Value = %d\n",min);
    printf("Total Sum = %d\n",sum);
    printf("Average = %.1f",avg);

}
