#include <gtk/gtk.h>
GtkWidget* init_window(){
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_widget_show_all(window);
    gtk_window_set_keep_above(GTK_WINDOW(window),TRUE);
    gtk_widget_set_size_request(GTK_WINDOW(window), 600,200);
    gtk_window_set_accept_focus(GTK_WINDOW(window), FALSE);
    
    GtkCssProvider *cssProvider = gtk_css_provider_new();
    const gchar *cssData = "* { padding: 0px; margin: 0px; border: none; }";
    gtk_css_provider_load_from_data(cssProvider, cssData, -1, NULL);
    gtk_style_context_add_provider_for_screen(gdk_screen_get_default(),
                                              GTK_STYLE_PROVIDER(cssProvider),
                                              GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
    return window;
}
