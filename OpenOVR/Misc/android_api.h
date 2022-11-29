#pragma once
#if ANDROID

// Symbols used to exchange critical information between OpenComposite and the application

extern "C" {
extern XrInstanceCreateInfoAndroidKHR* OpenComposite_Android_Create_Info;
#ifdef XR_USE_GRAPHICS_API_OPENGL_ES
extern XrGraphicsBindingOpenGLESAndroidKHR* OpenComposite_Android_GLES_Binding_Info;
#endif
};

extern std::string (*OpenComposite_Android_Load_Input_File)(const char* path);

/**
 * Poll for OpenXR events. Call this regularly while sleeping.
 */
extern "C" void OpenComposite_Android_EventPoll();

#endif
