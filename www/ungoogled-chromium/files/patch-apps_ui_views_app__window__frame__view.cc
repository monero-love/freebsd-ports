--- apps/ui/views/app_window_frame_view.cc.orig	2023-12-23 12:33:28 UTC
+++ apps/ui/views/app_window_frame_view.cc
@@ -149,7 +149,7 @@ gfx::Rect AppWindowFrameView::GetWindowBoundsForClient
   gfx::Rect window_bounds = client_bounds;
 // TODO(crbug.com/1052397): Revisit once build flag switch of lacros-chrome is
 // complete.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
   // Get the difference between the widget's client area bounds and window
   // bounds, and grow |window_bounds| by that amount.
   gfx::Insets native_frame_insets =
