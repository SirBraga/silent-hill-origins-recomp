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

// Function: sub_0016EAB8
// Address: 0x16eab8 - 0x16ebd0
void sub_0016EAB8_0x16eab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EAB8_0x16eab8");
#endif

    switch (ctx->pc) {
        case 0x16ead4u: goto label_16ead4;
        case 0x16eae8u: goto label_16eae8;
        case 0x16eb00u: goto label_16eb00;
        case 0x16eb3cu: goto label_16eb3c;
        case 0x16ebacu: goto label_16ebac;
        default: break;
    }

    ctx->pc = 0x16eab8u;

    // 0x16eab8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16eab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16eabc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16eabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16eac0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16eac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16eac4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16eac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16eac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16eacc: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x16EACCu;
    SET_GPR_U32(ctx, 31, 0x16EAD4u);
    ctx->pc = 0x16EAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EACCu;
    // 0x16ead0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x16EACCu, 0x16EAD4u)) {
        return;
    }
    ctx->pc = 0x16EAD4u;
label_16ead4:
    // 0x16ead4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16ead8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ead8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eadc: 0x8c46f6e8  lw          $a2, -0x918($v0)
    ctx->pc = 0x16eadcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF6E8u));
    // 0x16eae0: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16EAE0u;
    SET_GPR_U32(ctx, 31, 0x16EAE8u);
    ctx->pc = 0x16EAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EAE0u;
    // 0x16eae4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16EAE0u, 0x16EAE8u)) {
        return;
    }
    ctx->pc = 0x16EAE8u;
label_16eae8:
    // 0x16eae8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eaec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16eaf0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x16EAF0u;
    {
        const bool branch_taken_0x16eaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAF0u;
        // 0x16eaf4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eaf0) {
            ctx->pc = 0x16EBC0u;
            goto label_16ebc0;
        }
    }
    ctx->pc = 0x16EAF8u;
    // 0x16eaf8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eafc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x16eafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16eb00:
    // 0x16eb00: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x16eb00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x16eb04: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x16EB04u;
    {
        const bool branch_taken_0x16eb04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB04u;
        // 0x16eb08: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb04) {
            ctx->pc = 0x16EB90u;
            goto label_16eb90;
        }
    }
    ctx->pc = 0x16EB0Cu;
    // 0x16eb0c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16eb10: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x16eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
    // 0x16eb14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16eb18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16eb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16eb1c: 0x800008  jr          $a0
    ctx->pc = 0x16EB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EB24u: goto label_16eb24;
            case 0x16EB44u: goto label_16eb44;
            case 0x16EB54u: goto label_16eb54;
            case 0x16EB64u: goto label_16eb64;
            case 0x16EB74u: goto label_16eb74;
            case 0x16EB84u: goto label_16eb84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EB1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16EB24u;
label_16eb24:
    // 0x16eb24: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16eb24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eb28: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16eb2c: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x16eb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x16eb30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16eb30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb34: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16EB34u;
    SET_GPR_U32(ctx, 31, 0x16EB3Cu);
    ctx->pc = 0x16EB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EB34u;
    // 0x16eb38: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16EB34u, 0x16EB3Cu)) {
        return;
    }
    ctx->pc = 0x16EB3Cu;
label_16eb3c:
    // 0x16eb3c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16EB3Cu;
    {
        const bool branch_taken_0x16eb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB3Cu;
        // 0x16eb40: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb3c) {
            ctx->pc = 0x16EB94u;
            goto label_16eb94;
        }
    }
    ctx->pc = 0x16EB44u;
label_16eb44:
    // 0x16eb44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eb48: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16eb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16eb4c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16EB4Cu;
    {
        const bool branch_taken_0x16eb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB4Cu;
        // 0x16eb50: 0xe620004c  swc1        $f0, 0x4C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb4c) {
            ctx->pc = 0x16EB90u;
            goto label_16eb90;
        }
    }
    ctx->pc = 0x16EB54u;
label_16eb54:
    // 0x16eb54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eb58: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16eb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16eb5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16EB5Cu;
    {
        const bool branch_taken_0x16eb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB5Cu;
        // 0x16eb60: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb5c) {
            ctx->pc = 0x16EB90u;
            goto label_16eb90;
        }
    }
    ctx->pc = 0x16EB64u;
label_16eb64:
    // 0x16eb64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eb68: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16eb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16eb6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16EB6Cu;
    {
        const bool branch_taken_0x16eb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB6Cu;
        // 0x16eb70: 0xe6200054  swc1        $f0, 0x54($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb6c) {
            ctx->pc = 0x16EB90u;
            goto label_16eb90;
        }
    }
    ctx->pc = 0x16EB74u;
label_16eb74:
    // 0x16eb74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eb78: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16eb7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16EB7Cu;
    {
        const bool branch_taken_0x16eb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB7Cu;
        // 0x16eb80: 0xae230058  sw          $v1, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb7c) {
            ctx->pc = 0x16EB90u;
            goto label_16eb90;
        }
    }
    ctx->pc = 0x16EB84u;
label_16eb84:
    // 0x16eb84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16eb88: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16eb8c: 0xae23005c  sw          $v1, 0x5C($s1)
    ctx->pc = 0x16eb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
label_16eb90:
    // 0x16eb90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16eb94:
    // 0x16eb94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16eb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16eb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16eb9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16eba0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16eba4: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16EBA4u;
    SET_GPR_U32(ctx, 31, 0x16EBACu);
    ctx->pc = 0x16EBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EBA4u;
    // 0x16eba8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16EBA4u, 0x16EBACu)) {
        return;
    }
    ctx->pc = 0x16EBACu;
label_16ebac:
    // 0x16ebac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ebb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ebb4: 0x5460ffd2  bnel        $v1, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x16EBB4u;
    {
        const bool branch_taken_0x16ebb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ebb4) {
            ctx->pc = 0x16EBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EBB4u;
            // 0x16ebb8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16eb00;
        }
    }
    ctx->pc = 0x16EBBCu;
    // 0x16ebbc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16ebbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16ebc0:
    // 0x16ebc0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16ebc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ebc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ebc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ebc8: 0x3e00008  jr          $ra
    ctx->pc = 0x16EBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBC8u;
        // 0x16ebcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EBD0u;
}
