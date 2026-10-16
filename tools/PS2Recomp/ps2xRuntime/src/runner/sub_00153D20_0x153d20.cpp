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

// Function: sub_00153D20
// Address: 0x153d20 - 0x153e38
void sub_00153D20_0x153d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153D20_0x153d20");
#endif

    switch (ctx->pc) {
        case 0x153d74u: goto label_153d74;
        case 0x153dacu: goto label_153dac;
        default: break;
    }

    ctx->pc = 0x153d20u;

    // 0x153d20: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x153d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x153d24: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x153d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x153d28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x153d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153d2c: 0xc4408600  lwc1        $f0, -0x7A00($v0)
    ctx->pc = 0x153d2cu;
    { uint32_t bits = FAST_READ32(0x338600u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x153d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x153d34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x153d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x153d38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x153d38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153d3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x153d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x153d40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x153d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x153d44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x153d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153d4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x153d4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153d50: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x153D50u;
    {
        const bool branch_taken_0x153d50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D50u;
        // 0x153d54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d50) {
            ctx->pc = 0x153D74u;
            goto label_153d74;
        }
    }
    ctx->pc = 0x153D58u;
    // 0x153d58: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x153d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x153d5c: 0x8c6285f8  lw          $v0, -0x7A08($v1)
    ctx->pc = 0x153d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3385F8u));
    // 0x153d60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x153D60u;
    {
        const bool branch_taken_0x153d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D60u;
        // 0x153d64: 0xc6418600  lwc1        $f1, -0x7A00($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294936064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d60) {
            ctx->pc = 0x153D78u;
            goto label_153d78;
        }
    }
    ctx->pc = 0x153D68u;
    // 0x153d68: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x153d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153d6c: 0xc054ce8  jal         func_1533A0
    ctx->pc = 0x153D6Cu;
    SET_GPR_U32(ctx, 31, 0x153D74u);
    ctx->pc = 0x153D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153D6Cu;
    // 0x153d70: 0xac7085f8  sw          $s0, -0x7A08($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936056), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1533A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1533A0u, 0x153D6Cu, 0x153D74u)) {
        return;
    }
    ctx->pc = 0x153D74u;
label_153d74:
    // 0x153d74: 0xc6418600  lwc1        $f1, -0x7A00($s2)
    ctx->pc = 0x153d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294936064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_153d78:
    // 0x153d78: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x153d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x153d7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153d80: 0x0  nop
    ctx->pc = 0x153d80u;
    // NOP
    // 0x153d84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x153d84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153d88: 0x0  nop
    ctx->pc = 0x153d88u;
    // NOP
    // 0x153d8c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x153D8Cu;
    {
        const bool branch_taken_0x153d8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D8Cu;
        // 0x153d90: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d8c) {
            ctx->pc = 0x153DACu;
            goto label_153dac;
        }
    }
    ctx->pc = 0x153D94u;
    // 0x153d94: 0x8c6285fc  lw          $v0, -0x7A04($v1)
    ctx->pc = 0x153d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936060)));
    // 0x153d98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x153D98u;
    {
        const bool branch_taken_0x153d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D98u;
        // 0x153d9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d98) {
            ctx->pc = 0x153DACu;
            goto label_153dac;
        }
    }
    ctx->pc = 0x153DA0u;
    // 0x153da0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x153da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153da4: 0xc054d14  jal         func_153450
    ctx->pc = 0x153DA4u;
    SET_GPR_U32(ctx, 31, 0x153DACu);
    ctx->pc = 0x153DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153DA4u;
    // 0x153da8: 0xac7085fc  sw          $s0, -0x7A04($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936060), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153450u, 0x153DA4u, 0x153DACu)) {
        return;
    }
    ctx->pc = 0x153DACu;
label_153dac:
    // 0x153dac: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x153DACu;
    {
        const bool branch_taken_0x153dac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x153DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DACu;
        // 0x153db0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153dac) {
            ctx->pc = 0x153E18u;
            goto label_153e18;
        }
    }
    ctx->pc = 0x153DB4u;
    // 0x153db4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x153db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x153db8: 0x8c6285f8  lw          $v0, -0x7A08($v1)
    ctx->pc = 0x153db8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3385F8u));
    // 0x153dbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x153DBCu;
    {
        const bool branch_taken_0x153dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DBCu;
        // 0x153dc0: 0xc6418600  lwc1        $f1, -0x7A00($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294936064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153dbc) {
            ctx->pc = 0x153DE0u;
            goto label_153de0;
        }
    }
    ctx->pc = 0x153DC4u;
    // 0x153dc4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x153dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x153dc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153dcc: 0x0  nop
    ctx->pc = 0x153dccu;
    // NOP
    // 0x153dd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x153dd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153dd4: 0x0  nop
    ctx->pc = 0x153dd4u;
    // NOP
    // 0x153dd8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x153DD8u;
    {
        const bool branch_taken_0x153dd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x153dd8) {
            ctx->pc = 0x153DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153DD8u;
            // 0x153ddc: 0xac6085f8  sw          $zero, -0x7A08($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294936056), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153DE0u;
            goto label_153de0;
        }
    }
    ctx->pc = 0x153DE0u;
label_153de0:
    // 0x153de0: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x153DE0u;
    {
        const bool branch_taken_0x153de0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x153DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DE0u;
        // 0x153de4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153de0) {
            ctx->pc = 0x153E18u;
            goto label_153e18;
        }
    }
    ctx->pc = 0x153DE8u;
    // 0x153de8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x153de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x153dec: 0x8c6285fc  lw          $v0, -0x7A04($v1)
    ctx->pc = 0x153decu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3385FCu));
    // 0x153df0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x153DF0u;
    {
        const bool branch_taken_0x153df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DF0u;
        // 0x153df4: 0xc6418600  lwc1        $f1, -0x7A00($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294936064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153df0) {
            ctx->pc = 0x153E14u;
            goto label_153e14;
        }
    }
    ctx->pc = 0x153DF8u;
    // 0x153df8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x153df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x153dfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153e00: 0x0  nop
    ctx->pc = 0x153e00u;
    // NOP
    // 0x153e04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x153e04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153e08: 0x0  nop
    ctx->pc = 0x153e08u;
    // NOP
    // 0x153e0c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x153E0Cu;
    {
        const bool branch_taken_0x153e0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x153e0c) {
            ctx->pc = 0x153E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153E0Cu;
            // 0x153e10: 0xac6085fc  sw          $zero, -0x7A04($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294936060), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153E14u;
            goto label_153e14;
        }
    }
    ctx->pc = 0x153E14u;
label_153e14:
    // 0x153e14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x153e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_153e18:
    // 0x153e18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x153e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153e1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x153e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153e20: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x153e20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153e24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153e28: 0x3e00008  jr          $ra
    ctx->pc = 0x153E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E28u;
        // 0x153e2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153E30u;
    // 0x153e30: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x153e30u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x153e34: 0x0  nop
    ctx->pc = 0x153e34u;
    // NOP
    ctx->pc = 0x153e38u;
}
