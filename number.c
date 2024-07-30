#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, q, r;
    printf("\nENTER ANY NUMBER (1 - 99999)= ");
    scanf("%d", &number);
    //  if(number>=100000  && number <=999999)
    //  {
    //     r=number /100000;
    //      if (r >= 10 && r <= 19)
    //     {
    //         switch (r)
    //         {
    //         case 10:
    //             printf("TEN LACKS ");
    //             break;
    //         case 11:
    //             printf("ELEVEN LACKS ");
    //             break;
    //         case 12:
    //             printf("TWELVE LACKS ");
    //             break;
    //         case 13:
    //             printf("THIRTEEN LACKS ");
    //             break;
    //         case 14:
    //             printf("FOURTEEN LACKS ");
    //             break;
    //         case 15:
    //             printf("FIFTEEN LACKS ");
    //             break;
    //         case 16:
    //             printf("SIXTEEN LACKS ");
    //             break;
    //         case 17:
    //             printf("SEVENTEEN LACKS ");
    //             break;
    //         case 18:
    //             printf("EIGHTEEN LACKS ");
    //             break;
    //         case 19:
    //             printf("NINETEEN LACKS ");
    //             break;
    //         }
    //         number %= 10000;
    //     }
    //      else
    //     {
    //         r = number / 100000;
    //         switch (r)
    //         {
    //         case 2:
    //             printf("TWENTY ");
    //             break;
    //         case 3:
    //             printf("THIRTY ");
    //             break;
    //         case 4:
    //             printf("FORTY ");
    //             break;
    //         case 5:
    //             printf("FIFTY ");
    //             break;
    //         case 6:
    //             printf("SIXTY ");
    //             break;
    //         case 7:
    //             printf("SEVENTY ");
    //             break;
    //         case 8:
    //             printf("EIGHTY ");
    //             break;
    //         case 9:
    //             printf("NINETY ");
    //             break;
    //         }
    //         number %= 100000;
    //         r = number / 10000;
    //         switch (r)
    //         {
    //         case 1:
    //             printf("ONE LACKS ");
    //             break;
    //         case 2:
    //             printf("TWO LACKS ");
    //             break;
    //         case 3:
    //             printf("THREE LACKS ");
    //             break;
    //         case 4:
    //             printf("FOUR LACKS ");
    //             break;
    //         case 5:
    //             printf("FIVE LACKS ");
    //             break;
    //         case 6:
    //             printf("SIX LACKS ");
    //             break;
    //         case 7:
    //             printf("SEVEN LACKS ");
    //             break;
    //         case 8:
    //             printf("EIGHT LACKS ");
    //             break;
    //         case 9:
    //             printf("NINE LACKS ");
    //             break;
    //         }
    //        // number %= 1000;
    //     }
    // }

    if (number >= 10000 && number <= 99999)
    {
        r = number / 1000;
        if (r >= 10 && r <= 19)
        {
            switch (r)
            {
            case 10:
                printf("TEN THOUSAND ");
                break;
            case 11:
                printf("ELEVEN THOUSAND ");
                break;
            case 12:
                printf("TWELVE THOUSAND ");
                break;
            case 13:
                printf("THIRTEEN THOUSAND ");
                break;
            case 14:
                printf("FOURTEEN THOUSAND ");
                break;
            case 15:
                printf("FIFTEEN THOUSAND ");
                break;
            case 16:
                printf("SIXTEEN THOUSAND ");
                break;
            case 17:
                printf("SEVENTEEN THOUSAND ");
                break;
            case 18:
                printf("EIGHTEEN THOUSAND ");
                break;
            case 19:
                printf("NINETEEN THOUSAND ");
                break;
            }
            number %= 1000;
        }
        else
        {    
            r=number/10000;
            switch (r)
            {
            case 2:
                printf("TWENTY ");
                break;
            case 3:
                printf("THIRTY ");
                break;
            case 4:
                printf("FORTY ");
                break;
            case 5:
                printf("FIFTY ");
                break;
            case 6:
                printf("SIXTY ");
                break;
            case 7:
                printf("SEVENTY ");
                break;
            case 8:
                printf("EIGHTY ");
                break;
            case 9:
                printf("NINETY ");
                break;
            }
            number %= 10000;
            r = number / 1000;
            switch (r)
            {
            case 1:
                printf("ONE THOUSAND ");
                break;
            case 2:
                printf("TWO THOUSAND ");
                break;
            case 3:
                printf("THREE THOUSAND ");
                break;
            case 4:
                printf("FOUR THOUSAND ");
                break;
            case 5:
                printf("FIVE THOUSAND ");
                break;
            case 6:
                printf("SIX THOUSAND ");
                break;
            case 7:
                printf("SEVEN THOUSAND ");
                break;
            case 8:
                printf("EIGHT THOUSAND ");
                break;
            case 9:
                printf("NINE THOUSAND ");
                break;
            }
            number %= 1000;
        }
    }
    else if (number >= 1000 && number <= 9999)
    {
        r = number / 1000;
        switch (r)
        {
        case 1:
            printf("ONE THOUSAND ");
            break;
        case 2:
            printf("TWO THOUSAND ");
            break;
        case 3:
            printf("THREE THOUSAND ");
            break;
        case 4:
            printf("FOUR THOUSAND ");
            break;
        case 5:
            printf("FIVE THOUSAND ");
            break;
        case 6:
            printf("SIX THOUSAND ");
            break;
        case 7:
            printf("SEVEN THOUSAND ");
            break;
        case 8:
            printf("EIGHT THOUSAND ");
            break;
        case 9:
            printf("NINE THOUSAND ");
            break;
        }
        number %= 1000;
    }

    if (number >= 100 && number <= 999)
    {
        r = number / 100;
        switch (r)
        {
        case 1:
            printf("ONE HUNDRED ");
            break;
        case 2:
            printf("TWO HUNDRED ");
            break;
        case 3:
            printf("THREE HUNDRED ");
            break;
        case 4:
            printf("FOUR HUNDRED ");
            break;
        case 5:
            printf("FIVE HUNDRED ");
            break;
        case 6:
            printf("SIX HUNDRED ");
            break;
        case 7:
            printf("SEVEN HUNDRED ");
            break;
        case 8:
            printf("EIGHT HUNDRED ");
            break;
        case 9:
            printf("NINE HUNDRED ");
            break;
        }
        number %= 100;
    }

    if (number >= 10 && number <= 19)
    {
        switch (number)
        {
        case 10:
            printf("TEN ");
            break;
        case 11:
            printf("ELEVEN ");
            break;
        case 12:
            printf("TWELVE ");
            break;
        case 13:
            printf("THIRTEEN ");
            break;
        case 14:
            printf("FOURTEEN ");
            break;
        case 15:
            printf("FIFTEEN ");
            break;
        case 16:
            printf("SIXTEEN ");
            break;
        case 17:
            printf("SEVENTEEN ");
            break;
        case 18:
            printf("EIGHTEEN ");
            break;
        case 19:
            printf("NINETEEN ");
            break;
        }
        exit(0);
    }
    else if (number >= 20 && number <= 99)
    {
        q = number / 10;
        switch (q)
        {
        case 2:
            printf("TWENTY ");
            break;
        case 3:
            printf("THIRTY ");
            break;
        case 4:
            printf("FORTY ");
            break;
        case 5:
            printf("FIFTY ");
            break;
        case 6:
            printf("SIXTY ");
            break;
        case 7:
            printf("SEVENTY ");
            break;
        case 8:
            printf("EIGHTY ");
            break;
        case 9:
            printf("NINETY ");
            break;
        }
        number %= 10;
    }

    r = number % 10;
    if (r != 0)
    {
        switch (r)
        {
        case 1:
            printf("ONE");
            break;
        case 2:
            printf("TWO");
            break;
        case 3:
            printf("THREE");
            break;
        case 4:
            printf("FOUR");
            break;
        case 5:
            printf("FIVE");
            break;
        case 6:
            printf("SIX");
            break;
        case 7:
            printf("SEVEN");
            break;
        case 8:
            printf("EIGHT");
            break;
        case 9:
            printf("NINE");
            break;
        }
    }

    return 0;
}
