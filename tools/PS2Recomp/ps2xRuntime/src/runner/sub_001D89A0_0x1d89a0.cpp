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

// Function: sub_001D89A0
// Address: 0x1d89a0 - 0x1d8a10
void sub_001D89A0_0x1d89a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D89A0_0x1d89a0");
#endif

    switch (ctx->pc) {
        case 0x1d89c8u: goto label_1d89c8;
        case 0x1d89d8u: goto label_1d89d8;
        default: break;
    }

    ctx->pc = 0x1d89a0u;

    // 0x1d89a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d89a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d89a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d89a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1d89a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d89a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d89ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d89acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d89b0: 0x245019e0  addiu       $s0, $v0, 0x19E0
    ctx->pc = 0x1d89b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6624));
    // 0x1d89b4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d89b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d89b8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1d89b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d89bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d89bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d89c0: 0x26120018  addiu       $s2, $s0, 0x18
    ctx->pc = 0x1d89c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1d89c4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1d89c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6A19E8u));
label_1d89c8:
    // 0x1d89c8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1d89c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d89cc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1d89ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d89d0: 0xc089e3e  jal         func_2278F8
    ctx->pc = 0x1D89D0u;
    SET_GPR_U32(ctx, 31, 0x1D89D8u);
    ctx->pc = 0x1D89D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89D0u;
    // 0x1d89d4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2278F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2278F8u, 0x1D89D0u, 0x1D89D8u)) {
        return;
    }
    ctx->pc = 0x1D89D8u;
label_1d89d8:
    // 0x1d89d8: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x1d89d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0));
    // 0x1d89dc: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1d89dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1d89e0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D89E0u;
    {
        const bool branch_taken_0x1d89e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d89e0) {
            ctx->pc = 0x1D89E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D89E0u;
            // 0x1d89e4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D89C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d89c8;
        }
    }
    ctx->pc = 0x1D89E8u;
    // 0x1d89e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d89e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d89ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d89f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d89f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d89f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d89f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d89f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d89f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d89fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D89FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89FCu;
        // 0x1d8a00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D89FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8A04u;
    // 0x1d8a04: 0x0  nop
    ctx->pc = 0x1d8a04u;
    // NOP
    // 0x1d8a08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d8a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d8a0c: 0x0  nop
    ctx->pc = 0x1d8a0cu;
    // NOP
    ctx->pc = 0x1d8a10u;
}
