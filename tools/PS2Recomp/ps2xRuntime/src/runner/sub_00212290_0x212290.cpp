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

// Function: sub_00212290
// Address: 0x212290 - 0x212350
void sub_00212290_0x212290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212290_0x212290");
#endif

    switch (ctx->pc) {
        case 0x212290u: goto label_212290;
        case 0x212294u: goto label_212294;
        case 0x212298u: goto label_212298;
        case 0x21229cu: goto label_21229c;
        case 0x2122a0u: goto label_2122a0;
        case 0x2122a4u: goto label_2122a4;
        case 0x2122a8u: goto label_2122a8;
        case 0x2122acu: goto label_2122ac;
        case 0x2122b0u: goto label_2122b0;
        case 0x2122b4u: goto label_2122b4;
        case 0x2122b8u: goto label_2122b8;
        case 0x2122bcu: goto label_2122bc;
        case 0x2122c0u: goto label_2122c0;
        case 0x2122c4u: goto label_2122c4;
        case 0x2122c8u: goto label_2122c8;
        case 0x2122ccu: goto label_2122cc;
        case 0x2122d0u: goto label_2122d0;
        case 0x2122d4u: goto label_2122d4;
        case 0x2122d8u: goto label_2122d8;
        case 0x2122dcu: goto label_2122dc;
        case 0x2122e0u: goto label_2122e0;
        case 0x2122e4u: goto label_2122e4;
        case 0x2122e8u: goto label_2122e8;
        case 0x2122ecu: goto label_2122ec;
        case 0x2122f0u: goto label_2122f0;
        case 0x2122f4u: goto label_2122f4;
        case 0x2122f8u: goto label_2122f8;
        case 0x2122fcu: goto label_2122fc;
        case 0x212300u: goto label_212300;
        case 0x212304u: goto label_212304;
        case 0x212308u: goto label_212308;
        case 0x21230cu: goto label_21230c;
        case 0x212310u: goto label_212310;
        case 0x212314u: goto label_212314;
        case 0x212318u: goto label_212318;
        case 0x21231cu: goto label_21231c;
        case 0x212320u: goto label_212320;
        case 0x212324u: goto label_212324;
        case 0x212328u: goto label_212328;
        case 0x21232cu: goto label_21232c;
        case 0x212330u: goto label_212330;
        case 0x212334u: goto label_212334;
        case 0x212338u: goto label_212338;
        case 0x21233cu: goto label_21233c;
        case 0x212340u: goto label_212340;
        case 0x212344u: goto label_212344;
        case 0x212348u: goto label_212348;
        case 0x21234cu: goto label_21234c;
        default: break;
    }

    ctx->pc = 0x212290u;

label_212290:
    // 0x212290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x212290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_212294:
    // 0x212294: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x212294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_212298:
    // 0x212298: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x212298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_21229c:
    // 0x21229c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21229cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2122a0:
    // 0x2122a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2122a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2122a4:
    // 0x2122a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2122a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2122a8:
    // 0x2122a8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2122a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2122ac:
    // 0x2122ac: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2122b0:
    if (ctx->pc == 0x2122B0u) {
        ctx->pc = 0x2122B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122ACu;
        // 0x2122b0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122B4u;
        goto label_2122b4;
    }
    ctx->pc = 0x2122ACu;
    {
        const bool branch_taken_0x2122ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2122B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122ACu;
        // 0x2122b0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2122ac) {
            ctx->pc = 0x2122ECu;
            goto label_2122ec;
        }
    }
    ctx->pc = 0x2122B4u;
label_2122b4:
    // 0x2122b4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2122b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2122b8:
    // 0x2122b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2122b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2122bc:
    // 0x2122bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2122bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2122c0:
    // 0x2122c0: 0x40f809  jalr        $v0
label_2122c4:
    if (ctx->pc == 0x2122C4u) {
        ctx->pc = 0x2122C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122C0u;
        // 0x2122c4: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122C8u;
        goto label_2122c8;
    }
    ctx->pc = 0x2122C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2122C8u);
        ctx->pc = 0x2122C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122C0u;
        // 0x2122c4: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122C0u, 0x2122C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2122C8u;
label_2122c8:
    // 0x2122c8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2122c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2122cc:
    // 0x2122cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2122ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2122d0:
    // 0x2122d0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2122d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_2122d4:
    // 0x2122d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2122d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2122d8:
    // 0x2122d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2122d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2122dc:
    // 0x2122dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2122dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2122e0:
    // 0x2122e0: 0x40f809  jalr        $v0
label_2122e4:
    if (ctx->pc == 0x2122E4u) {
        ctx->pc = 0x2122E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122E0u;
        // 0x2122e4: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122E8u;
        goto label_2122e8;
    }
    ctx->pc = 0x2122E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2122E8u);
        ctx->pc = 0x2122E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122E0u;
        // 0x2122e4: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122E0u, 0x2122E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2122E8u;
label_2122e8:
    // 0x2122e8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2122e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_2122ec:
    // 0x2122ec: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x2122ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2122f0:
    // 0x2122f0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x2122f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_2122f4:
    // 0x2122f4: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x2122f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_2122f8:
    // 0x2122f8: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x2122f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
label_2122fc:
    // 0x2122fc: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x2122fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_212300:
    // 0x212300: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x212300u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
label_212304:
    // 0x212304: 0x24422350  addiu       $v0, $v0, 0x2350
    ctx->pc = 0x212304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9040));
label_212308:
    // 0x212308: 0x24632360  addiu       $v1, $v1, 0x2360
    ctx->pc = 0x212308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9056));
label_21230c:
    // 0x21230c: 0x24842420  addiu       $a0, $a0, 0x2420
    ctx->pc = 0x21230cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9248));
label_212310:
    // 0x212310: 0x24a5a1d8  addiu       $a1, $a1, -0x5E28
    ctx->pc = 0x212310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943192));
label_212314:
    // 0x212314: 0x24c62568  addiu       $a2, $a2, 0x2568
    ctx->pc = 0x212314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9576));
label_212318:
    // 0x212318: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x212318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
label_21231c:
    // 0x21231c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x21231cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_212320:
    // 0x212320: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x212320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_212324:
    // 0x212324: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x212324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_212328:
    // 0x212328: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x212328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
label_21232c:
    // 0x21232c: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x21232cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
label_212330:
    // 0x212330: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x212330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_212334:
    // 0x212334: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x212334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_212338:
    // 0x212338: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x212338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21233c:
    // 0x21233c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21233cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_212340:
    // 0x212340: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x212340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_212344:
    // 0x212344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_212348:
    // 0x212348: 0x3e00008  jr          $ra
label_21234c:
    if (ctx->pc == 0x21234Cu) {
        ctx->pc = 0x21234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212348u;
        // 0x21234c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212350u;
        goto label_fallthrough_0x212348;
    }
    ctx->pc = 0x212348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212348u;
        // 0x21234c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x212348:
    ctx->pc = 0x212350u;
}
