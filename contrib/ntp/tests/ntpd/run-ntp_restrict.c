/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "config.h"
#include "ntpd.h"
#include "ntp_lists.h"

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_RestrictionsAreEmptyAfterInit(void);
extern void test_ReturnsCorrectDefaultRestrictions(void);
extern void test_HackingDefaultRestriction(void);
extern void test_CantRemoveDefaultEntry(void);
extern void test_AddingNewRestriction(void);
extern void test_TheMostFittingRestrictionIsMatched(void);
extern void test_DeletedRestrictionIsNotMatched(void);
extern void test_RestrictUnflagWorks(void);


//=======Test Reset Option=====
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}

char const *progname;


//=======MAIN=====
int main(int argc, char *argv[])
{
  progname = argv[0];
  UnityBegin("ntp_restrict.c");
  RUN_TEST(test_RestrictionsAreEmptyAfterInit, 59);
  RUN_TEST(test_ReturnsCorrectDefaultRestrictions, 85);
  RUN_TEST(test_HackingDefaultRestriction, 96);
  RUN_TEST(test_CantRemoveDefaultEntry, 119);
  RUN_TEST(test_AddingNewRestriction, 130);
  RUN_TEST(test_TheMostFittingRestrictionIsMatched, 143);
  RUN_TEST(test_DeletedRestrictionIsNotMatched, 165);
  RUN_TEST(test_RestrictUnflagWorks, 189);

  return (UnityEnd());
}
