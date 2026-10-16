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

// Function: sub_001FB0E8
// Address: 0x1fb0e8 - 0x1fb138
void sub_001FB0E8_0x1fb0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB0E8_0x1fb0e8");
#endif

    switch (ctx->pc) {
        case 0x1fb10cu: goto label_1fb10c;
        case 0x1fb124u: goto label_1fb124;
        default: break;
    }

    ctx->pc = 0x1fb0e8u;

    // 0x1fb0e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb0ec: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1fb0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1fb0f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb0f4: 0x8c6254e0  lw          $v0, 0x54E0($v1)
    ctx->pc = 0x1fb0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7354E0u));
    // 0x1fb0f8: 0x247054e0  addiu       $s0, $v1, 0x54E0
    ctx->pc = 0x1fb0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21728));
    // 0x1fb0fc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FB0FCu;
    {
        const bool branch_taken_0x1fb0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0FCu;
        // 0x1fb100: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb0fc) {
            ctx->pc = 0x1FB124u;
            goto label_1fb124;
        }
    }
    ctx->pc = 0x1FB104u;
    // 0x1fb104: 0xc07e6c2  jal         func_1F9B08
    ctx->pc = 0x1FB104u;
    SET_GPR_U32(ctx, 31, 0x1FB10Cu);
    ctx->pc = 0x1F9B08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9B08u, 0x1FB104u, 0x1FB10Cu)) {
        return;
    }
    ctx->pc = 0x1FB10Cu;
label_1fb10c:
    // 0x1fb10c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1fb10cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1fb110: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x1fb110u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x1fb114: 0x24a52f20  addiu       $a1, $a1, 0x2F20
    ctx->pc = 0x1fb114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12064));
    // 0x1fb118: 0x24c64148  addiu       $a2, $a2, 0x4148
    ctx->pc = 0x1fb118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16712));
    // 0x1fb11c: 0xc07eb06  jal         func_1FAC18
    ctx->pc = 0x1FB11Cu;
    SET_GPR_U32(ctx, 31, 0x1FB124u);
    ctx->pc = 0x1FB120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB11Cu;
    // 0x1fb120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC18u, 0x1FB11Cu, 0x1FB124u)) {
        return;
    }
    ctx->pc = 0x1FB124u;
label_1fb124:
    // 0x1fb124: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fb124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fb128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb12c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb12cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb130: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB130u;
        // 0x1fb134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB138u;
}
