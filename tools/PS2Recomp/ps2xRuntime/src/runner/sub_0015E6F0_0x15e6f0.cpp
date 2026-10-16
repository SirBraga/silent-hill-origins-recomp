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

// Function: sub_0015E6F0
// Address: 0x15e6f0 - 0x15e9a8
void sub_0015E6F0_0x15e6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E6F0_0x15e6f0");
#endif

    switch (ctx->pc) {
        case 0x15e70cu: goto label_15e70c;
        case 0x15e720u: goto label_15e720;
        case 0x15e738u: goto label_15e738;
        case 0x15e7a8u: goto label_15e7a8;
        case 0x15e978u: goto label_15e978;
        default: break;
    }

    ctx->pc = 0x15e6f0u;

    // 0x15e6f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15e6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15e6f4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15e6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x15e6f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15e6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x15e6fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15e6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e700: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15e700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15e704: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x15E704u;
    SET_GPR_U32(ctx, 31, 0x15E70Cu);
    ctx->pc = 0x15E708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E704u;
    // 0x15e708: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x15E704u, 0x15E70Cu)) {
        return;
    }
    ctx->pc = 0x15E70Cu;
label_15e70c:
    // 0x15e70c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15e710: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15e710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e714: 0x8c46f100  lw          $a2, -0xF00($v0)
    ctx->pc = 0x15e714u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF100u));
    // 0x15e718: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x15E718u;
    SET_GPR_U32(ctx, 31, 0x15E720u);
    ctx->pc = 0x15E71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E718u;
    // 0x15e71c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x15E718u, 0x15E720u)) {
        return;
    }
    ctx->pc = 0x15E720u;
label_15e720:
    // 0x15e720: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15e720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e724: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15e724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e728: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x15E728u;
    {
        const bool branch_taken_0x15e728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E728u;
        // 0x15e72c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e728) {
            ctx->pc = 0x15E98Cu;
            goto label_15e98c;
        }
    }
    ctx->pc = 0x15E730u;
    // 0x15e730: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15e730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e734: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x15e734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e738:
    // 0x15e738: 0x2c83000e  sltiu       $v1, $a0, 0xE
    ctx->pc = 0x15e738u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x15e73c: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x15E73Cu;
    {
        const bool branch_taken_0x15e73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E73Cu;
        // 0x15e740: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e73c) {
            ctx->pc = 0x15E95Cu;
            goto label_15e95c;
        }
    }
    ctx->pc = 0x15E744u;
    // 0x15e744: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15e744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15e748: 0x244233a0  addiu       $v0, $v0, 0x33A0
    ctx->pc = 0x15e748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13216));
    // 0x15e74c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15e750: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15e750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e754: 0x800008  jr          $a0
    ctx->pc = 0x15E754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E75Cu: goto label_15e75c;
            case 0x15E780u: goto label_15e780;
            case 0x15E790u: goto label_15e790;
            case 0x15E7B0u: goto label_15e7b0;
            case 0x15E7C0u: goto label_15e7c0;
            case 0x15E7D0u: goto label_15e7d0;
            case 0x15E7E0u: goto label_15e7e0;
            case 0x15E7F0u: goto label_15e7f0;
            case 0x15E800u: goto label_15e800;
            case 0x15E910u: goto label_15e910;
            case 0x15E920u: goto label_15e920;
            case 0x15E930u: goto label_15e930;
            case 0x15E940u: goto label_15e940;
            case 0x15E950u: goto label_15e950;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E754u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15E75Cu;
label_15e75c:
    // 0x15e75c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e760: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x15e760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15e764: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E764u;
    {
        const bool branch_taken_0x15e764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E764u;
        // 0x15e768: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e764) {
            ctx->pc = 0x15E774u;
            goto label_15e774;
        }
    }
    ctx->pc = 0x15E76Cu;
    // 0x15e76c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x15E76Cu;
    {
        const bool branch_taken_0x15e76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E76Cu;
        // 0x15e770: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e76c) {
            ctx->pc = 0x15E95Cu;
            goto label_15e95c;
        }
    }
    ctx->pc = 0x15E774u;
label_15e774:
    // 0x15e774: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15e774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e778: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x15E778u;
    {
        const bool branch_taken_0x15e778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E778u;
        // 0x15e77c: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e778) {
            ctx->pc = 0x15E95Cu;
            goto label_15e95c;
        }
    }
    ctx->pc = 0x15E780u;
label_15e780:
    // 0x15e780: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x15e780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e784: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x15e784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x15e788: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15E788u;
    {
        const bool branch_taken_0x15e788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E788u;
        // 0x15e78c: 0x26250090  addiu       $a1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e788) {
            ctx->pc = 0x15E79Cu;
            goto label_15e79c;
        }
    }
    ctx->pc = 0x15E790u;
label_15e790:
    // 0x15e790: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x15e790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e794: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x15e794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x15e798: 0x26250098  addiu       $a1, $s1, 0x98
    ctx->pc = 0x15e798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_15e79c:
    // 0x15e79c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15e79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e7a0: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x15E7A0u;
    SET_GPR_U32(ctx, 31, 0x15E7A8u);
    ctx->pc = 0x15E7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E7A0u;
    // 0x15e7a4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x15E7A0u, 0x15E7A8u)) {
        return;
    }
    ctx->pc = 0x15E7A8u;
label_15e7a8:
    // 0x15e7a8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x15E7A8u;
    {
        const bool branch_taken_0x15e7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7A8u;
        // 0x15e7ac: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e7a8) {
            ctx->pc = 0x15E960u;
            goto label_15e960;
        }
    }
    ctx->pc = 0x15E7B0u;
label_15e7b0:
    // 0x15e7b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e7b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15e7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e7b8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x15E7B8u;
    {
        const bool branch_taken_0x15e7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7B8u;
        // 0x15e7bc: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e7b8) {
            ctx->pc = 0x15E95Cu;
            goto label_15e95c;
        }
    }
    ctx->pc = 0x15E7C0u;
label_15e7c0:
    // 0x15e7c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e7c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15e7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e7c8: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x15E7C8u;
    {
        const bool branch_taken_0x15e7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7C8u;
        // 0x15e7cc: 0xe6200054  swc1        $f0, 0x54($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e7c8) {
            ctx->pc = 0x15E95Cu;
            goto label_15e95c;
        }
    }
    ctx->pc = 0x15E7D0u;
label_15e7d0:
    // 0x15e7d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e7d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15e7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e7d8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x15E7D8u;
    {
        const bool branch_taken_0x15e7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7D8u;
        // 0x15e7dc: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e7d8) {
            ctx->pc = 0x15E95Cu;
            goto label_15e95c;
        }
    }
    ctx->pc = 0x15E7E0u;
label_15e7e0:
    // 0x15e7e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e7e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15e7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e7e8: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x15E7E8u;
    {
        const bool branch_taken_0x15e7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7E8u;
        // 0x15e7ec: 0xe6200060  swc1        $f0, 0x60($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e7e8) {
            ctx->pc = 0x15E95Cu;
            goto label_15e95c;
        }
    }
    ctx->pc = 0x15E7F0u;
label_15e7f0:
    // 0x15e7f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e7f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15e7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e7f8: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x15E7F8u;
    {
        const bool branch_taken_0x15e7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7F8u;
        // 0x15e7fc: 0xe6200064  swc1        $f0, 0x64($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e7f8) {
            ctx->pc = 0x15E95Cu;
            goto label_15e95c;
        }
    }
    ctx->pc = 0x15E800u;
label_15e800:
    // 0x15e800: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15e800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e804: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x15e804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x15e808: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x15e808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x15e80c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x15e80cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x15e810: 0x34c600ff  ori         $a2, $a2, 0xFF
    ctx->pc = 0x15e810u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    // 0x15e814: 0x8865000b  lwl         $a1, 0xB($v1)
    ctx->pc = 0x15e814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x15e818: 0x98650008  lwr         $a1, 0x8($v1)
    ctx->pc = 0x15e818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x15e81c: 0xaba50023  swl         $a1, 0x23($sp)
    ctx->pc = 0x15e81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x15e820: 0xbba50020  swr         $a1, 0x20($sp)
    ctx->pc = 0x15e820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x15e824: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x15e824u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x15e828: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x15e828u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x15e82c: 0x3c08807f  lui         $t0, 0x807F
    ctx->pc = 0x15e82cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32895 << 16));
    // 0x15e830: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x15e830u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x15e834: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x15e834u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
    // 0x15e838: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x15e838u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x15e83c: 0x93a40020  lbu         $a0, 0x20($sp)
    ctx->pc = 0x15e83cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e840: 0x93a30021  lbu         $v1, 0x21($sp)
    ctx->pc = 0x15e840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 33)));
    // 0x15e844: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x15e844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x15e848: 0x93a50022  lbu         $a1, 0x22($sp)
    ctx->pc = 0x15e848u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x15e84c: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x15e84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x15e850: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x15e850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x15e854: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15e854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15e858: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15e858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15e85c: 0x93a30023  lbu         $v1, 0x23($sp)
    ctx->pc = 0x15e85cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
    // 0x15e860: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x15e860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x15e864: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x15e864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x15e868: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x15e868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x15e86c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x15e86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x15e870: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15e870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15e874: 0x32e3a  dsrl        $a1, $v1, 24
    ctx->pc = 0x15e874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 24);
    // 0x15e878: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x15e878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
    // 0x15e87c: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x15e87cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
    // 0x15e880: 0xa3a20021  sb          $v0, 0x21($sp)
    ctx->pc = 0x15e880u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x15e884: 0xa3a40022  sb          $a0, 0x22($sp)
    ctx->pc = 0x15e884u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e888: 0xa3a50023  sb          $a1, 0x23($sp)
    ctx->pc = 0x15e888u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 5));
    // 0x15e88c: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x15e88cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x15e890: 0x8ba20023  lwl         $v0, 0x23($sp)
    ctx->pc = 0x15e890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x15e894: 0x9ba20020  lwr         $v0, 0x20($sp)
    ctx->pc = 0x15e894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x15e898: 0xaba20013  swl         $v0, 0x13($sp)
    ctx->pc = 0x15e898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x15e89c: 0xbba20010  swr         $v0, 0x10($sp)
    ctx->pc = 0x15e89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x15e8a0: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x15e8a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e8a4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x15e8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x15e8a8: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x15e8a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x15e8ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x15e8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15e8b0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x15e8b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x15e8b4: 0x0  nop
    ctx->pc = 0x15e8b4u;
    // NOP
    // 0x15e8b8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x15e8b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x15e8bc: 0x93a40011  lbu         $a0, 0x11($sp)
    ctx->pc = 0x15e8bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x15e8c0: 0x93a30012  lbu         $v1, 0x12($sp)
    ctx->pc = 0x15e8c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x15e8c4: 0x93a20013  lbu         $v0, 0x13($sp)
    ctx->pc = 0x15e8c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x15e8c8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x15e8c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e8cc: 0x0  nop
    ctx->pc = 0x15e8ccu;
    // NOP
    // 0x15e8d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15e8d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15e8d4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x15e8d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15e8d8: 0x0  nop
    ctx->pc = 0x15e8d8u;
    // NOP
    // 0x15e8dc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x15e8dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x15e8e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e8e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e8e4: 0x0  nop
    ctx->pc = 0x15e8e4u;
    // NOP
    // 0x15e8e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15e8e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15e8ec: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x15e8ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x15e8f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15e8f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15e8f4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x15e8f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x15e8f8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x15e8f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x15e8fc: 0xe6240068  swc1        $f4, 0x68($s1)
    ctx->pc = 0x15e8fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x15e900: 0xe621006c  swc1        $f1, 0x6C($s1)
    ctx->pc = 0x15e900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x15e904: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x15e904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x15e908: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15E908u;
    {
        const bool branch_taken_0x15e908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E908u;
        // 0x15e90c: 0xe6230070  swc1        $f3, 0x70($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e908) {
            ctx->pc = 0x15E95Cu;
            goto label_15e95c;
        }
    }
    ctx->pc = 0x15E910u;
label_15e910:
    // 0x15e910: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e914: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15e914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e918: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15E918u;
    {
        const bool branch_taken_0x15e918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E918u;
        // 0x15e91c: 0xe6200078  swc1        $f0, 0x78($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e918) {
            ctx->pc = 0x15E95Cu;
            goto label_15e95c;
        }
    }
    ctx->pc = 0x15E920u;
label_15e920:
    // 0x15e920: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15e920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e924: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x15e924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15e928: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15E928u;
    {
        const bool branch_taken_0x15e928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E928u;
        // 0x15e92c: 0xae230080  sw          $v1, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e928) {
            ctx->pc = 0x15E95Cu;
            goto label_15e95c;
        }
    }
    ctx->pc = 0x15E930u;
label_15e930:
    // 0x15e930: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15e930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e934: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15e934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e938: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15E938u;
    {
        const bool branch_taken_0x15e938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E938u;
        // 0x15e93c: 0xe6200084  swc1        $f0, 0x84($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e938) {
            ctx->pc = 0x15E95Cu;
            goto label_15e95c;
        }
    }
    ctx->pc = 0x15E940u;
label_15e940:
    // 0x15e940: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15e940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e944: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x15e944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15e948: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15E948u;
    {
        const bool branch_taken_0x15e948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E948u;
        // 0x15e94c: 0xae230088  sw          $v1, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e948) {
            ctx->pc = 0x15E95Cu;
            goto label_15e95c;
        }
    }
    ctx->pc = 0x15E950u;
label_15e950:
    // 0x15e950: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15e950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e954: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15e954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e958: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x15e958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
label_15e95c:
    // 0x15e95c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15e960:
    // 0x15e960: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15e960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e964: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e968: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15e968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e96c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15e96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15e970: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x15E970u;
    SET_GPR_U32(ctx, 31, 0x15E978u);
    ctx->pc = 0x15E974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E970u;
    // 0x15e974: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x15E970u, 0x15E978u)) {
        return;
    }
    ctx->pc = 0x15E978u;
label_15e978:
    // 0x15e978: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15e978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e97c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e980: 0x5460ff6d  bnel        $v1, $zero, . + 4 + (-0x93 << 2)
    ctx->pc = 0x15E980u;
    {
        const bool branch_taken_0x15e980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e980) {
            ctx->pc = 0x15E984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E980u;
            // 0x15e984: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e738;
        }
    }
    ctx->pc = 0x15E988u;
    // 0x15e988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e98c:
    // 0x15e98c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15e98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e990: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x15e990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x15e994: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15e994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e998: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15e998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e99c: 0x3e00008  jr          $ra
    ctx->pc = 0x15E99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E99Cu;
        // 0x15e9a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E9A4u;
    // 0x15e9a4: 0x0  nop
    ctx->pc = 0x15e9a4u;
    // NOP
    ctx->pc = 0x15e9a8u;
}
