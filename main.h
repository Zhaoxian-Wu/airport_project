// shared.h
#ifndef H
#define H
enum Runway_activity { idle, land, takeoff };
enum Plane_status { null, arriving, departing };
// Error_code is from "Stack"(textbook page 58)
// "fail" flag is added for Runway::can_land(),
// in which a result might be "fail"
enum Error_code { success, overflow, underflow, fail };
#endif