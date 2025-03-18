#include <stdio.h>
#include <string.h>
#define DEFAULT   "\033[0m"
#define CYAN    "\033[36m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"


struct Date {
    int day;
    int month;
    int year;
};

struct Info {
    struct Date date;
    char fName[15];
    char lName[15];
    char status[15];
    int number;
    int age;
    int uniqueRef;
};

struct Info info[100];
int size = 10;
int uniqueCounter = 0;

void addReservation() {
    if (size < 100) {
        printf("%s==> Enter First Name: ", YELLOW);
        getchar();
        fgets(info[size].fName, sizeof(info[size].fName), stdin);
        info[size].fName[strcspn(info[size].fName, "\n")] = '\0';

        printf("==> Enter Last Name: ");
        fgets(info[size].lName, sizeof(info[size].lName), stdin);
        info[size].lName[strcspn(info[size].lName, "\n")] = '\0';

        printf("==> Enter Phone Number: ");
        scanf("%d", &info[size].number);

        printf("==> Enter Age: ");
        scanf("%d", &info[size].age);

        printf("==> Enter Status(valid, postpone, cancel, process): ");
        getchar();
        fgets(info[size].status, sizeof(info[size].status), stdin);
        info[size].status[strcspn(info[size].status, "\n")] = '\0';

        printf("==> Enter reservation Date(DD MM YYYY): ");
        printf("%s", DEFAULT);
        fflush(stdin);
        scanf("%d %d %d", &info[size].date.day, &info[size].date.month, &info[size].date.year);

        info[size].uniqueRef = uniqueCounter++;

        printf("\n%sReservation added successfully!%s\n\n", GREEN, DEFAULT);
        size++;
    }
    else {
        printf("%sStorage full cannot add more reservations.%s\n\n", RED, DEFAULT);
    }
}

void reservationSettings() {
    int searchReferance;
    int found = 0;

    printf("%s==> Enter the referance(ID) of the reservation you want to modify or delete: %s", YELLOW, DEFAULT);
    scanf("%d", &searchReferance);

    for (int i = 0; i < size; i++) {
        if (info[i].uniqueRef == searchReferance) {
            found = 1;
            int choice;

            printf("%sReservation found. Choose an action:%s\n", GREEN, DEFAULT);
            printf("- 1 - Modify\n- 2 - Delete\n\n");
            printf("%s==> Enter choice: ", YELLOW);
            scanf("%d", &choice);

            if (choice == 1) {
                printf("==> Enter new Phone Number: ");
                scanf("%d", &info[i].number);
                printf("==> Enter new Age: ");
                scanf("%d", &info[i].age);
                printf("==> Enter new Status(valid, postpone, cancel, process): ");
                scanf("%s", info[i].status);
                printf("==> Enter new reservation Date(DD MM YYYY): ");
                printf("%s", DEFAULT);
                scanf("%d %d %d", &info[i].date.day, &info[i].date.month, &info[i].date.year);
                printf("%sReservation updated successfully!%s\n\n", GREEN, DEFAULT);
            }
            else if (choice == 2) {
                for (int j = i; j < size - 1; j++) {
                    info[j] = info[j + 1];
                }
                size--;
                printf("%sReservation deleted successfully!%s\n", GREEN, DEFAULT);
            }
            break;
        }
    }

    if (!found) {
        printf("%sNo reservation found with that name.%s\n\n", RED, DEFAULT);
    }
}

void showReservation() {
    if (size == 0) {
        printf("%sNo reservations available!%s\n\n", RED, DEFAULT);
        return;
    }

    printf("%s---------------------------------------------------------------------------------------------------\n", CYAN);
    printf("|   ID   |   First Name    |    Last Name    |    Phone    | Age |    Status     |      Date      |\n");
    printf("---------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < size; i++) {
        printf("|  %-5d | %-15s | %-15s | %-11d | %-3d | %-13s |   %02d/%02d/%04d   |\n",
            info[i].uniqueRef, info[i].fName, info[i].lName, info[i].number, info[i].age,
            info[i].status, info[i].date.day, info[i].date.month, info[i].date.year);
    }

    printf("---------------------------------------------------------------------------------------------------%s\n\n", DEFAULT);
}

void reservationTri() {
    int choice;
    printf("\nChoose type of sorting:\n");
    printf("- 1 - Sort by name\n- 2 - Sort by status\n\n");
    printf("%s==> Enter your choice: %s", YELLOW, DEFAULT);
    scanf("%d", &choice);

    if (choice == 1) {
        printf("%s-------------------------------------------------------------\n", CYAN);
        printf("|                     Sort reservations                     |\n");
        printf("-------------------------------------------------------------\n");
        printf("|         Last Name           |            Status           |\n");
        printf("-------------------------------------------------------------\n");

        for (int i = 0; i < size; i++) {
            char sort[15];
            for (int j = i + 1; j < size; j++) {
                if (strcmp(info[i].lName, info[j].lName) > 0) {
                    strcpy(sort, info[i].lName);
                    strcpy(info[i].lName, info[j].lName);
                    strcpy(info[j].lName, sort);
                }
            }
            printf("|  %-26s |  %-26s |\n", info[i].lName, info[i].status);
        }

        printf("-------------------------------------------------------------%s\n", DEFAULT);
    }
    else if (choice == 2) {
        printf("%s-------------------------------------------------------------\n", CYAN);
        printf("|                     Sort reservations                     |\n");
        printf("-------------------------------------------------------------\n");
        printf("|           Status            |          Last Name          |\n");
        printf("-------------------------------------------------------------\n");

        for (int i = 0; i < size; i++) {
            char sort[15];
            for (int j = i + 1; j < size; j++) {
                if (strcmp(info[i].status, info[j].status) > 0) {
                    strcpy(sort, info[i].status);
                    strcpy(info[i].status, info[j].status);
                    strcpy(info[j].status, sort);
                }
            }
            printf("|  %-26s |  %-26s |\n", info[i].status, info[i].lName);
        }

        printf("-------------------------------------------------------------%s\n", DEFAULT);
    }
    printf("\n\n");
}

void searchReservation() {
    char searchName[15];
    int searchReferance;
    int found = 0, choice;

    printf("Choose type of search:\n");
    printf("- 1 - By last name\n- 2 - By referance(ID)\n\n");
    printf("%s==> Enter choice: ", YELLOW);
    scanf("%d", &choice);

    if (choice == 1) {
        printf("==> Enter the last name of the reservation you are searching for: %s", DEFAULT);
        scanf(" %[^\n]", searchName);

        for (int i = 0; i < size; i++) {
            if (strcasecmp(info[i].lName, searchName) == 0) {
                found = 1;
                printf("\n%sReservation found!%s\n\n", GREEN, DEFAULT);

                printf("%sFirst Name: %s\n", BLUE, info[i].fName);
                printf("Last Name: %s\n", info[i].lName);
                printf("Phone Number: %d\n", info[i].number);
                printf("Age: %d\n", info[i].age);
                printf("Status: %s\n", info[i].status);
                printf("Reservation Date: %02d/%02d/%04d %s\n\n", info[i].date.day, info[i].date.month, info[i].date.year, DEFAULT);
                break;
            }
        }
    }
    else if (choice == 2) {
        printf("%s==> Enter the ID of the reservation you are searching for: %s", YELLOW, DEFAULT);
        scanf("%d", &searchReferance);

        for (int i = 0; i < size; i++) {
            if (info[i].uniqueRef == searchReferance) {
                found = 1;
                printf("\n%sReservation found!%s\n\n", GREEN, DEFAULT);

                printf("%sFirst Name: %s\n", BLUE, info[i].fName);
                printf("Last Name: %s\n", info[i].lName);
                printf("Phone Number: %d\n", info[i].number);
                printf("Age: %d\n", info[i].age);
                printf("Status: %s\n", info[i].status);
                printf("Reservation Date: %02d/%02d/%04d %s\n\n", info[i].date.day, info[i].date.month, info[i].date.year, DEFAULT);
                break;
            }
        }
    }

    if (!found) {
        printf("\n%sNo reservation found!%s\n\n", RED, DEFAULT);
    }
}

void statistic() {
    int totalAge = 0, valid = 0, cancel = 0, postpone = 0, process = 0;
    int ageGroups[3] = { 0 };

    for (int i = 0; i < size; i++) {
        totalAge += info[i].age;

        if (info[i].age >= 0 && info[i].age <= 18) {
            ageGroups[0]++;
        }
        else if (info[i].age >= 19 && info[i].age <= 35) {
            ageGroups[1]++;
        }
        else {
            ageGroups[2]++;
        }

        if (strcmp(info[i].status, "valid") == 0) {
            valid++;
        }
        else if (strcmp(info[i].status, "cancel") == 0) {
            cancel++;
        }
        else if (strcmp(info[i].status, "postpone") == 0) {
            postpone++;
        }
        else if (strcmp(info[i].status, "process") == 0) {
            process++;
        }
    }

    if (size > 0) {
        printf("\n%sAverage age: %.2f\n\n", CYAN, (float)totalAge / size);
    }

    printf("%s-----------------------------------------------------------\n", CYAN);
    printf("|                Reservation Statistics                   |\n");
    printf("-----------------------------------------------------------\n");
    printf("| Age Group                |     Count                    |\n");
    printf("-----------------------------------------------------------\n");
    printf("| 0-18 years old           |     %-24d |\n", ageGroups[0]);
    printf("| 19-35 years old          |     %-24d |\n", ageGroups[1]);
    printf("| 36+ years old            |     %-24d |\n", ageGroups[2]);
    printf("-----------------------------------------------------------\n");
    printf("| Reservation Status       |     Count                    |\n");
    printf("-----------------------------------------------------------\n");
    printf("| validated                |     %-24d |\n", valid);
    printf("| Canceled                 |     %-24d |\n", cancel);
    printf("| postponed                |     %-24d |\n", postpone);
    printf("| In Process               |     %-24d |\n", process);
    printf("-----------------------------------------------------------%s\n\n", DEFAULT);
}

void main() {
    int choice;

    info[0] = (struct Info){ {04, 10, 2024}, "yassine", "el marnissi", "valid", 678987654, 25, 91 };
    info[1] = (struct Info){ {25, 04, 2024}, "amine", "choon", "valid", 623845961, 12, 92 };
    info[2] = (struct Info){ {15, 02, 2024}, "reda", "monir", "valid", 674265812, 7, 93 };
    info[3] = (struct Info){ {22, 11, 2024}, "hind", "soufi", "cancel", 754963225, 36, 94 };
    info[4] = (struct Info){ {23, 07, 2024}, "monir", "rachaad", "postpone", 664825576, 27, 95 };
    info[5] = (struct Info){ {12, 12, 2024}, "soumia", "anib", "postpone", 714852354, 64, 96 };
    info[6] = (struct Info){ {18, 03, 2024}, "rachida", "ben kader", "process", 698456758, 38, 97 };
    info[7] = (struct Info){ {19, 07, 2024}, "hamid", "al mouhamadi", "cancel", 695135785, 46, 98 };
    info[8] = (struct Info){ {07, 11, 2024}, "kholoud", "zanir", "process", 636145879, 43, 99 };
    info[9] = (struct Info){ {16, 05, 2024}, "zinb", "idrissi", "valid", 696584236, 17, 100 };


    while (1) {

        printf("%s             ___   ____  _     _____   __    _                   \n", YELLOW);
        printf("            | | \\ | |_  | |\\ |  | |   / /\\  | |                  \n");
        printf("            |_|_/ |_|__ |_| \\|  |_|  /_/--\\ |_|__                \n");
        printf(" ___   ____  __   ____  ___   _       __   _____  _   ___   _    \n");
        printf("| |_) | |_  ( (` | |_  | |_) \\ \\  /  / /\\   | |  | | / / \\ | |\\ |\n");
        printf("|_| \\ |_|__ _)_) |_|__ |_| \\  \\_\\/  /_/--\\  |_|  |_| \\_\\_/ |_| \\|%s\n\n", DEFAULT);
        printf("--------------------------------------------------------------------\n");
        printf("|                        Reservation Menu                          |\n");
        printf("--------------------------------------------------------------------\n");
        printf("| 1 | Add a reservation                                            |\n");
        printf("| 2 | Modify or delete a reservation                               |\n");
        printf("| 3 | View reservation details                                     |\n");
        printf("| 4 | Sorting reservations                                         |\n");
        printf("| 5 | Search for reservations                                      |\n");
        printf("| 6 | Statistics                                                   |\n");
        printf("| 7 | Exit                                                         |\n");
        printf("--------------------------------------------------------------------\n");

        printf("%s==> Enter your choice: %s", YELLOW, DEFAULT);
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addReservation();
            break;
        case 2:
            reservationSettings();
            break;
        case 3:
            showReservation();
            break;
        case 4:
            reservationTri();
            break;
        case 5:
            searchReservation();
            break;
        case 6:
            statistic();
            break;
        case 7:
            printf("%sExiting the program.%s\n\n", GREEN, DEFAULT);
            return;
        default:
            printf("%sInvalid choice! Please try again.%s\n\n", RED, DEFAULT);
            break;
        }
    }
}