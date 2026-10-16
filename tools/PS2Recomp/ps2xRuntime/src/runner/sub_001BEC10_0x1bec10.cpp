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

// Function: sub_001BEC10
// Address: 0x1bec10 - 0x1bece8
void sub_001BEC10_0x1bec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEC10_0x1bec10");
#endif

    switch (ctx->pc) {
        case 0x1bec50u: goto label_1bec50;
        case 0x1bec78u: goto label_1bec78;
        case 0x1becdcu: goto label_1becdc;
        default: break;
    }

    ctx->pc = 0x1bec10u;

    // 0x1bec10: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1bec10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bec14: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1bec14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bec18: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x1bec18u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1bec1c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1bec1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bec20: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1bec20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bec24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bec24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bec28: 0x46036300  add.s       $f12, $f12, $f3
    ctx->pc = 0x1bec28u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
    // 0x1bec2c: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1bec2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1bec30: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1bec30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bec34: 0x0  nop
    ctx->pc = 0x1bec34u;
    // NOP
    // 0x1bec38: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEC38u;
    {
        const bool branch_taken_0x1bec38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bec38) {
            ctx->pc = 0x1BEC48u;
            goto label_1bec48;
        }
    }
    ctx->pc = 0x1BEC40u;
    // 0x1bec40: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x1bec40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1bec44: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1bec44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1bec48:
    // 0x1bec48: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEC50u;
label_1bec50:
    // 0x1bec50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bec50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bec54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1bec54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1bec58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bec58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bec5c: 0x2442d7e0  addiu       $v0, $v0, -0x2820
    ctx->pc = 0x1bec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957024));
    // 0x1bec60: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1bec60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1bec64: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1bec64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bec68: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BEC68u;
    {
        const bool branch_taken_0x1bec68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC68u;
        // 0x1bec6c: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec68) {
            ctx->pc = 0x1BECCCu;
            goto label_1beccc;
        }
    }
    ctx->pc = 0x1BEC70u;
    // 0x1bec70: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1bec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bec74: 0x0  nop
    ctx->pc = 0x1bec74u;
    // NOP
label_1bec78:
    // 0x1bec78: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BEC78u;
    {
        const bool branch_taken_0x1bec78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bec78) {
            ctx->pc = 0x1BEC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEC78u;
            // 0x1bec7c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BECC0u;
            goto label_1becc0;
        }
    }
    ctx->pc = 0x1BEC80u;
    // 0x1bec80: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1bec80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1bec84: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEC84u;
    {
        const bool branch_taken_0x1bec84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC84u;
        // 0x1bec88: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec84) {
            ctx->pc = 0x1BEC94u;
            goto label_1bec94;
        }
    }
    ctx->pc = 0x1BEC8Cu;
    // 0x1bec8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEC8Cu;
    {
        const bool branch_taken_0x1bec8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC8Cu;
        // 0x1bec90: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec8c) {
            ctx->pc = 0x1BEC98u;
            goto label_1bec98;
        }
    }
    ctx->pc = 0x1BEC94u;
label_1bec94:
    // 0x1bec94: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1bec94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1bec98:
    // 0x1bec98: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1bec98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bec9c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEC9Cu;
    {
        const bool branch_taken_0x1bec9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC9Cu;
        // 0x1beca0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec9c) {
            ctx->pc = 0x1BECACu;
            goto label_1becac;
        }
    }
    ctx->pc = 0x1BECA4u;
    // 0x1beca4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BECA4u;
    {
        const bool branch_taken_0x1beca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECA4u;
        // 0x1beca8: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beca4) {
            ctx->pc = 0x1BECB0u;
            goto label_1becb0;
        }
    }
    ctx->pc = 0x1BECACu;
label_1becac:
    // 0x1becac: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1becacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1becb0:
    // 0x1becb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1becb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1becb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1becb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1becb8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1becb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1becbc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1becbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1becc0:
    // 0x1becc0: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1BECC0u;
    {
        const bool branch_taken_0x1becc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1becc0) {
            ctx->pc = 0x1BECC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BECC0u;
            // 0x1becc4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bec78;
        }
    }
    ctx->pc = 0x1BECC8u;
    // 0x1becc8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1becc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1beccc:
    // 0x1beccc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BECCCu;
    {
        const bool branch_taken_0x1beccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECCCu;
        // 0x1becd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beccc) {
            ctx->pc = 0x1BECE0u;
            goto label_1bece0;
        }
    }
    ctx->pc = 0x1BECD4u;
    // 0x1becd4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1BECD4u;
    SET_GPR_U32(ctx, 31, 0x1BECDCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1BECD4u, 0x1BECDCu)) {
        return;
    }
    ctx->pc = 0x1BECDCu;
label_1becdc:
    // 0x1becdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1becdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bece0:
    // 0x1bece0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BECE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECE0u;
        // 0x1bece4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BECE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BECE8u;
}
