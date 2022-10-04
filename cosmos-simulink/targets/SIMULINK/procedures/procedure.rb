# Script Runner test script
cmd("SIMULINK EXAMPLE")
wait_check("SIMULINK STATUS BOOL == 'FALSE'", 5)
