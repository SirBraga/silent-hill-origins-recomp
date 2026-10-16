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

// Function: sub_002BEC98
// Address: 0x2bec98 - 0x2bed68
void sub_002BEC98_0x2bec98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEC98_0x2bec98");
#endif

    switch (ctx->pc) {
        case 0x2becc0u: goto label_2becc0;
        default: break;
    }

    ctx->pc = 0x2bec98u;

    // 0x2bec98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bec98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bec9c: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x2bec9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
    // 0x2beca0: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x2beca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x2beca4: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x2beca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2beca8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2beca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2becac: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2BECACu;
    {
        const bool branch_taken_0x2becac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECACu;
        // 0x2becb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2becac) {
            ctx->pc = 0x2BED60u;
            goto label_2bed60;
        }
    }
    ctx->pc = 0x2BECB4u;
    // 0x2becb4: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x2becb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2becb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2becb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2becbc: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x2becbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2becc0:
    // 0x2becc0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2becc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2becc4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2becc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2becc8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2becc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2beccc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2becccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2becd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2becd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2becd4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2becd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2becd8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2becd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2becdc: 0x1031021  addu        $v0, $t0, $v1
    ctx->pc = 0x2becdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2bece0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2bece0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bece4: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x2bece4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2bece8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2bece8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2becec: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2bececu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2becf0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2becf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2becf4: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2becf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2becf8: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x2becf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2becfc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2becfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bed00: 0xc4650014  lwc1        $f5, 0x14($v1)
    ctx->pc = 0x2bed00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bed04: 0xc4660018  lwc1        $f6, 0x18($v1)
    ctx->pc = 0x2bed04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bed08: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2bed08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2bed0c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2bed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bed10: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2bed10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2bed14: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2bed14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2bed18: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2bed18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2bed1c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2bed1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bed20: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2bed20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2bed24: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2bed24u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2bed28: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x2bed28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2bed2c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2bed2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bed30: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2bed30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2bed34: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2bed34u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2bed38: 0xe4640010  swc1        $f4, 0x10($v1)
    ctx->pc = 0x2bed38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2bed3c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2bed3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bed40: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2bed40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2bed44: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2bed44u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2bed48: 0xe4650014  swc1        $f5, 0x14($v1)
    ctx->pc = 0x2bed48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2bed4c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2bed4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bed50: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2bed50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2bed54: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x2bed54u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2bed58: 0x14e4ffd9  bne         $a3, $a0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2BED58u;
    {
        const bool branch_taken_0x2bed58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x2BED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED58u;
        // 0x2bed5c: 0xe4660018  swc1        $f6, 0x18($v1) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed58) {
            ctx->pc = 0x2BECC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2becc0;
        }
    }
    ctx->pc = 0x2BED60u;
label_2bed60:
    // 0x2bed60: 0x3e00008  jr          $ra
    ctx->pc = 0x2BED60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED60u;
        // 0x2bed64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BED60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BED68u;
}
