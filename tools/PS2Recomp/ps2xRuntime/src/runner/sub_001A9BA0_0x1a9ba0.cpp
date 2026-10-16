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

// Function: sub_001A9BA0
// Address: 0x1a9ba0 - 0x1a9c20
void sub_001A9BA0_0x1a9ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9BA0_0x1a9ba0");
#endif

    switch (ctx->pc) {
        case 0x1a9bb8u: goto label_1a9bb8;
        default: break;
    }

    ctx->pc = 0x1a9ba0u;

    // 0x1a9ba0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1a9ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a9ba4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1a9ba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ba8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1a9ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1a9bac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9bb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9BB0u;
    {
        const bool branch_taken_0x1a9bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BB0u;
        // 0x1a9bb4: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9bb0) {
            ctx->pc = 0x1A9BD4u;
            goto label_1a9bd4;
        }
    }
    ctx->pc = 0x1A9BB8u;
label_1a9bb8:
    // 0x1a9bb8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a9bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9bbc: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x1a9bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1a9bc0: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1a9bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a9bc4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a9bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a9bc8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1a9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1a9bcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a9bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a9bd0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1a9bd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1a9bd4:
    // 0x1a9bd4: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1a9bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a9bd8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A9BD8u;
    {
        const bool branch_taken_0x1a9bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BD8u;
        // 0x1a9bdc: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9bd8) {
            ctx->pc = 0x1A9C0Cu;
            goto label_1a9c0c;
        }
    }
    ctx->pc = 0x1A9BE0u;
    // 0x1a9be0: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x1a9be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9be4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1a9be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1a9be8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a9be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9bec: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1a9becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9bf0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a9bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9bf4: 0x0  nop
    ctx->pc = 0x1a9bf4u;
    // NOP
    // 0x1a9bf8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9BF8u;
    {
        const bool branch_taken_0x1a9bf8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BF8u;
        // 0x1a9bfc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9bf8) {
            ctx->pc = 0x1A9C04u;
            goto label_1a9c04;
        }
    }
    ctx->pc = 0x1A9C00u;
    // 0x1a9c00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a9c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9c04:
    // 0x1a9c04: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1A9C04u;
    {
        const bool branch_taken_0x1a9c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C04u;
        // 0x1a9c08: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c04) {
            ctx->pc = 0x1A9BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9bb8;
        }
    }
    ctx->pc = 0x1A9C0Cu;
label_1a9c0c:
    // 0x1a9c0c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a9c10: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1a9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1a9c14: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C14u;
        // 0x1a9c18: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9C1Cu;
    // 0x1a9c1c: 0x0  nop
    ctx->pc = 0x1a9c1cu;
    // NOP
    ctx->pc = 0x1a9c20u;
}
