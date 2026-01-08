//3. Course Grade Calculator with Weights

#include<stdio.h>
int main()
{
	
	float exam, quiz, class_participation, total, Exam_weigth, Quiz_weigth, Class_weigth;
	
	printf("Enter your obtained exams score (As percentage): ");
	scanf("%f",&exam);
	printf("Enter your obtained quizzes score (As percentage): ");
	scanf("%f",&quiz);
	printf("Enter your obtained class_participation score (As percentage): ");
	scanf("%f",&class_participation);
	
	Exam_weigth= exam*0.50;
	Quiz_weigth= quiz*0.30;
	Class_weigth= class_participation*0.20;
		
	total= Exam_weigth+Quiz_weigth+Class_weigth;
	
	printf("\nYour overall grade percentage is %.2f%%",total);
	return 0;
	
}