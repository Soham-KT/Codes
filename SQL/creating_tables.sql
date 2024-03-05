create database if not exists dbms;

use dbms;

create table if not exists faculty(
    fac_id varchar(20) not null primary key,
    fac_name varchar(50) not null,
    fac_subject varchar(10) not null,
    fac_phone_no varchar(10) not null,
    fac_email varchar(50) not null
);

create table if not exists student(
    std_id varchar(20) not null primary key,
    std_roll_no varchar(20) not null,
    std_name varchar(50) not null,
    std_enrollment_no varchar(20) not null,
    std_course varchar(20) not null,
    std_phone_no varchar(10) not null,
    std_email varchar(50) not null,
    std_faculty varchar(20) not null,
    room_no int not null
);

create table if not exists room_no(
    room_num int not null primary key,
    course_associated varchar(50)
);

create table if not exists library(
    book_acc_no varchar(20) not null primary key,
    fac_id varchar(20),
    std_id varchar(20)
);

create table if not exists books(
    acc_no varchar(20) not null primary key,
    author varchar(50) not null,
    title_name varchar(50) not null,
    publisher varchar(50) not null,
    ed int not null,
    cost int not null,
    page_no int not null
);

create table if not exists fees(
    transaction_id varchar(50) not null primary key,
    std_name varchar(50) not null,
    std_id varchar(20) not null,
    std_enrollment_no varchar(20) not null,
    std_roll_no varchar(20) not null,
    fees_submitted int not null,
    fees_remaining int not null
);

create table if not exists scholarship(
    std_enrollment_no varchar(20) not null primary key,
    std_name varchar(50) not null,
    std_id varchar(20) not null,
    std_roll_no varchar(20) not null,
    caste varchar(10) not null,
    scholarship_type varchar(50) not null,
    cgpa varchar(5) not null,
    eligibility boolean not null
);

create table if not exists integrated_programs(
    std_enrollment_no varchar(20) not null primary key,
    std_name varchar(50) not null,
    std_id varchar(20) not null,
    std_roll_no varchar(20) not null,
    std_course varchar(10) not null,
    batch_mentor varchar(50) not null,
    program_incharge varchar(50) not null,
    program_incharge_id varchar(20) not null
);

create table if not exists ug(
    std_enrollment_no varchar(20) not null primary key,
    std_name varchar(50) not null,
    std_id varchar(20) not null,
    std_roll_no varchar(20) not null,
    std_course varchar(10) not null,
    batch_mentor varchar(50) not null,
    program_incharge varchar(50) not null,
    program_incharge_id varchar(20) not null
);

create table if not exists pg(
    std_enrollment_no varchar(20) not null primary key,
    std_name varchar(50) not null,
    std_id varchar(20) not null,
    std_roll_no varchar(20) not null,
    std_course varchar(10) not null,
    batch_mentor varchar(50) not null,
    program_incharge varchar(50) not null,
    program_incharge_id varchar(20) not null
);

create table if not exists academic(
    course varchar(10) not null primary key,
    fac_id varchar(20) not null,
    std_id varchar(20) not null,
    tentative_ist_internal_start date not null, 
    tentative_ist_internal_end date not null, 
    tentative_iind_internal_start date not null, 
    tentative_iind_internal_end date not null, 
    tentative_endsem_start date not null, 
    tentative_endsem_end date not null
);

create table if not exists syllabus(
    course varchar(10) not null primary key,
    fac_id varchar(20) not null,
    std_id varchar(20) not null,
    semester int not null,
    ist_sub varchar(50) not null,
    iind_sub varchar(50) not null,
    iiird_sub varchar(50) not null,
    ivth_sub varchar(50) not null,
    vth_sub varchar(50) not null,
    vith_sub varchar(50)
);

create table if not exists faculty_profile(
    fac_id varchar(20) not null primary key,
    fac_type varchar(20) not null,
    fac_name varchar(50) not null
);

create table if not exists staff_profile(
    staff_id varchar(50) not null primary key,
    staff_type varchar(20) not null,
    staff_name varchar(50) not null
);

create table if not exists publication(
    publication_type varchar(20) not null,
    title varchar(50) not null primary key,
    sub varchar(50) not null,
    author varchar(50) not null,
    author_id varchar(20) not null
);

create table if not exists research_center(
    member_id varchar(20) not null primary key,
    phd_supervisor varchar(50) not null
);

create table if not exists dev_center(
    project_name varchar(50) not null primary key,
    project_type varchar(15) not null,
    member_id varchar(20) not null
);

create table if not exists placement(
    company varchar(50) not null primary key,
    position varchar(20) not null,
    std_id varchar(20) not null,
    salary_per_annum int not null,
    avg_salary_by_company int not null
);

create table if not exists events(
    std_id varchar(20) not null primary key,
    std_name varchar(50) not null,
    event_name varchar(20) not null
);

create table if not exists club(
    std_id varchar(20) not null primary key,
    std_name varchar(50) not null,
    club_name varchar(20) not null
);

create table if not exists maintainence_dep(
    fac_id varchar(20) not null primary key,
    fac_name varchar(50) not null,
    fac_phone_no varchar(10) not null,
    fac_email varchar(50) not null
);

create table if not exists visiting(
    fac_id varchar(20) not null primary key,
    fac_name varchar(50) not null,
    fac_subject varchar(10) not null,
    fac_phone_no varchar(10) not null,
    fac_email varchar(50) not null,
    fac_experience_in_yrs int not null
);

create table if not exists lab_incharge(
    fac_id varchar(20) not null primary key,
    fac_name varchar(50) not null,
    fac_subject varchar(10) not null,
    fac_phone_no varchar(10) not null,
    fac_email varchar(50) not null
);

create table if not exists cabin(
    fac_id varchar(50) not null primary key,
    fac_name varchar(50) not null,
    cabin_no int not null,
    fac_subject varchar(10) not null
);