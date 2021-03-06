/*
 * Copyright (C) 2014, 2015 Sen "Senorsen" Zhang <sen@senorsen.com>
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE. 
 *
 */

#ifndef _CONFIG_H_
#define _CONFIG_H_

#define PROGNAME    "doorsend"
#define AUTHOR      "Senorsen"

#ifndef DATE
#define DATE "unknown"
#endif

#ifndef GITCOMMIT
#define GITCOMMIT "unknown"
#endif

#ifndef VERSION
#define VERSION "unknown"
#endif

#define DOOR_IPADDR "xxx.xxx.xxx.xxx"
#define DOOR_SN_1    0xab           // DOOR-SN: 0xabcd (four hexadecimal num)
#define DOOR_SN_2    0xcd
#define DOOR_PORT    60000          // UDP Port: 60000

#endif

