
/* 
   TEST(LightScheduler, SchedulerOnEveryDayNotTimeYet)
{
  LightScheduler_ScheduleTurnON(3,EVERYDAY,1200);
  FakeTimeService_SetDay(MONDAY);
  FakeTimeService_SetMinute(1199);
  LightScheduler_Wakeup();

  LONGS_EQUAL(LIGHT_ID_UNKNOWN, LightControllerSpy_GetLastId());
  LONGS_EQUAL(LIGHT_STATE_UNKNOWN, LightControllerSpy_GetLastState());
  } 
*/

TEST(LightScheduler, NoChangeToLightsDuringInitialization)
{
  LONGS_EQUAL(LIGHT_ID_UNKNOWN,LightControllerSpy_GetLastId());
  LONGS_EQUAL(LIGHT_STATE_UNKNOWN, LightControllerSpy_GetLastState());
}


