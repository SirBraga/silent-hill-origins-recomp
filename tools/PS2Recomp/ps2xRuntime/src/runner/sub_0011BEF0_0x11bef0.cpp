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

// Function: sub_0011BEF0
// Address: 0x11bef0 - 0x11bfe0
void sub_0011BEF0_0x11bef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BEF0_0x11bef0");
#endif

    switch (ctx->pc) {
        case 0x11bf14u: goto label_11bf14;
        case 0x11bf28u: goto label_11bf28;
        case 0x11bf48u: goto label_11bf48;
        case 0x11bfb0u: goto label_11bfb0;
        default: break;
    }

    ctx->pc = 0x11bef0u;

    // 0x11bef0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11bef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11bef4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11bef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x11bef8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x11bef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x11befc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11befcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf00: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x11bf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x11bf04: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x11bf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x11bf08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11bf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11bf0c: 0xc04459c  jal         func_111670
    ctx->pc = 0x11BF0Cu;
    SET_GPR_U32(ctx, 31, 0x11BF14u);
    ctx->pc = 0x11BF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF0Cu;
    // 0x11bf10: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111670u, 0x11BF0Cu, 0x11BF14u)) {
        return;
    }
    ctx->pc = 0x11BF14u;
label_11bf14:
    // 0x11bf14: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x11bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x11bf18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11bf18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf1c: 0x8c464568  lw          $a2, 0x4568($v0)
    ctx->pc = 0x11bf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4568u));
    // 0x11bf20: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x11BF20u;
    SET_GPR_U32(ctx, 31, 0x11BF28u);
    ctx->pc = 0x11BF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF20u;
    // 0x11bf24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x11BF20u, 0x11BF28u)) {
        return;
    }
    ctx->pc = 0x11BF28u;
label_11bf28:
    // 0x11bf28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bf2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11bf30: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x11BF30u;
    {
        const bool branch_taken_0x11bf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF30u;
        // 0x11bf34: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf30) {
            ctx->pc = 0x11BFC0u;
            goto label_11bfc0;
        }
    }
    ctx->pc = 0x11BF38u;
    // 0x11bf38: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x11bf38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11bf3c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x11bf3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11bf40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bf44: 0x0  nop
    ctx->pc = 0x11bf44u;
    // NOP
label_11bf48:
    // 0x11bf48: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11bf4c: 0x5053000b  beql        $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x11BF4Cu;
    {
        const bool branch_taken_0x11bf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x11bf4c) {
            ctx->pc = 0x11BF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BF4Cu;
            // 0x11bf50: 0xc4600008  lwc1        $f0, 0x8($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BF7Cu;
            goto label_11bf7c;
        }
    }
    ctx->pc = 0x11BF54u;
    // 0x11bf54: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x11BF54u;
    {
        const bool branch_taken_0x11bf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bf54) {
            ctx->pc = 0x11BF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BF54u;
            // 0x11bf58: 0xc4600008  lwc1        $f0, 0x8($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BF74u;
            goto label_11bf74;
        }
    }
    ctx->pc = 0x11BF5Cu;
    // 0x11bf5c: 0x50520009  beql        $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x11BF5Cu;
    {
        const bool branch_taken_0x11bf5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x11bf5c) {
            ctx->pc = 0x11BF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BF5Cu;
            // 0x11bf60: 0xc4600008  lwc1        $f0, 0x8($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BF84u;
            goto label_11bf84;
        }
    }
    ctx->pc = 0x11BF64u;
    // 0x11bf64: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11BF64u;
    {
        const bool branch_taken_0x11bf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x11BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF64u;
        // 0x11bf68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf64) {
            ctx->pc = 0x11BF8Cu;
            goto label_11bf8c;
        }
    }
    ctx->pc = 0x11BF6Cu;
    // 0x11bf6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11BF6Cu;
    {
        const bool branch_taken_0x11bf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF6Cu;
        // 0x11bf70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf6c) {
            ctx->pc = 0x11BFA0u;
            goto label_11bfa0;
        }
    }
    ctx->pc = 0x11BF74u;
label_11bf74:
    // 0x11bf74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11BF74u;
    {
        const bool branch_taken_0x11bf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF74u;
        // 0x11bf78: 0xe620008c  swc1        $f0, 0x8C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf74) {
            ctx->pc = 0x11BF94u;
            goto label_11bf94;
        }
    }
    ctx->pc = 0x11BF7Cu;
label_11bf7c:
    // 0x11bf7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11BF7Cu;
    {
        const bool branch_taken_0x11bf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF7Cu;
        // 0x11bf80: 0xe6200090  swc1        $f0, 0x90($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf7c) {
            ctx->pc = 0x11BF94u;
            goto label_11bf94;
        }
    }
    ctx->pc = 0x11BF84u;
label_11bf84:
    // 0x11bf84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11BF84u;
    {
        const bool branch_taken_0x11bf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF84u;
        // 0x11bf88: 0xe6200094  swc1        $f0, 0x94($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf84) {
            ctx->pc = 0x11BF94u;
            goto label_11bf94;
        }
    }
    ctx->pc = 0x11BF8Cu;
label_11bf8c:
    // 0x11bf8c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x11bf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11bf90: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x11bf90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
label_11bf94:
    // 0x11bf94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bf98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11bf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11bf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11bfa0:
    // 0x11bfa0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11bfa4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11bfa8: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x11BFA8u;
    SET_GPR_U32(ctx, 31, 0x11BFB0u);
    ctx->pc = 0x11BFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFA8u;
    // 0x11bfac: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x11BFA8u, 0x11BFB0u)) {
        return;
    }
    ctx->pc = 0x11BFB0u;
label_11bfb0:
    // 0x11bfb0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bfb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11bfb8: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x11BFB8u;
    {
        const bool branch_taken_0x11bfb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFB8u;
        // 0x11bfbc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfb8) {
            ctx->pc = 0x11BF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bf48;
        }
    }
    ctx->pc = 0x11BFC0u;
label_11bfc0:
    // 0x11bfc0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x11bfc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11bfc4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x11bfc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11bfc8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x11bfc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11bfcc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x11bfccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bfd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11bfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x11BFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFD4u;
        // 0x11bfd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BFDCu;
    // 0x11bfdc: 0x0  nop
    ctx->pc = 0x11bfdcu;
    // NOP
    ctx->pc = 0x11bfe0u;
}
