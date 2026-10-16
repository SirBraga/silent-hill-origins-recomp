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

// Function: sub_001FB180
// Address: 0x1fb180 - 0x1fb1d0
void sub_001FB180_0x1fb180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB180_0x1fb180");
#endif

    switch (ctx->pc) {
        case 0x1fb1a4u: goto label_1fb1a4;
        case 0x1fb1bcu: goto label_1fb1bc;
        default: break;
    }

    ctx->pc = 0x1fb180u;

    // 0x1fb180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb184: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1fb184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1fb188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb18c: 0x8c6254f0  lw          $v0, 0x54F0($v1)
    ctx->pc = 0x1fb18cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7354F0u));
    // 0x1fb190: 0x247054f0  addiu       $s0, $v1, 0x54F0
    ctx->pc = 0x1fb190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21744));
    // 0x1fb194: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FB194u;
    {
        const bool branch_taken_0x1fb194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB194u;
        // 0x1fb198: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb194) {
            ctx->pc = 0x1FB1BCu;
            goto label_1fb1bc;
        }
    }
    ctx->pc = 0x1FB19Cu;
    // 0x1fb19c: 0xc07e6c2  jal         func_1F9B08
    ctx->pc = 0x1FB19Cu;
    SET_GPR_U32(ctx, 31, 0x1FB1A4u);
    ctx->pc = 0x1F9B08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9B08u, 0x1FB19Cu, 0x1FB1A4u)) {
        return;
    }
    ctx->pc = 0x1FB1A4u;
label_1fb1a4:
    // 0x1fb1a4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1fb1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1fb1a8: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x1fb1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x1fb1ac: 0x24a52f30  addiu       $a1, $a1, 0x2F30
    ctx->pc = 0x1fb1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12080));
    // 0x1fb1b0: 0x24c64148  addiu       $a2, $a2, 0x4148
    ctx->pc = 0x1fb1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16712));
    // 0x1fb1b4: 0xc07eb06  jal         func_1FAC18
    ctx->pc = 0x1FB1B4u;
    SET_GPR_U32(ctx, 31, 0x1FB1BCu);
    ctx->pc = 0x1FB1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB1B4u;
    // 0x1fb1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC18u, 0x1FB1B4u, 0x1FB1BCu)) {
        return;
    }
    ctx->pc = 0x1FB1BCu;
label_1fb1bc:
    // 0x1fb1bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fb1bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb1c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fb1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB1C8u;
        // 0x1fb1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB1D0u;
}
