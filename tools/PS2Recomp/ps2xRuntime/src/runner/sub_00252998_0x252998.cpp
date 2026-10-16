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

// Function: sub_00252998
// Address: 0x252998 - 0x252a28
void sub_00252998_0x252998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252998_0x252998");
#endif

    switch (ctx->pc) {
        case 0x2529d0u: goto label_2529d0;
        case 0x2529d8u: goto label_2529d8;
        case 0x2529f0u: goto label_2529f0;
        default: break;
    }

    ctx->pc = 0x252998u;

    // 0x252998: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x252998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x25299c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25299cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2529a0: 0x8c43561c  lw          $v1, 0x561C($v0)
    ctx->pc = 0x2529a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x73561Cu));
    // 0x2529a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2529a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2529a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2529a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2529ac: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x2529acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2529b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2529b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2529b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2529b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2529b8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2529b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2529bc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2529BCu;
    {
        const bool branch_taken_0x2529bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2529C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529BCu;
        // 0x2529c0: 0x8e300024  lw          $s0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529bc) {
            ctx->pc = 0x2529F4u;
            goto label_2529f4;
        }
    }
    ctx->pc = 0x2529C4u;
    // 0x2529c4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2529C4u;
    {
        const bool branch_taken_0x2529c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2529C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529C4u;
        // 0x2529c8: 0x26320024  addiu       $s2, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529c4) {
            ctx->pc = 0x2529E8u;
            goto label_2529e8;
        }
    }
    ctx->pc = 0x2529CCu;
    // 0x2529cc: 0x0  nop
    ctx->pc = 0x2529ccu;
    // NOP
label_2529d0:
    // 0x2529d0: 0xc094c6c  jal         func_2531B0
    ctx->pc = 0x2529D0u;
    SET_GPR_U32(ctx, 31, 0x2529D8u);
    ctx->pc = 0x2529D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2529D0u;
    // 0x2529d4: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2531B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2531B0u, 0x2529D0u, 0x2529D8u)) {
        return;
    }
    ctx->pc = 0x2529D8u;
label_2529d8:
    // 0x2529d8: 0x8e100058  lw          $s0, 0x58($s0)
    ctx->pc = 0x2529d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2529dc: 0x0  nop
    ctx->pc = 0x2529dcu;
    // NOP
    // 0x2529e0: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2529E0u;
    {
        const bool branch_taken_0x2529e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2529e0) {
            ctx->pc = 0x2529D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2529d0;
        }
    }
    ctx->pc = 0x2529E8u;
label_2529e8:
    // 0x2529e8: 0xc094c54  jal         func_253150
    ctx->pc = 0x2529E8u;
    SET_GPR_U32(ctx, 31, 0x2529F0u);
    ctx->pc = 0x2529ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2529E8u;
    // 0x2529ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x253150u, 0x2529E8u, 0x2529F0u)) {
        return;
    }
    ctx->pc = 0x2529F0u;
label_2529f0:
    // 0x2529f0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2529f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2529f4:
    // 0x2529f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2529f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2529f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2529f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2529fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2529fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252a00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252a04: 0x3e00008  jr          $ra
    ctx->pc = 0x252A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A04u;
        // 0x252a08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252A0Cu;
    // 0x252a0c: 0x0  nop
    ctx->pc = 0x252a0cu;
    // NOP
    // 0x252a10: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x252a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x252a14: 0x0  nop
    ctx->pc = 0x252a14u;
    // NOP
    // 0x252a18: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x252a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x252a1c: 0x0  nop
    ctx->pc = 0x252a1cu;
    // NOP
    // 0x252a20: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x252a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x252a24: 0x0  nop
    ctx->pc = 0x252a24u;
    // NOP
    ctx->pc = 0x252a28u;
}
