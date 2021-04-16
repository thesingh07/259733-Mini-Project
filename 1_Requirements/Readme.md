# Requirements
## Introduction
* In any institute whether school or university, managing students records is very important ad tedious task. So to make work easy management software is required which can perform CRUB operations on the data and gegenrate the report.
* I choose this topic because it covers all the topic taught and scope to implement them. 

## Research
* Source of Idea
  * Currently due to pendamic I am living in my home town which is very under developed compared to big city. Here we have a government school with the minimum facilities. I went to school and saw everybody there are rushing and busy in find a student record. They have one PC with them but no proper software and knowledge to use it   productively. So I thought of making a demo application to store students record which can work with least required resources.

* Following are the major advantages of this system:
  * Easy to use with less resources required
  * Finding and maintaining records made easy
  * No professitional assistantance required

## Cost and Features
Time | Feature | Cost
------|----------|---------
Before 2000 | Paper based record system | $100K 
2000 - 2010 | Usage of Computer systems | $100K 
After 2010| Many good record maintance softwares | $50K 

## Aging
*  With the time we have seen a huge change in record management system. From recording data in the paper files and keeping it in rooms to now managing them using great softwares and storing them on cloud. The digitalisation of record management system enables users to access data from anywhere and provided an efficient way of storing data and also made CRUD operations very easy.
  
## Defining Our System
### Features
  * Student record system have following features:
    * Add student data
    * Search student data
    * Delete student data
    * Generate report   
## SWOT ANALYSIS
![SWOTAnalysis](https://github.com/thesingh07/259733-Mini-Project/blob/master/1_Requirements/SWOT.png)

## 4W&#39;s and 1&#39;H

  * ## Who
    * Small scale schools and colleges.   

  * ## What
    * Many small and less facilated schools and colleges can't afford costly CRM or ERP systems. So they are bond to do tedious paper work and manage of students record.

  * ## When
    * Since the world is going towards digitalization demand has increased and also difficulties coming in managin files of the records.

  * ## Where
    * This problem is faced everywhere in India and espeacially in small town or villege school.

  * ## How
    * This problem may cause loss of data. Finding the record is also a difficult and time consuming task. Also data may not be remotely accessible. 

## Detail requirements
  * ## High Level Requirements
| ID | Description | Status (Implemented/Future) |
| ----- | ----- | ------- |
| HLR 01 | Menu | Implemented |
| HLR 02 | User can Add new record | Implemented |
| HLR 03 | User can Read records | Implemented |
| HLR 04 | User can Search record | Implemented |
| HLR 05 | User can Delete record | Implemented |
| HLR 06 | User can Generate report | Implemented |
| HLR 07 | User can Update record | Future |

  * ## Low level Requirements
| ID | Description | Status (Implemented/Future) |
| ----- | ----- | ------- |
| LLR 01| Menu will consist of all the operations available in the application and their navigation to respective function | Implemented |
| LLR 02| Add function will take student data such as Name, Standard, Roll Number and phone number which will be stored in a file named 'StudentRC'. Conditions like any field should not be kept empty and incorrect data should be taken care off | Implemented |
| LLR 03| Search function enables user to find any particular record avaliable in the database from its roll number. If the roll number is not available in the database then proper message should be displayed notifying roll number not found | Implemented |
| LLR 04| Delete function will take roll number as input and delete the record from our file and show the successfull deletion message | Implemented |
| LLR 05| Generate report option will give all the data of all the students record available in our file | Implemented |
| LLR 06| Update record feature will give access to users to update their record which will also update data in our file system | Future |
