<?php
/**
 * @file
 * wv_campaign_x1fsv.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wv_campaign_x1fsv_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'wv_x1fsv_donation_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '"Por Una Infancia Sin Violencia" Donations Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Por Una Infancia Sin Violencia - Donations Listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_tab_plugin_style';
  $handler->display->display_options['style_options']['tab_field'] = 'title';
  $handler->display->display_options['style_options']['justified'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_wv_donation_reference_product_id']['id'] = 'field_wv_donation_reference_product_id';
  $handler->display->display_options['relationships']['field_wv_donation_reference_product_id']['table'] = 'field_data_field_wv_donation_reference';
  $handler->display->display_options['relationships']['field_wv_donation_reference_product_id']['field'] = 'field_wv_donation_reference_product_id';
  $handler->display->display_options['relationships']['field_wv_donation_reference_product_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['relationship'] = 'field_wv_donation_reference_product_id';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 'wv_donation';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
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
    'page' => 'page',
    'wv_donation_display' => 'wv_donation_display',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_6']['id'] = 'title_6';
  $handler->display->display_options['filters']['title_6']['table'] = 'node';
  $handler->display->display_options['filters']['title_6']['field'] = 'title';
  $handler->display->display_options['filters']['title_6']['value'] = 'La campaña';
  $handler->display->display_options['filters']['title_6']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_2']['id'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['table'] = 'node';
  $handler->display->display_options['filters']['title_2']['field'] = 'title';
  $handler->display->display_options['filters']['title_2']['value'] = 'Niños soldado';
  $handler->display->display_options['filters']['title_2']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_5']['id'] = 'title_5';
  $handler->display->display_options['filters']['title_5']['table'] = 'node';
  $handler->display->display_options['filters']['title_5']['field'] = 'title';
  $handler->display->display_options['filters']['title_5']['value'] = 'Explotación sexual y tráfico';
  $handler->display->display_options['filters']['title_5']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Trabajo infantil';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['value'] = 'Ablación y matrimonio temprano';
  $handler->display->display_options['filters']['title_1']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_3']['id'] = 'title_3';
  $handler->display->display_options['filters']['title_3']['table'] = 'node';
  $handler->display->display_options['filters']['title_3']['field'] = 'title';
  $handler->display->display_options['filters']['title_3']['value'] = 'Maltrato infantil';
  $handler->display->display_options['filters']['title_3']['group'] = 2;
  $handler->display->display_options['filters']['title_3']['expose']['operator_id'] = 'title_3_op';
  $handler->display->display_options['filters']['title_3']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title_3']['expose']['operator'] = 'title_3_op';
  $handler->display->display_options['filters']['title_3']['expose']['identifier'] = 'title_3';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_4']['id'] = 'title_4';
  $handler->display->display_options['filters']['title_4']['table'] = 'node';
  $handler->display->display_options['filters']['title_4']['field'] = 'title';
  $handler->display->display_options['filters']['title_4']['value'] = 'Refugiados y menores no acompañados';
  $handler->display->display_options['filters']['title_4']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_tab_plugin_style';
  $handler->display->display_options['style_options']['tab_field'] = 'title';
  $handler->display->display_options['style_options']['justified'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['wv_x1fsv_donation_list'] = array(
    t('Master'),
    t('Por Una Infancia Sin Violencia - Donations Listing'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Products referenced by field_wv_donation_reference'),
    t('Title'),
    t('Block'),
  );
  $export['wv_x1fsv_donation_list'] = $view;

  return $export;
}
