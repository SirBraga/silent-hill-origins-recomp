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

// Function: sub_00177E10
// Address: 0x177e10 - 0x178438
void sub_00177E10_0x177e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177E10_0x177e10");
#endif

    switch (ctx->pc) {
        case 0x177e54u: goto label_177e54;
        case 0x177e88u: goto label_177e88;
        case 0x177ebcu: goto label_177ebc;
        case 0x177ed8u: goto label_177ed8;
        case 0x178154u: goto label_178154;
        case 0x178178u: goto label_178178;
        case 0x178190u: goto label_178190;
        case 0x1781b4u: goto label_1781b4;
        case 0x1781c8u: goto label_1781c8;
        case 0x1781e8u: goto label_1781e8;
        case 0x178200u: goto label_178200;
        case 0x178210u: goto label_178210;
        case 0x178224u: goto label_178224;
        case 0x17826cu: goto label_17826c;
        case 0x178298u: goto label_178298;
        case 0x1782d4u: goto label_1782d4;
        case 0x178300u: goto label_178300;
        case 0x178338u: goto label_178338;
        case 0x178350u: goto label_178350;
        case 0x178368u: goto label_178368;
        case 0x178380u: goto label_178380;
        case 0x178398u: goto label_178398;
        case 0x1783a4u: goto label_1783a4;
        case 0x1783b0u: goto label_1783b0;
        case 0x1783c4u: goto label_1783c4;
        case 0x1783d4u: goto label_1783d4;
        default: break;
    }

    ctx->pc = 0x177e10u;

    // 0x177e10: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x177e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x177e14: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x177e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x177e18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x177e18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e1c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x177e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x177e20: 0x2642005c  addiu       $v0, $s2, 0x5C
    ctx->pc = 0x177e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x177e24: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x177e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x177e28: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x177e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x177e2c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x177e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x177e30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x177e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e34: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x177e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x177e38: 0x2657006c  addiu       $s7, $s2, 0x6C
    ctx->pc = 0x177e38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x177e3c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x177e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x177e40: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x177e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x177e44: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x177e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x177e48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x177e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x177e4c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x177E4Cu;
    SET_GPR_U32(ctx, 31, 0x177E54u);
    ctx->pc = 0x177E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E4Cu;
    // 0x177e50: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x177E4Cu, 0x177E54u)) {
        return;
    }
    ctx->pc = 0x177E54u;
label_177e54:
    // 0x177e54: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x177e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x177e58: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x177e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x177e5c: 0x24636968  addiu       $v1, $v1, 0x6968
    ctx->pc = 0x177e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26984));
    // 0x177e60: 0x24426948  addiu       $v0, $v0, 0x6948
    ctx->pc = 0x177e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26952));
    // 0x177e64: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x177e64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x177e68: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x177e68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x177e6c: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x177e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x177e70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x177e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e74: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x177e74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x177e78: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x177e78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e7c: 0xae4000c8  sw          $zero, 0xC8($s2)
    ctx->pc = 0x177e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
    // 0x177e80: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x177e80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    // 0x177e84: 0xae4000c4  sw          $zero, 0xC4($s2)
    ctx->pc = 0x177e84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
label_177e88:
    // 0x177e88: 0xac60ffec  sw          $zero, -0x14($v1)
    ctx->pc = 0x177e88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967276), GPR_U32(ctx, 0));
    // 0x177e8c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x177e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x177e90: 0xac60fff0  sw          $zero, -0x10($v1)
    ctx->pc = 0x177e90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_U32(ctx, 0));
    // 0x177e94: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x177e94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x177e98: 0xac60fff4  sw          $zero, -0xC($v1)
    ctx->pc = 0x177e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 0));
    // 0x177e9c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x177e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x177ea0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x177EA0u;
    {
        const bool branch_taken_0x177ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177EA0u;
        // 0x177ea4: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ea0) {
            ctx->pc = 0x177E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177e88;
        }
    }
    ctx->pc = 0x177EA8u;
    // 0x177ea8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x177ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x177eac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x177eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177eb0: 0x8c46f85c  lw          $a2, -0x7A4($v0)
    ctx->pc = 0x177eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF85Cu));
    // 0x177eb4: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x177EB4u;
    SET_GPR_U32(ctx, 31, 0x177EBCu);
    ctx->pc = 0x177EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177EB4u;
    // 0x177eb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x177EB4u, 0x177EBCu)) {
        return;
    }
    ctx->pc = 0x177EBCu;
label_177ebc:
    // 0x177ebc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x177ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177ec0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x177ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x177ec4: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x177EC4u;
    {
        const bool branch_taken_0x177ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177EC4u;
        // 0x177ec8: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ec4) {
            ctx->pc = 0x178168u;
            goto label_178168;
        }
    }
    ctx->pc = 0x177ECCu;
    // 0x177ecc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177ed0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x177ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x177ed4: 0x0  nop
    ctx->pc = 0x177ed4u;
    // NOP
label_177ed8:
    // 0x177ed8: 0x2c83001b  sltiu       $v1, $a0, 0x1B
    ctx->pc = 0x177ed8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x177edc: 0x10600096  beqz        $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x177EDCu;
    {
        const bool branch_taken_0x177edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x177EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177EDCu;
        // 0x177ee0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177edc) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x177EE4u;
    // 0x177ee4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x177ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x177ee8: 0x24426890  addiu       $v0, $v0, 0x6890
    ctx->pc = 0x177ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26768));
    // 0x177eec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x177eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x177ef0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x177ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x177ef4: 0x800008  jr          $a0
    ctx->pc = 0x177EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177EFCu: goto label_177efc;
            case 0x177F0Cu: goto label_177f0c;
            case 0x177F1Cu: goto label_177f1c;
            case 0x177F40u: goto label_177f40;
            case 0x177F64u: goto label_177f64;
            case 0x177F74u: goto label_177f74;
            case 0x177F84u: goto label_177f84;
            case 0x177F98u: goto label_177f98;
            case 0x177FA8u: goto label_177fa8;
            case 0x177FBCu: goto label_177fbc;
            case 0x177FCCu: goto label_177fcc;
            case 0x177FDCu: goto label_177fdc;
            case 0x178000u: goto label_178000;
            case 0x178024u: goto label_178024;
            case 0x178034u: goto label_178034;
            case 0x178044u: goto label_178044;
            case 0x178058u: goto label_178058;
            case 0x178068u: goto label_178068;
            case 0x17807Cu: goto label_17807c;
            case 0x17808Cu: goto label_17808c;
            case 0x17809Cu: goto label_17809c;
            case 0x1780C0u: goto label_1780c0;
            case 0x1780E4u: goto label_1780e4;
            case 0x1780F4u: goto label_1780f4;
            case 0x178104u: goto label_178104;
            case 0x178118u: goto label_178118;
            case 0x178128u: goto label_178128;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177EF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x177EFCu;
label_177efc:
    // 0x177efc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177f00: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x177f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x177f04: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x177F04u;
    {
        const bool branch_taken_0x177f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F04u;
        // 0x177f08: 0xae430060  sw          $v1, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f04) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x177F0Cu;
label_177f0c:
    // 0x177f0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177f10: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x177f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x177f14: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x177F14u;
    {
        const bool branch_taken_0x177f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F14u;
        // 0x177f18: 0xae42005c  sw          $v0, 0x5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f14) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x177F1Cu;
label_177f1c:
    // 0x177f1c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177f20: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x177f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x177f24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x177f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x177f28: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x177f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177f2c: 0x0  nop
    ctx->pc = 0x177f2cu;
    // NOP
    // 0x177f30: 0x0  nop
    ctx->pc = 0x177f30u;
    // NOP
    // 0x177f34: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x177f34u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x177f38: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x177F38u;
    {
        const bool branch_taken_0x177f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F38u;
        // 0x177f3c: 0xe6400048  swc1        $f0, 0x48($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f38) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x177F40u;
label_177f40:
    // 0x177f40: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177f44: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x177f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x177f48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x177f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x177f4c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x177f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177f50: 0x0  nop
    ctx->pc = 0x177f50u;
    // NOP
    // 0x177f54: 0x0  nop
    ctx->pc = 0x177f54u;
    // NOP
    // 0x177f58: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x177f58u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x177f5c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x177F5Cu;
    {
        const bool branch_taken_0x177f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F5Cu;
        // 0x177f60: 0xe640004c  swc1        $f0, 0x4C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f5c) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x177F64u;
label_177f64:
    // 0x177f64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177f68: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x177f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177f6c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x177F6Cu;
    {
        const bool branch_taken_0x177f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F6Cu;
        // 0x177f70: 0xe6400050  swc1        $f0, 0x50($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f6c) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x177F74u;
label_177f74:
    // 0x177f74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177f78: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x177f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177f7c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x177F7Cu;
    {
        const bool branch_taken_0x177f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F7Cu;
        // 0x177f80: 0xe6400054  swc1        $f0, 0x54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f7c) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x177F84u;
label_177f84:
    // 0x177f84: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x177f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177f88: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x177f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x177f8c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x177f8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x177f90: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x177F90u;
    {
        const bool branch_taken_0x177f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F90u;
        // 0x177f94: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f90) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x177F98u;
label_177f98:
    // 0x177f98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177f9c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x177f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x177fa0: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x177FA0u;
    {
        const bool branch_taken_0x177fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FA0u;
        // 0x177fa4: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fa0) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x177FA8u;
label_177fa8:
    // 0x177fa8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x177fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177fac: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x177facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x177fb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x177fb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x177fb4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x177FB4u;
    {
        const bool branch_taken_0x177fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FB4u;
        // 0x177fb8: 0xae420068  sw          $v0, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fb4) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x177FBCu;
label_177fbc:
    // 0x177fbc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177fc0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x177fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x177fc4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x177FC4u;
    {
        const bool branch_taken_0x177fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FC4u;
        // 0x177fc8: 0xae430088  sw          $v1, 0x88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fc4) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x177FCCu;
label_177fcc:
    // 0x177fcc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177fd0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x177fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x177fd4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x177FD4u;
    {
        const bool branch_taken_0x177fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FD4u;
        // 0x177fd8: 0xae420084  sw          $v0, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fd4) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x177FDCu;
label_177fdc:
    // 0x177fdc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177fe0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x177fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x177fe4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x177fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x177fe8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x177fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177fec: 0x0  nop
    ctx->pc = 0x177fecu;
    // NOP
    // 0x177ff0: 0x0  nop
    ctx->pc = 0x177ff0u;
    // NOP
    // 0x177ff4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x177ff4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x177ff8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x177FF8u;
    {
        const bool branch_taken_0x177ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FF8u;
        // 0x177ffc: 0xe6400070  swc1        $f0, 0x70($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ff8) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x178000u;
label_178000:
    // 0x178000: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x178000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178004: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x178004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x178008: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x178008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17800c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178010: 0x0  nop
    ctx->pc = 0x178010u;
    // NOP
    // 0x178014: 0x0  nop
    ctx->pc = 0x178014u;
    // NOP
    // 0x178018: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x178018u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x17801c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x17801Cu;
    {
        const bool branch_taken_0x17801c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17801Cu;
        // 0x178020: 0xe6400074  swc1        $f0, 0x74($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17801c) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x178024u;
label_178024:
    // 0x178024: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x178024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178028: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x178028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17802c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x17802Cu;
    {
        const bool branch_taken_0x17802c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17802Cu;
        // 0x178030: 0xe6400078  swc1        $f0, 0x78($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17802c) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x178034u;
label_178034:
    // 0x178034: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x178034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178038: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x178038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17803c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x17803Cu;
    {
        const bool branch_taken_0x17803c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17803Cu;
        // 0x178040: 0xe640007c  swc1        $f0, 0x7C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17803c) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x178044u;
label_178044:
    // 0x178044: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x178044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178048: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x178048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17804c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17804cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x178050: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x178050u;
    {
        const bool branch_taken_0x178050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178050u;
        // 0x178054: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178050) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x178058u;
label_178058:
    // 0x178058: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x178058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17805c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x17805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x178060: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x178060u;
    {
        const bool branch_taken_0x178060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178060u;
        // 0x178064: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178060) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x178068u;
label_178068:
    // 0x178068: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x178068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17806c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x17806cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x178070: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x178070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x178074: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x178074u;
    {
        const bool branch_taken_0x178074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178074u;
        // 0x178078: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178074) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x17807Cu;
label_17807c:
    // 0x17807c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178080: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x178080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x178084: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x178084u;
    {
        const bool branch_taken_0x178084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178084u;
        // 0x178088: 0xae4300b0  sw          $v1, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178084) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x17808Cu;
label_17808c:
    // 0x17808c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178090: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x178090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x178094: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x178094u;
    {
        const bool branch_taken_0x178094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178094u;
        // 0x178098: 0xae4200ac  sw          $v0, 0xAC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178094) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x17809Cu;
label_17809c:
    // 0x17809c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17809cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1780a0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1780a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1780a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1780a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1780a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1780a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1780ac: 0x0  nop
    ctx->pc = 0x1780acu;
    // NOP
    // 0x1780b0: 0x0  nop
    ctx->pc = 0x1780b0u;
    // NOP
    // 0x1780b4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1780b4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1780b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1780B8u;
    {
        const bool branch_taken_0x1780b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1780BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1780B8u;
        // 0x1780bc: 0xe6400098  swc1        $f0, 0x98($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1780b8) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x1780C0u;
label_1780c0:
    // 0x1780c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1780c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1780c4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1780c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1780c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1780c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1780cc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1780ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1780d0: 0x0  nop
    ctx->pc = 0x1780d0u;
    // NOP
    // 0x1780d4: 0x0  nop
    ctx->pc = 0x1780d4u;
    // NOP
    // 0x1780d8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1780d8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1780dc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1780DCu;
    {
        const bool branch_taken_0x1780dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1780E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1780DCu;
        // 0x1780e0: 0xe640009c  swc1        $f0, 0x9C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1780dc) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x1780E4u;
label_1780e4:
    // 0x1780e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1780e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1780e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1780e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1780ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1780ECu;
    {
        const bool branch_taken_0x1780ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1780F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1780ECu;
        // 0x1780f0: 0xe64000a0  swc1        $f0, 0xA0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1780ec) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x1780F4u;
label_1780f4:
    // 0x1780f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1780f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1780f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1780f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1780fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1780FCu;
    {
        const bool branch_taken_0x1780fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1780FCu;
        // 0x178100: 0xe64000a4  swc1        $f0, 0xA4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1780fc) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x178104u;
label_178104:
    // 0x178104: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x178104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178108: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x178108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17810c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17810cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x178110: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x178110u;
    {
        const bool branch_taken_0x178110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178110u;
        // 0x178114: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178110) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x178118u;
label_178118:
    // 0x178118: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x178118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17811c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x17811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x178120: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x178120u;
    {
        const bool branch_taken_0x178120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178120u;
        // 0x178124: 0xae4200a8  sw          $v0, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178120) {
            ctx->pc = 0x178138u;
            goto label_178138;
        }
    }
    ctx->pc = 0x178128u;
label_178128:
    // 0x178128: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x178128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17812c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x17812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x178130: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x178130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x178134: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x178134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
label_178138:
    // 0x178138: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x178138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17813c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17813cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178140: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x178140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178144: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x178144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178148: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x178148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17814c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x17814Cu;
    SET_GPR_U32(ctx, 31, 0x178154u);
    ctx->pc = 0x178150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17814Cu;
    // 0x178150: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x17814Cu, 0x178154u)) {
        return;
    }
    ctx->pc = 0x178154u;
label_178154:
    // 0x178154: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x178154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178158: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17815c: 0x5460ff5e  bnel        $v1, $zero, . + 4 + (-0xA2 << 2)
    ctx->pc = 0x17815Cu;
    {
        const bool branch_taken_0x17815c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17815c) {
            ctx->pc = 0x178160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17815Cu;
            // 0x178160: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177ed8;
        }
    }
    ctx->pc = 0x178164u;
    // 0x178164: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x178164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_178168:
    // 0x178168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17816c: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x17816cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
    // 0x178170: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x178170u;
    SET_GPR_U32(ctx, 31, 0x178178u);
    ctx->pc = 0x178174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178170u;
    // 0x178174: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x178170u, 0x178178u)) {
        return;
    }
    ctx->pc = 0x178178u;
label_178178:
    // 0x178178: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x178178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17817c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17817cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178180: 0x50400064  beql        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x178180u;
    {
        const bool branch_taken_0x178180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178180) {
            ctx->pc = 0x178184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178180u;
            // 0x178184: 0x8e420044  lw          $v0, 0x44($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178314u;
            goto label_178314;
        }
    }
    ctx->pc = 0x178188u;
    // 0x178188: 0x3c1e0069  lui         $fp, 0x69
    ctx->pc = 0x178188u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)105 << 16));
    // 0x17818c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17818cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_178190:
    // 0x178190: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x178190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x178194: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x178194u;
    {
        const bool branch_taken_0x178194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178194u;
        // 0x178198: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178194) {
            ctx->pc = 0x1782E8u;
            goto label_1782e8;
        }
    }
    ctx->pc = 0x17819Cu;
    // 0x17819c: 0x24950008  addiu       $s5, $a0, 0x8
    ctx->pc = 0x17819cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1781a0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1781a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1781a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1781a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1781a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781ac: 0xc08063c  jal         func_2018F0
    ctx->pc = 0x1781ACu;
    SET_GPR_U32(ctx, 31, 0x1781B4u);
    ctx->pc = 0x1781B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781ACu;
    // 0x1781b0: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x1781ACu, 0x1781B4u)) {
        return;
    }
    ctx->pc = 0x1781B4u;
label_1781b4:
    // 0x1781b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1781b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781b8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1781b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1781bc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1781bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1781c0: 0xc065c58  jal         func_197160
    ctx->pc = 0x1781C0u;
    SET_GPR_U32(ctx, 31, 0x1781C8u);
    ctx->pc = 0x1781C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781C0u;
    // 0x1781c4: 0x24456470  addiu       $a1, $v0, 0x6470 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x1781C0u, 0x1781C8u)) {
        return;
    }
    ctx->pc = 0x1781C8u;
label_1781c8:
    // 0x1781c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1781C8u;
    {
        const bool branch_taken_0x1781c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1781CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781C8u;
        // 0x1781cc: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781c8) {
            ctx->pc = 0x1781DCu;
            goto label_1781dc;
        }
    }
    ctx->pc = 0x1781D0u;
    // 0x1781d0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1781d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1781d4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1781D4u;
    {
        const bool branch_taken_0x1781d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1781D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781D4u;
        // 0x1781d8: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781d4) {
            ctx->pc = 0x1782E4u;
            goto label_1782e4;
        }
    }
    ctx->pc = 0x1781DCu;
label_1781dc:
    // 0x1781dc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1781dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1781e0: 0xc065c58  jal         func_197160
    ctx->pc = 0x1781E0u;
    SET_GPR_U32(ctx, 31, 0x1781E8u);
    ctx->pc = 0x1781E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781E0u;
    // 0x1781e4: 0x244565c0  addiu       $a1, $v0, 0x65C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 26048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x1781E0u, 0x1781E8u)) {
        return;
    }
    ctx->pc = 0x1781E8u;
label_1781e8:
    // 0x1781e8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1781E8u;
    {
        const bool branch_taken_0x1781e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1781ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781E8u;
        // 0x1781ec: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781e8) {
            ctx->pc = 0x1782C8u;
            goto label_1782c8;
        }
    }
    ctx->pc = 0x1781F0u;
    // 0x1781f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1781f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1781f4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1781f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1781f8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1781F8u;
    SET_GPR_U32(ctx, 31, 0x178200u);
    ctx->pc = 0x1781FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781F8u;
    // 0x1781fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1781F8u, 0x178200u)) {
        return;
    }
    ctx->pc = 0x178200u;
label_178200:
    // 0x178200: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x178200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178204: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x178204u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x178208: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x178208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17820c: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x17820cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_178210:
    // 0x178210: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x178210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x178214: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x178214u;
    {
        const bool branch_taken_0x178214 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x178214) {
            ctx->pc = 0x178218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178214u;
            // 0x178218: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17823Cu;
            goto label_17823c;
        }
    }
    ctx->pc = 0x17821Cu;
    // 0x17821c: 0xc065c58  jal         func_197160
    ctx->pc = 0x17821Cu;
    SET_GPR_U32(ctx, 31, 0x178224u);
    ctx->pc = 0x178220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17821Cu;
    // 0x178220: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x17821Cu, 0x178224u)) {
        return;
    }
    ctx->pc = 0x178224u;
label_178224:
    // 0x178224: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x178224u;
    {
        const bool branch_taken_0x178224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178224) {
            ctx->pc = 0x178228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178224u;
            // 0x178228: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17823Cu;
            goto label_17823c;
        }
    }
    ctx->pc = 0x17822Cu;
    // 0x17822c: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x17822cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x178230: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x178230u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x178234: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x178234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x178238: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x178238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17823c:
    // 0x17823c: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x17823cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x178240: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x178240u;
    {
        const bool branch_taken_0x178240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178240u;
        // 0x178244: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178240) {
            ctx->pc = 0x178210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178210;
        }
    }
    ctx->pc = 0x178248u;
    // 0x178248: 0x1a800026  blez        $s4, . + 4 + (0x26 << 2)
    ctx->pc = 0x178248u;
    {
        const bool branch_taken_0x178248 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x17824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178248u;
        // 0x17824c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178248) {
            ctx->pc = 0x1782E4u;
            goto label_1782e4;
        }
    }
    ctx->pc = 0x178250u;
    // 0x178250: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x178250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178254: 0x8c448668  lw          $a0, -0x7998($v0)
    ctx->pc = 0x178254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
    // 0x178258: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x178258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17825c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17825cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x178260: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x178260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178264: 0xc058d5a  jal         func_163568
    ctx->pc = 0x178264u;
    SET_GPR_U32(ctx, 31, 0x17826Cu);
    ctx->pc = 0x178268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178264u;
    // 0x178268: 0x24466878  addiu       $a2, $v0, 0x6878 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 26744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x163568u, 0x178264u, 0x17826Cu)) {
        return;
    }
    ctx->pc = 0x17826Cu;
label_17826c:
    // 0x17826c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17826cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178270: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x178270u;
    {
        const bool branch_taken_0x178270 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x178274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178270u;
        // 0x178274: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178270) {
            ctx->pc = 0x1782E8u;
            goto label_1782e8;
        }
    }
    ctx->pc = 0x178278u;
    // 0x178278: 0x8cc20660  lw          $v0, 0x660($a2)
    ctx->pc = 0x178278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1632)));
    // 0x17827c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x17827Cu;
    {
        const bool branch_taken_0x17827c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17827Cu;
        // 0x178280: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17827c) {
            ctx->pc = 0x1782ECu;
            goto label_1782ec;
        }
    }
    ctx->pc = 0x178284u;
    // 0x178284: 0x1a800019  blez        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x178284u;
    {
        const bool branch_taken_0x178284 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x178288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178284u;
        // 0x178288: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178284) {
            ctx->pc = 0x1782ECu;
            goto label_1782ec;
        }
    }
    ctx->pc = 0x17828Cu;
    // 0x17828c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17828cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178290: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x178290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x178294: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x178294u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_178298:
    // 0x178298: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x178298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17829c: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x17829cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1782a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1782A0u;
    {
        const bool branch_taken_0x1782a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1782A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782A0u;
        // 0x1782a4: 0x671018  mult        $v0, $v1, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1782a0) {
            ctx->pc = 0x1782B4u;
            goto label_1782b4;
        }
    }
    ctx->pc = 0x1782A8u;
    // 0x1782a8: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x1782a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1782ac: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x1782acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x1782b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1782b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1782b4:
    // 0x1782b4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1782b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1782b8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1782B8u;
    {
        const bool branch_taken_0x1782b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1782BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782B8u;
        // 0x1782bc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1782b8) {
            ctx->pc = 0x178298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178298;
        }
    }
    ctx->pc = 0x1782C0u;
    // 0x1782c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1782C0u;
    {
        const bool branch_taken_0x1782c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1782C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782C0u;
        // 0x1782c4: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1782c0) {
            ctx->pc = 0x1782E8u;
            goto label_1782e8;
        }
    }
    ctx->pc = 0x1782C8u;
label_1782c8:
    // 0x1782c8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1782c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1782cc: 0xc065c58  jal         func_197160
    ctx->pc = 0x1782CCu;
    SET_GPR_U32(ctx, 31, 0x1782D4u);
    ctx->pc = 0x1782D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1782CCu;
    // 0x1782d0: 0x27c56540  addiu       $a1, $fp, 0x6540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 25920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x1782CCu, 0x1782D4u)) {
        return;
    }
    ctx->pc = 0x1782D4u;
label_1782d4:
    // 0x1782d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1782D4u;
    {
        const bool branch_taken_0x1782d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1782D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782D4u;
        // 0x1782d8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1782d4) {
            ctx->pc = 0x1782E8u;
            goto label_1782e8;
        }
    }
    ctx->pc = 0x1782DCu;
    // 0x1782dc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1782dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1782e0: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x1782e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
label_1782e4:
    // 0x1782e4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1782e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1782e8:
    // 0x1782e8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1782e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1782ec:
    // 0x1782ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1782ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1782f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1782f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1782f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1782f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1782f8: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1782F8u;
    SET_GPR_U32(ctx, 31, 0x178300u);
    ctx->pc = 0x1782FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1782F8u;
    // 0x1782fc: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1782F8u, 0x178300u)) {
        return;
    }
    ctx->pc = 0x178300u;
label_178300:
    // 0x178300: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x178300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178304: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178308: 0x1460ffa1  bnez        $v1, . + 4 + (-0x5F << 2)
    ctx->pc = 0x178308u;
    {
        const bool branch_taken_0x178308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178308u;
        // 0x17830c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178308) {
            ctx->pc = 0x178190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178190;
        }
    }
    ctx->pc = 0x178310u;
    // 0x178310: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x178310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_178314:
    // 0x178314: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x178314u;
    {
        const bool branch_taken_0x178314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178314) {
            ctx->pc = 0x178318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178314u;
            // 0x178318: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178328u;
            goto label_178328;
        }
    }
    ctx->pc = 0x17831Cu;
    // 0x17831c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x17831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x178320: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x178320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
    // 0x178324: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x178324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_178328:
    // 0x178328: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x178328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17832c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17832cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178330: 0xc080924  jal         func_202490
    ctx->pc = 0x178330u;
    SET_GPR_U32(ctx, 31, 0x178338u);
    ctx->pc = 0x178334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178330u;
    // 0x178334: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x178330u, 0x178338u)) {
        return;
    }
    ctx->pc = 0x178338u;
label_178338:
    // 0x178338: 0x8e4600c4  lw          $a2, 0xC4($s2)
    ctx->pc = 0x178338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x17833c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17833cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178340: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x178340u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x178344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178348: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x178348u;
    SET_GPR_U32(ctx, 31, 0x178350u);
    ctx->pc = 0x17834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178348u;
    // 0x17834c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x178348u, 0x178350u)) {
        return;
    }
    ctx->pc = 0x178350u;
label_178350:
    // 0x178350: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x178350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x178354: 0x1860002b  blez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x178354u;
    {
        const bool branch_taken_0x178354 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x178358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178354u;
        // 0x178358: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178354) {
            ctx->pc = 0x178404u;
            goto label_178404;
        }
    }
    ctx->pc = 0x17835Cu;
    // 0x17835c: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x17835cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x178360: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x178360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x178364: 0x0  nop
    ctx->pc = 0x178364u;
    // NOP
label_178368:
    // 0x178368: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x178368u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x17836c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x17836cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x178370: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x178370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x178374: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x178374u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178378: 0xc0a1bea  jal         func_286FA8
    ctx->pc = 0x178378u;
    SET_GPR_U32(ctx, 31, 0x178380u);
    ctx->pc = 0x17837Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178378u;
    // 0x17837c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x286FA8u, 0x178378u, 0x178380u)) {
        return;
    }
    ctx->pc = 0x178380u;
label_178380:
    // 0x178380: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x178380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x178384: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x178384u;
    {
        const bool branch_taken_0x178384 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x178388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178384u;
        // 0x178388: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178384) {
            ctx->pc = 0x1783E4u;
            goto label_1783e4;
        }
    }
    ctx->pc = 0x17838Cu;
    // 0x17838c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17838cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178390: 0xc0a1bde  jal         func_286F78
    ctx->pc = 0x178390u;
    SET_GPR_U32(ctx, 31, 0x178398u);
    ctx->pc = 0x178394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178390u;
    // 0x178394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x286F78u, 0x178390u, 0x178398u)) {
        return;
    }
    ctx->pc = 0x178398u;
label_178398:
    // 0x178398: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x178398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17839c: 0xc0a1c22  jal         func_287088
    ctx->pc = 0x17839Cu;
    SET_GPR_U32(ctx, 31, 0x1783A4u);
    ctx->pc = 0x1783A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17839Cu;
    // 0x1783a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287088u, 0x17839Cu, 0x1783A4u)) {
        return;
    }
    ctx->pc = 0x1783A4u;
label_1783a4:
    // 0x1783a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1783a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783a8: 0xc0a1c20  jal         func_287080
    ctx->pc = 0x1783A8u;
    SET_GPR_U32(ctx, 31, 0x1783B0u);
    ctx->pc = 0x1783ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1783A8u;
    // 0x1783ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287080u, 0x1783A8u, 0x1783B0u)) {
        return;
    }
    ctx->pc = 0x1783B0u;
label_1783b0:
    // 0x1783b0: 0x5616000c  bnel        $s0, $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x1783B0u;
    {
        const bool branch_taken_0x1783b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        if (branch_taken_0x1783b0) {
            ctx->pc = 0x1783B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1783B0u;
            // 0x1783b4: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1783E4u;
            goto label_1783e4;
        }
    }
    ctx->pc = 0x1783B8u;
    // 0x1783b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1783b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783bc: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x1783BCu;
    SET_GPR_U32(ctx, 31, 0x1783C4u);
    ctx->pc = 0x1783C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1783BCu;
    // 0x1783c0: 0x26a56880  addiu       $a1, $s5, 0x6880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 26752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x1783BCu, 0x1783C4u)) {
        return;
    }
    ctx->pc = 0x1783C4u;
label_1783c4:
    // 0x1783c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1783C4u;
    {
        const bool branch_taken_0x1783c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1783C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1783C4u;
        // 0x1783c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1783c4) {
            ctx->pc = 0x1783E0u;
            goto label_1783e0;
        }
    }
    ctx->pc = 0x1783CCu;
    // 0x1783cc: 0xc0a1c24  jal         func_287090
    ctx->pc = 0x1783CCu;
    SET_GPR_U32(ctx, 31, 0x1783D4u);
    ctx->pc = 0x1783D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1783CCu;
    // 0x1783d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287090u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287090u, 0x1783CCu, 0x1783D4u)) {
        return;
    }
    ctx->pc = 0x1783D4u;
label_1783d4:
    // 0x1783d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1783D4u;
    {
        const bool branch_taken_0x1783d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1783D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1783D4u;
        // 0x1783d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1783d4) {
            ctx->pc = 0x1783E4u;
            goto label_1783e4;
        }
    }
    ctx->pc = 0x1783DCu;
    // 0x1783dc: 0x0  nop
    ctx->pc = 0x1783dcu;
    // NOP
label_1783e0:
    // 0x1783e0: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x1783e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1783e4:
    // 0x1783e4: 0x8e4300c0  lw          $v1, 0xC0($s2)
    ctx->pc = 0x1783e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x1783e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1783e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1783ec: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1783ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1783f0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1783f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1783f4: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x1783f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1783f8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1783f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1783fc: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1783FCu;
    {
        const bool branch_taken_0x1783fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1783fc) {
            ctx->pc = 0x178400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1783FCu;
            // 0x178400: 0x8e420044  lw          $v0, 0x44($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178368;
        }
    }
    ctx->pc = 0x178404u;
label_178404:
    // 0x178404: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x178404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178408: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x178408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17840c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x17840cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x178410: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x178410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178414: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x178414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x178418: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x178418u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17841c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x17841cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x178420: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x178420u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x178424: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x178424u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178428: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x178428u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17842c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17842cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178430: 0x3e00008  jr          $ra
    ctx->pc = 0x178430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178430u;
        // 0x178434: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178438u;
}
