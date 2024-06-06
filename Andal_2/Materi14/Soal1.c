#include <stdio.h>

typedef struct {
    char name[100];
    int hourly_wage;
    int total_hours_worked;
} Employee;

int calculateWage(Employee emp) {
    int regular_hours = 7;
    int overtime = 0;
    int total_wage;

    if (emp.total_hours_worked > regular_hours) {
        overtime = emp.total_hours_worked - regular_hours;
    }
    
    total_wage = (regular_hours * emp.hourly_wage) + (overtime * (20000));
    return total_wage;
}

int main() {
    Employee emp;

    printf("Masukkan nama pegawai: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    printf("Masukkan gaji perjam (dalam rupiah): ");
    scanf("%d", &emp.hourly_wage);
    printf("Masukkan jumlah jam kerja: ");
    scanf("%d", &emp.total_hours_worked);

    int total_wage = calculateWage(emp);

    printf("\n===== SLIP GAJI PEGAWAI HARIAN =====\n");
    printf("NAMA PEGAWAI   : %s", emp.name);
    printf("TOTAL JAM KERJA: %d\n", emp.total_hours_worked);
    printf("GAJI PERJAM    : %d\n", emp.hourly_wage);
    printf("LEMBUR         : %d\n", (emp.total_hours_worked > 7 ? emp.total_hours_worked - 7 : 0));
    printf("TOTAL GAJI     : %d\n", total_wage);

    return 0;
}
