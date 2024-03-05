use dbms;

-- ----------------------------------------------------------------------------------------faculty

alter table student add constraint 
foreign key(std_faculty) references faculty(fac_id); 

alter table library add constraint
foreign key(fac_id) references faculty(fac_id); 

alter table integrated_programs add constraint
foreign key(program_incharge_id) references faculty(fac_id); 

alter table ug add constraint
foreign key(program_incharge_id) references faculty(fac_id); 

alter table pg add constraint
foreign key(program_incharge_id) references faculty(fac_id); 

alter table academic add constraint
foreign key(fac_id) references faculty(fac_id); 

alter table syllabus add constraint
foreign key(fac_id) references faculty(fac_id); 

alter table faculty_profile add constraint
foreign key(fac_id) references faculty(fac_id); 

alter table staff_profile add constraint
foreign key(staff_id) references faculty(fac_id); 

alter table publication add constraint
foreign key(author_id) references faculty(fac_id); 

alter table research_center add constraint
foreign key(member_id) references faculty(fac_id); 

alter table dev_center add constraint
foreign key(member_id) references faculty(fac_id); 

alter table maintainence_dep add constraint
foreign key(fac_id) references faculty(fac_id); 

alter table visiting add constraint
foreign key(fac_id) references faculty(fac_id); 

alter table lab_incharge add constraint
foreign key(fac_id) references faculty(fac_id); 

alter table cabin add constraint
foreign key(fac_id) references faculty(fac_id); 

-- ---------------------------------------------------------------------------------------student

alter table student add constraint
foreign key(room_no) references room_no(room_num);

alter table library add constraint
foreign key(std_id) references student(std_id);

alter table fees add constraint
foreign key(std_id) references student(std_id);

alter table scholarship add constraint
foreign key(std_id) references student(std_id);

alter table integrated_programs add constraint
foreign key(std_id) references student(std_id);

alter table pg add constraint
foreign key(std_id) references student(std_id);

alter table ug add constraint
foreign key(std_id) references student(std_id);

alter table academic add constraint
foreign key(std_id) references student(std_id);

alter table syllabus add constraint
foreign key(std_id) references student(std_id);

alter table publication add constraint
foreign key(author_id) references student(std_id); 

alter table research_center add constraint
foreign key(member_id) references student(std_id); 

alter table dev_center add constraint
foreign key(member_id) references student(std_id); 

alter table placement add constraint
foreign key(std_id) references student(std_id); 

alter table events add constraint
foreign key(std_id) references student(std_id); 

alter table club add constraint
foreign key(std_id) references student(std_id); 

-- -----------------------------------------------------------------------------------------library

alter table books add constraint
foreign key(acc_no) references library(book_acc_no);