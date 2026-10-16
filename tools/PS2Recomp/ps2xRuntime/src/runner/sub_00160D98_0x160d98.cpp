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

// Function: sub_00160D98
// Address: 0x160d98 - 0x160ed0
void sub_00160D98_0x160d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160D98_0x160d98");
#endif

    switch (ctx->pc) {
        case 0x160db4u: goto label_160db4;
        case 0x160dc8u: goto label_160dc8;
        case 0x160de0u: goto label_160de0;
        case 0x160e5cu: goto label_160e5c;
        case 0x160eacu: goto label_160eac;
        default: break;
    }

    ctx->pc = 0x160d98u;

    // 0x160d98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x160d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x160d9c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x160d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x160da0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x160da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x160da4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x160da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160da8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x160da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x160dac: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x160DACu;
    SET_GPR_U32(ctx, 31, 0x160DB4u);
    ctx->pc = 0x160DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160DACu;
    // 0x160db0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x160DACu, 0x160DB4u)) {
        return;
    }
    ctx->pc = 0x160DB4u;
label_160db4:
    // 0x160db4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x160db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x160db8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160dbc: 0x8c46f59c  lw          $a2, -0xA64($v0)
    ctx->pc = 0x160dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF59Cu));
    // 0x160dc0: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x160DC0u;
    SET_GPR_U32(ctx, 31, 0x160DC8u);
    ctx->pc = 0x160DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160DC0u;
    // 0x160dc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x160DC0u, 0x160DC8u)) {
        return;
    }
    ctx->pc = 0x160DC8u;
label_160dc8:
    // 0x160dc8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x160dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160dcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x160dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160dd0: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x160DD0u;
    {
        const bool branch_taken_0x160dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160DD0u;
        // 0x160dd4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160dd0) {
            ctx->pc = 0x160EC0u;
            goto label_160ec0;
        }
    }
    ctx->pc = 0x160DD8u;
    // 0x160dd8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160ddc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x160ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160de0:
    // 0x160de0: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x160de0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x160de4: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x160DE4u;
    {
        const bool branch_taken_0x160de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160DE4u;
        // 0x160de8: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160de4) {
            ctx->pc = 0x160E90u;
            goto label_160e90;
        }
    }
    ctx->pc = 0x160DECu;
    // 0x160dec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x160decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x160df0: 0x24423620  addiu       $v0, $v0, 0x3620
    ctx->pc = 0x160df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
    // 0x160df4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x160df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160df8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x160df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160dfc: 0x800008  jr          $a0
    ctx->pc = 0x160DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160E04u: goto label_160e04;
            case 0x160E14u: goto label_160e14;
            case 0x160E34u: goto label_160e34;
            case 0x160E44u: goto label_160e44;
            case 0x160E64u: goto label_160e64;
            case 0x160E74u: goto label_160e74;
            case 0x160E84u: goto label_160e84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160DFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x160E04u;
label_160e04:
    // 0x160e04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160e08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x160e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160e0c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x160E0Cu;
    {
        const bool branch_taken_0x160e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E0Cu;
        // 0x160e10: 0xe6200044  swc1        $f0, 0x44($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e0c) {
            ctx->pc = 0x160E90u;
            goto label_160e90;
        }
    }
    ctx->pc = 0x160E14u;
label_160e14:
    // 0x160e14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160e18: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x160e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x160e1c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160E1Cu;
    {
        const bool branch_taken_0x160e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E1Cu;
        // 0x160e20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e1c) {
            ctx->pc = 0x160E2Cu;
            goto label_160e2c;
        }
    }
    ctx->pc = 0x160E24u;
    // 0x160e24: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x160E24u;
    {
        const bool branch_taken_0x160e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E24u;
        // 0x160e28: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e24) {
            ctx->pc = 0x160E90u;
            goto label_160e90;
        }
    }
    ctx->pc = 0x160E2Cu;
label_160e2c:
    // 0x160e2c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x160E2Cu;
    {
        const bool branch_taken_0x160e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E2Cu;
        // 0x160e30: 0xae200064  sw          $zero, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e2c) {
            ctx->pc = 0x160E90u;
            goto label_160e90;
        }
    }
    ctx->pc = 0x160E34u;
label_160e34:
    // 0x160e34: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x160e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160e38: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x160e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x160e3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x160E3Cu;
    {
        const bool branch_taken_0x160e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E3Cu;
        // 0x160e40: 0x26250048  addiu       $a1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e3c) {
            ctx->pc = 0x160E50u;
            goto label_160e50;
        }
    }
    ctx->pc = 0x160E44u;
label_160e44:
    // 0x160e44: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x160e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160e48: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x160e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x160e4c: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x160e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_160e50:
    // 0x160e50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160e50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e54: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x160E54u;
    SET_GPR_U32(ctx, 31, 0x160E5Cu);
    ctx->pc = 0x160E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160E54u;
    // 0x160e58: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x160E54u, 0x160E5Cu)) {
        return;
    }
    ctx->pc = 0x160E5Cu;
label_160e5c:
    // 0x160e5c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x160E5Cu;
    {
        const bool branch_taken_0x160e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E5Cu;
        // 0x160e60: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e5c) {
            ctx->pc = 0x160E94u;
            goto label_160e94;
        }
    }
    ctx->pc = 0x160E64u;
label_160e64:
    // 0x160e64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160e68: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x160e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x160e6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x160E6Cu;
    {
        const bool branch_taken_0x160e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E6Cu;
        // 0x160e70: 0xae230058  sw          $v1, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e6c) {
            ctx->pc = 0x160E90u;
            goto label_160e90;
        }
    }
    ctx->pc = 0x160E74u;
label_160e74:
    // 0x160e74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160e78: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x160e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160e7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x160E7Cu;
    {
        const bool branch_taken_0x160e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E7Cu;
        // 0x160e80: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e7c) {
            ctx->pc = 0x160E90u;
            goto label_160e90;
        }
    }
    ctx->pc = 0x160E84u;
label_160e84:
    // 0x160e84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160e88: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x160e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160e8c: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x160e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
label_160e90:
    // 0x160e90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x160e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_160e94:
    // 0x160e94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x160e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x160e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160e9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x160e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160ea0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x160ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160ea4: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x160EA4u;
    SET_GPR_U32(ctx, 31, 0x160EACu);
    ctx->pc = 0x160EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160EA4u;
    // 0x160ea8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x160EA4u, 0x160EACu)) {
        return;
    }
    ctx->pc = 0x160EACu;
label_160eac:
    // 0x160eac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160eb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x160eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160eb4: 0x5460ffca  bnel        $v1, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x160EB4u;
    {
        const bool branch_taken_0x160eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x160eb4) {
            ctx->pc = 0x160EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160EB4u;
            // 0x160eb8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160de0;
        }
    }
    ctx->pc = 0x160EBCu;
    // 0x160ebc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x160ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_160ec0:
    // 0x160ec0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x160ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160ec4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x160ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x160EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EC8u;
        // 0x160ecc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160ED0u;
}
