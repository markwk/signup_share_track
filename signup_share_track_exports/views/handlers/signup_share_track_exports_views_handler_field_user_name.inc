<?php

/**
 * Field handler to provide simple renderer that allows using a themed user link
 */
class signup_share_track_views_handler_field_user_name extends views_handler_field {

  /**
   * Override init function to provide generic option to link to user.
   */
  function init(&$view, &$data) {
    parent::init($view, $data);
    if (!empty($this->options['link_to_user'])) {
      $this->additional_fields['uid'] = 'uid';
    }
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['link_to_user'] = array('default' => TRUE);
    return $options;
  }

  /**
   * Provide link to node option
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['link_to_user'] = array(
      '#title' => t('Link this field to its user'),
      '#description' => t('This will override any other link you have set.'),
      '#type' => 'checkbox',
      '#default_value' => $this->options['link_to_user'],
    );
  }

  function render_link($data, $values) {
    if (!empty($this->options['link_to_user']) && user_access('access user profiles') && $values->{$this->aliases['uid']} && $data !== NULL && $data !== '') {
      $this->options['alter']['make_link'] = TRUE;
      $this->options['alter']['path'] = "user/" . $values->{$this->aliases['uid']};
    }
    return $data;
  }

  function render($values) {
    $name = db_select('users', 'u');
    $name->fields('u', array('uid', 'name'))->condition('u.uid', $values->{$this->aliases['uid']});
    $result = $name->execute();
    foreach ($result->fetchCol(1) as $_name) {
      $name = $_name;
    }
    return $this->render_link(check_plain($name), $values);
  }

}
