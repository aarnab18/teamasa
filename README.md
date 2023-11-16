# teamasa

## Summary:
The two parts that we implemented were calculating the ideal time gap based on user preference and setting the maximum speed. To calculate the time gap, we start with 2 seconds at 30mph and per 8/10/15 mph (decided by user) increase in speed, this gap will increase by another second. As for the speed cap, when the user hits their set maximum speed, the controller sets acceleration to zero to stay within the user’s ideal speed range and maintain a constant speed. After converting everything to m/s, we were able to create a controller that seamlessly accelerated and decelerated according to traffic conditions and user preferences.

## Plots:

