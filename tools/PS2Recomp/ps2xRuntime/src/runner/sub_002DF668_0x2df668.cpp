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

// Function: sub_002DF668
// Address: 0x2df668 - 0x2df6c8
void sub_002DF668_0x2df668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF668_0x2df668");
#endif

    switch (ctx->pc) {
        case 0x2df6a0u: goto label_2df6a0;
        default: break;
    }

    ctx->pc = 0x2df668u;

    // 0x2df668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df66c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2df66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2df670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df674: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2df674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df678: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2df678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2df67c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2DF67Cu;
    {
        const bool branch_taken_0x2df67c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF67Cu;
        // 0x2df680: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df67c) {
            ctx->pc = 0x2DF6B8u;
            goto label_2df6b8;
        }
    }
    ctx->pc = 0x2DF684u;
    // 0x2df684: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2df684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2df688: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2df688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2df68c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DF68Cu;
    {
        const bool branch_taken_0x2df68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF68Cu;
        // 0x2df690: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df68c) {
            ctx->pc = 0x2DF6B8u;
            goto label_2df6b8;
        }
    }
    ctx->pc = 0x2DF694u;
    // 0x2df694: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2df694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2df698: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2DF698u;
    SET_GPR_U32(ctx, 31, 0x2DF6A0u);
    ctx->pc = 0x2DF69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF698u;
    // 0x2df69c: 0x24848090  addiu       $a0, $a0, -0x7F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2DF698u, 0x2DF6A0u)) {
        return;
    }
    ctx->pc = 0x2DF6A0u;
label_2df6a0:
    // 0x2df6a0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2df6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2df6a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2df6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2df6a8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2df6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2df6ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2df6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2df6b0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2df6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2df6b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2df6b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df6b8:
    // 0x2df6b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df6bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2df6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF6C0u;
        // 0x2df6c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF6C8u;
}
