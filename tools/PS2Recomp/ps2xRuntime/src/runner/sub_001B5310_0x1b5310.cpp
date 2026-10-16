#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5310
// Address: 0x1b5310 - 0x1b53d0
void sub_001B5310_0x1b5310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5310_0x1b5310");
#endif

    switch (ctx->pc) {
        case 0x1b5310u: goto label_1b5310;
        case 0x1b5314u: goto label_1b5314;
        case 0x1b5318u: goto label_1b5318;
        case 0x1b531cu: goto label_1b531c;
        case 0x1b5320u: goto label_1b5320;
        case 0x1b5324u: goto label_1b5324;
        case 0x1b5328u: goto label_1b5328;
        case 0x1b532cu: goto label_1b532c;
        case 0x1b5330u: goto label_1b5330;
        case 0x1b5334u: goto label_1b5334;
        case 0x1b5338u: goto label_1b5338;
        case 0x1b533cu: goto label_1b533c;
        case 0x1b5340u: goto label_1b5340;
        case 0x1b5344u: goto label_1b5344;
        case 0x1b5348u: goto label_1b5348;
        case 0x1b534cu: goto label_1b534c;
        case 0x1b5350u: goto label_1b5350;
        case 0x1b5354u: goto label_1b5354;
        case 0x1b5358u: goto label_1b5358;
        case 0x1b535cu: goto label_1b535c;
        case 0x1b5360u: goto label_1b5360;
        case 0x1b5364u: goto label_1b5364;
        case 0x1b5368u: goto label_1b5368;
        case 0x1b536cu: goto label_1b536c;
        case 0x1b5370u: goto label_1b5370;
        case 0x1b5374u: goto label_1b5374;
        case 0x1b5378u: goto label_1b5378;
        case 0x1b537cu: goto label_1b537c;
        case 0x1b5380u: goto label_1b5380;
        case 0x1b5384u: goto label_1b5384;
        case 0x1b5388u: goto label_1b5388;
        case 0x1b538cu: goto label_1b538c;
        case 0x1b5390u: goto label_1b5390;
        case 0x1b5394u: goto label_1b5394;
        case 0x1b5398u: goto label_1b5398;
        case 0x1b539cu: goto label_1b539c;
        case 0x1b53a0u: goto label_1b53a0;
        case 0x1b53a4u: goto label_1b53a4;
        case 0x1b53a8u: goto label_1b53a8;
        case 0x1b53acu: goto label_1b53ac;
        case 0x1b53b0u: goto label_1b53b0;
        case 0x1b53b4u: goto label_1b53b4;
        case 0x1b53b8u: goto label_1b53b8;
        case 0x1b53bcu: goto label_1b53bc;
        case 0x1b53c0u: goto label_1b53c0;
        case 0x1b53c4u: goto label_1b53c4;
        case 0x1b53c8u: goto label_1b53c8;
        case 0x1b53ccu: goto label_1b53cc;
        default: break;
    }

    ctx->pc = 0x1b5310u;

label_1b5310:
    // 0x1b5310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b5314:
    // 0x1b5314: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5318:
    // 0x1b5318: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b5318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b531c:
    // 0x1b531c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b5320:
    // 0x1b5320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b5324:
    // 0x1b5324: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b5324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5328:
    // 0x1b5328: 0x8e26037c  lw          $a2, 0x37C($s1)
    ctx->pc = 0x1b5328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
label_1b532c:
    // 0x1b532c: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b532cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b5330:
    // 0x1b5330: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b5330u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b5334:
    // 0x1b5334: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b5334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b5338:
    // 0x1b5338: 0x60f809  jalr        $v1
label_1b533c:
    if (ctx->pc == 0x1B533Cu) {
        ctx->pc = 0x1B533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5338u;
        // 0x1b533c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5340u;
        goto label_1b5340;
    }
    ctx->pc = 0x1B5338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5340u);
        ctx->pc = 0x1B533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5338u;
        // 0x1b533c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5338u, 0x1B5340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5340u;
label_1b5340:
    // 0x1b5340: 0x8e260270  lw          $a2, 0x270($s1)
    ctx->pc = 0x1b5340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_1b5344:
    // 0x1b5344: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5348:
    // 0x1b5348: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b5348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b534c:
    // 0x1b534c: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b534cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b5350:
    // 0x1b5350: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b5350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b5354:
    // 0x1b5354: 0x60f809  jalr        $v1
label_1b5358:
    if (ctx->pc == 0x1B5358u) {
        ctx->pc = 0x1B5358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5354u;
        // 0x1b5358: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B535Cu;
        goto label_1b535c;
    }
    ctx->pc = 0x1B5354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B535Cu);
        ctx->pc = 0x1B5358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5354u;
        // 0x1b5358: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5354u, 0x1B535Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B535Cu;
label_1b535c:
    // 0x1b535c: 0x8e26037c  lw          $a2, 0x37C($s1)
    ctx->pc = 0x1b535cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
label_1b5360:
    // 0x1b5360: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x1b5360u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
label_1b5364:
    // 0x1b5364: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x1b5364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1b5368:
    // 0x1b5368: 0x2610c630  addiu       $s0, $s0, -0x39D0
    ctx->pc = 0x1b5368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952496));
label_1b536c:
    // 0x1b536c: 0x8cc50258  lw          $a1, 0x258($a2)
    ctx->pc = 0x1b536cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b5370:
    // 0x1b5370: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b5370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b5374:
    // 0x1b5374: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b5374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1b5378:
    // 0x1b5378: 0x84a400e8  lh          $a0, 0xE8($a1)
    ctx->pc = 0x1b5378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 232)));
label_1b537c:
    // 0x1b537c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1b5380:
    // 0x1b5380: 0x8ca300ec  lw          $v1, 0xEC($a1)
    ctx->pc = 0x1b5380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
label_1b5384:
    // 0x1b5384: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1b5384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b5388:
    // 0x1b5388: 0x60f809  jalr        $v1
label_1b538c:
    if (ctx->pc == 0x1B538Cu) {
        ctx->pc = 0x1B538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5388u;
        // 0x1b538c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5390u;
        goto label_1b5390;
    }
    ctx->pc = 0x1B5388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5390u);
        ctx->pc = 0x1B538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5388u;
        // 0x1b538c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5388u, 0x1B5390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5390u;
label_1b5390:
    // 0x1b5390: 0x8e25037c  lw          $a1, 0x37C($s1)
    ctx->pc = 0x1b5390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
label_1b5394:
    // 0x1b5394: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x1b5394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1b5398:
    // 0x1b5398: 0x8ca30258  lw          $v1, 0x258($a1)
    ctx->pc = 0x1b5398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 600)));
label_1b539c:
    // 0x1b539c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b539cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b53a0:
    // 0x1b53a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1b53a4:
    // 0x1b53a4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x1b53a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_1b53a8:
    // 0x1b53a8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1b53a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b53ac:
    // 0x1b53ac: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1b53acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b53b0:
    // 0x1b53b0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x1b53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_1b53b4:
    // 0x1b53b4: 0x40f809  jalr        $v0
label_1b53b8:
    if (ctx->pc == 0x1B53B8u) {
        ctx->pc = 0x1B53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53B4u;
        // 0x1b53b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B53BCu;
        goto label_1b53bc;
    }
    ctx->pc = 0x1B53B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B53BCu);
        ctx->pc = 0x1B53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53B4u;
        // 0x1b53b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B53B4u, 0x1B53BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B53BCu;
label_1b53bc:
    // 0x1b53bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b53bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b53c0:
    // 0x1b53c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b53c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b53c4:
    // 0x1b53c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b53c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b53c8:
    // 0x1b53c8: 0x3e00008  jr          $ra
label_1b53cc:
    if (ctx->pc == 0x1B53CCu) {
        ctx->pc = 0x1B53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53C8u;
        // 0x1b53cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B53D0u;
        goto label_fallthrough_0x1b53c8;
    }
    ctx->pc = 0x1B53C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53C8u;
        // 0x1b53cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B53C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b53c8:
    ctx->pc = 0x1B53D0u;
}
