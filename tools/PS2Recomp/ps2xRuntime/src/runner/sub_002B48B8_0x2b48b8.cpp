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

// Function: sub_002B48B8
// Address: 0x2b48b8 - 0x2b49a8
void sub_002B48B8_0x2b48b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B48B8_0x2b48b8");
#endif

    ctx->pc = 0x2b48b8u;

    // 0x2b48b8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2b48b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b48bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2b48bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b48c0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2b48c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b48c4: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x2b48c4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x2b48c8: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2b48c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2b48cc: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2b48ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b48d0: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x2b48d0u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
    // 0x2b48d4: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x2b48d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2b48d8: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2b48d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b48dc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2b48dcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2b48e0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2b48e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b48e4: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2b48e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2b48e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B48E8u;
    {
        const bool branch_taken_0x2b48e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B48ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48E8u;
        // 0x2b48ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b48e8) {
            ctx->pc = 0x2B48F4u;
            goto label_2b48f4;
        }
    }
    ctx->pc = 0x2B48F0u;
    // 0x2b48f0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2b48f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2b48f4:
    // 0x2b48f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b48f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b48f8: 0x0  nop
    ctx->pc = 0x2b48f8u;
    // NOP
    // 0x2b48fc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B48FCu;
    {
        const bool branch_taken_0x2b48fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b48fc) {
            ctx->pc = 0x2B4900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B48FCu;
            // 0x2b4900: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4904u;
            goto label_2b4904;
        }
    }
    ctx->pc = 0x2B4904u;
label_2b4904:
    // 0x2b4904: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2b4904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4908: 0x0  nop
    ctx->pc = 0x2b4908u;
    // NOP
    // 0x2b490c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B490Cu;
    {
        const bool branch_taken_0x2b490c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B4910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B490Cu;
        // 0x2b4910: 0x3c022131  lui         $v0, 0x2131 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b490c) {
            ctx->pc = 0x2B4918u;
            goto label_2b4918;
        }
    }
    ctx->pc = 0x2B4914u;
    // 0x2b4914: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2b4914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_2b4918:
    // 0x2b4918: 0x34422300  ori         $v0, $v0, 0x2300
    ctx->pc = 0x2b4918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8960);
    // 0x2b491c: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x2b491cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2b4920: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2b4920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2b4924: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b4924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4928: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b4928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b492c: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x2b492cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x2b4930: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b4930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b4934: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b4934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b4938: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b4938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b493c: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x2b493cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x2b4940: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x2b4940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2b4944: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b4944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b4948: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b4948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b494c: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x2b494cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2b4950: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2b4950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b4954: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2b4954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2b4958: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2b4958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b495c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2b495cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b4960: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x2b4960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2b4964: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2b4964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4968: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b4968u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b496c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B496Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B496Cu;
        // 0x2b4970: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B496Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4974u;
    // 0x2b4974: 0x0  nop
    ctx->pc = 0x2b4974u;
    // NOP
    // 0x2b4978: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2b4978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b497c: 0x0  nop
    ctx->pc = 0x2b497cu;
    // NOP
    // 0x2b4980: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b4980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b4984: 0x0  nop
    ctx->pc = 0x2b4984u;
    // NOP
    // 0x2b4988: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b4988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b498c: 0x0  nop
    ctx->pc = 0x2b498cu;
    // NOP
    // 0x2b4990: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b4990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b4994: 0x0  nop
    ctx->pc = 0x2b4994u;
    // NOP
    // 0x2b4998: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b4998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b499c: 0x0  nop
    ctx->pc = 0x2b499cu;
    // NOP
    // 0x2b49a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b49a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b49a4: 0x0  nop
    ctx->pc = 0x2b49a4u;
    // NOP
    ctx->pc = 0x2b49a8u;
}
