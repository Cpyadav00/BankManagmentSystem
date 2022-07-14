class User {
    private:
    int    id;
string	firstName;
string	dob;
int	age;
string	contact_no;
string	email;
string	username;
string	password;
public:
User(){}
User(int    id,
string	firstName,
string	dob,
int	age,
string	contact_no,
string	email,
string	username,
string	password)
{
    setId(id);
    setFirstName(firstName);
    setDob(dob);
    setAge(age);
    setContact_no(contact_no);
    setEmail(email);
    setUsername(username);
    setPassword(password);
}
void setId( int    id)
{
    this->id=id;
}
void setFirstName( string    firstName)
{
    this->firstName=firstName;
}
void setDob( string    dob)
{
    this->dob=dob;
}
void setAge( int    age)
{
    this->age=age;
}
void setContact_no( string    contact_no)
{
    this->contact_no=contact_no;
}
void setEmail( string    email)
{
    this->email=email;
}
void setUsername( string    username)
{
    this->username=username;
}
void setPassword( string    password)
{
    this->password=password;
}
int getId()
{
    return id;
}
string getFirstName()
{
    return firstName;
}
string getDob()
{
    return dob;
}
int getAge()
{
    return age;
}
string getContact_no()
{
    return contact_no;
}
string getEmail()
{
    return email;
}
string getUsername()
{
    return username;
}
string getPassword()
{
    return password;
}
void addNewUser()
{
    int num;
 cout<<"Enter the number of user you want to add\n";
 cin>>num;
 User obj[num];
 id=rand() % 10000000;
 cout<<"Enter the full name \n";
 cin.ignore();
 getline(cin,firstName);
 cout<<"Enter date of birth\n";
 cin>>dob;
 cout<<"Enter age\n";
 cin>>age;
 cout<<"Enter contact number \n";
 cin>>contact_no;
 cout<<"Enter email\n";
 cin>>email;
 cout<<"Enter username  \n";
 cin>>username;
 cout<<"Enter password\n";
 cin>>password;
 for(int i=0;i<num;i++)
 {
     obj[i]=User(id,firstName,dob,age,contact_no,email,username,password);
 }
 fstream myfile;
 myfile.open("Data.TXT",ios::app);
 for(int i = 0; i < num; i++){
                myfile<<obj[i].getId()<<","<<obj[i].getFirstName()<<","<<obj[i].getDob()<<","<<obj[i].getAge()<<","<<obj[i].getContact_no()<<","<<obj[i].getEmail()<<","<<obj[i].getUsername()<<","<<obj[i].getPassword()<<","<<endl;
            }
 myfile.close();
 cout<<"Your account number is = "<<id<<endl;
 cout<<"Account has been created sucessfully\n";
}
void displayUserDetails(string n)
{
    int flag=0;
    ifstream myfile;
   myfile.open("Data.TXT");
    if(myfile.is_open())
    {
     string line;
     while(getline(myfile,line))
     {
         stringstream ss(line);
         string    uid;
string	ufirstName;
string	udob;
string	uage;
string	ucontact_no;
string	uemail;
string	uusername;
string	upassword;
            getline(ss,uid,',');
            if(uid==n)
            {
            flag=1;
			cout<<"Id = "<<uid<<"\n";
            getline(ss,ufirstName,',');
			cout<<"Coustomer Name  = "<<ufirstName<<"\n";
             getline(ss,udob,',');
             cout<<"Date of birth = "<<udob<<"\n";
             getline(ss,uage,',');
			cout<<"Age = "<<uage<<"\n";
            getline(ss,ucontact_no,',');
			cout<<"Contact Number = "<<ucontact_no<<"\n";
             getline(ss,uemail,',');
             cout<<"Email = "<<uemail<<"\n";
             getline(ss,uusername,',');
			cout<<"Username = "<<uusername<<"\n";
             getline(ss,upassword,',');
             cout<<"Password = "<<upassword<<"\n";
            }
     }
     if(flag==0)
     {
     cout<<"You are not the coustomer of our bank\n";
     }
      cout<<"THANK YOU FOR VISITING OUR BANK\n";
    }
}
};

