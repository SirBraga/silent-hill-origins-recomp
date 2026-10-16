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

// Function: sub_001B5270
// Address: 0x1b5270 - 0x1b5310
void sub_001B5270_0x1b5270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5270_0x1b5270");
#endif

    switch (ctx->pc) {
        case 0x1b5270u: goto label_1b5270;
        case 0x1b5274u: goto label_1b5274;
        case 0x1b5278u: goto label_1b5278;
        case 0x1b527cu: goto label_1b527c;
        case 0x1b5280u: goto label_1b5280;
        case 0x1b5284u: goto label_1b5284;
        case 0x1b5288u: goto label_1b5288;
        case 0x1b528cu: goto label_1b528c;
        case 0x1b5290u: goto label_1b5290;
        case 0x1b5294u: goto label_1b5294;
        case 0x1b5298u: goto label_1b5298;
        case 0x1b529cu: goto label_1b529c;
        case 0x1b52a0u: goto label_1b52a0;
        case 0x1b52a4u: goto label_1b52a4;
        case 0x1b52a8u: goto label_1b52a8;
        case 0x1b52acu: goto label_1b52ac;
        case 0x1b52b0u: goto label_1b52b0;
        case 0x1b52b4u: goto label_1b52b4;
        case 0x1b52b8u: goto label_1b52b8;
        case 0x1b52bcu: goto label_1b52bc;
        case 0x1b52c0u: goto label_1b52c0;
        case 0x1b52c4u: goto label_1b52c4;
        case 0x1b52c8u: goto label_1b52c8;
        case 0x1b52ccu: goto label_1b52cc;
        case 0x1b52d0u: goto label_1b52d0;
        case 0x1b52d4u: goto label_1b52d4;
        case 0x1b52d8u: goto label_1b52d8;
        case 0x1b52dcu: goto label_1b52dc;
        case 0x1b52e0u: goto label_1b52e0;
        case 0x1b52e4u: goto label_1b52e4;
        case 0x1b52e8u: goto label_1b52e8;
        case 0x1b52ecu: goto label_1b52ec;
        case 0x1b52f0u: goto label_1b52f0;
        case 0x1b52f4u: goto label_1b52f4;
        case 0x1b52f8u: goto label_1b52f8;
        case 0x1b52fcu: goto label_1b52fc;
        case 0x1b5300u: goto label_1b5300;
        case 0x1b5304u: goto label_1b5304;
        case 0x1b5308u: goto label_1b5308;
        case 0x1b530cu: goto label_1b530c;
        default: break;
    }

    ctx->pc = 0x1b5270u;

label_1b5270:
    // 0x1b5270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b5274:
    // 0x1b5274: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b5274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b5278:
    // 0x1b5278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b5278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b527c:
    // 0x1b527c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b527cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b5280:
    // 0x1b5280: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b5280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5284:
    // 0x1b5284: 0x8e240264  lw          $a0, 0x264($s1)
    ctx->pc = 0x1b5284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1b5288:
    // 0x1b5288: 0xc05f97c  jal         func_17E5F0
label_1b528c:
    if (ctx->pc == 0x1B528Cu) {
        ctx->pc = 0x1B528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5288u;
        // 0x1b528c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5290u;
        goto label_1b5290;
    }
    ctx->pc = 0x1B5288u;
    SET_GPR_U32(ctx, 31, 0x1B5290u);
    ctx->pc = 0x1B528Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5288u;
    // 0x1b528c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E5F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E5F0u, 0x1B5288u, 0x1B5290u)) {
        return;
    }
    ctx->pc = 0x1B5290u;
label_1b5290:
    // 0x1b5290: 0x8e230258  lw          $v1, 0x258($s1)
    ctx->pc = 0x1b5290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b5294:
    // 0x1b5294: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b5294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5298:
    // 0x1b5298: 0x84640120  lh          $a0, 0x120($v1)
    ctx->pc = 0x1b5298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 288)));
label_1b529c:
    // 0x1b529c: 0x8c620124  lw          $v0, 0x124($v1)
    ctx->pc = 0x1b529cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
label_1b52a0:
    // 0x1b52a0: 0x40f809  jalr        $v0
label_1b52a4:
    if (ctx->pc == 0x1B52A4u) {
        ctx->pc = 0x1B52A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52A0u;
        // 0x1b52a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B52A8u;
        goto label_1b52a8;
    }
    ctx->pc = 0x1B52A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B52A8u);
        ctx->pc = 0x1B52A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52A0u;
        // 0x1b52a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B52A0u, 0x1B52A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B52A8u;
label_1b52a8:
    // 0x1b52a8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_1b52ac:
    if (ctx->pc == 0x1B52ACu) {
        ctx->pc = 0x1B52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52A8u;
        // 0x1b52ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B52B0u;
        goto label_1b52b0;
    }
    ctx->pc = 0x1B52A8u;
    {
        const bool branch_taken_0x1b52a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52A8u;
        // 0x1b52ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b52a8) {
            ctx->pc = 0x1B52E8u;
            goto label_1b52e8;
        }
    }
    ctx->pc = 0x1B52B0u;
label_1b52b0:
    // 0x1b52b0: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1b52b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b52b4:
    // 0x1b52b4: 0x84440118  lh          $a0, 0x118($v0)
    ctx->pc = 0x1b52b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
label_1b52b8:
    // 0x1b52b8: 0x8c43011c  lw          $v1, 0x11C($v0)
    ctx->pc = 0x1b52b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
label_1b52bc:
    // 0x1b52bc: 0x60f809  jalr        $v1
label_1b52c0:
    if (ctx->pc == 0x1B52C0u) {
        ctx->pc = 0x1B52C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52BCu;
        // 0x1b52c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B52C4u;
        goto label_1b52c4;
    }
    ctx->pc = 0x1B52BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B52C4u);
        ctx->pc = 0x1B52C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52BCu;
        // 0x1b52c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B52BCu, 0x1B52C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B52C4u;
label_1b52c4:
    // 0x1b52c4: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1b52c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1b52c8:
    // 0x1b52c8: 0x84440110  lh          $a0, 0x110($v0)
    ctx->pc = 0x1b52c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
label_1b52cc:
    // 0x1b52cc: 0x8c430114  lw          $v1, 0x114($v0)
    ctx->pc = 0x1b52ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
label_1b52d0:
    // 0x1b52d0: 0x60f809  jalr        $v1
label_1b52d4:
    if (ctx->pc == 0x1B52D4u) {
        ctx->pc = 0x1B52D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52D0u;
        // 0x1b52d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B52D8u;
        goto label_1b52d8;
    }
    ctx->pc = 0x1B52D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B52D8u);
        ctx->pc = 0x1B52D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52D0u;
        // 0x1b52d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B52D0u, 0x1B52D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B52D8u;
label_1b52d8:
    // 0x1b52d8: 0xc06d4c4  jal         func_1B5310
label_1b52dc:
    if (ctx->pc == 0x1B52DCu) {
        ctx->pc = 0x1B52DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52D8u;
        // 0x1b52dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B52E0u;
        goto label_1b52e0;
    }
    ctx->pc = 0x1B52D8u;
    SET_GPR_U32(ctx, 31, 0x1B52E0u);
    ctx->pc = 0x1B52DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B52D8u;
    // 0x1b52dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5310u, 0x1B52D8u, 0x1B52E0u)) {
        return;
    }
    ctx->pc = 0x1B52E0u;
label_1b52e0:
    // 0x1b52e0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b52e4:
    if (ctx->pc == 0x1B52E4u) {
        ctx->pc = 0x1B52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52E0u;
        // 0x1b52e4: 0xae200268  sw          $zero, 0x268($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B52E8u;
        goto label_1b52e8;
    }
    ctx->pc = 0x1B52E0u;
    {
        const bool branch_taken_0x1b52e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52E0u;
        // 0x1b52e4: 0xae200268  sw          $zero, 0x268($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b52e0) {
            ctx->pc = 0x1B52FCu;
            goto label_1b52fc;
        }
    }
    ctx->pc = 0x1B52E8u;
label_1b52e8:
    // 0x1b52e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b52e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b52ec:
    // 0x1b52ec: 0xc06d4f4  jal         func_1B53D0
label_1b52f0:
    if (ctx->pc == 0x1B52F0u) {
        ctx->pc = 0x1B52F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52ECu;
        // 0x1b52f0: 0xae220268  sw          $v0, 0x268($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B52F4u;
        goto label_1b52f4;
    }
    ctx->pc = 0x1B52ECu;
    SET_GPR_U32(ctx, 31, 0x1B52F4u);
    ctx->pc = 0x1B52F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B52ECu;
    // 0x1b52f0: 0xae220268  sw          $v0, 0x268($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B53D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B53D0u, 0x1B52ECu, 0x1B52F4u)) {
        return;
    }
    ctx->pc = 0x1B52F4u;
label_1b52f4:
    // 0x1b52f4: 0xc06e1f8  jal         func_1B87E0
label_1b52f8:
    if (ctx->pc == 0x1B52F8u) {
        ctx->pc = 0x1B52F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52F4u;
        // 0x1b52f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B52FCu;
        goto label_1b52fc;
    }
    ctx->pc = 0x1B52F4u;
    SET_GPR_U32(ctx, 31, 0x1B52FCu);
    ctx->pc = 0x1B52F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B52F4u;
    // 0x1b52f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B87E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B87E0u, 0x1B52F4u, 0x1B52FCu)) {
        return;
    }
    ctx->pc = 0x1B52FCu;
label_1b52fc:
    // 0x1b52fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b52fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5300:
    // 0x1b5300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b5300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5304:
    // 0x1b5304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5308:
    // 0x1b5308: 0x3e00008  jr          $ra
label_1b530c:
    if (ctx->pc == 0x1B530Cu) {
        ctx->pc = 0x1B530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5308u;
        // 0x1b530c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5310u;
        goto label_fallthrough_0x1b5308;
    }
    ctx->pc = 0x1B5308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5308u;
        // 0x1b530c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b5308:
    ctx->pc = 0x1B5310u;
}
