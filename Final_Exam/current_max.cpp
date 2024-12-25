#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;
    Student(string name,int roll,int marks)
    {
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};
class Max
{
    public:
    bool operator()(Student a,Student b)
    {
        if(a.marks==b.marks)
        {
           return a.roll>b.roll;
        }
        return a.marks<b.marks;
    }
};
int main()
{
    int n;
    cin>>n;
    priority_queue<Student,vector<Student>,Max> pq;
    for(int i=0;i<n;i++)
    {
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        pq.push(Student(name,roll,marks));
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            string name2;
            int roll2,marks2;
            cin>>name2>>roll2>>marks2;
            Student st(name2,roll2,marks2);
            pq.push(st);
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks;
        }
        else if(x==1)
        {
            if(!pq.empty())
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks;
            }
            else
            {
                cout<<"Empty";
            }
        }
        else if(x==2)
        {
            if(!pq.empty())
            {
                pq.pop();
            }
            if(!pq.empty())
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks;
            }
            else
            {
                cout<<"Empty";
            }
        }
        cout<<endl;
    } 
    return 0;
}