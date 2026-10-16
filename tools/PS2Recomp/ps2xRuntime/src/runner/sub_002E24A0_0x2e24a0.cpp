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

// Function: sub_002E24A0
// Address: 0x2e24a0 - 0x2e2508
void sub_002E24A0_0x2e24a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E24A0_0x2e24a0");
#endif

    switch (ctx->pc) {
        case 0x2e24f4u: goto label_2e24f4;
        default: break;
    }

    ctx->pc = 0x2e24a0u;

    // 0x2e24a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e24a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e24a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e24a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e24a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e24a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e24ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e24acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e24b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E24B0u;
    {
        const bool branch_taken_0x2e24b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E24B0u;
        // 0x2e24b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e24b0) {
            ctx->pc = 0x2E24C8u;
            goto label_2e24c8;
        }
    }
    ctx->pc = 0x2E24B8u;
    // 0x2e24b8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2e24b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2e24bc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e24bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2e24c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E24C0u;
    {
        const bool branch_taken_0x2e24c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E24C0u;
        // 0x2e24c4: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e24c0) {
            ctx->pc = 0x2E24DCu;
            goto label_2e24dc;
        }
    }
    ctx->pc = 0x2E24C8u;
label_2e24c8:
    // 0x2e24c8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x2e24c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2e24cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e24d0: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x2e24d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x2e24d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e24d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e24d8: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x2e24d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
label_2e24dc:
    // 0x2e24dc: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2e24dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2e24e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E24E0u;
    {
        const bool branch_taken_0x2e24e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E24E0u;
        // 0x2e24e4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e24e0) {
            ctx->pc = 0x2E24F4u;
            goto label_2e24f4;
        }
    }
    ctx->pc = 0x2E24E8u;
    // 0x2e24e8: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x2e24e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e24ec: 0xc0b6710  jal         func_2D9C40
    ctx->pc = 0x2E24ECu;
    SET_GPR_U32(ctx, 31, 0x2E24F4u);
    ctx->pc = 0x2E24F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E24ECu;
    // 0x2e24f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9C40u, 0x2E24ECu, 0x2E24F4u)) {
        return;
    }
    ctx->pc = 0x2E24F4u;
label_2e24f4:
    // 0x2e24f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e24f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e24f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e24fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e24fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2500: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2500u;
        // 0x2e2504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2508u;
}
