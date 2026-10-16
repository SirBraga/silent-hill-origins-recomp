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

// Function: sub_002A39E8
// Address: 0x2a39e8 - 0x2a3a40
void sub_002A39E8_0x2a39e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A39E8_0x2a39e8");
#endif

    switch (ctx->pc) {
        case 0x2a3a1cu: goto label_2a3a1c;
        case 0x2a3a28u: goto label_2a3a28;
        default: break;
    }

    ctx->pc = 0x2a39e8u;

    // 0x2a39e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a39e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a39ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2a39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2a39f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a39f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a39f4: 0x2442e1e8  addiu       $v0, $v0, -0x1E18
    ctx->pc = 0x2a39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959592));
    // 0x2a39f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a39f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a39fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a39fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3a00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a3a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a3a04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3a08: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x2a3a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x2a3a0c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2a3a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a3a10: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2a3a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2a3a14: 0xc0a8ba6  jal         func_2A2E98
    ctx->pc = 0x2A3A14u;
    SET_GPR_U32(ctx, 31, 0x2A3A1Cu);
    ctx->pc = 0x2A3A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3A14u;
    // 0x2a3a18: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A2E98u, 0x2A3A14u, 0x2A3A1Cu)) {
        return;
    }
    ctx->pc = 0x2A3A1Cu;
label_2a3a1c:
    // 0x2a3a1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3a20: 0xc0a7c56  jal         func_29F158
    ctx->pc = 0x2A3A20u;
    SET_GPR_U32(ctx, 31, 0x2A3A28u);
    ctx->pc = 0x2A3A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3A20u;
    // 0x2a3a24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F158u, 0x2A3A20u, 0x2A3A28u)) {
        return;
    }
    ctx->pc = 0x2A3A28u;
label_2a3a28:
    // 0x2a3a28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a3a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3a2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a3a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3a30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3a34: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A34u;
        // 0x2a3a38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3A3Cu;
    // 0x2a3a3c: 0x0  nop
    ctx->pc = 0x2a3a3cu;
    // NOP
    ctx->pc = 0x2a3a40u;
}
