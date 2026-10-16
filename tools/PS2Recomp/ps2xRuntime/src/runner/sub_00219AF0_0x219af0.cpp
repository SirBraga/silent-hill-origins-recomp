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

// Function: sub_00219AF0
// Address: 0x219af0 - 0x219b28
void sub_00219AF0_0x219af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219AF0_0x219af0");
#endif

    switch (ctx->pc) {
        case 0x219b14u: goto label_219b14;
        default: break;
    }

    ctx->pc = 0x219af0u;

    // 0x219af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219af4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x219af4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x219af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x219afc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x219afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b00: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x219b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
    // 0x219b04: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x219b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x219b08: 0x24459ac0  addiu       $a1, $v0, -0x6540
    ctx->pc = 0x219b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941376));
    // 0x219b0c: 0xc0972f2  jal         func_25CBC8
    ctx->pc = 0x219B0Cu;
    SET_GPR_U32(ctx, 31, 0x219B14u);
    ctx->pc = 0x219B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B0Cu;
    // 0x219b10: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25CBC8u, 0x219B0Cu, 0x219B14u)) {
        return;
    }
    ctx->pc = 0x219B14u;
label_219b14:
    // 0x219b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x219b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219b18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219b18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x219B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B1Cu;
        // 0x219b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219B24u;
    // 0x219b24: 0x0  nop
    ctx->pc = 0x219b24u;
    // NOP
    ctx->pc = 0x219b28u;
}
