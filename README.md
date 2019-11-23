# <img src="https://github.com/tkjef/sessh/blob/master/sessh_logo_white.jpg" height="100">

<img src="https://github.com/tkjef/sessh/blob/master/img/sessh_screenshot.png" height="205">  

Manage your ssh sessions with ease on Mac.  
Retrieve and log into current AWS instances for troubleshooting and verifying setup.  

## Installation

NO LONGER AVAILABLE.


## Configuration

1. Open the app and choose 'Settings > Edit' to edit ~/.sessh.json  
2. Define menu items and commands that are run.

## Credits

Inspired by previous heavy use of [PAC Manager](https://sourceforge.net/projects/pacmanager/) for linux + [SuperPutty](https://github.com/jimradford/superputty) for Windows.  
Forked from [Shuttle](http://fitztrev.github.io/shuttle/) which was inspired by [SSHMenu](http://sshmenu.sourceforge.net/), the GNOME applet for Linux.  

## Development

*Report issues/ask questions/submit feature requests here: [GitHub Issues][issues]

Pull requests welcome!
Create a branch for each feature or fix you make with the below instructions.
If you haven't already:
1. Fork the repo
2. Clone your forked repo

Inside cloned repo directory run the below:
1. `git remote add upstream https://github.com/tkjef/sessh.git`
2. `git fetch upstream`
3. `git checkout master`
4. `git rebase upstream/master`
5. `git checkout -b new_feature_or_fix`
6. `git commit -am 'Added feature or fix'`
7. `git push origin new_feature_or_fix`)
8. Create new Pull Request

After pull request is merged run the below:
1. `git fetch upstream`
2. `git checkout master`
3. `git rebase upstream/master`
4. `git push`

## Authors

Maintained by [tkjef][tkjef] (<yo@tkjef.com>) and a growing community of [contributors][contributors]. Forked from [fitztrev][fitztrev].

## License

MIT License, (see [LICENSE][license])  
MIT © [fitztrev][fitztrev]  
portions MIT © [tkjef][tkjef]  

[contributors]: https://github.com/tkjef/sessh/graphs/contributors
[tkjef]: https://github.com/tkjef
[fitztrev]: https://github.com/fitztrev
[issues]: https://github.com/tkjef/sessh/issues
[license]: https://github.com/tkjef/sessh/blob/master/LICENSE
[twitter]: https://twitter.com/tkjef
[website]: http://www.sessh.io/

## Project Roadmap
### Additions Coming Soon
Nomad logging  
K8s logging  
