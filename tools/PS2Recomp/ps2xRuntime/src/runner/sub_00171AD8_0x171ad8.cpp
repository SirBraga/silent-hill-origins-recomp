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

// Function: sub_00171AD8
// Address: 0x171ad8 - 0x171b18
void sub_00171AD8_0x171ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171AD8_0x171ad8");
#endif

    switch (ctx->pc) {
        case 0x171aecu: goto label_171aec;
        default: break;
    }

    ctx->pc = 0x171ad8u;

    // 0x171ad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171adc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x171adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x171ae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171ae4: 0xc05c104  jal         func_170410
    ctx->pc = 0x171AE4u;
    SET_GPR_U32(ctx, 31, 0x171AECu);
    ctx->pc = 0x171AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171AE4u;
    // 0x171ae8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170410u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x170410u, 0x171AE4u, 0x171AECu)) {
        return;
    }
    ctx->pc = 0x171AECu;
label_171aec:
    // 0x171aec: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x171aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x171af0: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x171af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x171af4: 0x246356e0  addiu       $v1, $v1, 0x56E0
    ctx->pc = 0x171af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22240));
    // 0x171af8: 0x24845700  addiu       $a0, $a0, 0x5700
    ctx->pc = 0x171af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22272));
    // 0x171afc: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x171afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x171b00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b04: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x171b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x171b08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x171b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171b0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171b10: 0x3e00008  jr          $ra
    ctx->pc = 0x171B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171B10u;
        // 0x171b14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171B18u;
}
