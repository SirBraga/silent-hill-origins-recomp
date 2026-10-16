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

// Function: sub_00111D10
// Address: 0x111d10 - 0x112018
void sub_00111D10_0x111d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111D10_0x111d10");
#endif

    switch (ctx->pc) {
        case 0x111d5cu: goto label_111d5c;
        case 0x111d88u: goto label_111d88;
        case 0x111dacu: goto label_111dac;
        case 0x111dc4u: goto label_111dc4;
        case 0x111decu: goto label_111dec;
        case 0x111e0cu: goto label_111e0c;
        case 0x111e2cu: goto label_111e2c;
        case 0x111e4cu: goto label_111e4c;
        case 0x111e6cu: goto label_111e6c;
        case 0x111e88u: goto label_111e88;
        case 0x111ea4u: goto label_111ea4;
        case 0x111ebcu: goto label_111ebc;
        case 0x111ed4u: goto label_111ed4;
        case 0x111eecu: goto label_111eec;
        case 0x111f04u: goto label_111f04;
        case 0x111f1cu: goto label_111f1c;
        case 0x111f34u: goto label_111f34;
        case 0x111f4cu: goto label_111f4c;
        case 0x111f60u: goto label_111f60;
        case 0x111f74u: goto label_111f74;
        case 0x111f8cu: goto label_111f8c;
        case 0x111fa4u: goto label_111fa4;
        case 0x111fb8u: goto label_111fb8;
        case 0x111fd0u: goto label_111fd0;
        default: break;
    }

    ctx->pc = 0x111d10u;

    // 0x111d10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x111d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x111d14: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x111d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x111d18: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x111d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x111d1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x111d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111d20: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x111d20u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d24: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x111d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x111d28: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x111d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x111d2c: 0x2442aaf0  addiu       $v0, $v0, -0x5510
    ctx->pc = 0x111d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x111d30: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x111d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x111d34: 0x27c40158  addiu       $a0, $fp, 0x158
    ctx->pc = 0x111d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 344));
    // 0x111d38: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x111d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x111d3c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x111d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x111d40: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x111d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x111d44: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x111d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x111d48: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x111d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x111d4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111d50: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x111d50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x111d54: 0xc04ef7a  jal         func_13BDE8
    ctx->pc = 0x111D54u;
    SET_GPR_U32(ctx, 31, 0x111D5Cu);
    ctx->pc = 0x111D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111D54u;
    // 0x111d58: 0xafc20004  sw          $v0, 0x4($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BDE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BDE8u, 0x111D54u, 0x111D5Cu)) {
        return;
    }
    ctx->pc = 0x111D5Cu;
label_111d5c:
    // 0x111d5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x111d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111d60: 0xafc001a8  sw          $zero, 0x1A8($fp)
    ctx->pc = 0x111d60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 424), GPR_U32(ctx, 0));
    // 0x111d64: 0xafc30008  sw          $v1, 0x8($fp)
    ctx->pc = 0x111d64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
    // 0x111d68: 0x27c20154  addiu       $v0, $fp, 0x154
    ctx->pc = 0x111d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 340));
    // 0x111d6c: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x111d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
    // 0x111d70: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x111d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x111d74: 0xa3c00013  sb          $zero, 0x13($fp)
    ctx->pc = 0x111d74u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x111d78: 0xa3c00012  sb          $zero, 0x12($fp)
    ctx->pc = 0x111d78u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x111d7c: 0xa3c00011  sb          $zero, 0x11($fp)
    ctx->pc = 0x111d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x111d80: 0xa3c00010  sb          $zero, 0x10($fp)
    ctx->pc = 0x111d80u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x111d84: 0xafc00014  sw          $zero, 0x14($fp)
    ctx->pc = 0x111d84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 0));
label_111d88:
    // 0x111d88: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x111d88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x111d8c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x111d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x111d90: 0x0  nop
    ctx->pc = 0x111d90u;
    // NOP
    // 0x111d94: 0x0  nop
    ctx->pc = 0x111d94u;
    // NOP
    // 0x111d98: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x111D98u;
    {
        const bool branch_taken_0x111d98 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x111D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D98u;
        // 0x111d9c: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d98) {
            ctx->pc = 0x111D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111d88;
        }
    }
    ctx->pc = 0x111DA0u;
    // 0x111da0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x111da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111da4: 0xc044eae  jal         func_113AB8
    ctx->pc = 0x111DA4u;
    SET_GPR_U32(ctx, 31, 0x111DACu);
    ctx->pc = 0x111DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111DA4u;
    // 0x111da8: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113AB8u, 0x111DA4u, 0x111DACu)) {
        return;
    }
    ctx->pc = 0x111DACu;
label_111dac:
    // 0x111dac: 0x3c16006b  lui         $s6, 0x6B
    ctx->pc = 0x111dacu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)107 << 16));
    // 0x111db0: 0xafc0009c  sw          $zero, 0x9C($fp)
    ctx->pc = 0x111db0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 156), GPR_U32(ctx, 0));
    // 0x111db4: 0x27c400b8  addiu       $a0, $fp, 0xB8
    ctx->pc = 0x111db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 184));
    // 0x111db8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111dbc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x111DBCu;
    SET_GPR_U32(ctx, 31, 0x111DC4u);
    ctx->pc = 0x111DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111DBCu;
    // 0x111dc0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x111DBCu, 0x111DC4u)) {
        return;
    }
    ctx->pc = 0x111DC4u;
label_111dc4:
    // 0x111dc4: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x111dc4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x111dc8: 0x26d644c8  addiu       $s6, $s6, 0x44C8
    ctx->pc = 0x111dc8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 17608));
    // 0x111dcc: 0x26b5a950  addiu       $s5, $s5, -0x56B0
    ctx->pc = 0x111dccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945104));
    // 0x111dd0: 0xafd700c4  sw          $s7, 0xC4($fp)
    ctx->pc = 0x111dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 196), GPR_U32(ctx, 23));
    // 0x111dd4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x111dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x111dd8: 0x24a5a930  addiu       $a1, $a1, -0x56D0
    ctx->pc = 0x111dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945072));
    // 0x111ddc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x111ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111de0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x111de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111de4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x111DE4u;
    SET_GPR_U32(ctx, 31, 0x111DECu);
    ctx->pc = 0x111DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111DE4u;
    // 0x111de8: 0x3c13006b  lui         $s3, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x111DE4u, 0x111DECu)) {
        return;
    }
    ctx->pc = 0x111DECu;
label_111dec:
    // 0x111dec: 0x3c120069  lui         $s2, 0x69
    ctx->pc = 0x111decu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)105 << 16));
    // 0x111df0: 0x267344d0  addiu       $s3, $s3, 0x44D0
    ctx->pc = 0x111df0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 17616));
    // 0x111df4: 0x2652a978  addiu       $s2, $s2, -0x5688
    ctx->pc = 0x111df4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945144));
    // 0x111df8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x111df8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x111dfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x111dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e00: 0x24a5a968  addiu       $a1, $a1, -0x5698
    ctx->pc = 0x111e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945128));
    // 0x111e04: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x111E04u;
    SET_GPR_U32(ctx, 31, 0x111E0Cu);
    ctx->pc = 0x111E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E04u;
    // 0x111e08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x111E04u, 0x111E0Cu)) {
        return;
    }
    ctx->pc = 0x111E0Cu;
label_111e0c:
    // 0x111e0c: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x111e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x111e10: 0x2610a9a0  addiu       $s0, $s0, -0x5660
    ctx->pc = 0x111e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945184));
    // 0x111e14: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111e18: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x111e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x111e1c: 0x248444e8  addiu       $a0, $a0, 0x44E8
    ctx->pc = 0x111e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17640));
    // 0x111e20: 0x24a5a988  addiu       $a1, $a1, -0x5678
    ctx->pc = 0x111e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945160));
    // 0x111e24: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x111E24u;
    SET_GPR_U32(ctx, 31, 0x111E2Cu);
    ctx->pc = 0x111E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E24u;
    // 0x111e28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x111E24u, 0x111E2Cu)) {
        return;
    }
    ctx->pc = 0x111E2Cu;
label_111e2c:
    // 0x111e2c: 0x3c14006b  lui         $s4, 0x6B
    ctx->pc = 0x111e2cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)107 << 16));
    // 0x111e30: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111e34: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x111e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x111e38: 0x248444f0  addiu       $a0, $a0, 0x44F0
    ctx->pc = 0x111e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17648));
    // 0x111e3c: 0x24a5a9b0  addiu       $a1, $a1, -0x5650
    ctx->pc = 0x111e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945200));
    // 0x111e40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x111e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e44: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x111E44u;
    SET_GPR_U32(ctx, 31, 0x111E4Cu);
    ctx->pc = 0x111E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E44u;
    // 0x111e48: 0x26944510  addiu       $s4, $s4, 0x4510 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 17680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x111E44u, 0x111E4Cu)) {
        return;
    }
    ctx->pc = 0x111E4Cu;
label_111e4c:
    // 0x111e4c: 0x3c110069  lui         $s1, 0x69
    ctx->pc = 0x111e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)105 << 16));
    // 0x111e50: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111e54: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x111e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x111e58: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x111e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e5c: 0x248444f8  addiu       $a0, $a0, 0x44F8
    ctx->pc = 0x111e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17656));
    // 0x111e60: 0x24a5a9c8  addiu       $a1, $a1, -0x5638
    ctx->pc = 0x111e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945224));
    // 0x111e64: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x111E64u;
    SET_GPR_U32(ctx, 31, 0x111E6Cu);
    ctx->pc = 0x111E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E64u;
    // 0x111e68: 0x2631aa58  addiu       $s1, $s1, -0x55A8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x111E64u, 0x111E6Cu)) {
        return;
    }
    ctx->pc = 0x111E6Cu;
label_111e6c:
    // 0x111e6c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111e70: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x111e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x111e74: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x111e74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x111e78: 0x24844500  addiu       $a0, $a0, 0x4500
    ctx->pc = 0x111e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17664));
    // 0x111e7c: 0x24a5a9e0  addiu       $a1, $a1, -0x5620
    ctx->pc = 0x111e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945248));
    // 0x111e80: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x111E80u;
    SET_GPR_U32(ctx, 31, 0x111E88u);
    ctx->pc = 0x111E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E80u;
    // 0x111e84: 0x24c6a9f0  addiu       $a2, $a2, -0x5610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x111E80u, 0x111E88u)) {
        return;
    }
    ctx->pc = 0x111E88u;
label_111e88:
    // 0x111e88: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x111e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x111e8c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x111e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x111e90: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x111e90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x111e94: 0x24a5aa10  addiu       $a1, $a1, -0x55F0
    ctx->pc = 0x111e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945296));
    // 0x111e98: 0x24c6aa20  addiu       $a2, $a2, -0x55E0
    ctx->pc = 0x111e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945312));
    // 0x111e9c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x111E9Cu;
    SET_GPR_U32(ctx, 31, 0x111EA4u);
    ctx->pc = 0x111EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E9Cu;
    // 0x111ea0: 0x24844508  addiu       $a0, $a0, 0x4508 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x111E9Cu, 0x111EA4u)) {
        return;
    }
    ctx->pc = 0x111EA4u;
label_111ea4:
    // 0x111ea4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x111ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x111ea8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x111ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x111eac: 0x24a5aa28  addiu       $a1, $a1, -0x55D8
    ctx->pc = 0x111eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945320));
    // 0x111eb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x111eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111eb4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x111EB4u;
    SET_GPR_U32(ctx, 31, 0x111EBCu);
    ctx->pc = 0x111EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EB4u;
    // 0x111eb8: 0x24c6aa40  addiu       $a2, $a2, -0x55C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x111EB4u, 0x111EBCu)) {
        return;
    }
    ctx->pc = 0x111EBCu;
label_111ebc:
    // 0x111ebc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x111ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x111ec0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x111ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ec4: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x111ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    // 0x111ec8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ecc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x111ECCu;
    SET_GPR_U32(ctx, 31, 0x111ED4u);
    ctx->pc = 0x111ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111ECCu;
    // 0x111ed0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x111ECCu, 0x111ED4u)) {
        return;
    }
    ctx->pc = 0x111ED4u;
label_111ed4:
    // 0x111ed4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x111ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x111ed8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x111ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111edc: 0x24a5f8d0  addiu       $a1, $a1, -0x730
    ctx->pc = 0x111edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965456));
    // 0x111ee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ee4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x111EE4u;
    SET_GPR_U32(ctx, 31, 0x111EECu);
    ctx->pc = 0x111EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EE4u;
    // 0x111ee8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x111EE4u, 0x111EECu)) {
        return;
    }
    ctx->pc = 0x111EECu;
label_111eec:
    // 0x111eec: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x111eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x111ef0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x111ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ef4: 0x24a58988  addiu       $a1, $a1, -0x7678
    ctx->pc = 0x111ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936968));
    // 0x111ef8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111efc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x111EFCu;
    SET_GPR_U32(ctx, 31, 0x111F04u);
    ctx->pc = 0x111F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EFCu;
    // 0x111f00: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x111EFCu, 0x111F04u)) {
        return;
    }
    ctx->pc = 0x111F04u;
label_111f04:
    // 0x111f04: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x111f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x111f08: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x111f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f0c: 0x24a58990  addiu       $a1, $a1, -0x7670
    ctx->pc = 0x111f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936976));
    // 0x111f10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f14: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x111F14u;
    SET_GPR_U32(ctx, 31, 0x111F1Cu);
    ctx->pc = 0x111F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F14u;
    // 0x111f18: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x111F14u, 0x111F1Cu)) {
        return;
    }
    ctx->pc = 0x111F1Cu;
label_111f1c:
    // 0x111f1c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x111f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x111f20: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x111f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f24: 0x24a58980  addiu       $a1, $a1, -0x7680
    ctx->pc = 0x111f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936960));
    // 0x111f28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x111f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f2c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x111F2Cu;
    SET_GPR_U32(ctx, 31, 0x111F34u);
    ctx->pc = 0x111F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F2Cu;
    // 0x111f30: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x111F2Cu, 0x111F34u)) {
        return;
    }
    ctx->pc = 0x111F34u;
label_111f34:
    // 0x111f34: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x111f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x111f38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x111f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f3c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x111f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f40: 0x24a58978  addiu       $a1, $a1, -0x7688
    ctx->pc = 0x111f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936952));
    // 0x111f44: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x111F44u;
    SET_GPR_U32(ctx, 31, 0x111F4Cu);
    ctx->pc = 0x111F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F44u;
    // 0x111f48: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x111F44u, 0x111F4Cu)) {
        return;
    }
    ctx->pc = 0x111F4Cu;
label_111f4c:
    // 0x111f4c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x111f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f50: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x111f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f54: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x111f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f58: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x111F58u;
    SET_GPR_U32(ctx, 31, 0x111F60u);
    ctx->pc = 0x111F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F58u;
    // 0x111f5c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x111F58u, 0x111F60u)) {
        return;
    }
    ctx->pc = 0x111F60u;
label_111f60:
    // 0x111f60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x111f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f64: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x111f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f68: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x111f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f6c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x111F6Cu;
    SET_GPR_U32(ctx, 31, 0x111F74u);
    ctx->pc = 0x111F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F6Cu;
    // 0x111f70: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x111F6Cu, 0x111F74u)) {
        return;
    }
    ctx->pc = 0x111F74u;
label_111f74:
    // 0x111f74: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x111f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x111f78: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x111f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f7c: 0x24a544d8  addiu       $a1, $a1, 0x44D8
    ctx->pc = 0x111f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17624));
    // 0x111f80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f84: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x111F84u;
    SET_GPR_U32(ctx, 31, 0x111F8Cu);
    ctx->pc = 0x111F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F84u;
    // 0x111f88: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x111F84u, 0x111F8Cu)) {
        return;
    }
    ctx->pc = 0x111F8Cu;
label_111f8c:
    // 0x111f8c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x111f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x111f90: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x111f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f94: 0x24a544e0  addiu       $a1, $a1, 0x44E0
    ctx->pc = 0x111f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17632));
    // 0x111f98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f9c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x111F9Cu;
    SET_GPR_U32(ctx, 31, 0x111FA4u);
    ctx->pc = 0x111FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F9Cu;
    // 0x111fa0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x111F9Cu, 0x111FA4u)) {
        return;
    }
    ctx->pc = 0x111FA4u;
label_111fa4:
    // 0x111fa4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x111fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fa8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x111fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fb0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x111FB0u;
    SET_GPR_U32(ctx, 31, 0x111FB8u);
    ctx->pc = 0x111FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111FB0u;
    // 0x111fb4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x111FB0u, 0x111FB8u)) {
        return;
    }
    ctx->pc = 0x111FB8u;
label_111fb8:
    // 0x111fb8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x111fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x111fbc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x111fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fc0: 0x24a586c8  addiu       $a1, $a1, -0x7938
    ctx->pc = 0x111fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936264));
    // 0x111fc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fc8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x111FC8u;
    SET_GPR_U32(ctx, 31, 0x111FD0u);
    ctx->pc = 0x111FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111FC8u;
    // 0x111fcc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x111FC8u, 0x111FD0u)) {
        return;
    }
    ctx->pc = 0x111FD0u;
label_111fd0:
    // 0x111fd0: 0xafd701a0  sw          $s7, 0x1A0($fp)
    ctx->pc = 0x111fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 416), GPR_U32(ctx, 23));
    // 0x111fd4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x111fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fd8: 0xafc00194  sw          $zero, 0x194($fp)
    ctx->pc = 0x111fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 404), GPR_U32(ctx, 0));
    // 0x111fdc: 0xafc00198  sw          $zero, 0x198($fp)
    ctx->pc = 0x111fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 408), GPR_U32(ctx, 0));
    // 0x111fe0: 0xafc0019c  sw          $zero, 0x19C($fp)
    ctx->pc = 0x111fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 412), GPR_U32(ctx, 0));
    // 0x111fe4: 0xafc001a4  sw          $zero, 0x1A4($fp)
    ctx->pc = 0x111fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 420), GPR_U32(ctx, 0));
    // 0x111fe8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x111fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x111fec: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x111fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x111ff0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x111ff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x111ff4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x111ff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x111ff8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x111ff8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111ffc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x111ffcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112000: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x112000u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112004: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x112004u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112008: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x112008u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11200c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11200cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112010: 0x3e00008  jr          $ra
    ctx->pc = 0x112010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112010u;
        // 0x112014: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112018u;
}
