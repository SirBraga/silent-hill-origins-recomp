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

// Function: sub_002F3D08
// Address: 0x2f3d08 - 0x2f4158
void sub_002F3D08_0x2f3d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3D08_0x2f3d08");
#endif

    switch (ctx->pc) {
        case 0x2f3d70u: goto label_2f3d70;
        case 0x2f3d88u: goto label_2f3d88;
        case 0x2f3da0u: goto label_2f3da0;
        case 0x2f3dc4u: goto label_2f3dc4;
        case 0x2f3de0u: goto label_2f3de0;
        case 0x2f3e40u: goto label_2f3e40;
        case 0x2f3e84u: goto label_2f3e84;
        case 0x2f3eb0u: goto label_2f3eb0;
        case 0x2f3eb8u: goto label_2f3eb8;
        case 0x2f3ec8u: goto label_2f3ec8;
        case 0x2f3edcu: goto label_2f3edc;
        case 0x2f3f2cu: goto label_2f3f2c;
        case 0x2f3f7cu: goto label_2f3f7c;
        case 0x2f3fd8u: goto label_2f3fd8;
        case 0x2f4064u: goto label_2f4064;
        case 0x2f40c0u: goto label_2f40c0;
        default: break;
    }

    ctx->pc = 0x2f3d08u;

    // 0x2f3d08: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x2f3d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
    // 0x2f3d0c: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x2f3d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x2f3d10: 0xffb704a0  sd          $s7, 0x4A0($sp)
    ctx->pc = 0x2f3d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 23));
    // 0x2f3d14: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f3d18: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2f3d18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d1c: 0xffbe04b0  sd          $fp, 0x4B0($sp)
    ctx->pc = 0x2f3d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 30));
    // 0x2f3d20: 0x2e31818  mult        $v1, $s7, $v1
    ctx->pc = 0x2f3d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f3d24: 0xffb50480  sd          $s5, 0x480($sp)
    ctx->pc = 0x2f3d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 21));
    // 0x2f3d28: 0xffb10440  sd          $s1, 0x440($sp)
    ctx->pc = 0x2f3d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 17));
    // 0x2f3d2c: 0x24426340  addiu       $v0, $v0, 0x6340
    ctx->pc = 0x2f3d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25408));
    // 0x2f3d30: 0xafa70424  sw          $a3, 0x424($sp)
    ctx->pc = 0x2f3d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 7));
    // 0x2f3d34: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2f3d34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d38: 0xffbf04c0  sd          $ra, 0x4C0($sp)
    ctx->pc = 0x2f3d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1216), GPR_U64(ctx, 31));
    // 0x2f3d3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f3d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d40: 0xffb60490  sd          $s6, 0x490($sp)
    ctx->pc = 0x2f3d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 22));
    // 0x2f3d44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f3d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f3d48: 0xffb40470  sd          $s4, 0x470($sp)
    ctx->pc = 0x2f3d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 20));
    // 0x2f3d4c: 0xffb30460  sd          $s3, 0x460($sp)
    ctx->pc = 0x2f3d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 19));
    // 0x2f3d50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f3d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d54: 0xffb20450  sd          $s2, 0x450($sp)
    ctx->pc = 0x2f3d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 18));
    // 0x2f3d58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f3d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d5c: 0xffb00430  sd          $s0, 0x430($sp)
    ctx->pc = 0x2f3d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 16));
    // 0x2f3d60: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2f3d60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d64: 0xafa80428  sw          $t0, 0x428($sp)
    ctx->pc = 0x2f3d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1064), GPR_U32(ctx, 8));
    // 0x2f3d68: 0xc0bca56  jal         func_2F2958
    ctx->pc = 0x2F3D68u;
    SET_GPR_U32(ctx, 31, 0x2F3D70u);
    ctx->pc = 0x2F3D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3D68u;
    // 0x2f3d6c: 0x8c66003c  lw          $a2, 0x3C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2958u, 0x2F3D68u, 0x2F3D70u)) {
        return;
    }
    ctx->pc = 0x2F3D70u;
label_2f3d70:
    // 0x2f3d70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f3d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d74: 0x148000ed  bnez        $a0, . + 4 + (0xED << 2)
    ctx->pc = 0x2F3D74u;
    {
        const bool branch_taken_0x2f3d74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D74u;
        // 0x2f3d78: 0xdfbf04c0  ld          $ra, 0x4C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d74) {
            ctx->pc = 0x2F412Cu;
            goto label_2f412c;
        }
    }
    ctx->pc = 0x2F3D7Cu;
    // 0x2f3d7c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2f3d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3d80: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x2F3D80u;
    SET_GPR_U32(ctx, 31, 0x2F3D88u);
    ctx->pc = 0x2F3D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3D80u;
    // 0x2f3d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2F3D80u, 0x2F3D88u)) {
        return;
    }
    ctx->pc = 0x2F3D88u;
label_2f3d88:
    // 0x2f3d88: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x2f3d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2f3d8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3D8Cu;
    {
        const bool branch_taken_0x2f3d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D8Cu;
        // 0x2f3d90: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d8c) {
            ctx->pc = 0x2F3DA8u;
            goto label_2f3da8;
        }
    }
    ctx->pc = 0x2F3D94u;
    // 0x2f3d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f3d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d98: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F3D98u;
    SET_GPR_U32(ctx, 31, 0x2F3DA0u);
    ctx->pc = 0x2F3D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3D98u;
    // 0x2f3d9c: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F3D98u, 0x2F3DA0u)) {
        return;
    }
    ctx->pc = 0x2F3DA0u;
label_2f3da0:
    // 0x2f3da0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3DA0u;
    {
        const bool branch_taken_0x2f3da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3da0) {
            ctx->pc = 0x2F3DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3DA0u;
            // 0x2f3da4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3DB4u;
            goto label_2f3db4;
        }
    }
    ctx->pc = 0x2F3DA8u;
label_2f3da8:
    // 0x2f3da8: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f3dac: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x2F3DACu;
    {
        const bool branch_taken_0x2f3dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DACu;
        // 0x2f3db0: 0x34429002  ori         $v0, $v0, 0x9002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3dac) {
            ctx->pc = 0x2F4128u;
            goto label_2f4128;
        }
    }
    ctx->pc = 0x2F3DB4u;
label_2f3db4:
    // 0x2f3db4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f3db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3db8: 0x24500158  addiu       $s0, $v0, 0x158
    ctx->pc = 0x2f3db8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 344));
    // 0x2f3dbc: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F3DBCu;
    SET_GPR_U32(ctx, 31, 0x2F3DC4u);
    ctx->pc = 0x2F3DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3DBCu;
    // 0x2f3dc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F3DBCu, 0x2F3DC4u)) {
        return;
    }
    ctx->pc = 0x2F3DC4u;
label_2f3dc4:
    // 0x2f3dc4: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2F3DC4u;
    {
        const bool branch_taken_0x2f3dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DC4u;
        // 0x2f3dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3dc4) {
            ctx->pc = 0x2F3E7Cu;
            goto label_2f3e7c;
        }
    }
    ctx->pc = 0x2F3DCCu;
    // 0x2f3dcc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2f3dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3dd0: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x2f3dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x2f3dd4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F3DD4u;
    {
        const bool branch_taken_0x2f3dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DD4u;
        // 0x2f3dd8: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3dd4) {
            ctx->pc = 0x2F3E3Cu;
            goto label_2f3e3c;
        }
    }
    ctx->pc = 0x2F3DDCu;
    // 0x2f3ddc: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x2f3ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_2f3de0:
    // 0x2f3de0: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x2f3de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f3de4: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x2f3de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f3de8: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x2f3de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f3dec: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x2f3decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f3df0: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x2f3df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2f3df4: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x2f3df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2f3df8: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x2f3df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2f3dfc: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x2f3dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2f3e00: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x2f3e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3e04: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x2f3e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3e08: 0xb0c5000f  sdl         $a1, 0xF($a2)
    ctx->pc = 0x2f3e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3e0c: 0xb4c50008  sdr         $a1, 0x8($a2)
    ctx->pc = 0x2f3e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3e10: 0xb0c70017  sdl         $a3, 0x17($a2)
    ctx->pc = 0x2f3e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3e14: 0xb4c70010  sdr         $a3, 0x10($a2)
    ctx->pc = 0x2f3e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3e18: 0xb0c8001f  sdl         $t0, 0x1F($a2)
    ctx->pc = 0x2f3e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3e1c: 0xb4c80018  sdr         $t0, 0x18($a2)
    ctx->pc = 0x2f3e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3e20: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f3e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f3e24: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2f3e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2f3e28: 0x0  nop
    ctx->pc = 0x2f3e28u;
    // NOP
    // 0x2f3e2c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F3E2Cu;
    {
        const bool branch_taken_0x2f3e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3e2c) {
            ctx->pc = 0x2F3DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3de0;
        }
    }
    ctx->pc = 0x2F3E34u;
    // 0x2f3e34: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2F3E34u;
    {
        const bool branch_taken_0x2f3e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3e34) {
            ctx->pc = 0x2F4030u;
            goto label_2f4030;
        }
    }
    ctx->pc = 0x2F3E3Cu;
label_2f3e3c:
    // 0x2f3e3c: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x2f3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_2f3e40:
    // 0x2f3e40: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2f3e40u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f3e44: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x2f3e44u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f3e48: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x2f3e48u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f3e4c: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x2f3e4cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2f3e50: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2f3e50u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2f3e54: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x2f3e54u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x2f3e58: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x2f3e58u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
    // 0x2f3e5c: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x2f3e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x2f3e60: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f3e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f3e64: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2f3e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2f3e68: 0x0  nop
    ctx->pc = 0x2f3e68u;
    // NOP
    // 0x2f3e6c: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F3E6Cu;
    {
        const bool branch_taken_0x2f3e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3e6c) {
            ctx->pc = 0x2F3E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3e40;
        }
    }
    ctx->pc = 0x2F3E74u;
    // 0x2f3e74: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2F3E74u;
    {
        const bool branch_taken_0x2f3e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3e74) {
            ctx->pc = 0x2F4030u;
            goto label_2f4030;
        }
    }
    ctx->pc = 0x2F3E7Cu;
label_2f3e7c:
    // 0x2f3e7c: 0xc0bc7bc  jal         func_2F1EF0
    ctx->pc = 0x2F3E7Cu;
    SET_GPR_U32(ctx, 31, 0x2F3E84u);
    ctx->pc = 0x2F3E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3E7Cu;
    // 0x2f3e80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1EF0u, 0x2F3E7Cu, 0x2F3E84u)) {
        return;
    }
    ctx->pc = 0x2F3E84u;
label_2f3e84:
    // 0x2f3e84: 0x3c138101  lui         $s3, 0x8101
    ctx->pc = 0x2f3e84u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33025 << 16));
    // 0x2f3e88: 0x27a30420  addiu       $v1, $sp, 0x420
    ctx->pc = 0x2f3e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x2f3e8c: 0x3c148101  lui         $s4, 0x8101
    ctx->pc = 0x2f3e8cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)33025 << 16));
    // 0x2f3e90: 0xafa3042c  sw          $v1, 0x42C($sp)
    ctx->pc = 0x2f3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1068), GPR_U32(ctx, 3));
    // 0x2f3e94: 0x27b00200  addiu       $s0, $sp, 0x200
    ctx->pc = 0x2f3e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2f3e98: 0x27b20400  addiu       $s2, $sp, 0x400
    ctx->pc = 0x2f3e98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x2f3e9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f3e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ea0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2f3ea0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3ea4: 0x36730002  ori         $s3, $s3, 0x2
    ctx->pc = 0x2f3ea4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
    // 0x2f3ea8: 0x36949fff  ori         $s4, $s4, 0x9FFF
    ctx->pc = 0x2f3ea8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)40959);
    // 0x2f3eac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f3eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f3eb0:
    // 0x2f3eb0: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F3EB0u;
    SET_GPR_U32(ctx, 31, 0x2F3EB8u);
    ctx->pc = 0x2F3EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3EB0u;
    // 0x2f3eb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F3EB0u, 0x2F3EB8u)) {
        return;
    }
    ctx->pc = 0x2F3EB8u;
label_2f3eb8:
    // 0x2f3eb8: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x2f3eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x2f3ebc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f3ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ec0: 0xc0bc7bc  jal         func_2F1EF0
    ctx->pc = 0x2F3EC0u;
    SET_GPR_U32(ctx, 31, 0x2F3EC8u);
    ctx->pc = 0x2F3EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3EC0u;
    // 0x2f3ec4: 0x24c50158  addiu       $a1, $a2, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1EF0u, 0x2F3EC0u, 0x2F3EC8u)) {
        return;
    }
    ctx->pc = 0x2F3EC8u;
label_2f3ec8:
    // 0x2f3ec8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f3ec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ecc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2f3eccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ed0: 0x2d1f00a  movz        $fp, $s6, $s1
    ctx->pc = 0x2f3ed0u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_U64(ctx, 30, GPR_U64(ctx, 22));
    // 0x2f3ed4: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2f3ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f3ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3edc:
    // 0x2f3edc: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x2f3edcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3ee0: 0xdc480008  ld          $t0, 0x8($v0)
    ctx->pc = 0x2f3ee0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f3ee4: 0xdc450010  ld          $a1, 0x10($v0)
    ctx->pc = 0x2f3ee4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f3ee8: 0xdc460018  ld          $a2, 0x18($v0)
    ctx->pc = 0x2f3ee8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2f3eec: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x2f3eecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x2f3ef0: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x2f3ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x2f3ef4: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x2f3ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x2f3ef8: 0xfc660018  sd          $a2, 0x18($v1)
    ctx->pc = 0x2f3ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 6));
    // 0x2f3efc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2f3efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2f3f00: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f3f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f3f04: 0x0  nop
    ctx->pc = 0x2f3f04u;
    // NOP
    // 0x2f3f08: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F3F08u;
    {
        const bool branch_taken_0x2f3f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2f3f08) {
            ctx->pc = 0x2F3EDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3edc;
        }
    }
    ctx->pc = 0x2F3F10u;
    // 0x2f3f10: 0x8fa80210  lw          $t0, 0x210($sp)
    ctx->pc = 0x2f3f10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2f3f14: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2f3f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f18: 0x8fa90204  lw          $t1, 0x204($sp)
    ctx->pc = 0x2f3f18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x2f3f1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f3f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f20: 0x8fa6042c  lw          $a2, 0x42C($sp)
    ctx->pc = 0x2f3f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1068)));
    // 0x2f3f24: 0xc0bcea4  jal         func_2F3A90
    ctx->pc = 0x2F3F24u;
    SET_GPR_U32(ctx, 31, 0x2F3F2Cu);
    ctx->pc = 0x2F3F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3F24u;
    // 0x2f3f28: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3A90u, 0x2F3F24u, 0x2F3F2Cu)) {
        return;
    }
    ctx->pc = 0x2F3F2Cu;
label_2f3f2c:
    // 0x2f3f2c: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x2f3f2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3f30: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x2f3f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x2f3f34: 0x1460007a  bnez        $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x2F3F34u;
    {
        const bool branch_taken_0x2f3f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F34u;
        // 0x2f3f38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f34) {
            ctx->pc = 0x2F4120u;
            goto label_2f4120;
        }
    }
    ctx->pc = 0x2F3F3Cu;
    // 0x2f3f3c: 0x13d60007  beq         $fp, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3F3Cu;
    {
        const bool branch_taken_0x2f3f3c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 22));
        if (branch_taken_0x2f3f3c) {
            ctx->pc = 0x2F3F5Cu;
            goto label_2f3f5c;
        }
    }
    ctx->pc = 0x2F3F44u;
    // 0x2f3f44: 0x1080ffda  beqz        $a0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2F3F44u;
    {
        const bool branch_taken_0x2f3f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F44u;
        // 0x2f3f48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f44) {
            ctx->pc = 0x2F3EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3eb0;
        }
    }
    ctx->pc = 0x2F3F4Cu;
    // 0x2f3f4c: 0x931826  xor         $v1, $a0, $s3
    ctx->pc = 0x2f3f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 19));
    // 0x2f3f50: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2f3f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f54: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2F3F54u;
    {
        const bool branch_taken_0x2f3f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F54u;
        // 0x2f3f58: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f54) {
            ctx->pc = 0x2F4128u;
            goto label_2f4128;
        }
    }
    ctx->pc = 0x2F3F5Cu;
label_2f3f5c:
    // 0x2f3f5c: 0x14800037  bnez        $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2F3F5Cu;
    {
        const bool branch_taken_0x2f3f5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3f5c) {
            ctx->pc = 0x2F403Cu;
            goto label_2f403c;
        }
    }
    ctx->pc = 0x2F3F64u;
    // 0x2f3f64: 0x12a0002a  beqz        $s5, . + 4 + (0x2A << 2)
    ctx->pc = 0x2F3F64u;
    {
        const bool branch_taken_0x2f3f64 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F64u;
        // 0x2f3f68: 0x8fa30428  lw          $v1, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f64) {
            ctx->pc = 0x2F4010u;
            goto label_2f4010;
        }
    }
    ctx->pc = 0x2F3F6Cu;
    // 0x2f3f6c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2f3f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f70: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x2f3f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x2f3f74: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F3F74u;
    {
        const bool branch_taken_0x2f3f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F74u;
        // 0x2f3f78: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f74) {
            ctx->pc = 0x2F3FD8u;
            goto label_2f3fd8;
        }
    }
    ctx->pc = 0x2F3F7Cu;
label_2f3f7c:
    // 0x2f3f7c: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x2f3f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2f3f80: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x2f3f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2f3f84: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x2f3f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2f3f88: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x2f3f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2f3f8c: 0x68620017  ldl         $v0, 0x17($v1)
    ctx->pc = 0x2f3f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f3f90: 0x6c620010  ldr         $v0, 0x10($v1)
    ctx->pc = 0x2f3f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f3f94: 0x6864001f  ldl         $a0, 0x1F($v1)
    ctx->pc = 0x2f3f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f3f98: 0x6c640018  ldr         $a0, 0x18($v1)
    ctx->pc = 0x2f3f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f3f9c: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x2f3f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3fa0: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x2f3fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3fa4: 0xb0c8000f  sdl         $t0, 0xF($a2)
    ctx->pc = 0x2f3fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3fa8: 0xb4c80008  sdr         $t0, 0x8($a2)
    ctx->pc = 0x2f3fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3fac: 0xb0c20017  sdl         $v0, 0x17($a2)
    ctx->pc = 0x2f3facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3fb0: 0xb4c20010  sdr         $v0, 0x10($a2)
    ctx->pc = 0x2f3fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3fb4: 0xb0c4001f  sdl         $a0, 0x1F($a2)
    ctx->pc = 0x2f3fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3fb8: 0xb4c40018  sdr         $a0, 0x18($a2)
    ctx->pc = 0x2f3fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3fbc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f3fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f3fc0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2f3fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2f3fc4: 0x0  nop
    ctx->pc = 0x2f3fc4u;
    // NOP
    // 0x2f3fc8: 0x1470ffec  bne         $v1, $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F3FC8u;
    {
        const bool branch_taken_0x2f3fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f3fc8) {
            ctx->pc = 0x2F3F7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3f7c;
        }
    }
    ctx->pc = 0x2F3FD0u;
    // 0x2f3fd0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F3FD0u;
    {
        const bool branch_taken_0x2f3fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3FD0u;
        // 0x2f3fd4: 0x8fa30428  lw          $v1, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3fd0) {
            ctx->pc = 0x2F4010u;
            goto label_2f4010;
        }
    }
    ctx->pc = 0x2F3FD8u;
label_2f3fd8:
    // 0x2f3fd8: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x2f3fd8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f3fdc: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x2f3fdcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f3fe0: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x2f3fe0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f3fe4: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x2f3fe4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2f3fe8: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x2f3fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x2f3fec: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x2f3fecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x2f3ff0: 0xfcc80010  sd          $t0, 0x10($a2)
    ctx->pc = 0x2f3ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 8));
    // 0x2f3ff4: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x2f3ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x2f3ff8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f3ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f3ffc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2f3ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2f4000: 0x0  nop
    ctx->pc = 0x2f4000u;
    // NOP
    // 0x2f4004: 0x1470fff4  bne         $v1, $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F4004u;
    {
        const bool branch_taken_0x2f4004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f4004) {
            ctx->pc = 0x2F3FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3fd8;
        }
    }
    ctx->pc = 0x2F400Cu;
    // 0x2f400c: 0x8fa30428  lw          $v1, 0x428($sp)
    ctx->pc = 0x2f400cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
label_2f4010:
    // 0x2f4010: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4010u;
    {
        const bool branch_taken_0x2f4010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4010u;
        // 0x2f4014: 0x8fa20420  lw          $v0, 0x420($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4010) {
            ctx->pc = 0x2F401Cu;
            goto label_2f401c;
        }
    }
    ctx->pc = 0x2F4018u;
    // 0x2f4018: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2f4018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2f401c:
    // 0x2f401c: 0x8fa40424  lw          $a0, 0x424($sp)
    ctx->pc = 0x2f401cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
    // 0x2f4020: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4020u;
    {
        const bool branch_taken_0x2f4020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4020) {
            ctx->pc = 0x2F4030u;
            goto label_2f4030;
        }
    }
    ctx->pc = 0x2F4028u;
    // 0x2f4028: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2f4028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2f402c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2f402cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2f4030:
    // 0x2f4030: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f4030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f4034: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2F4034u;
    {
        const bool branch_taken_0x2f4034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4034u;
        // 0x2f4038: 0x34420011  ori         $v0, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4034) {
            ctx->pc = 0x2F4128u;
            goto label_2f4128;
        }
    }
    ctx->pc = 0x2F403Cu;
label_2f403c:
    // 0x2f403c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f403cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f4040: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2f4040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2f4044: 0x14820038  bne         $a0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2F4044u;
    {
        const bool branch_taken_0x2f4044 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F4048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4044u;
        // 0x2f4048: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4044) {
            ctx->pc = 0x2F4128u;
            goto label_2f4128;
        }
    }
    ctx->pc = 0x2F404Cu;
    // 0x2f404c: 0x12a0002a  beqz        $s5, . + 4 + (0x2A << 2)
    ctx->pc = 0x2F404Cu;
    {
        const bool branch_taken_0x2f404c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F404Cu;
        // 0x2f4050: 0x8fa20428  lw          $v0, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f404c) {
            ctx->pc = 0x2F40F8u;
            goto label_2f40f8;
        }
    }
    ctx->pc = 0x2F4054u;
    // 0x2f4054: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2f4054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4058: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x2f4058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x2f405c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F405Cu;
    {
        const bool branch_taken_0x2f405c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F405Cu;
        // 0x2f4060: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f405c) {
            ctx->pc = 0x2F40C0u;
            goto label_2f40c0;
        }
    }
    ctx->pc = 0x2F4064u;
label_2f4064:
    // 0x2f4064: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x2f4064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f4068: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x2f4068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f406c: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x2f406cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2f4070: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x2f4070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2f4074: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x2f4074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2f4078: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x2f4078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2f407c: 0x6862001f  ldl         $v0, 0x1F($v1)
    ctx->pc = 0x2f407cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f4080: 0x6c620018  ldr         $v0, 0x18($v1)
    ctx->pc = 0x2f4080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f4084: 0xb0c50007  sdl         $a1, 0x7($a2)
    ctx->pc = 0x2f4084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4088: 0xb4c50000  sdr         $a1, 0x0($a2)
    ctx->pc = 0x2f4088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f408c: 0xb0c7000f  sdl         $a3, 0xF($a2)
    ctx->pc = 0x2f408cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4090: 0xb4c70008  sdr         $a3, 0x8($a2)
    ctx->pc = 0x2f4090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4094: 0xb0c80017  sdl         $t0, 0x17($a2)
    ctx->pc = 0x2f4094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4098: 0xb4c80010  sdr         $t0, 0x10($a2)
    ctx->pc = 0x2f4098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f409c: 0xb0c2001f  sdl         $v0, 0x1F($a2)
    ctx->pc = 0x2f409cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f40a0: 0xb4c20018  sdr         $v0, 0x18($a2)
    ctx->pc = 0x2f40a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f40a4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f40a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f40a8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2f40a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2f40ac: 0x0  nop
    ctx->pc = 0x2f40acu;
    // NOP
    // 0x2f40b0: 0x1472ffec  bne         $v1, $s2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F40B0u;
    {
        const bool branch_taken_0x2f40b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x2f40b0) {
            ctx->pc = 0x2F4064u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4064;
        }
    }
    ctx->pc = 0x2F40B8u;
    // 0x2f40b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F40B8u;
    {
        const bool branch_taken_0x2f40b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F40B8u;
        // 0x2f40bc: 0x8fa20428  lw          $v0, 0x428($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f40b8) {
            ctx->pc = 0x2F40F8u;
            goto label_2f40f8;
        }
    }
    ctx->pc = 0x2F40C0u;
label_2f40c0:
    // 0x2f40c0: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2f40c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f40c4: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x2f40c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f40c8: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x2f40c8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f40cc: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x2f40ccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2f40d0: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x2f40d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2f40d4: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x2f40d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x2f40d8: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x2f40d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
    // 0x2f40dc: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x2f40dcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x2f40e0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f40e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f40e4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2f40e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2f40e8: 0x0  nop
    ctx->pc = 0x2f40e8u;
    // NOP
    // 0x2f40ec: 0x1472fff4  bne         $v1, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F40ECu;
    {
        const bool branch_taken_0x2f40ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x2f40ec) {
            ctx->pc = 0x2F40C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f40c0;
        }
    }
    ctx->pc = 0x2F40F4u;
    // 0x2f40f4: 0x8fa20428  lw          $v0, 0x428($sp)
    ctx->pc = 0x2f40f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
label_2f40f8:
    // 0x2f40f8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F40F8u;
    {
        const bool branch_taken_0x2f40f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f40f8) {
            ctx->pc = 0x2F40FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F40F8u;
            // 0x2f40fc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4100u;
            goto label_2f4100;
        }
    }
    ctx->pc = 0x2F4100u;
label_2f4100:
    // 0x2f4100: 0x8fa30424  lw          $v1, 0x424($sp)
    ctx->pc = 0x2f4100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
    // 0x2f4104: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4104u;
    {
        const bool branch_taken_0x2f4104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4104) {
            ctx->pc = 0x2F4114u;
            goto label_2f4114;
        }
    }
    ctx->pc = 0x2F410Cu;
    // 0x2f410c: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2f410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2f4110: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2f4110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2f4114:
    // 0x2f4114: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f4114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f4118: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4118u;
    {
        const bool branch_taken_0x2f4118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4118u;
        // 0x2f411c: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4118) {
            ctx->pc = 0x2F4128u;
            goto label_2f4128;
        }
    }
    ctx->pc = 0x2F4120u;
label_2f4120:
    // 0x2f4120: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f4120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f4124: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x2f4124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_2f4128:
    // 0x2f4128: 0xdfbf04c0  ld          $ra, 0x4C0($sp)
    ctx->pc = 0x2f4128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1216)));
label_2f412c:
    // 0x2f412c: 0xdfbe04b0  ld          $fp, 0x4B0($sp)
    ctx->pc = 0x2f412cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x2f4130: 0xdfb704a0  ld          $s7, 0x4A0($sp)
    ctx->pc = 0x2f4130u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x2f4134: 0xdfb60490  ld          $s6, 0x490($sp)
    ctx->pc = 0x2f4134u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x2f4138: 0xdfb50480  ld          $s5, 0x480($sp)
    ctx->pc = 0x2f4138u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x2f413c: 0xdfb40470  ld          $s4, 0x470($sp)
    ctx->pc = 0x2f413cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x2f4140: 0xdfb30460  ld          $s3, 0x460($sp)
    ctx->pc = 0x2f4140u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x2f4144: 0xdfb20450  ld          $s2, 0x450($sp)
    ctx->pc = 0x2f4144u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x2f4148: 0xdfb10440  ld          $s1, 0x440($sp)
    ctx->pc = 0x2f4148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x2f414c: 0xdfb00430  ld          $s0, 0x430($sp)
    ctx->pc = 0x2f414cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x2f4150: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4150u;
        // 0x2f4154: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4158u;
}
