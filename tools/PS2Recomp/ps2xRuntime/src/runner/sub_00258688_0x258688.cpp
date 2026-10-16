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

// Function: sub_00258688
// Address: 0x258688 - 0x2586c0
void sub_00258688_0x258688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258688_0x258688");
#endif

    switch (ctx->pc) {
        case 0x2586a8u: goto label_2586a8;
        default: break;
    }

    ctx->pc = 0x258688u;

    // 0x258688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x258688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25868c: 0x3c070004  lui         $a3, 0x4
    ctx->pc = 0x25868cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
    // 0x258690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258694: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x258694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x258698: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x258698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x25869c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25869cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2586a0: 0xc0930c4  jal         func_24C310
    ctx->pc = 0x2586A0u;
    SET_GPR_U32(ctx, 31, 0x2586A8u);
    ctx->pc = 0x2586A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2586A0u;
    // 0x2586a4: 0x34e70502  ori         $a3, $a3, 0x502 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1282);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C310u, 0x2586A0u, 0x2586A8u)) {
        return;
    }
    ctx->pc = 0x2586A8u;
label_2586a8:
    // 0x2586a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2586a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2586ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2586acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2586b0: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2586b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2586b4: 0xaf8385f0  sw          $v1, -0x7A10($gp)
    ctx->pc = 0x2586b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936048), GPR_U32(ctx, 3));
    // 0x2586b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2586B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2586BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586B8u;
        // 0x2586bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2586B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2586C0u;
}
