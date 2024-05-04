```
        elif m in {CBAM}:
            c1, c2 = ch[f], args[0]
            if c2 != nc:
                c2 = make_divisible(min(c2, max_channels) * width, 8)
            args = [c1, c2, *args[1:]]
```

```
            try:
                m.stride = torch.tensor([s / x.shape[-2] for x in forward(torch.zeros(1, ch, s, s))])  # forward
            except RuntimeError:
                try:
                    self.model.to(torch.device('cuda'))
                    m.stride = torch.tensor([s / x.shape[-2] for x in forward(
                        torch.zeros(1, ch, s, s).to(torch.device('cuda')))])
                except RuntimeError as error:
                    raise error
```