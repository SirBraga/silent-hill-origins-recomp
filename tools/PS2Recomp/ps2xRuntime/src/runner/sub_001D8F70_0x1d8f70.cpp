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

// Function: sub_001D8F70
// Address: 0x1d8f70 - 0x1d9038
void sub_001D8F70_0x1d8f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8F70_0x1d8f70");
#endif

    ctx->pc = 0x1d8f70u;

    // 0x1d8f70: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d8f74: 0x24429dc8  addiu       $v0, $v0, -0x6238
    ctx->pc = 0x1d8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942152));
    // 0x1d8f78: 0xf  sync
    ctx->pc = 0x1d8f78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1d8f7c: 0x40f  sync.p
    ctx->pc = 0x1d8f7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1d8f80: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1d8f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1d8f84: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x1d8f84u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8f88: 0xf  sync
    ctx->pc = 0x1d8f88u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1d8f8c: 0x40f  sync.p
    ctx->pc = 0x1d8f8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1d8f90: 0x9c230000  lwu         $v1, 0x0($at)
    ctx->pc = 0x1d8f90u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x1d8f94: 0xf  sync
    ctx->pc = 0x1d8f94u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1d8f98: 0x40f  sync.p
    ctx->pc = 0x1d8f98u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1d8f9c: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x1d8f9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8fa0: 0xf  sync
    ctx->pc = 0x1d8fa0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1d8fa4: 0x40f  sync.p
    ctx->pc = 0x1d8fa4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1d8fa8: 0x9c250000  lwu         $a1, 0x0($at)
    ctx->pc = 0x1d8fa8u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x1d8fac: 0xf  sync
    ctx->pc = 0x1d8facu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1d8fb0: 0x40f  sync.p
    ctx->pc = 0x1d8fb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1d8fb4: 0x0  nop
    ctx->pc = 0x1d8fb4u;
    // NOP
    // 0x1d8fb8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1d8fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8fbc: 0x5444000c  bnel        $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D8FBCu;
    {
        const bool branch_taken_0x1d8fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d8fbc) {
            ctx->pc = 0x1D8FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8FBCu;
            // 0x1d8fc0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8FF0u;
            goto label_1d8ff0;
        }
    }
    ctx->pc = 0x1D8FC4u;
    // 0x1d8fc4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1d8fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8fc8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1d8fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1d8fcc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1d8fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d8fd0: 0x215b8  dsll        $v0, $v0, 22
    ctx->pc = 0x1d8fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 22);
    // 0x1d8fd4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d8fd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d8fd8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D8FD8u;
    {
        const bool branch_taken_0x1d8fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8fd8) {
            ctx->pc = 0x1D8FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8FD8u;
            // 0x1d8fdc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8FE0u;
            goto label_1d8fe0;
        }
    }
    ctx->pc = 0x1D8FE0u;
label_1d8fe0:
    // 0x1d8fe0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d8fe0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d8fe4: 0x1812  mflo        $v1
    ctx->pc = 0x1d8fe4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d8fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FE8u;
        // 0x1d8fec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8FF0u;
label_1d8ff0:
    // 0x1d8ff0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1d8ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d8ff4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1d8ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1d8ff8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D8FF8u;
    {
        const bool branch_taken_0x1d8ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ff8) {
            ctx->pc = 0x1D8FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8FF8u;
            // 0x1d8ffc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9000u;
            goto label_1d9000;
        }
    }
    ctx->pc = 0x1D9000u;
label_1d9000:
    // 0x1d9000: 0x215b8  dsll        $v0, $v0, 22
    ctx->pc = 0x1d9000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 22);
    // 0x1d9004: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d9004u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d9008: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d9008u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d900c: 0x1812  mflo        $v1
    ctx->pc = 0x1d900cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d9010: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9010u;
        // 0x1d9014: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9018u;
    // 0x1d9018: 0x46006806  mov.s       $f0, $f13
    ctx->pc = 0x1d9018u;
    ctx->f[0] = FPU_MOV_S(ctx->f[13]);
    // 0x1d901c: 0x0  nop
    ctx->pc = 0x1d901cu;
    // NOP
    // 0x1d9020: 0x46006806  mov.s       $f0, $f13
    ctx->pc = 0x1d9020u;
    ctx->f[0] = FPU_MOV_S(ctx->f[13]);
    // 0x1d9024: 0x0  nop
    ctx->pc = 0x1d9024u;
    // NOP
    // 0x1d9028: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1d9028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d902c: 0x0  nop
    ctx->pc = 0x1d902cu;
    // NOP
    // 0x1d9030: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d9030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d9034: 0x0  nop
    ctx->pc = 0x1d9034u;
    // NOP
    ctx->pc = 0x1d9038u;
}
