#pragma once

/*
* Description:
*	Global constants and types.
*	Accessible to all files.
*
* Author: Joohoon Kim
* E-mail: joohoon.kim@outlook.com
*/

#define SWAP_FILE_PATH		"C:\\Users\\jooho\\Desktop\\Sandbox\\NewPlayer\\assets\\desired.jpg"
#define NEW_SWAP_FILE_PATH	"C:\\Users\\jooho\\Desktop\\Sandbox\\NewPlayer\\assets\\image_new.jpg"

#define ORIG_VIDEO_PATH "C:\\Users\\jooho\\Desktop\\Sandbox\\NewPlayer\\assets\\joe.mp4"
#define NEW_VIDEO_PATH	"C:\\Users\\jooho\\Desktop\\Sandbox\\NewPlayer\\assets\\video_new.mp4"

#define LANDMARK_VIDEO_PATH "C:\\Users\\jooho\\Desktop\\Sandbox\\NewPlayer\\assets\\facial_landmark.mp4"
#define CONVEX_VIDEO_PATH "C:\\Users\\jooho\\Desktop\\Sandbox\\NewPlayer\\assets\\convex_hull.mp4"
#define DELAUNAY_VIDEO_PATH "C:\\Users\\jooho\\Desktop\\Sandbox\\NewPlayer\\assets\\delaunay_triangulation.mp4"

#define SHAPE_PREDICTOR "C:\\Users\\jooho\\Desktop\\Sandbox\\NewPlayer\\assets\\shape_predictor_68_face_landmarks.dat"

enum {
	ID_FILE = 1,
	ID_NOTEBOOK = 2,
	ID_MEDIACTRL = 3,
	ID_BUTTONPLAY = 4,
	ID_STEPS = 5,
	ID_IMG = 6
};