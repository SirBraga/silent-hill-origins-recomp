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

// Function: sub_001C8328
// Address: 0x1c8328 - 0x1c83e0
void sub_001C8328_0x1c8328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8328_0x1c8328");
#endif

    switch (ctx->pc) {
        case 0x1c8344u: goto label_1c8344;
        case 0x1c8358u: goto label_1c8358;
        case 0x1c8390u: goto label_1c8390;
        case 0x1c83c8u: goto label_1c83c8;
        default: break;
    }

    ctx->pc = 0x1c8328u;

    // 0x1c8328: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c8328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c832c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c832cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c8330: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c8330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c8334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c833c: 0xc06bcae  jal         func_1AF2B8
    ctx->pc = 0x1C833Cu;
    SET_GPR_U32(ctx, 31, 0x1C8344u);
    ctx->pc = 0x1C8340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C833Cu;
    // 0x1c8340: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF2B8u, 0x1C833Cu, 0x1C8344u)) {
        return;
    }
    ctx->pc = 0x1C8344u;
label_1c8344:
    // 0x1c8344: 0x8e04028c  lw          $a0, 0x28C($s0)
    ctx->pc = 0x1c8344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x1c8348: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1C8348u;
    {
        const bool branch_taken_0x1c8348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8348) {
            ctx->pc = 0x1C834Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8348u;
            // 0x1c834c: 0x8e040294  lw          $a0, 0x294($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8380u;
            goto label_1c8380;
        }
    }
    ctx->pc = 0x1C8350u;
    // 0x1c8350: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1C8350u;
    SET_GPR_U32(ctx, 31, 0x1C8358u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1C8350u, 0x1C8358u)) {
        return;
    }
    ctx->pc = 0x1C8358u;
label_1c8358:
    // 0x1c8358: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c8358u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c835c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C835Cu;
    {
        const bool branch_taken_0x1c835c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C835Cu;
        // 0x1c8360: 0xae030290  sw          $v1, 0x290($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c835c) {
            ctx->pc = 0x1C837Cu;
            goto label_1c837c;
        }
    }
    ctx->pc = 0x1C8364u;
    // 0x1c8364: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8364u;
    {
        const bool branch_taken_0x1c8364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8364u;
        // 0x1c8368: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8364) {
            ctx->pc = 0x1C8374u;
            goto label_1c8374;
        }
    }
    ctx->pc = 0x1C836Cu;
    // 0x1c836c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C836Cu;
    {
        const bool branch_taken_0x1c836c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C836Cu;
        // 0x1c8370: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c836c) {
            ctx->pc = 0x1C8378u;
            goto label_1c8378;
        }
    }
    ctx->pc = 0x1C8374u;
label_1c8374:
    // 0x1c8374: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c8374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c8378:
    // 0x1c8378: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1c8378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1c837c:
    // 0x1c837c: 0x8e040294  lw          $a0, 0x294($s0)
    ctx->pc = 0x1c837cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
label_1c8380:
    // 0x1c8380: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1C8380u;
    {
        const bool branch_taken_0x1c8380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8380) {
            ctx->pc = 0x1C8384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8380u;
            // 0x1c8384: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C83B8u;
            goto label_1c83b8;
        }
    }
    ctx->pc = 0x1C8388u;
    // 0x1c8388: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1C8388u;
    SET_GPR_U32(ctx, 31, 0x1C8390u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1C8388u, 0x1C8390u)) {
        return;
    }
    ctx->pc = 0x1C8390u;
label_1c8390:
    // 0x1c8390: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c8390u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8394: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8394u;
    {
        const bool branch_taken_0x1c8394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8394u;
        // 0x1c8398: 0xae030298  sw          $v1, 0x298($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8394) {
            ctx->pc = 0x1C83B4u;
            goto label_1c83b4;
        }
    }
    ctx->pc = 0x1C839Cu;
    // 0x1c839c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C839Cu;
    {
        const bool branch_taken_0x1c839c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C839Cu;
        // 0x1c83a0: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c839c) {
            ctx->pc = 0x1C83ACu;
            goto label_1c83ac;
        }
    }
    ctx->pc = 0x1C83A4u;
    // 0x1c83a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C83A4u;
    {
        const bool branch_taken_0x1c83a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83A4u;
        // 0x1c83a8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83a4) {
            ctx->pc = 0x1C83B0u;
            goto label_1c83b0;
        }
    }
    ctx->pc = 0x1C83ACu;
label_1c83ac:
    // 0x1c83ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c83acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c83b0:
    // 0x1c83b0: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1c83b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1c83b4:
    // 0x1c83b4: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1c83b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1c83b8:
    // 0x1c83b8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C83B8u;
    {
        const bool branch_taken_0x1c83b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83B8u;
        // 0x1c83bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83b8) {
            ctx->pc = 0x1C83CCu;
            goto label_1c83cc;
        }
    }
    ctx->pc = 0x1C83C0u;
    // 0x1c83c0: 0xc06db64  jal         func_1B6D90
    ctx->pc = 0x1C83C0u;
    SET_GPR_U32(ctx, 31, 0x1C83C8u);
    ctx->pc = 0x1C83C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83C0u;
    // 0x1c83c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D90u, 0x1C83C0u, 0x1C83C8u)) {
        return;
    }
    ctx->pc = 0x1C83C8u;
label_1c83c8:
    // 0x1c83c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c83c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c83cc:
    // 0x1c83cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c83ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c83d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c83d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c83d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C83D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C83D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83D4u;
        // 0x1c83d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C83D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C83DCu;
    // 0x1c83dc: 0x0  nop
    ctx->pc = 0x1c83dcu;
    // NOP
    ctx->pc = 0x1c83e0u;
}
