int main()
{
 int a = 10;
 {         /* otwarcie lokalnego bloku */
     int b = 10;
     printf("%d %d", a, b);
 }         /* zamkniêcie lokalnego bloku */

    printf("%d %d", a, b);  /* B£¥D: b juz nie istnieje */
}
