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

// Function: sub_00168B08
// Address: 0x168b08 - 0x168b60
void sub_00168B08_0x168b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168B08_0x168b08");
#endif

    switch (ctx->pc) {
        case 0x168b4cu: goto label_168b4c;
        default: break;
    }

    ctx->pc = 0x168b08u;

    // 0x168b08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168b0c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x168b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x168b10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x168b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x168b14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x168b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168b1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b20: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x168b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x168b24: 0x24424110  addiu       $v0, $v0, 0x4110
    ctx->pc = 0x168b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16656));
    // 0x168b28: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x168b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x168b2c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x168b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x168b30: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x168b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x168b34: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x168b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x168b38: 0x24a58878  addiu       $a1, $a1, -0x7788
    ctx->pc = 0x168b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936696));
    // 0x168b3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x168b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x168b40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x168b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b44: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x168B44u;
    SET_GPR_U32(ctx, 31, 0x168B4Cu);
    ctx->pc = 0x168B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168B44u;
    // 0x168b48: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x168B44u, 0x168B4Cu)) {
        return;
    }
    ctx->pc = 0x168B4Cu;
label_168b4c:
    // 0x168b4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x168b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168b54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x168b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168b58: 0x3e00008  jr          $ra
    ctx->pc = 0x168B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168B58u;
        // 0x168b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168B60u;
}
