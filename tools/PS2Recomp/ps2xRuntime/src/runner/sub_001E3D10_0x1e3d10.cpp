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

// Function: sub_001E3D10
// Address: 0x1e3d10 - 0x1e3e20
void sub_001E3D10_0x1e3d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3D10_0x1e3d10");
#endif

    switch (ctx->pc) {
        case 0x1e3d58u: goto label_1e3d58;
        case 0x1e3d9cu: goto label_1e3d9c;
        case 0x1e3db0u: goto label_1e3db0;
        case 0x1e3dc4u: goto label_1e3dc4;
        case 0x1e3dd8u: goto label_1e3dd8;
        default: break;
    }

    ctx->pc = 0x1e3d10u;

    // 0x1e3d10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e3d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e3d14: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1e3d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1e3d18: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1e3d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1e3d1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e3d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d20: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1e3d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1e3d24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e3d24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d28: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1e3d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1e3d2c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1e3d2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3d30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e3d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e3d34: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1e3d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1e3d38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3d3c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e3d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1e3d40: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x1e3d40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e3d44: 0x1a60002b  blez        $s3, . + 4 + (0x2B << 2)
    ctx->pc = 0x1E3D44u;
    {
        const bool branch_taken_0x1e3d44 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x1E3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D44u;
        // 0x1e3d48: 0x8c940010  lw          $s4, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d44) {
            ctx->pc = 0x1E3DF4u;
            goto label_1e3df4;
        }
    }
    ctx->pc = 0x1E3D4Cu;
    // 0x1e3d4c: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1e3d4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e3d50: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1e3d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d54: 0x0  nop
    ctx->pc = 0x1e3d54u;
    // NOP
label_1e3d58:
    // 0x1e3d58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e3d5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3D5Cu;
    {
        const bool branch_taken_0x1e3d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D5Cu;
        // 0x1e3d60: 0x541023  subu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d5c) {
            ctx->pc = 0x1E3D70u;
            goto label_1e3d70;
        }
    }
    ctx->pc = 0x1E3D64u;
    // 0x1e3d64: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1e3d64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1e3d68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3D68u;
    {
        const bool branch_taken_0x1e3d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D68u;
        // 0x1e3d6c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d68) {
            ctx->pc = 0x1E3D74u;
            goto label_1e3d74;
        }
    }
    ctx->pc = 0x1E3D70u;
label_1e3d70:
    // 0x1e3d70: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1e3d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_1e3d74:
    // 0x1e3d74: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1e3d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3d78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e3d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d80: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1e3d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e3d84: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1e3d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e3d88: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1e3d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3d8c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1e3d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e3d90: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1e3d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3d94: 0xc092782  jal         func_249E08
    ctx->pc = 0x1E3D94u;
    SET_GPR_U32(ctx, 31, 0x1E3D9Cu);
    ctx->pc = 0x1E3D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D94u;
    // 0x1e3d98: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x1E3D94u, 0x1E3D9Cu)) {
        return;
    }
    ctx->pc = 0x1E3D9Cu;
label_1e3d9c:
    // 0x1e3d9c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E3D9Cu;
    {
        const bool branch_taken_0x1e3d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D9Cu;
        // 0x1e3da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d9c) {
            ctx->pc = 0x1E3DE0u;
            goto label_1e3de0;
        }
    }
    ctx->pc = 0x1E3DA4u;
    // 0x1e3da4: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1e3da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e3da8: 0xc09275c  jal         func_249D70
    ctx->pc = 0x1E3DA8u;
    SET_GPR_U32(ctx, 31, 0x1E3DB0u);
    ctx->pc = 0x1E3DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3DA8u;
    // 0x1e3dac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x1E3DA8u, 0x1E3DB0u)) {
        return;
    }
    ctx->pc = 0x1E3DB0u;
label_1e3db0:
    // 0x1e3db0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E3DB0u;
    {
        const bool branch_taken_0x1e3db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DB0u;
        // 0x1e3db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3db0) {
            ctx->pc = 0x1E3DE0u;
            goto label_1e3de0;
        }
    }
    ctx->pc = 0x1E3DB8u;
    // 0x1e3db8: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x1e3db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1e3dbc: 0xc09275c  jal         func_249D70
    ctx->pc = 0x1E3DBCu;
    SET_GPR_U32(ctx, 31, 0x1E3DC4u);
    ctx->pc = 0x1E3DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3DBCu;
    // 0x1e3dc0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x1E3DBCu, 0x1E3DC4u)) {
        return;
    }
    ctx->pc = 0x1E3DC4u;
label_1e3dc4:
    // 0x1e3dc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3DC4u;
    {
        const bool branch_taken_0x1e3dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DC4u;
        // 0x1e3dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3dc4) {
            ctx->pc = 0x1E3DE0u;
            goto label_1e3de0;
        }
    }
    ctx->pc = 0x1E3DCCu;
    // 0x1e3dcc: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x1e3dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1e3dd0: 0xc09275c  jal         func_249D70
    ctx->pc = 0x1E3DD0u;
    SET_GPR_U32(ctx, 31, 0x1E3DD8u);
    ctx->pc = 0x1E3DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3DD0u;
    // 0x1e3dd4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x1E3DD0u, 0x1E3DD8u)) {
        return;
    }
    ctx->pc = 0x1E3DD8u;
label_1e3dd8:
    // 0x1e3dd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3DD8u;
    {
        const bool branch_taken_0x1e3dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DD8u;
        // 0x1e3ddc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3dd8) {
            ctx->pc = 0x1E3DE8u;
            goto label_1e3de8;
        }
    }
    ctx->pc = 0x1E3DE0u;
label_1e3de0:
    // 0x1e3de0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3DE0u;
    {
        const bool branch_taken_0x1e3de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DE0u;
        // 0x1e3de4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3de0) {
            ctx->pc = 0x1E3DF4u;
            goto label_1e3df4;
        }
    }
    ctx->pc = 0x1E3DE8u;
label_1e3de8:
    // 0x1e3de8: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x1e3de8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1e3dec: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1E3DECu;
    {
        const bool branch_taken_0x1e3dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DECu;
        // 0x1e3df0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3dec) {
            ctx->pc = 0x1E3D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3d58;
        }
    }
    ctx->pc = 0x1E3DF4u;
label_1e3df4:
    // 0x1e3df4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1e3df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3df8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1e3df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e3dfc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1e3dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e3e00: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1e3e00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e3e04: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e3e04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e3e08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e3e08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3e0c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1e3e0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3e10: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1e3e10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3e14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3e18: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E18u;
        // 0x1e3e1c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3E20u;
}
