<?php

/**
 * @file
 * Contains default views for the Sigup Share Track module.
 */

/**
 * Implements hook_views_default_views().
 */
function signup_share_track_views_default_views() {
  // View "Signup Share Track"
  $view = new view;
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
  $handler->display->display_options['title'] = 'Signup Share Track';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access administration menu';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['content'] = 'Total amount of rows: @total';
  /* Relationship: Signup Share Track: sst Users */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'signup_share_track';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Field: Signup Share Track: User */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'signup_share_track';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Field: Signup Share Track: Share URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'signup_share_track';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['url']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['url']['hide_alter_empty'] = 1;
  /* Field: Signup Share Track: Share Count */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'signup_share_track';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['count']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['count']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['count']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['count']['empty_zero'] = 0;
  $handler->display->display_options['fields']['count']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['count']['format_plural'] = 0;
  /* Field: User: Interested in this Country-specific Marketplace */
  $handler->display->display_options['fields']['field_interested_location']['id'] = 'field_interested_location';
  $handler->display->display_options['fields']['field_interested_location']['table'] = 'field_data_field_interested_location';
  $handler->display->display_options['fields']['field_interested_location']['field'] = 'field_interested_location';
  $handler->display->display_options['fields']['field_interested_location']['relationship'] = 'uid';
  /* Field: User: Interested in this Role */
  $handler->display->display_options['fields']['field_interested_role']['id'] = 'field_interested_role';
  $handler->display->display_options['fields']['field_interested_role']['table'] = 'field_data_field_interested_role';
  $handler->display->display_options['fields']['field_interested_role']['field'] = 'field_interested_role';
  $handler->display->display_options['fields']['field_interested_role']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_interested_role']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_interested_role']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_interested_role']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_interested_role']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_interested_role']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_interested_role']['field_api_classes'] = 0;
  /* Filter criterion: User: Interested in this Country-specific Marketplace (field_interested_location) */
  $handler->display->display_options['filters']['field_interested_location_tid']['id'] = 'field_interested_location_tid';
  $handler->display->display_options['filters']['field_interested_location_tid']['table'] = 'field_data_field_interested_location';
  $handler->display->display_options['filters']['field_interested_location_tid']['field'] = 'field_interested_location_tid';
  $handler->display->display_options['filters']['field_interested_location_tid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_interested_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_interested_location_tid']['expose']['operator_id'] = 'field_interested_location_tid_op';
  $handler->display->display_options['filters']['field_interested_location_tid']['expose']['label'] = 'Filter by country of interest';
  $handler->display->display_options['filters']['field_interested_location_tid']['expose']['operator'] = 'field_interested_location_tid_op';
  $handler->display->display_options['filters']['field_interested_location_tid']['expose']['identifier'] = 'field_interested_location_tid';
  $handler->display->display_options['filters']['field_interested_location_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_interested_location_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_interested_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_interested_location_tid']['vocabulary'] = 'countries';
  $handler->display->display_options['filters']['field_interested_location_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_interested_location_tid']['error_message'] = 1;
  /* Filter criterion: User: Interested in this Role (field_interested_role) */
  $handler->display->display_options['filters']['field_interested_role_value']['id'] = 'field_interested_role_value';
  $handler->display->display_options['filters']['field_interested_role_value']['table'] = 'field_data_field_interested_role';
  $handler->display->display_options['filters']['field_interested_role_value']['field'] = 'field_interested_role_value';
  $handler->display->display_options['filters']['field_interested_role_value']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_interested_role_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_interested_role_value']['expose']['operator_id'] = 'field_interested_role_value_op';
  $handler->display->display_options['filters']['field_interested_role_value']['expose']['label'] = 'Filter by role of interest';
  $handler->display->display_options['filters']['field_interested_role_value']['expose']['operator'] = 'field_interested_role_value_op';
  $handler->display->display_options['filters']['field_interested_role_value']['expose']['identifier'] = 'field_interested_role_value';
  $handler->display->display_options['filters']['field_interested_role_value']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/config/people/sst';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Signup Share Track';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'signup_share_track');
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
  $handler->display->display_options['path'] = 'admin/config/people/sst/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = '1';

  $views[$view->name] = $view;

  // View "User's Signup Share Track"
  $view = new view;
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
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<p><a href="[url]">Link to %1\'s sign up page</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['empty'] = FALSE;
  $handler->display->display_options['header']['area_1']['content'] = '<p>The amount of users, signed up with %1 : <em>[count]</em></p>';
  $handler->display->display_options['header']['area_1']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area_1']['tokenize'] = 1;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There\'s no users signed up with %1';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 1;
  /* Relationship: Signup Share Track: ssts Users */
  $handler->display->display_options['relationships']['uid_from']['id'] = 'uid_from';
  $handler->display->display_options['relationships']['uid_from']['table'] = 'signup_share_track_signup';
  $handler->display->display_options['relationships']['uid_from']['field'] = 'uid_from';
  $handler->display->display_options['relationships']['uid_from']['required'] = 0;
  /* Relationship: Signup Share Track: ssts Users */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'signup_share_track_signup';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'users sst';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Field: Signup Share Track: User */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'signup_share_track_signup';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: Signup Share Track: Date signed up */
  $handler->display->display_options['fields']['signed_up']['id'] = 'signed_up';
  $handler->display->display_options['fields']['signed_up']['table'] = 'signup_share_track_signup';
  $handler->display->display_options['fields']['signed_up']['field'] = 'signed_up';
  $handler->display->display_options['fields']['signed_up']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['signed_up']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['signed_up']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['signed_up']['alter']['external'] = 0;
  $handler->display->display_options['fields']['signed_up']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['signed_up']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['signed_up']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['signed_up']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['signed_up']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['signed_up']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['signed_up']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['signed_up']['alter']['html'] = 0;
  $handler->display->display_options['fields']['signed_up']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['signed_up']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['signed_up']['hide_empty'] = 0;
  $handler->display->display_options['fields']['signed_up']['empty_zero'] = 0;
  $handler->display->display_options['fields']['signed_up']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['signed_up']['date_format'] = 'long';
  /* Field: Signup Share Track: Share Count */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'signup_share_track';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'uid_from';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['count']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['count']['empty_zero'] = 0;
  $handler->display->display_options['fields']['count']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['count']['format_plural'] = 0;
  /* Field: Signup Share Track: Share URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'signup_share_track';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'uid_from';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['url']['display_as_link'] = 0;
  /* Field: User: Interested in this Country-specific Marketplace */
  $handler->display->display_options['fields']['field_interested_location']['id'] = 'field_interested_location';
  $handler->display->display_options['fields']['field_interested_location']['table'] = 'field_data_field_interested_location';
  $handler->display->display_options['fields']['field_interested_location']['field'] = 'field_interested_location';
  $handler->display->display_options['fields']['field_interested_location']['relationship'] = 'uid';
  /* Field: User: Interested in this Role */
  $handler->display->display_options['fields']['field_interested_role']['id'] = 'field_interested_role';
  $handler->display->display_options['fields']['field_interested_role']['table'] = 'field_data_field_interested_role';
  $handler->display->display_options['fields']['field_interested_role']['field'] = 'field_interested_role';
  $handler->display->display_options['fields']['field_interested_role']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_interested_role']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_interested_role']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_interested_role']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_interested_role']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_interested_role']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_interested_role']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_interested_role']['field_api_classes'] = 0;
  /* Contextual filter: Signup Share Track: sst User */
  $handler->display->display_options['arguments']['uid_from']['id'] = 'uid_from';
  $handler->display->display_options['arguments']['uid_from']['table'] = 'signup_share_track_signup';
  $handler->display->display_options['arguments']['uid_from']['field'] = 'uid_from';
  $handler->display->display_options['arguments']['uid_from']['title_enable'] = 1;
  $handler->display->display_options['arguments']['uid_from']['title'] = 'Signup Share Track for %1';
  $handler->display->display_options['arguments']['uid_from']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid_from']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid_from']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_from']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_from']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid_from']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid_from']['not'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user/%/invite-statistics';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Invite Stats';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;

  $views[$view->name] = $view;

  return $views;
}
