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

// Function: sub_001FAF18
// Address: 0x1faf18 - 0x1faf68
void sub_001FAF18_0x1faf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAF18_0x1faf18");
#endif

    switch (ctx->pc) {
        case 0x1faf3cu: goto label_1faf3c;
        case 0x1faf54u: goto label_1faf54;
        default: break;
    }

    ctx->pc = 0x1faf18u;

    // 0x1faf18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1faf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1faf1c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1faf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1faf20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1faf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1faf24: 0x8c6254b0  lw          $v0, 0x54B0($v1)
    ctx->pc = 0x1faf24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7354B0u));
    // 0x1faf28: 0x247054b0  addiu       $s0, $v1, 0x54B0
    ctx->pc = 0x1faf28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21680));
    // 0x1faf2c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FAF2Cu;
    {
        const bool branch_taken_0x1faf2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF2Cu;
        // 0x1faf30: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf2c) {
            ctx->pc = 0x1FAF54u;
            goto label_1faf54;
        }
    }
    ctx->pc = 0x1FAF34u;
    // 0x1faf34: 0xc07ec0c  jal         func_1FB030
    ctx->pc = 0x1FAF34u;
    SET_GPR_U32(ctx, 31, 0x1FAF3Cu);
    ctx->pc = 0x1FB030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB030u, 0x1FAF34u, 0x1FAF3Cu)) {
        return;
    }
    ctx->pc = 0x1FAF3Cu;
label_1faf3c:
    // 0x1faf3c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1faf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1faf40: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x1faf40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x1faf44: 0x24a52ed8  addiu       $a1, $a1, 0x2ED8
    ctx->pc = 0x1faf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11992));
    // 0x1faf48: 0x24c654c0  addiu       $a2, $a2, 0x54C0
    ctx->pc = 0x1faf48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21696));
    // 0x1faf4c: 0xc07eb06  jal         func_1FAC18
    ctx->pc = 0x1FAF4Cu;
    SET_GPR_U32(ctx, 31, 0x1FAF54u);
    ctx->pc = 0x1FAF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAF4Cu;
    // 0x1faf50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC18u, 0x1FAF4Cu, 0x1FAF54u)) {
        return;
    }
    ctx->pc = 0x1FAF54u;
label_1faf54:
    // 0x1faf54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1faf54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1faf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1faf5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1faf5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1faf60: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF60u;
        // 0x1faf64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAF68u;
}
