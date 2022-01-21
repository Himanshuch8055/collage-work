#include <stdio.h>
struct student
{
    int rollno;
    float hm, em, mm;
};

int main()
{
    struct student st;
    st.rollno = 10;
    st.hm = 45.5f;
    st.em = 34.4f;
    st.mm = 67.7f;
    printf("student roll no. : %d\n", st.rollno);
    printf("student Hindi marks : %f\n", st.hm);
    printf("student English marks : %f\n", st.em);
    printf("student maths marks : %f\n", st.mm);

    return 0;
}