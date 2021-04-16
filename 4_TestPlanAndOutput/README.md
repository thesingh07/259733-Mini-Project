# TEST PLAN
*   ## High level test plan
| **Test ID** | **Description**            | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|----------------------------|-------------|----------------|------------------|
| HLT01 |Add record in the file|Success| Success |Requirement based |
| HLT02 |Find record in the file|Success|Success |Requirement based|
| HLT03 |Delete record in the file|Success|Success |Requirement based|
| HLT04 |Generate report which will contain all the data in the file |Success|Success|Requirement based|
| HLT05 | Data are saved in our file and is accessible after reopening of the system|Success|Success|Requirement based|

*   ## Low level test plan
| **Test ID** | **Description**            | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|----------------------------|-------------|----------------|------------------|
| LLT01 |If user choose display option and the file is empty then show the error message |Success| Success |Requirement based |
| LLT02 |User added or user delete confirmation message |Success|Success|Requirement based|
| LLT03 |Generate report in systematic order with proper indentation |Success|Success |Requirement based|
| LLT04 |In Find() option if the data is not found then show the error message |Success|Success|Requirement based|
| LLT05 |Validations for wrong input |Failed|Failed|Requirement based|
