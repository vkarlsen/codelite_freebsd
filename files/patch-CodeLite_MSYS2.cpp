--- CodeLite/MSYS2.cpp.orig	2023-01-16 15:04:53 UTC
+++ CodeLite/MSYS2.cpp
@@ -170,7 +170,7 @@ MSYS2* MSYS2::Get() { return &instance; }
 MSYS2::MSYS2()
 {
     // last entry -> most important (reverse order)
-    m_chroots.Add(R"(\usr)");
-    m_chroots.Add(R"(\mingw64)");
-    m_chroots.Add(R"(\clang64)");
+//    m_chroots.Add(R"(\usr)");
+//    m_chroots.Add(R"(\mingw64)");
+//    m_chroots.Add(R"(\clang64)");
 }
