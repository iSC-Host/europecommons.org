<?php
/**
 * @file
 * appcat_deployment_views.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function appcat_deployment_views_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'deployments';
  $openlayers_maps->title = 'deployments';
  $openlayers_maps->description = 'The map for the Deployments listing page';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'profiles/opencivic/openlayers_theme/img/',
    'css_path' => 'profiles/opencivic/openlayers_theme/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '2.812496945732525, 11.523084514157874',
        'zoom' => '2',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'deployments_list_openlayers_deployments' => 'deployments_list_openlayers_deployments',
    ),
    'layer_weight' => array(
      'organizations_map_openlayers_orgs' => '0',
      'organization_map_openlayers_org' => '0',
      'deployments_list_openlayers_deployments' => '0',
      'home_page_map_homepage' => '0',
      'deployments_map_openlayers_1' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'deployments_map_openlayers_1' => 'deployment_marker',
      'home_page_map_homepage' => '0',
      'organizations_map_openlayers_orgs' => 'organization_marker',
      'organization_map_openlayers_org' => '0',
      'deployments_list_openlayers_deployments' => 'deployment_marker',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'deployments_map_openlayers_1' => 'deployment_marker',
      'home_page_map_homepage' => '0',
      'organizations_map_openlayers_orgs' => 'organization_marker',
      'organization_map_openlayers_org' => '0',
      'deployments_list_openlayers_deployments' => 'deployment_marker',
    ),
    'layer_activated' => array(
      'deployments_list_openlayers_deployments' => 'deployments_list_openlayers_deployments',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'deployments_map_openlayers_1' => 0,
      'home_page_map_homepage' => 0,
      'organizations_map_openlayers_orgs' => 0,
      'organization_map_openlayers_org' => 0,
    ),
    'layer_switcher' => array(
      'deployments_list_openlayers_deployments' => 'deployments_list_openlayers_deployments',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'deployments_map_openlayers_1' => 0,
      'home_page_map_homepage' => 0,
      'organizations_map_openlayers_orgs' => 0,
      'organization_map_openlayers_org' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['deployments'] = $openlayers_maps;

  return $export;
}
