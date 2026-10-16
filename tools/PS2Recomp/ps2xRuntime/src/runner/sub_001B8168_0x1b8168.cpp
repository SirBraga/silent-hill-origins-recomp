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

// Function: sub_001B8168
// Address: 0x1b8168 - 0x1b8218
void sub_001B8168_0x1b8168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8168_0x1b8168");
#endif

    switch (ctx->pc) {
        case 0x1b8198u: goto label_1b8198;
        case 0x1b81d8u: goto label_1b81d8;
        case 0x1b8204u: goto label_1b8204;
        default: break;
    }

    ctx->pc = 0x1b8168u;

    // 0x1b8168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b816c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b816cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b8170: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b8170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b8174: 0x2442cd58  addiu       $v0, $v0, -0x32A8
    ctx->pc = 0x1b8174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954328));
    // 0x1b8178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b817c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b817cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8184: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1b8184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1b8188: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b8188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b818c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B818Cu;
    {
        const bool branch_taken_0x1b818c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B818Cu;
        // 0x1b8190: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b818c) {
            ctx->pc = 0x1B81F0u;
            goto label_1b81f0;
        }
    }
    ctx->pc = 0x1B8194u;
    // 0x1b8194: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b8194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b8198:
    // 0x1b8198: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B8198u;
    {
        const bool branch_taken_0x1b8198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8198) {
            ctx->pc = 0x1B819Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8198u;
            // 0x1b819c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B81E8u;
            goto label_1b81e8;
        }
    }
    ctx->pc = 0x1B81A0u;
    // 0x1b81a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b81a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b81a4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B81A4u;
    {
        const bool branch_taken_0x1b81a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B81A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B81A4u;
        // 0x1b81a8: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b81a4) {
            ctx->pc = 0x1B81B4u;
            goto label_1b81b4;
        }
    }
    ctx->pc = 0x1B81ACu;
    // 0x1b81ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B81ACu;
    {
        const bool branch_taken_0x1b81ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B81B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B81ACu;
        // 0x1b81b0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b81ac) {
            ctx->pc = 0x1B81B8u;
            goto label_1b81b8;
        }
    }
    ctx->pc = 0x1B81B4u;
label_1b81b4:
    // 0x1b81b4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b81b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1b81b8:
    // 0x1b81b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b81b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b81bc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B81BCu;
    {
        const bool branch_taken_0x1b81bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B81C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B81BCu;
        // 0x1b81c0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b81bc) {
            ctx->pc = 0x1B81CCu;
            goto label_1b81cc;
        }
    }
    ctx->pc = 0x1B81C4u;
    // 0x1b81c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B81C4u;
    {
        const bool branch_taken_0x1b81c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B81C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B81C4u;
        // 0x1b81c8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b81c4) {
            ctx->pc = 0x1B81D0u;
            goto label_1b81d0;
        }
    }
    ctx->pc = 0x1B81CCu;
label_1b81cc:
    // 0x1b81cc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b81ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1b81d0:
    // 0x1b81d0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B81D0u;
    SET_GPR_U32(ctx, 31, 0x1B81D8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B81D0u, 0x1B81D8u)) {
        return;
    }
    ctx->pc = 0x1B81D8u;
label_1b81d8:
    // 0x1b81d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b81d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b81dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b81dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b81e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b81e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b81e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b81e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b81e8:
    // 0x1b81e8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1B81E8u;
    {
        const bool branch_taken_0x1b81e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b81e8) {
            ctx->pc = 0x1B81ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B81E8u;
            // 0x1b81ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8198;
        }
    }
    ctx->pc = 0x1B81F0u;
label_1b81f0:
    // 0x1b81f0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1b81f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1b81f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B81F4u;
    {
        const bool branch_taken_0x1b81f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b81f4) {
            ctx->pc = 0x1B81F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B81F4u;
            // 0x1b81f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8208u;
            goto label_1b8208;
        }
    }
    ctx->pc = 0x1B81FCu;
    // 0x1b81fc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B81FCu;
    SET_GPR_U32(ctx, 31, 0x1B8204u);
    ctx->pc = 0x1B8200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B81FCu;
    // 0x1b8200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B81FCu, 0x1B8204u)) {
        return;
    }
    ctx->pc = 0x1B8204u;
label_1b8204:
    // 0x1b8204: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b8204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8208:
    // 0x1b8208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b820c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b820cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8210: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8210u;
        // 0x1b8214: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8218u;
}
