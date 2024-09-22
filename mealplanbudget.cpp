#include <iostream>

using namespace std;

void gold();
void purple();
void havePlan();
void printPurple(int, int);
void printGold(int, int);
void budget(int, int, int, int, int);

int main()
{
    int choice;
    printf("Select an option:\n");
    do
    {    
        printf("1. Meal plan breakdown\n2. Meal plan calculator\n3. Quit\n");
        printf("Select: ");
        cin >> choice;
        if(choice == 1)
        {
            int sel;
            printf("\nSelect a meal plan option:\n");
            do
            {
                printf("1. On campus\n2. Off campus\n3. View all\n4. Quit\n");
                printf("Select: ");
                cin >> sel;
                if(sel == 1)
                {
                    printf("\n");
                    purple();
                }
                else if(sel == 2)
                {
                    int opt;
                    printf("\n");
                    printf("Select a plan:\n");
                    do
                    {
                        printf("1. Purple\n2. Gold\n3. Quit\n");
                        printf("Select: ");
                        cin >> opt;
                        if(opt == 1)
                        {
                            printf("\n");
                            purple();
                        }
                        else if (opt == 2)
                        {
                            printf("\n");
                            gold();
                        }
                        else if(opt != 3)
                        {
                            printf("\n");
                            printf("Invalid entry. Please try again!\n");
                        }
                    } while (opt != 3);
                }
                else if(sel == 3)
                {
                    printf("\n");
                    purple();
                    printf("\n");
                    gold();
                }
                else if(sel != 4)
                {
                    printf("\n");
                    printf("Invalid entry. Please try again!\n");
                }
            } while(sel != 4);
        }
        else if(choice == 2)
        {
            printf("\n");
            havePlan();
        }
        else if(choice != 3)
        {
            printf("\n");
            printf("Invalid entry. Please try again!\n");
        }
    } while(choice != 3);
}

void gold()
{
    cout << "Gold options:\n";
    cout << "Can be used as entry into Todd or West End dining halls\n";
    printf("\n%s\n - %s\n - %s\n - %s\n - %s\n - %s\n - %s\n", "Gold 120", "Cost for plan: $1150", "Pirate meals: 120", "Gold bucks: $150", "Cost per meal: $8.33", "Pirate meals per week: 8", "Gold bucks per week: $10.00");
    printf("\n%s\n - %s\n - %s\n - %s\n - %s\n - %s\n - %s\n", "Gold 80", "Cost for plan: $945", "Pirate meals: 80", "Gold bucks: $230", "Cost per meal: $8.94", "Pirate meals per weeks: 5-6", "Gold bucks per week: $15.33");
    printf("\n%s\n - %s\n - %s\n - %s\n - %s\n - %s\n - %s\n", "Gold 40", "Cost for plan: $740", "Pirate meals: 40", "Gold bucks: $330", "Cost per meal: $10.25", "Pirate meals per week: 2-3", "Gold bucks per week: $22.00");
    printf("\n%s\n - %s\n - %s\n - %s\n - %s\n", "Gold 450", "Cost for plan: $450", "Pirate meals: 0", "Gold bucks: $450", "Gold bucks per week: $30.00");
}

void purple()
{
    cout << "**Purple options**\n\n";
    cout << " - Will include the rate you can spend in order to keep from anything being left over at the end of the semester.\n";
    cout << " - Over all cost for each meal plan: $2,190\n";
    cout << " - Unlimited access to both the Todd and West End dining halls\n";
    cout << " - Guest meal swipes are all 5\n";
    printf("\n%s \n - %s\n - %s\n - %s\n - %s\n", "All Access 60", "Pirate meals: 60", "Purple bucks: $250", "Pirate meals per week: 4", "Purple bucks per week: $16.67");
    printf("\n%s\n - %s\n - %s\n - %s\n - %s\n", "All Access 40", "Pirate meals: 40", "Purple bucks: $350", "Pirate meals per week: 2-3", "Purple bucks per week: $23.33");
    printf("\n%s\n - %s\n - %s\n - %s\n - %s\n", "All Access 20", "Pirate meals: 20", "Purple bucks: $450", "Pirate meals per week: 1-2", "Purple bucks per week: $30.00");
    printf("\n%s\n - %s\n - %s\n - %s\n", "All Access Flex", "Pirate meals: 0", "Purple bucks: $550", "Purple bucks per week: $36.67");
    cout << "\nKeep in mind this is typically what on campus students purchase.\n\n";
}

void havePlan()
{
    int opt;
    printf("Select your plan:\n");
    printf("1. %s\n2. %s\n3. %s\n4. %s\n", "All Access 20", "All Access 40", "All Access 60", "All Access Purple Flex");
    printf("5. %s\n6. %s\n7. %s\n8. %s\n9. Quit\n", "Gold 40", "Gold 80", "Gold 120", "Gold 450");
    printf("Select: ");
    cin >> opt;
    printf("\n");
    switch (opt)
    {
        case 1:
            printPurple(20, 45000);
            break;
        case 2:
            printPurple(40, 35000);
            break;
        case 3:
            printPurple(60, 25000);
            break;
        case 4:
            printPurple(0, 55000);
            break;
        case 5:
            printGold(40, 33000);
            break;
        case 6:
            printGold(80, 23000);
            break;
        case 7:
            printGold(120, 15000);
            break;
        case 8:
            printGold(0, 45000);
            break;
        case 9:
            break;
        default:
            printf("Invalid entry.\n");
    }
}

void printPurple(int meals, int bucks)
{
    int spentMeals, spentBucks, curWeek, opt, dollar, cent;
    dollar = bucks / 100;
    cent = bucks % 100;

    printf("Your plan:\n");
    printf("Unlimited access to the dining hall (Todd and West End)\n");
    printf("Pirate Meals: %d\nPurple bucks: $%d.%.2d\n\n", meals, dollar, cent);
    printf("How many meals have you used? ");
    cin >> spentMeals;
    printf("How many bucks have you used? $");
    cin >> spentBucks;
    spentBucks *= 100;
    printf("What week of the semester is it? ");
    cin >> curWeek;
    printf("\n1. Budget Options\n2. Quit\n");
    printf("Select: ");
    cin >> opt;
    if(opt == 1 || opt == 2)
    {
        budget(spentMeals, spentBucks, curWeek, meals, bucks);
    }
    else if(opt == 3)
    {
        return;
    }
    else
    {
        printf("Invalid entry. Please try again!\n");
    }
}

void printGold(int meals, int bucks)
{
    int spentMeals, spentBucks, curWeek, opt, dollar, cent;
    dollar = bucks / 100;
    cent = bucks % 100;

    printf("Your plan:\n");
    printf("Pirate Meals (including dining hall swipes): %d\nGold bucks: $%d.%.2d\n\n", meals, dollar, cent);
    printf("How many meals have you used? ");
    cin >> spentMeals;
    printf("How many bucks have you used? $");
    cin >> spentBucks;
    spentBucks *= 100;
    printf("What week of the semester is it? ");
    cin >> curWeek;
    printf("\n1. Budget Options\n2. Quit\n");
    printf("Select: ");
    cin >> opt;
    if(opt == 1)
    {
        budget(spentMeals, spentBucks, curWeek, meals, bucks);
    }
    else if(opt == 2)
    {
        return;
    }
    else
    {
        printf("Invalid entry. Please try again!\n");
    }
}

void budget(int meals, int bucks, int week, int totMeal, int totBuck)
{
    int projEnd, totWeek = 15, leftWeek, leftMeals, leftBucks, overMeals, overBucks, correct, lCorrect, uCorrect, formDolBuck, formCenBuck;
    double rate;
    leftWeek = totWeek - week;
    rate = ((double)meals / week) * 100;
    //cout << rate;
    projEnd = rate * totWeek;
    //cout << projEnd;
    if(projEnd % 100 >= 50)
    {
        projEnd /= 100;
        projEnd++;
    }
    else if(projEnd % 100 >= 0 && projEnd % 100 < 50)
    {
        projEnd /= 100;
    }
    if(projEnd > totMeal)
    {
        overMeals = projEnd - totMeal;
        printf("\nBased on your current rate, you will be short %d meal(s).\n", overMeals);
        if((totMeal - meals) % leftWeek > 0)
        {
            lCorrect = (totMeal - meals) / leftWeek;
            uCorrect = lCorrect + 1;
            printf("To use all of your meals by the end of the semester, use %d-%d meal(s) per week.\n", lCorrect, uCorrect);
        }
        else if((totMeal - meals) % leftWeek == 0)
        {
            correct = (totMeal - meals) / leftWeek;
            printf("To use all of your meals by the end of the semester, use %d meal(s) per week.\n", correct);
        }
    }
    else if(projEnd < totMeal)
    {
        leftMeals = totMeal - projEnd;
        printf("\nBased on your current rate, you will have %d meal(s) left over.\n", leftMeals);
        if((totMeal - meals) % leftWeek > 0)
        {
            lCorrect = (totMeal - meals) / leftWeek;
            uCorrect = lCorrect + 1;
            printf("To use all of your meals by the end of the semester, use %d-%d meal(s) per week.\n", lCorrect, uCorrect);
        }
        else if((totMeal - meals) % leftWeek == 0)
        {
            correct = (totMeal - meals) / leftWeek;
            printf("To use all of your meals by the end of the semester, use %d meal(s) per week.\n", correct);
        }
    }
    else if(projEnd == totMeal)
    {
        printf("\nCongratulations! You are on track to use all of your meals by the end of the semester!\n");
    }
    rate = (double)bucks / week;
    projEnd = rate * totWeek;
    if(projEnd > totBuck)
    {
        overBucks = projEnd - totBuck;
        formDolBuck = overBucks / 100;
        formCenBuck = overBucks % 100;
        printf("\nBased on your current rate, you will be short $%d.%.2d", formDolBuck, formCenBuck);
        correct = (totBuck - bucks) / leftWeek;
        formDolBuck = correct / 100;
        formCenBuck = correct % 100;
        printf("\nTo have enough bucks for the rest of the semester, use $%d.%.2d per week.\n\n", formDolBuck, formCenBuck);
    }
    else if(projEnd < totBuck)
    {
        leftBucks = totBuck - projEnd;
        formDolBuck = leftBucks / 100;
        formCenBuck = leftBucks % 100;
        printf("\nBased on your current rate, you will have $%d.%.2d left over.", formDolBuck, formCenBuck);
        correct = (totBuck - bucks) / leftWeek;
        formDolBuck = correct / 100;
        formCenBuck = correct % 100;
        printf("\nTo use all of your bucks by the end of the semester, use $%d.%.2d per week.\n\n", formDolBuck, formCenBuck);
    }
    else if(projEnd == totBuck)
    {
        printf("\nCongratulations! You are on track to use all of your bucks by the end of the semester!\n");
    }
}