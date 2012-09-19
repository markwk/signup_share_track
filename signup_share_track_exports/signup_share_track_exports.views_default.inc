<?php

/**
 * @file
 * Contains default views for the Sigup Share Track module.
 */

/**
 * Implements hook_views_default_views().
 */
function signup_share_track_exports_views_default_views() {
  // View "Signup Share Track"
  $view = new view();
  $view->name = 'sst';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'signup_share_track';
  $view->human_name = 'Signup Share Track';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Signup Share Track Reports';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access administration menu';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Signup Share Track: sst Users */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'signup_share_track';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Signup Share Track: User */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'signup_share_track';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Field: Signup Share Track: Share URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'signup_share_track';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  /* Field: Signup Share Track: Share Count */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'signup_share_track';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  
  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/config/sst/reports';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Sign Up Share Track Reports';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  
  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'signup_share_track');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Export to CSV file';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%display_%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['path'] = 'admin/config/sst/reports/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = '1';


  $views[$view->name] = $view;

  // View "User's Signup Share Track"
  $view = new view();
  $view->name = 'sst_user';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'signup_share_track_signup';
  $view->human_name = 'User\'s Signup Share Track';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User\'s Signup Share Track';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p><a href="[url]">Link to %1\'s sign up page</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<p>The amount of users, signed up with %1 : <em>[count]</em></p>';
  $handler->display->display_options['header']['area_1']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area_1']['tokenize'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There\'s no users signed up with %1';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Signup Share Track: ssts Users */
  $handler->display->display_options['relationships']['uid_from']['id'] = 'uid_from';
  $handler->display->display_options['relationships']['uid_from']['table'] = 'signup_share_track_signup';
  $handler->display->display_options['relationships']['uid_from']['field'] = 'uid_from';
  /* Relationship: Signup Share Track: ssts Users */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'signup_share_track_signup';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'users sst';
  /* Field: Signup Share Track: User */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'signup_share_track_signup';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: Signup Share Track: Date signed up */
  $handler->display->display_options['fields']['signed_up']['id'] = 'signed_up';
  $handler->display->display_options['fields']['signed_up']['table'] = 'signup_share_track_signup';
  $handler->display->display_options['fields']['signed_up']['field'] = 'signed_up';
  $handler->display->display_options['fields']['signed_up']['date_format'] = 'long';
  /* Field: Signup Share Track: Share Count */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'signup_share_track';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'uid_from';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  /* Field: Signup Share Track: Share URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'signup_share_track';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'uid_from';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = 0;
  /* Contextual filter: Signup Share Track: sst User */
  $handler->display->display_options['arguments']['uid_from']['id'] = 'uid_from';
  $handler->display->display_options['arguments']['uid_from']['table'] = 'signup_share_track_signup';
  $handler->display->display_options['arguments']['uid_from']['field'] = 'uid_from';
  $handler->display->display_options['arguments']['uid_from']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid_from']['title'] = 'Signup Share Track for %1';
  $handler->display->display_options['arguments']['uid_from']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid_from']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_from']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_from']['summary_options']['items_per_page'] = '25';
  
  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'user/%/invite-statistics';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Invite Stats';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;


  $views[$view->name] = $view;

  return $views;
}
