package timetable;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;

class Day{//..................done,working!...................
	private String day;
	public Day(String s){
		day=s;
	}
	
	public Day nextDay(){
		switch (day){
		case "monday":
			return  new Day("tuesday");
		case "tuesday":
			return  new Day("wednesday");
		case "wednesday":
			return  new Day("thursday");
		case "thursday":
			return  new Day("friday");
		case "friday":
			return  new Day("monday");
		}
		return new Day(day);
	}
	
	public void printDay(){
		System.out.println(this.day);
	}
}

class Timing{//..................done,working!...................
	private String fullTime;
	private int timing;
	private int period;
	
	public Timing(int time, int duration){
		this.timing = time;
		this.period = duration;
		fullTime = ((time%12)==0?12:(time%12))+":00"+ ((time<7 || time>=12)?"p.m.":"a.m.")+" - "+
				((time+duration-1)%12 == 0? 12 : (time+duration-1)%12)+":55";
		if(time+duration-1<7 || time+duration-1>=12){
			fullTime+="p.m.";
		}else{
			fullTime+="a.m.";
		}
	}
	
	public Timing nextTiming(){ // only for morning classes
		int t;
		t = timing + 1;
		if(t==12){
			t=9;
		}
		if (t==5){
			t=2;
		}
		return new Timing(t,period);
	}
	
	public void printTiming(){
		System.out.println(fullTime);
	}
}

class DayList{//..................done,working!...................
	public Day day1;
	public Day day2;
	public Day day3;
	
	public DayList(String s){
		this.day1=(new Day(s));
		this.day2=(new Day(s)).nextDay();
		this.day3=(new Day(s)).nextDay().nextDay();
	}
	
	public void printDL(){
		day1.printDay();
		day2.printDay();
		day3.printDay();
	}
}

class TimeList{//..................done,working!...................
	public Timing time1;
	public Timing time2;
	public Timing time3;
	
	public TimeList(int t, int d){
		this.time1=(new Timing(t,d));
		this.time2=(new Timing(t,d)).nextTiming();
		this.time3=(new Timing(t,d)).nextTiming().nextTiming();
	}
	
	public void printTL(){
		time1.printTiming();
		time2.printTiming();
		time3.printTiming();
	}
}

class Course{//..................done,working!...................
	
	private String courseName;
	private String prof;
	private String venue;
	private DayList dayList;
	private TimeList timeList;
	
	public Course(String name,String prf, String ven, DayList dl, TimeList tl){
		this.courseName = name;
		this.prof = prf;
		this.venue = ven;
		this.dayList = dl;
		this.timeList = tl;
	}
	
	public void printCourse(){
		System.out.println(courseName);
		System.out.println(prof);
		System.out.println(venue);
		dayList.day1.printDay(); timeList.time1.printTiming();
		dayList.day2.printDay(); timeList.time2.printTiming();
		dayList.day3.printDay(); timeList.time3.printTiming();
	}
}

class CourseList{//..................done,working!...................
	private ArrayList<Course> list;// = new ArrayList<Course>();
	
	public CourseList(){
		list = new ArrayList<Course>();
	}
	
	public void addCourse(Course c){
		list.add(c);
	}
	
	public void printCourseList(){
		for (int i=0;i<list.size();i++){
			System.out.println("Course no.: "+(i+1));
			list.get(i).printCourse();
		}
	}
}

public class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int tx;
		CourseList list=new CourseList();
		while(true){
			System.out.println("Choose option:\n"
					+ "0. Stop\n"
					+ "1. Add course(s)\n"
					+ "2. Print List of courses with their details\n"
					+ "");
			tx=Integer.parseInt(br.readLine());
			if(tx==0){
				break;
			}else if(tx==1){
				System.out.println("Enter course name:");
				String courseName=br.readLine();
				System.out.println("Enter prof name: ");
				String profName = br.readLine();
				System.out.println("Enter venue: ");
				String venueLec = br.readLine();
				System.out.println("Enter first day");
				String firstDay =br.readLine();
				System.out.println("Enter first time of occurence:");
				int firstTime = Integer.parseInt(br.readLine());
				System.out.println("Enter duration of lecture: ");
				int duration = Integer.parseInt(br.readLine());
				Course c=new Course(courseName,profName,venueLec,new DayList(firstDay),new TimeList(firstTime,duration));
				list.addCourse(c);
				System.out.println("Course added to list.");
			}else if(tx==2){
				list.printCourseList();
			}
		}
	}
}