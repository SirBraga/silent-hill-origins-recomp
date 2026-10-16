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

// Function: sub_001B23A0
// Address: 0x1b23a0 - 0x1b23f0
void sub_001B23A0_0x1b23a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B23A0_0x1b23a0");
#endif

    switch (ctx->pc) {
        case 0x1b23c4u: goto label_1b23c4;
        case 0x1b23dcu: goto label_1b23dc;
        default: break;
    }

    ctx->pc = 0x1b23a0u;

    // 0x1b23a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b23a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b23a4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1b23a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1b23a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b23a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b23ac: 0x24a58918  addiu       $a1, $a1, -0x76E8
    ctx->pc = 0x1b23acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    // 0x1b23b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b23b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b23b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b23b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b23b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23bc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1B23BCu;
    SET_GPR_U32(ctx, 31, 0x1B23C4u);
    ctx->pc = 0x1B23C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B23BCu;
    // 0x1b23c0: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1B23BCu, 0x1B23C4u)) {
        return;
    }
    ctx->pc = 0x1B23C4u;
label_1b23c4:
    // 0x1b23c4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1b23c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1b23c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b23c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23cc: 0x24a58910  addiu       $a1, $a1, -0x76F0
    ctx->pc = 0x1b23ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
    // 0x1b23d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b23d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23d4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1B23D4u;
    SET_GPR_U32(ctx, 31, 0x1B23DCu);
    ctx->pc = 0x1B23D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B23D4u;
    // 0x1b23d8: 0x24077d00  addiu       $a3, $zero, 0x7D00 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1B23D4u, 0x1B23DCu)) {
        return;
    }
    ctx->pc = 0x1B23DCu;
label_1b23dc:
    // 0x1b23dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b23dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b23e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b23e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b23e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B23E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B23E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B23E4u;
        // 0x1b23e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B23E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B23ECu;
    // 0x1b23ec: 0x0  nop
    ctx->pc = 0x1b23ecu;
    // NOP
    ctx->pc = 0x1b23f0u;
}
