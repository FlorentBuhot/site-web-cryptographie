<?php

// The following are all ok.
interface Test_Interface_Ok_A
{
}

interface Test_Interface_Bad_A
{ // There should be no content after the brace.
}

interface Test_Interface_Bad_C
{
}

class Test_Class_Ok_A
{
}


// These are all incorrect.

class Test_Class_Ok_B extends Test_Class_Ok_A
{
}

class Test_Class_Ok_C implements Test_Interface_Ok_A
{
}

class Test_Class_Bad_A
{
}

class Test_Class_Bad_B extends Test_Class_Bad_A

{ // There should be no content after the brace.
}

// These should all be flagged for wrong whitespace before opening brace.

class Test_Class_Bad_C implements Test_Interface_Bad_A


{
}

class Test_Class_Bad_G
{
}

class Test_Class_Bad_H extends Test_Class_Bad_G
{
}

class Test_Class_Bad_I implements Test_Interface_Bad_C
{
}

// This one should be flagged as a potential parse error.
class Test_Class_Bad_H

// This is OK.
class A_Class_With_Really_Long_Name
    extends Another_Class_With_A_Really_Long_Name
{

}

// This is OK too.
class A_Class_With_Really_Long_Name_2
    extends Another_Class_With_A_Really_Long_Name
    implements Some_Interface_With_A_Long_Name,
    Another_Interface_With_A_Long_Name
{

}

// But this is not.
class A_Class_With_Really_Long_Name_3
    extends Another_Class_With_A_Really_Long_Name
{

}

// Nor is this.
class A_Class_With_Really_Long_Name_4
    extends Another_Class_With_A_Really_Long_Name
    implements Some_Interface_With_A_Long_Name,
    Another_Interface_With_A_Long_Name
{

}

// While this is ok again.
class Test_Class_Bad_G /*some comment*/
{
}

// And this is not.
class Test_Class_Bad_G
    /*some comment*/
{
}
