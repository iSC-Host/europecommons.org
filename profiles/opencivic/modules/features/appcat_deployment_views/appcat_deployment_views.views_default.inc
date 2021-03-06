<?php
/**
 * @file
 * appcat_deployment_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function appcat_deployment_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'deployment_at_a_glance';
  $view->description = 'Defines the At a Glance block for Deployments.';
  $view->tag = 'Deployment';
  $view->base_table = 'node';
  $view->human_name = 'Deployment At a Glance';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'At a glance';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="edit-content-button"><a href="/node/[nid]/edit">+ edit details</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Add deployment of */
  $handler->display->display_options['fields']['field_deployment_of']['id'] = 'field_deployment_of';
  $handler->display->display_options['fields']['field_deployment_of']['table'] = 'field_data_field_deployment_of';
  $handler->display->display_options['fields']['field_deployment_of']['field'] = 'field_deployment_of';
  $handler->display->display_options['fields']['field_deployment_of']['label'] = 'Application used';
  $handler->display->display_options['fields']['field_deployment_of']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deployment_of']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Organizations Involved */
  $handler->display->display_options['fields']['field_member']['id'] = 'field_member';
  $handler->display->display_options['fields']['field_member']['table'] = 'field_data_field_member';
  $handler->display->display_options['fields']['field_member']['field'] = 'field_member';
  $handler->display->display_options['fields']['field_member']['label'] = 'Developers';
  $handler->display->display_options['fields']['field_member']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_member']['delta_offset'] = '0';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'deployment' => 'deployment',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Deployment At a Glance';
  $export['deployment_at_a_glance'] = $view;

  $view = new view();
  $view->name = 'deployments_list';
  $view->description = 'The Deployments listing page';
  $view->tag = 'Deployment';
  $view->base_table = 'node';
  $view->human_name = 'Deployments list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Deployments';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Description';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Deployments show where applications have been installed and used. Visit a deployment\'s detail page to learn more about the organizations that deployed the app and their experience using it. Use the form below to filter the list of deployments by category and location.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Relationship: App deployed */
  $handler->display->display_options['relationships']['field_deployment_of_target_id']['id'] = 'field_deployment_of_target_id';
  $handler->display->display_options['relationships']['field_deployment_of_target_id']['table'] = 'field_data_field_deployment_of';
  $handler->display->display_options['relationships']['field_deployment_of_target_id']['field'] = 'field_deployment_of_target_id';
  $handler->display->display_options['relationships']['field_deployment_of_target_id']['ui_name'] = 'App deployed';
  $handler->display->display_options['relationships']['field_deployment_of_target_id']['label'] = 'App deployed';
  /* Relationship: Developer */
  $handler->display->display_options['relationships']['field_member_target_id']['id'] = 'field_member_target_id';
  $handler->display->display_options['relationships']['field_member_target_id']['table'] = 'field_data_field_member';
  $handler->display->display_options['relationships']['field_member_target_id']['field'] = 'field_member_target_id';
  $handler->display->display_options['relationships']['field_member_target_id']['ui_name'] = 'Developer';
  $handler->display->display_options['relationships']['field_member_target_id']['label'] = 'Developer';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date added';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F j, Y';
  /* Field: Content: Add deployment of */
  $handler->display->display_options['fields']['field_deployment_of']['id'] = 'field_deployment_of';
  $handler->display->display_options['fields']['field_deployment_of']['table'] = 'field_data_field_deployment_of';
  $handler->display->display_options['fields']['field_deployment_of']['field'] = 'field_deployment_of';
  $handler->display->display_options['fields']['field_deployment_of']['label'] = 'Application';
  $handler->display->display_options['fields']['field_deployment_of']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_deployment_of']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_deployment_of']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_url';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_location']['type'] = 'addressfield_city_only';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<span class="table-action-button"><a href="node/[nid]">deployment details</a></span>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Application function (field_application_category) */
  $handler->display->display_options['filters']['field_application_category_tid']['id'] = 'field_application_category_tid';
  $handler->display->display_options['filters']['field_application_category_tid']['table'] = 'field_data_field_application_category';
  $handler->display->display_options['filters']['field_application_category_tid']['field'] = 'field_application_category_tid';
  $handler->display->display_options['filters']['field_application_category_tid']['relationship'] = 'field_deployment_of_target_id';
  $handler->display->display_options['filters']['field_application_category_tid']['value'] = '';
  $handler->display->display_options['filters']['field_application_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_application_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_application_category_tid']['expose']['operator_id'] = 'field_application_category_tid_op';
  $handler->display->display_options['filters']['field_application_category_tid']['expose']['label'] = 'App type';
  $handler->display->display_options['filters']['field_application_category_tid']['expose']['operator'] = 'field_application_category_tid_op';
  $handler->display->display_options['filters']['field_application_category_tid']['expose']['identifier'] = 'apptype';
  $handler->display->display_options['filters']['field_application_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_application_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_application_category_tid']['vocabulary'] = 'application_category';
  /* Filter criterion: Content: Civic sector (field_civic_category) */
  $handler->display->display_options['filters']['field_civic_category_tid']['id'] = 'field_civic_category_tid';
  $handler->display->display_options['filters']['field_civic_category_tid']['table'] = 'field_data_field_civic_category';
  $handler->display->display_options['filters']['field_civic_category_tid']['field'] = 'field_civic_category_tid';
  $handler->display->display_options['filters']['field_civic_category_tid']['relationship'] = 'field_deployment_of_target_id';
  $handler->display->display_options['filters']['field_civic_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_civic_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_civic_category_tid']['expose']['operator_id'] = 'field_civic_category_tid_op';
  $handler->display->display_options['filters']['field_civic_category_tid']['expose']['label'] = 'Civic Focus';
  $handler->display->display_options['filters']['field_civic_category_tid']['expose']['operator'] = 'field_civic_category_tid_op';
  $handler->display->display_options['filters']['field_civic_category_tid']['expose']['identifier'] = 'civic';
  $handler->display->display_options['filters']['field_civic_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_civic_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_civic_category_tid']['vocabulary'] = 'civic_category';
  /* Filter criterion: Content: Location (field_location:country) */
  $handler->display->display_options['filters']['field_location_country']['id'] = 'field_location_country';
  $handler->display->display_options['filters']['field_location_country']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_country']['field'] = 'field_location_country';
  $handler->display->display_options['filters']['field_location_country']['group'] = 1;
  $handler->display->display_options['filters']['field_location_country']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_country']['expose']['operator_id'] = 'field_location_country_op';
  $handler->display->display_options['filters']['field_location_country']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_location_country']['expose']['operator'] = 'field_location_country_op';
  $handler->display->display_options['filters']['field_location_country']['expose']['identifier'] = 'country';
  $handler->display->display_options['filters']['field_location_country']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'deployment' => 'deployment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Deployments list */
  $handler = $view->new_display('page', 'Deployments list', 'page');
  $handler->display->display_options['display_description'] = 'Deployments listing page.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'deployments';

  /* Display: Deployments map attachment */
  $handler = $view->new_display('attachment', 'Deployments map attachment', 'attachment_deployments');
  $handler->display->display_options['display_description'] = 'The map attachment on the deployments listing page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'deployments';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_deployments' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_deployments');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_location',
    'other_lon' => 'nid',
    'wkt' => 'field_coordinates',
    'other_top' => 'nid',
    'other_right' => 'nid',
    'other_bottom' => 'nid',
    'other_left' => 'nid',
    'name_field' => 'title',
    'description_field' => 'field_location',
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Description';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Deployments show where applications have been installed and used. Visit a deployment\'s detail page to learn more about the organizations that deployed the app and their experience using it. Use the form below to filter the list of deployments by category and location.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date added';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F j, Y';
  /* Field: Content: Add deployment of */
  $handler->display->display_options['fields']['field_deployment_of']['id'] = 'field_deployment_of';
  $handler->display->display_options['fields']['field_deployment_of']['table'] = 'field_data_field_deployment_of';
  $handler->display->display_options['fields']['field_deployment_of']['field'] = 'field_deployment_of';
  $handler->display->display_options['fields']['field_deployment_of']['label'] = 'Application';
  $handler->display->display_options['fields']['field_deployment_of']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_url';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_location']['type'] = 'addressfield_city_only';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location_1']['id'] = 'field_location_1';
  $handler->display->display_options['fields']['field_location_1']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location_1']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location_1']['label'] = '';
  $handler->display->display_options['fields']['field_location_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_1']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_location_1']['type'] = 'addressfield_city_only';
  $handler->display->display_options['fields']['field_location_1']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Coordinates */
  $handler->display->display_options['fields']['field_coordinates']['id'] = 'field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['table'] = 'field_data_field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['field'] = 'field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['label'] = '';
  $handler->display->display_options['fields']['field_coordinates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coordinates']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_coordinates']['settings'] = array(
    'data' => 'full',
  );

  /* Display: Deployments feed */
  $handler = $view->new_display('feed', 'Deployments feed', 'feed_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'deployments/feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Recent deployments */
  $handler = $view->new_display('block', 'Recent deployments', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent deployments';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<span class="table-action-button"><a href="node/[nid]">deployment details</a></span>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Add deployment of */
  $handler->display->display_options['fields']['field_deployment_of']['id'] = 'field_deployment_of';
  $handler->display->display_options['fields']['field_deployment_of']['table'] = 'field_data_field_deployment_of';
  $handler->display->display_options['fields']['field_deployment_of']['field'] = 'field_deployment_of';
  $handler->display->display_options['fields']['field_deployment_of']['label'] = '';
  $handler->display->display_options['fields']['field_deployment_of']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_deployment_of']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deployment_of']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_deployment_of']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_location']['type'] = 'addressfield_city_only';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_url';
  $handler->display->display_options['block_description'] = 'Deployment/Recent deployments';
  $export['deployments_list'] = $view;

  $view = new view();
  $view->name = 'replated_deployments';
  $view->description = 'Defines the "Related deployments" block for Application detail pages';
  $view->tag = 'Application';
  $view->base_table = 'node';
  $view->human_name = 'Application related deployments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related deployments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_location']['type'] = 'addressfield_city_only';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Add deployment of (field_deployment_of) */
  $handler->display->display_options['arguments']['field_deployment_of_target_id']['id'] = 'field_deployment_of_target_id';
  $handler->display->display_options['arguments']['field_deployment_of_target_id']['table'] = 'field_data_field_deployment_of';
  $handler->display->display_options['arguments']['field_deployment_of_target_id']['field'] = 'field_deployment_of_target_id';
  $handler->display->display_options['arguments']['field_deployment_of_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_deployment_of_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_deployment_of_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_deployment_of_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_deployment_of_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'deployment' => 'deployment',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Application related deployments';
  $export['replated_deployments'] = $view;

  return $export;
}
