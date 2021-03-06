typedef struct 
{
	float average;
	float max;
	float min;

}computedStats;

computedStats compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], computedStats computedStats_st);
void emailAlerter();
void ledAlerter();
extern int emailAlertCallCount;
extern int ledAlertCallCount;
