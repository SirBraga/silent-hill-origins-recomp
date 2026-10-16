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

// Function: sub_002E9EC8
// Address: 0x2e9ec8 - 0x2e9fb0
void sub_002E9EC8_0x2e9ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9EC8_0x2e9ec8");
#endif

    switch (ctx->pc) {
        case 0x2e9ee0u: goto label_2e9ee0;
        case 0x2e9ef8u: goto label_2e9ef8;
        default: break;
    }

    ctx->pc = 0x2e9ec8u;

    // 0x2e9ec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e9ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e9ecc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e9eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e9ed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e9ed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e9ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ed8: 0xc0ba61a  jal         func_2E9868
    ctx->pc = 0x2E9ED8u;
    SET_GPR_U32(ctx, 31, 0x2E9EE0u);
    ctx->pc = 0x2E9EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9ED8u;
    // 0x2e9edc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9868u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9868u, 0x2E9ED8u, 0x2E9EE0u)) {
        return;
    }
    ctx->pc = 0x2E9EE0u;
label_2e9ee0:
    // 0x2e9ee0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e9ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9ee8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e9ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9eec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9EECu;
        // 0x2e9ef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9EF4u;
    // 0x2e9ef4: 0x0  nop
    ctx->pc = 0x2e9ef4u;
    // NOP
label_2e9ef8:
    // 0x2e9ef8: 0x8c850f5c  lw          $a1, 0xF5C($a0)
    ctx->pc = 0x2e9ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3932)));
    // 0x2e9efc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9f00: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2e9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2e9f04: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E9F04u;
    {
        const bool branch_taken_0x2e9f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E9F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F04u;
        // 0x2e9f08: 0xacc50008  sw          $a1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f04) {
            ctx->pc = 0x2E9F78u;
            goto label_2e9f78;
        }
    }
    ctx->pc = 0x2E9F0Cu;
    // 0x2e9f0c: 0x8c870f4c  lw          $a3, 0xF4C($a0)
    ctx->pc = 0x2e9f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3916)));
    // 0x2e9f10: 0x50e00019  beql        $a3, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E9F10u;
    {
        const bool branch_taken_0x2e9f10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9f10) {
            ctx->pc = 0x2E9F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9F10u;
            // 0x2e9f14: 0xacc00008  sw          $zero, 0x8($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9F78u;
            goto label_2e9f78;
        }
    }
    ctx->pc = 0x2E9F18u;
    // 0x2e9f18: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9F18u;
    {
        const bool branch_taken_0x2e9f18 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2E9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F18u;
        // 0x2e9f1c: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f18) {
            ctx->pc = 0x2E9F30u;
            goto label_2e9f30;
        }
    }
    ctx->pc = 0x2E9F20u;
    // 0x2e9f20: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2e9f20u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9f24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e9f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e9f28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9F28u;
    {
        const bool branch_taken_0x2e9f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9f28) {
            ctx->pc = 0x2E9F44u;
            goto label_2e9f44;
        }
    }
    ctx->pc = 0x2E9F30u;
label_2e9f30:
    // 0x2e9f30: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2e9f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2e9f34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e9f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e9f38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9f3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e9f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e9f40: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2e9f40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2e9f44:
    // 0x2e9f44: 0x4e00005  bltz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9F44u;
    {
        const bool branch_taken_0x2e9f44 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x2E9F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F44u;
        // 0x2e9f48: 0x71842  srl         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f44) {
            ctx->pc = 0x2E9F5Cu;
            goto label_2e9f5c;
        }
    }
    ctx->pc = 0x2E9F4Cu;
    // 0x2e9f4c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2e9f4cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9f50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e9f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e9f54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9F54u;
    {
        const bool branch_taken_0x2e9f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9f54) {
            ctx->pc = 0x2E9F70u;
            goto label_2e9f70;
        }
    }
    ctx->pc = 0x2E9F5Cu;
label_2e9f5c:
    // 0x2e9f5c: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x2e9f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x2e9f60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e9f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e9f64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9f68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e9f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e9f6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e9f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e9f70:
    // 0x2e9f70: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2e9f70u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x2e9f74: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2e9f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_2e9f78:
    // 0x2e9f78: 0x8c820f54  lw          $v0, 0xF54($a0)
    ctx->pc = 0x2e9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3924)));
    // 0x2e9f7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9f80: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2e9f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e9f84: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9F84u;
    {
        const bool branch_taken_0x2e9f84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F84u;
        // 0x2e9f88: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f84) {
            ctx->pc = 0x2E9F94u;
            goto label_2e9f94;
        }
    }
    ctx->pc = 0x2E9F8Cu;
    // 0x2e9f8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9F8Cu;
    {
        const bool branch_taken_0x2e9f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F8Cu;
        // 0x2e9f90: 0x24820f64  addiu       $v0, $a0, 0xF64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3940));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f8c) {
            ctx->pc = 0x2E9FA0u;
            goto label_2e9fa0;
        }
    }
    ctx->pc = 0x2E9F94u;
label_2e9f94:
    // 0x2e9f94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9f98: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9F98u;
    {
        const bool branch_taken_0x2e9f98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E9F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F98u;
        // 0x2e9f9c: 0x24820fe4  addiu       $v0, $a0, 0xFE4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4068));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f98) {
            ctx->pc = 0x2E9FA4u;
            goto label_2e9fa4;
        }
    }
    ctx->pc = 0x2E9FA0u;
label_2e9fa0:
    // 0x2e9fa0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2e9fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_2e9fa4:
    // 0x2e9fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FA4u;
        // 0x2e9fa8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9FACu;
    // 0x2e9fac: 0x0  nop
    ctx->pc = 0x2e9facu;
    // NOP
    ctx->pc = 0x2e9fb0u;
}
