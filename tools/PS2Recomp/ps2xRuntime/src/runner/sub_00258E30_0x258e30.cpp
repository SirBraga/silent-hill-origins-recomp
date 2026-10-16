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

// Function: sub_00258E30
// Address: 0x258e30 - 0x259018
void sub_00258E30_0x258e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258E30_0x258e30");
#endif

    switch (ctx->pc) {
        case 0x258e74u: goto label_258e74;
        case 0x258e7cu: goto label_258e7c;
        case 0x258e94u: goto label_258e94;
        case 0x258eacu: goto label_258eac;
        case 0x258f28u: goto label_258f28;
        case 0x258f38u: goto label_258f38;
        case 0x258f50u: goto label_258f50;
        case 0x258f60u: goto label_258f60;
        case 0x258f80u: goto label_258f80;
        case 0x258fa0u: goto label_258fa0;
        case 0x258fb0u: goto label_258fb0;
        default: break;
    }

    ctx->pc = 0x258e30u;

    // 0x258e30: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x258e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
    // 0x258e34: 0xafa50424  sw          $a1, 0x424($sp)
    ctx->pc = 0x258e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 5));
    // 0x258e38: 0xafa60428  sw          $a2, 0x428($sp)
    ctx->pc = 0x258e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1064), GPR_U32(ctx, 6));
    // 0x258e3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x258e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e40: 0x7fb004c0  sq          $s0, 0x4C0($sp)
    ctx->pc = 0x258e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 16));
    // 0x258e44: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x258e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x258e48: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x258e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
    // 0x258e4c: 0x7fb204a0  sq          $s2, 0x4A0($sp)
    ctx->pc = 0x258e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 18));
    // 0x258e50: 0x7fb30490  sq          $s3, 0x490($sp)
    ctx->pc = 0x258e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 19));
    // 0x258e54: 0x7fb40480  sq          $s4, 0x480($sp)
    ctx->pc = 0x258e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 20));
    // 0x258e58: 0x7fb50470  sq          $s5, 0x470($sp)
    ctx->pc = 0x258e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 21));
    // 0x258e5c: 0x7fb60460  sq          $s6, 0x460($sp)
    ctx->pc = 0x258e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 22));
    // 0x258e60: 0x7fb70450  sq          $s7, 0x450($sp)
    ctx->pc = 0x258e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 23));
    // 0x258e64: 0x7fbe0440  sq          $fp, 0x440($sp)
    ctx->pc = 0x258e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 30));
    // 0x258e68: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x258e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
    // 0x258e6c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x258E6Cu;
    SET_GPR_U32(ctx, 31, 0x258E74u);
    ctx->pc = 0x258E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258E6Cu;
    // 0x258e70: 0xafa40420  sw          $a0, 0x420($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x258E6Cu, 0x258E74u)) {
        return;
    }
    ctx->pc = 0x258E74u;
label_258e74:
    // 0x258e74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258E74u;
    {
        const bool branch_taken_0x258e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E74u;
        // 0x258e78: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e74) {
            ctx->pc = 0x258E84u;
            goto label_258e84;
        }
    }
    ctx->pc = 0x258E7Cu;
label_258e7c:
    // 0x258e7c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x258E7Cu;
    {
        const bool branch_taken_0x258e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E7Cu;
        // 0x258e80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e7c) {
            ctx->pc = 0x258FE8u;
            goto label_258fe8;
        }
    }
    ctx->pc = 0x258E84u;
label_258e84:
    // 0x258e84: 0x8fa40424  lw          $a0, 0x424($sp)
    ctx->pc = 0x258e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
    // 0x258e88: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x258e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x258e8c: 0xc096314  jal         func_258C50
    ctx->pc = 0x258E8Cu;
    SET_GPR_U32(ctx, 31, 0x258E94u);
    ctx->pc = 0x258E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258E8Cu;
    // 0x258e90: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258C50u, 0x258E8Cu, 0x258E94u)) {
        return;
    }
    ctx->pc = 0x258E94u;
label_258e94:
    // 0x258e94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258E94u;
    {
        const bool branch_taken_0x258e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E94u;
        // 0x258e98: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e94) {
            ctx->pc = 0x258EA4u;
            goto label_258ea4;
        }
    }
    ctx->pc = 0x258E9Cu;
    // 0x258e9c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x258e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x258ea0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x258ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_258ea4:
    // 0x258ea4: 0xc0961ba  jal         func_2586E8
    ctx->pc = 0x258EA4u;
    SET_GPR_U32(ctx, 31, 0x258EACu);
    ctx->pc = 0x258EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258EA4u;
    // 0x258ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2586E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2586E8u, 0x258EA4u, 0x258EACu)) {
        return;
    }
    ctx->pc = 0x258EACu;
label_258eac:
    // 0x258eac: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x258eacu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258eb0: 0x12e0004c  beqz        $s7, . + 4 + (0x4C << 2)
    ctx->pc = 0x258EB0u;
    {
        const bool branch_taken_0x258eb0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x258EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258EB0u;
        // 0x258eb4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258eb0) {
            ctx->pc = 0x258FE4u;
            goto label_258fe4;
        }
    }
    ctx->pc = 0x258EB8u;
    // 0x258eb8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x258eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x258ebc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x258ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x258ec0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x258ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x258ec4: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x258ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x258ec8: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x258ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
    // 0x258ecc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x258eccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x258ed0: 0x26f50010  addiu       $s5, $s7, 0x10
    ctx->pc = 0x258ed0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x258ed4: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x258ed4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x258ed8: 0xa6e20004  sh          $v0, 0x4($s7)
    ctx->pc = 0x258ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x258edc: 0x2a3a021  addu        $s4, $s5, $v1
    ctx->pc = 0x258edcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x258ee0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x258ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x258ee4: 0x8c4241a8  lw          $v0, 0x41A8($v0)
    ctx->pc = 0x258ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41A8u));
    // 0x258ee8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x258ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x258eec: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x258eecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258ef0: 0xa6e30006  sh          $v1, 0x6($s7)
    ctx->pc = 0x258ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x258ef4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x258ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x258ef8: 0xaee0000c  sw          $zero, 0xC($s7)
    ctx->pc = 0x258ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 0));
    // 0x258efc: 0xaee20008  sw          $v0, 0x8($s7)
    ctx->pc = 0x258efcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 2));
    // 0x258f00: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x258f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x258f04: 0x8c6341a8  lw          $v1, 0x41A8($v1)
    ctx->pc = 0x258f04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B41A8u));
    // 0x258f08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x258f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x258f0c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x258f0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x258f10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258f14: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x258f14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x258f18: 0x96f60004  lhu         $s6, 0x4($s7)
    ctx->pc = 0x258f18u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x258f1c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x258f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258f20: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x258F20u;
    {
        const bool branch_taken_0x258f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F20u;
        // 0x258f24: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f20) {
            ctx->pc = 0x258FE4u;
            goto label_258fe4;
        }
    }
    ctx->pc = 0x258F28u;
label_258f28:
    // 0x258f28: 0x8fa40420  lw          $a0, 0x420($sp)
    ctx->pc = 0x258f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x258f2c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x258f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x258f30: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x258F30u;
    SET_GPR_U32(ctx, 31, 0x258F38u);
    ctx->pc = 0x258F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258F30u;
    // 0x258f34: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x258F30u, 0x258F38u)) {
        return;
    }
    ctx->pc = 0x258F38u;
label_258f38:
    // 0x258f38: 0x1040ffd0  beqz        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x258F38u;
    {
        const bool branch_taken_0x258f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F38u;
        // 0x258f3c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f38) {
            ctx->pc = 0x258E7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258e7c;
        }
    }
    ctx->pc = 0x258F40u;
    // 0x258f40: 0x8fa40428  lw          $a0, 0x428($sp)
    ctx->pc = 0x258f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x258f44: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x258f44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x258f48: 0xc096068  jal         func_2581A0
    ctx->pc = 0x258F48u;
    SET_GPR_U32(ctx, 31, 0x258F50u);
    ctx->pc = 0x258F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258F48u;
    // 0x258f4c: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2581A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2581A0u, 0x258F48u, 0x258F50u)) {
        return;
    }
    ctx->pc = 0x258F50u;
label_258f50:
    // 0x258f50: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x258f50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    // 0x258f54: 0x8fa40424  lw          $a0, 0x424($sp)
    ctx->pc = 0x258f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
    // 0x258f58: 0xc096314  jal         func_258C50
    ctx->pc = 0x258F58u;
    SET_GPR_U32(ctx, 31, 0x258F60u);
    ctx->pc = 0x258F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258F58u;
    // 0x258f5c: 0xaea20008  sw          $v0, 0x8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258C50u, 0x258F58u, 0x258F60u)) {
        return;
    }
    ctx->pc = 0x258F60u;
label_258f60:
    // 0x258f60: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x258F60u;
    {
        const bool branch_taken_0x258f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F60u;
        // 0x258f64: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f60) {
            ctx->pc = 0x258FD8u;
            goto label_258fd8;
        }
    }
    ctx->pc = 0x258F68u;
    // 0x258f68: 0x8eb20004  lw          $s2, 0x4($s5)
    ctx->pc = 0x258f68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x258f6c: 0x5240001b  beql        $s2, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x258F6Cu;
    {
        const bool branch_taken_0x258f6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x258f6c) {
            ctx->pc = 0x258F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258F6Cu;
            // 0x258f70: 0x26b5000c  addiu       $s5, $s5, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258FDCu;
            goto label_258fdc;
        }
    }
    ctx->pc = 0x258F74u;
    // 0x258f74: 0x241e0100  addiu       $fp, $zero, 0x100
    ctx->pc = 0x258f74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x258f78: 0x2e420101  sltiu       $v0, $s2, 0x101
    ctx->pc = 0x258f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x258f7c: 0x0  nop
    ctx->pc = 0x258f7cu;
    // NOP
label_258f80:
    // 0x258f80: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x258f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258f84: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x258f84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18));
    // 0x258f88: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x258f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x258f8c: 0x8fa40420  lw          $a0, 0x420($sp)
    ctx->pc = 0x258f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x258f90: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x258f90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258f94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x258f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258f98: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x258F98u;
    SET_GPR_U32(ctx, 31, 0x258FA0u);
    ctx->pc = 0x258F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258F98u;
    // 0x258f9c: 0x103080  sll         $a2, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x258F98u, 0x258FA0u)) {
        return;
    }
    ctx->pc = 0x258FA0u;
label_258fa0:
    // 0x258fa0: 0x1040ffb6  beqz        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x258FA0u;
    {
        const bool branch_taken_0x258fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FA0u;
        // 0x258fa4: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fa0) {
            ctx->pc = 0x258E7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258e7c;
        }
    }
    ctx->pc = 0x258FA8u;
    // 0x258fa8: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x258FA8u;
    {
        const bool branch_taken_0x258fa8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FA8u;
        // 0x258fac: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fa8) {
            ctx->pc = 0x258FCCu;
            goto label_258fcc;
        }
    }
    ctx->pc = 0x258FB0u;
label_258fb0:
    // 0x258fb0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x258fb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x258fb4: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x258fb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258fb8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x258fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x258fbc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x258fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x258fc0: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x258fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x258fc4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x258FC4u;
    {
        const bool branch_taken_0x258fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x258FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FC4u;
        // 0x258fc8: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fc4) {
            ctx->pc = 0x258FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258fb0;
        }
    }
    ctx->pc = 0x258FCCu;
label_258fcc:
    // 0x258fcc: 0x1640ffec  bnez        $s2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x258FCCu;
    {
        const bool branch_taken_0x258fcc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x258FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FCCu;
        // 0x258fd0: 0x2e420101  sltiu       $v0, $s2, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fcc) {
            ctx->pc = 0x258F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258f80;
        }
    }
    ctx->pc = 0x258FD4u;
    // 0x258fd4: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x258fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_258fd8:
    // 0x258fd8: 0x26b5000c  addiu       $s5, $s5, 0xC
    ctx->pc = 0x258fd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_258fdc:
    // 0x258fdc: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x258FDCu;
    {
        const bool branch_taken_0x258fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FDCu;
        // 0x258fe0: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fdc) {
            ctx->pc = 0x258F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258f28;
        }
    }
    ctx->pc = 0x258FE4u;
label_258fe4:
    // 0x258fe4: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x258fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_258fe8:
    // 0x258fe8: 0x7bb004c0  lq          $s0, 0x4C0($sp)
    ctx->pc = 0x258fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x258fec: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x258fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x258ff0: 0x7bb204a0  lq          $s2, 0x4A0($sp)
    ctx->pc = 0x258ff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x258ff4: 0x7bb30490  lq          $s3, 0x490($sp)
    ctx->pc = 0x258ff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x258ff8: 0x7bb40480  lq          $s4, 0x480($sp)
    ctx->pc = 0x258ff8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x258ffc: 0x7bb50470  lq          $s5, 0x470($sp)
    ctx->pc = 0x258ffcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x259000: 0x7bb60460  lq          $s6, 0x460($sp)
    ctx->pc = 0x259000u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x259004: 0x7bb70450  lq          $s7, 0x450($sp)
    ctx->pc = 0x259004u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x259008: 0x7bbe0440  lq          $fp, 0x440($sp)
    ctx->pc = 0x259008u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x25900c: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x25900cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x259010: 0x3e00008  jr          $ra
    ctx->pc = 0x259010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259010u;
        // 0x259014: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259018u;
}
