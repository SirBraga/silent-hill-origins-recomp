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

// Function: sub_00153998
// Address: 0x153998 - 0x153a00
void sub_00153998_0x153998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153998_0x153998");
#endif

    switch (ctx->pc) {
        case 0x1539c8u: goto label_1539c8;
        case 0x1539e0u: goto label_1539e0;
        default: break;
    }

    ctx->pc = 0x153998u;

    // 0x153998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15399c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15399cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1539a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1539a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1539a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1539a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1539a8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1539a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1539ac: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1539ACu;
    {
        const bool branch_taken_0x1539ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1539ac) {
            ctx->pc = 0x1539B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1539ACu;
            // 0x1539b0: 0xae000078  sw          $zero, 0x78($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1539ECu;
            goto label_1539ec;
        }
    }
    ctx->pc = 0x1539B4u;
    // 0x1539b4: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1539b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1539b8: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1539B8u;
    {
        const bool branch_taken_0x1539b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1539b8) {
            ctx->pc = 0x1539BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1539B8u;
            // 0x1539bc: 0xae000078  sw          $zero, 0x78($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1539ECu;
            goto label_1539ec;
        }
    }
    ctx->pc = 0x1539C0u;
    // 0x1539c0: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1539C0u;
    SET_GPR_U32(ctx, 31, 0x1539C8u);
    ctx->pc = 0x1539C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1539C0u;
    // 0x1539c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1539C0u, 0x1539C8u)) {
        return;
    }
    ctx->pc = 0x1539C8u;
label_1539c8:
    // 0x1539c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1539C8u;
    {
        const bool branch_taken_0x1539c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1539CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1539C8u;
        // 0x1539cc: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1539c8) {
            ctx->pc = 0x1539E8u;
            goto label_1539e8;
        }
    }
    ctx->pc = 0x1539D0u;
    // 0x1539d0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1539d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1539d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1539d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1539d8: 0xc081baa  jal         func_206EA8
    ctx->pc = 0x1539D8u;
    SET_GPR_U32(ctx, 31, 0x1539E0u);
    ctx->pc = 0x1539DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1539D8u;
    // 0x1539dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206EA8u, 0x1539D8u, 0x1539E0u)) {
        return;
    }
    ctx->pc = 0x1539E0u;
label_1539e0:
    // 0x1539e0: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1539e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1539e4: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1539e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_1539e8:
    // 0x1539e8: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x1539e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_1539ec:
    // 0x1539ec: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x1539ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x1539f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1539f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1539f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1539f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1539f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1539F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1539FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1539F8u;
        // 0x1539fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1539F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153A00u;
}
