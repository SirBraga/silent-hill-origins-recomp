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

// Function: sub_00265CE0
// Address: 0x265ce0 - 0x2660d0
void sub_00265CE0_0x265ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265CE0_0x265ce0");
#endif

    switch (ctx->pc) {
        case 0x265d10u: goto label_265d10;
        case 0x265d20u: goto label_265d20;
        case 0x265dc0u: goto label_265dc0;
        case 0x265e14u: goto label_265e14;
        case 0x265e34u: goto label_265e34;
        default: break;
    }

    ctx->pc = 0x265ce0u;

    // 0x265ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x265ce4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x265ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x265ce8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x265ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x265cec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x265cecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265cf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x265cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x265cf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x265cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265cf8: 0x244263b0  addiu       $v0, $v0, 0x63B0
    ctx->pc = 0x265cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25520));
    // 0x265cfc: 0x8c430768  lw          $v1, 0x768($v0)
    ctx->pc = 0x265cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x706B18u));
    // 0x265d00: 0x8c460738  lw          $a2, 0x738($v0)
    ctx->pc = 0x265d00u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x706AE8u));
    // 0x265d04: 0x1860002b  blez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x265D04u;
    {
        const bool branch_taken_0x265d04 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x265D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D04u;
        // 0x265d08: 0x8c470764  lw          $a3, 0x764($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d04) {
            ctx->pc = 0x265DB4u;
            goto label_265db4;
        }
    }
    ctx->pc = 0x265D0Cu;
    // 0x265d0c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x265d0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_265d10:
    // 0x265d10: 0x24e7ffd8  addiu       $a3, $a3, -0x28
    ctx->pc = 0x265d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967256));
    // 0x265d14: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x265d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x265d18: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x265d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x265d1c: 0x0  nop
    ctx->pc = 0x265d1cu;
    // NOP
label_265d20:
    // 0x265d20: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x265d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x265d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x265d28: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x265d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x265d2c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x265d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x265d30: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x265d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d34: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x265d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x265d38: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x265d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x265d3c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x265d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d40: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x265d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x265d44: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x265d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x265d48: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x265d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d4c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x265d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x265d50: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x265d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x265d54: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x265d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d58: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x265d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x265d5c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x265d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x265d60: 0x461ffef  bgez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x265D60u;
    {
        const bool branch_taken_0x265d60 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x265D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D60u;
        // 0x265d64: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d60) {
            ctx->pc = 0x265D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265d20;
        }
    }
    ctx->pc = 0x265D68u;
    // 0x265d68: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x265d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d6c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x265d6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265d70: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x265d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x265d74: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x265d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x265d78: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x265d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d7c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x265d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x265d80: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x265d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x265d84: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x265d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d88: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x265d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x265d8c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x265d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x265d90: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x265d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265d94: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x265d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x265d98: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x265d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x265d9c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x265d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265da0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x265da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x265da4: 0x8d220768  lw          $v0, 0x768($t1)
    ctx->pc = 0x265da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1896)));
    // 0x265da8: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x265da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x265dac: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x265DACu;
    {
        const bool branch_taken_0x265dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265DACu;
        // 0x265db0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265dac) {
            ctx->pc = 0x265D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265d10;
        }
    }
    ctx->pc = 0x265DB4u;
label_265db4:
    // 0x265db4: 0x18e00014  blez        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x265DB4u;
    {
        const bool branch_taken_0x265db4 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x265DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265DB4u;
        // 0x265db8: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265db4) {
            ctx->pc = 0x265E08u;
            goto label_265e08;
        }
    }
    ctx->pc = 0x265DBCu;
    // 0x265dbc: 0x0  nop
    ctx->pc = 0x265dbcu;
    // NOP
label_265dc0:
    // 0x265dc0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x265dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265dc4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x265dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x265dc8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x265dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x265dcc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x265dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x265dd0: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x265dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265dd4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x265dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x265dd8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x265dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x265ddc: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x265ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265de0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x265de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x265de4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x265de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x265de8: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x265de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265dec: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x265decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x265df0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x265df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x265df4: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x265df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265df8: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x265df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x265dfc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x265dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x265e00: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x265E00u;
    {
        const bool branch_taken_0x265e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x265E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E00u;
        // 0x265e04: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e00) {
            ctx->pc = 0x265DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265dc0;
        }
    }
    ctx->pc = 0x265E08u;
label_265e08:
    // 0x265e08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x265e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265e0c: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x265E0Cu;
    SET_GPR_U32(ctx, 31, 0x265E14u);
    ctx->pc = 0x265E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265E0Cu;
    // 0x265e10: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x265E0Cu, 0x265E14u)) {
        return;
    }
    ctx->pc = 0x265E14u;
label_265e14:
    // 0x265e14: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x265E14u;
    {
        const bool branch_taken_0x265e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E14u;
        // 0x265e18: 0x3c026c09  lui         $v0, 0x6C09 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27657 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e14) {
            ctx->pc = 0x265E3Cu;
            goto label_265e3c;
        }
    }
    ctx->pc = 0x265E1Cu;
    // 0x265e1c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x265e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x265e20: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x265e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x265e24: 0x2484ba08  addiu       $a0, $a0, -0x45F8
    ctx->pc = 0x265e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949384));
    // 0x265e28: 0x24a5ba28  addiu       $a1, $a1, -0x45D8
    ctx->pc = 0x265e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949416));
    // 0x265e2c: 0xc0c4f0a  jal         func_313C28
    ctx->pc = 0x265E2Cu;
    SET_GPR_U32(ctx, 31, 0x265E34u);
    ctx->pc = 0x265E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265E2Cu;
    // 0x265e30: 0x2406010a  addiu       $a2, $zero, 0x10A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313C28u, 0x265E2Cu, 0x265E34u)) {
        return;
    }
    ctx->pc = 0x265E34u;
label_265e34:
    // 0x265e34: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x265E34u;
    {
        const bool branch_taken_0x265e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E34u;
        // 0x265e38: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e34) {
            ctx->pc = 0x2660C0u;
            goto label_2660c0;
        }
    }
    ctx->pc = 0x265E3Cu;
label_265e3c:
    // 0x265e3c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x265e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x265e40: 0x344203cf  ori         $v0, $v0, 0x3CF
    ctx->pc = 0x265e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)975);
    // 0x265e44: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x265e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
    // 0x265e48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x265e48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265e4c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x265e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x265e50: 0x34a50009  ori         $a1, $a1, 0x9
    ctx->pc = 0x265e50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9);
    // 0x265e54: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x265e54u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x265e58: 0x70651cc8  ppacw       $v1, $v1, $a1
    ctx->pc = 0x265e58u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x265e5c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x265e5cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x265e60: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x265e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x265e64: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x265e64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x265e68: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x265e68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x265e6c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x265e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x265e70: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265e74: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x265e74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x265e78: 0x260563b0  addiu       $a1, $s0, 0x63B0
    ctx->pc = 0x265e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 25520));
    // 0x265e7c: 0x8ca20728  lw          $v0, 0x728($a1)
    ctx->pc = 0x265e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x265e80: 0xc4a30740  lwc1        $f3, 0x740($a1)
    ctx->pc = 0x265e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x265e84: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x265e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265e88: 0xc4a106f8  lwc1        $f1, 0x6F8($a1)
    ctx->pc = 0x265e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265e8c: 0xc4a20744  lwc1        $f2, 0x744($a1)
    ctx->pc = 0x265e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265e90: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x265e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x265e94: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x265e94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x265e98: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x265e98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x265e9c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x265e9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x265ea0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x265ea0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265ea4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x265ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x265ea8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x265ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x265eac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265eb0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x265eb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x265eb4: 0x8ca30728  lw          $v1, 0x728($a1)
    ctx->pc = 0x265eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x265eb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x265eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x265ebc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x265ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x265ec0: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x265ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x265ec4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x265EC4u;
    {
        const bool branch_taken_0x265ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265EC4u;
        // 0x265ec8: 0xc4610000  lwc1        $f1, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ec4) {
            ctx->pc = 0x265ED8u;
            goto label_265ed8;
        }
    }
    ctx->pc = 0x265ECCu;
    // 0x265ecc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x265eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x265ed0: 0x34219a34  ori         $at, $at, 0x9A34
    ctx->pc = 0x265ed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39476);
    // 0x265ed4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x265ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_265ed8:
    // 0x265ed8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x265ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x265edc: 0x34219a34  ori         $at, $at, 0x9A34
    ctx->pc = 0x265edcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39476);
    // 0x265ee0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x265ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x265ee4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x265ee4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x265ee8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x265ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x265eec: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x265eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265ef0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x265ef0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x265ef4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x265ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x265ef8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x265ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265efc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x265efcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x265f00: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x265f00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x265f04: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x265f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265f08: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x265f08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x265f0c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x265f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x265f10: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x265f10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265f14: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x265f14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x265f18: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x265f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x265f1c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265f20: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x265f20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x265f24: 0x8ca30728  lw          $v1, 0x728($a1)
    ctx->pc = 0x265f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x265f28: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x265f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265f2c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x265f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x265f30: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x265f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x265f34: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x265f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265f38: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x265f38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x265f3c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x265f3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x265f40: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x265f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265f44: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x265f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x265f48: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x265f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x265f4c: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x265f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265f50: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x265f50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x265f54: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x265f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x265f58: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x265f58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265f5c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x265f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x265f60: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x265f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x265f64: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265f68: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x265f68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x265f6c: 0x8ca30728  lw          $v1, 0x728($a1)
    ctx->pc = 0x265f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x265f70: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x265f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265f74: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x265f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x265f78: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x265f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x265f7c: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x265f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265f80: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x265f80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x265f84: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x265f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x265f88: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x265f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265f8c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x265f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x265f90: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x265f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x265f94: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x265f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265f98: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x265f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x265f9c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x265f9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x265fa0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x265fa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265fa4: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x265fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x265fa8: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x265fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x265fac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265fb0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x265fb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x265fb4: 0x8ca30728  lw          $v1, 0x728($a1)
    ctx->pc = 0x265fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x265fb8: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x265fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265fbc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x265fbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x265fc0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x265fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x265fc4: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x265fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265fc8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x265fc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x265fcc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x265fccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x265fd0: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x265fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265fd4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x265fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x265fd8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x265fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x265fdc: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x265fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265fe0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x265fe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x265fe4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x265fe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x265fe8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x265fe8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265fec: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x265fecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x265ff0: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x265ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x265ff4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x265ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x265ff8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x265ff8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x265ffc: 0x8ca30728  lw          $v1, 0x728($a1)
    ctx->pc = 0x265ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x266000: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x266000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266004: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x266004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x266008: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x266008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26600c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26600cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x266010: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x266010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x266014: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x266014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x266018: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x266018u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26601c: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x26601cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x266020: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x266020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x266024: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x266024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x266028: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x266028u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26602c: 0x8ca30728  lw          $v1, 0x728($a1)
    ctx->pc = 0x26602cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x266030: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x266030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266034: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x266034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x266038: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x266038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26603c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26603cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x266040: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x266040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x266044: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x266044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x266048: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x266048u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26604c: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x26604cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x266050: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x266050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x266054: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x266054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x266058: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x266058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26605c: 0x8ca30728  lw          $v1, 0x728($a1)
    ctx->pc = 0x26605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x266060: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x266060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266064: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x266064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x266068: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x266068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26606c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26606cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x266070: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x266070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x266074: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x266074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x266078: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x266078u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26607c: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x26607cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x266080: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x266080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x266084: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x266084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x266088: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x266088u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26608c: 0x8ca30728  lw          $v1, 0x728($a1)
    ctx->pc = 0x26608cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1832)));
    // 0x266090: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x266090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266094: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x266094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x266098: 0xc461005c  lwc1        $f1, 0x5C($v1)
    ctx->pc = 0x266098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26609c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26609cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2660a0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2660a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2660a4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2660a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2660a8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2660a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2660ac: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x2660acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
    // 0x2660b0: 0x24820090  addiu       $v0, $a0, 0x90
    ctx->pc = 0x2660b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x2660b4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2660b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2660b8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2660b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2660bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2660bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2660c0:
    // 0x2660c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2660c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2660c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2660c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2660c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2660C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2660CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660C8u;
        // 0x2660cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2660C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2660D0u;
}
