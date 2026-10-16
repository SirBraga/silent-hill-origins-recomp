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

// Function: sub_0016EDB0
// Address: 0x16edb0 - 0x16eed8
void sub_0016EDB0_0x16edb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EDB0_0x16edb0");
#endif

    switch (ctx->pc) {
        case 0x16edccu: goto label_16edcc;
        case 0x16ede0u: goto label_16ede0;
        case 0x16edf8u: goto label_16edf8;
        case 0x16ee44u: goto label_16ee44;
        case 0x16eeb4u: goto label_16eeb4;
        default: break;
    }

    ctx->pc = 0x16edb0u;

    // 0x16edb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16edb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16edb4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16edb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16edb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16edb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16edbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16edbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16edc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16edc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16edc4: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x16EDC4u;
    SET_GPR_U32(ctx, 31, 0x16EDCCu);
    ctx->pc = 0x16EDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EDC4u;
    // 0x16edc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x16EDC4u, 0x16EDCCu)) {
        return;
    }
    ctx->pc = 0x16EDCCu;
label_16edcc:
    // 0x16edcc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16edccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16edd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16edd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16edd4: 0x8c46f6f8  lw          $a2, -0x908($v0)
    ctx->pc = 0x16edd4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF6F8u));
    // 0x16edd8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16EDD8u;
    SET_GPR_U32(ctx, 31, 0x16EDE0u);
    ctx->pc = 0x16EDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EDD8u;
    // 0x16eddc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16EDD8u, 0x16EDE0u)) {
        return;
    }
    ctx->pc = 0x16EDE0u;
label_16ede0:
    // 0x16ede0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ede4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ede8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x16EDE8u;
    {
        const bool branch_taken_0x16ede8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDE8u;
        // 0x16edec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ede8) {
            ctx->pc = 0x16EEC8u;
            goto label_16eec8;
        }
    }
    ctx->pc = 0x16EDF0u;
    // 0x16edf0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16edf4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x16edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16edf8:
    // 0x16edf8: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x16edf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x16edfc: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x16EDFCu;
    {
        const bool branch_taken_0x16edfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDFCu;
        // 0x16ee00: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16edfc) {
            ctx->pc = 0x16EE98u;
            goto label_16ee98;
        }
    }
    ctx->pc = 0x16EE04u;
    // 0x16ee04: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16ee04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16ee08: 0x24425000  addiu       $v0, $v0, 0x5000
    ctx->pc = 0x16ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20480));
    // 0x16ee0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ee10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ee14: 0x800008  jr          $a0
    ctx->pc = 0x16EE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EE1Cu: goto label_16ee1c;
            case 0x16EE2Cu: goto label_16ee2c;
            case 0x16EE4Cu: goto label_16ee4c;
            case 0x16EE5Cu: goto label_16ee5c;
            case 0x16EE6Cu: goto label_16ee6c;
            case 0x16EE7Cu: goto label_16ee7c;
            case 0x16EE8Cu: goto label_16ee8c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EE14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16EE1Cu;
label_16ee1c:
    // 0x16ee1c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16ee1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ee20: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16ee20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16ee24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16EE24u;
    {
        const bool branch_taken_0x16ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE24u;
        // 0x16ee28: 0x26250044  addiu       $a1, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee24) {
            ctx->pc = 0x16EE38u;
            goto label_16ee38;
        }
    }
    ctx->pc = 0x16EE2Cu;
label_16ee2c:
    // 0x16ee2c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16ee2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ee30: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16ee30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16ee34: 0x2625004c  addiu       $a1, $s1, 0x4C
    ctx->pc = 0x16ee34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_16ee38:
    // 0x16ee38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16ee38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee3c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16EE3Cu;
    SET_GPR_U32(ctx, 31, 0x16EE44u);
    ctx->pc = 0x16EE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EE3Cu;
    // 0x16ee40: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16EE3Cu, 0x16EE44u)) {
        return;
    }
    ctx->pc = 0x16EE44u;
label_16ee44:
    // 0x16ee44: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16EE44u;
    {
        const bool branch_taken_0x16ee44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE44u;
        // 0x16ee48: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee44) {
            ctx->pc = 0x16EE9Cu;
            goto label_16ee9c;
        }
    }
    ctx->pc = 0x16EE4Cu;
label_16ee4c:
    // 0x16ee4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ee50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16ee50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ee54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16EE54u;
    {
        const bool branch_taken_0x16ee54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE54u;
        // 0x16ee58: 0xe6200054  swc1        $f0, 0x54($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee54) {
            ctx->pc = 0x16EE98u;
            goto label_16ee98;
        }
    }
    ctx->pc = 0x16EE5Cu;
label_16ee5c:
    // 0x16ee5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ee60: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16ee60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ee64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16EE64u;
    {
        const bool branch_taken_0x16ee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE64u;
        // 0x16ee68: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee64) {
            ctx->pc = 0x16EE98u;
            goto label_16ee98;
        }
    }
    ctx->pc = 0x16EE6Cu;
label_16ee6c:
    // 0x16ee6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ee70: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16ee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ee74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16EE74u;
    {
        const bool branch_taken_0x16ee74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE74u;
        // 0x16ee78: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee74) {
            ctx->pc = 0x16EE98u;
            goto label_16ee98;
        }
    }
    ctx->pc = 0x16EE7Cu;
label_16ee7c:
    // 0x16ee7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ee80: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16ee80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ee84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16EE84u;
    {
        const bool branch_taken_0x16ee84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE84u;
        // 0x16ee88: 0xe6200060  swc1        $f0, 0x60($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee84) {
            ctx->pc = 0x16EE98u;
            goto label_16ee98;
        }
    }
    ctx->pc = 0x16EE8Cu;
label_16ee8c:
    // 0x16ee8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ee90: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16ee94: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x16ee94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_16ee98:
    // 0x16ee98: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16ee9c:
    // 0x16ee9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16ee9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eea0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16eea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16eea4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16eea8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16eea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16eeac: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16EEACu;
    SET_GPR_U32(ctx, 31, 0x16EEB4u);
    ctx->pc = 0x16EEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EEACu;
    // 0x16eeb0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16EEACu, 0x16EEB4u)) {
        return;
    }
    ctx->pc = 0x16EEB4u;
label_16eeb4:
    // 0x16eeb4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eeb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16eebc: 0x5460ffce  bnel        $v1, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x16EEBCu;
    {
        const bool branch_taken_0x16eebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16eebc) {
            ctx->pc = 0x16EEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EEBCu;
            // 0x16eec0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16edf8;
        }
    }
    ctx->pc = 0x16EEC4u;
    // 0x16eec4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16eec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16eec8:
    // 0x16eec8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16eec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16eecc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16eeccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16eed0: 0x3e00008  jr          $ra
    ctx->pc = 0x16EED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EED0u;
        // 0x16eed4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EED8u;
}
