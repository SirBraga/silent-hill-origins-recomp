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

// Function: sub_0016B658
// Address: 0x16b658 - 0x16b7f0
void sub_0016B658_0x16b658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B658_0x16b658");
#endif

    switch (ctx->pc) {
        case 0x16b674u: goto label_16b674;
        case 0x16b688u: goto label_16b688;
        case 0x16b6a0u: goto label_16b6a0;
        case 0x16b6dcu: goto label_16b6dc;
        case 0x16b6f8u: goto label_16b6f8;
        case 0x16b710u: goto label_16b710;
        case 0x16b7b0u: goto label_16b7b0;
        default: break;
    }

    ctx->pc = 0x16b658u;

    // 0x16b658: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16b658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16b65c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16b65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16b660: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16b660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16b664: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16b664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16b668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16b66c: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x16B66Cu;
    SET_GPR_U32(ctx, 31, 0x16B674u);
    ctx->pc = 0x16B670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B66Cu;
    // 0x16b670: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x16B66Cu, 0x16B674u)) {
        return;
    }
    ctx->pc = 0x16B674u;
label_16b674:
    // 0x16b674: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16b674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16b678: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b67c: 0x8c46f678  lw          $a2, -0x988($v0)
    ctx->pc = 0x16b67cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF678u));
    // 0x16b680: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16B680u;
    SET_GPR_U32(ctx, 31, 0x16B688u);
    ctx->pc = 0x16B684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B680u;
    // 0x16b684: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16B680u, 0x16B688u)) {
        return;
    }
    ctx->pc = 0x16B688u;
label_16b688:
    // 0x16b688: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16b688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b68c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b690: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x16B690u;
    {
        const bool branch_taken_0x16b690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B690u;
        // 0x16b694: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b690) {
            ctx->pc = 0x16B7C4u;
            goto label_16b7c4;
        }
    }
    ctx->pc = 0x16B698u;
    // 0x16b698: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16b698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b69c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x16b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16b6a0:
    // 0x16b6a0: 0x2c83000b  sltiu       $v1, $a0, 0xB
    ctx->pc = 0x16b6a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x16b6a4: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x16B6A4u;
    {
        const bool branch_taken_0x16b6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6A4u;
        // 0x16b6a8: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6a4) {
            ctx->pc = 0x16B794u;
            goto label_16b794;
        }
    }
    ctx->pc = 0x16B6ACu;
    // 0x16b6ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16b6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16b6b0: 0x244247d0  addiu       $v0, $v0, 0x47D0
    ctx->pc = 0x16b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18384));
    // 0x16b6b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b6b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b6bc: 0x800008  jr          $a0
    ctx->pc = 0x16B6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B6C4u: goto label_16b6c4;
            case 0x16B6E4u: goto label_16b6e4;
            case 0x16B700u: goto label_16b700;
            case 0x16B718u: goto label_16b718;
            case 0x16B728u: goto label_16b728;
            case 0x16B738u: goto label_16b738;
            case 0x16B748u: goto label_16b748;
            case 0x16B758u: goto label_16b758;
            case 0x16B778u: goto label_16b778;
            case 0x16B794u: goto label_16b794;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B6BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16B6C4u;
label_16b6c4:
    // 0x16b6c4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16b6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b6c8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16b6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16b6cc: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x16b6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x16b6d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16b6d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6d4: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16B6D4u;
    SET_GPR_U32(ctx, 31, 0x16B6DCu);
    ctx->pc = 0x16B6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B6D4u;
    // 0x16b6d8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16B6D4u, 0x16B6DCu)) {
        return;
    }
    ctx->pc = 0x16B6DCu;
label_16b6dc:
    // 0x16b6dc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x16B6DCu;
    {
        const bool branch_taken_0x16b6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6DCu;
        // 0x16b6e0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6dc) {
            ctx->pc = 0x16B798u;
            goto label_16b798;
        }
    }
    ctx->pc = 0x16B6E4u;
label_16b6e4:
    // 0x16b6e4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b6e8: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x16b6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x16b6ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b6ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6f0: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x16B6F0u;
    SET_GPR_U32(ctx, 31, 0x16B6F8u);
    ctx->pc = 0x16B6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B6F0u;
    // 0x16b6f4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x16B6F0u, 0x16B6F8u)) {
        return;
    }
    ctx->pc = 0x16B6F8u;
label_16b6f8:
    // 0x16b6f8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x16B6F8u;
    {
        const bool branch_taken_0x16b6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6F8u;
        // 0x16b6fc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6f8) {
            ctx->pc = 0x16B798u;
            goto label_16b798;
        }
    }
    ctx->pc = 0x16B700u;
label_16b700:
    // 0x16b700: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x16b700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b708: 0xc081b56  jal         func_206D58
    ctx->pc = 0x16B708u;
    SET_GPR_U32(ctx, 31, 0x16B710u);
    ctx->pc = 0x16B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B708u;
    // 0x16b70c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x16B708u, 0x16B710u)) {
        return;
    }
    ctx->pc = 0x16B710u;
label_16b710:
    // 0x16b710: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x16B710u;
    {
        const bool branch_taken_0x16b710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B710u;
        // 0x16b714: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b710) {
            ctx->pc = 0x16B794u;
            goto label_16b794;
        }
    }
    ctx->pc = 0x16B718u;
label_16b718:
    // 0x16b718: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16b718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b71c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16b720: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x16B720u;
    {
        const bool branch_taken_0x16b720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B720u;
        // 0x16b724: 0xae23005c  sw          $v1, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b720) {
            ctx->pc = 0x16B794u;
            goto label_16b794;
        }
    }
    ctx->pc = 0x16B728u;
label_16b728:
    // 0x16b728: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b72c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16b730: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x16B730u;
    {
        const bool branch_taken_0x16b730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B730u;
        // 0x16b734: 0xae230060  sw          $v1, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b730) {
            ctx->pc = 0x16B794u;
            goto label_16b794;
        }
    }
    ctx->pc = 0x16B738u;
label_16b738:
    // 0x16b738: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16b738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b73c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16b73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b740: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x16B740u;
    {
        const bool branch_taken_0x16b740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B740u;
        // 0x16b744: 0xe6200078  swc1        $f0, 0x78($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b740) {
            ctx->pc = 0x16B794u;
            goto label_16b794;
        }
    }
    ctx->pc = 0x16B748u;
label_16b748:
    // 0x16b748: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16b748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b74c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x16b74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b750: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16B750u;
    {
        const bool branch_taken_0x16b750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B750u;
        // 0x16b754: 0xe620007c  swc1        $f0, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b750) {
            ctx->pc = 0x16B794u;
            goto label_16b794;
        }
    }
    ctx->pc = 0x16B758u;
label_16b758:
    // 0x16b758: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16b758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b75c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16b75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16b760: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B760u;
    {
        const bool branch_taken_0x16b760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B760u;
        // 0x16b764: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b760) {
            ctx->pc = 0x16B770u;
            goto label_16b770;
        }
    }
    ctx->pc = 0x16B768u;
    // 0x16b768: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16B768u;
    {
        const bool branch_taken_0x16b768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B768u;
        // 0x16b76c: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b768) {
            ctx->pc = 0x16B794u;
            goto label_16b794;
        }
    }
    ctx->pc = 0x16B770u;
label_16b770:
    // 0x16b770: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16B770u;
    {
        const bool branch_taken_0x16b770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B770u;
        // 0x16b774: 0xae200080  sw          $zero, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b770) {
            ctx->pc = 0x16B794u;
            goto label_16b794;
        }
    }
    ctx->pc = 0x16B778u;
label_16b778:
    // 0x16b778: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16b778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b77c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16b780: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B780u;
    {
        const bool branch_taken_0x16b780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B780u;
        // 0x16b784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b780) {
            ctx->pc = 0x16B790u;
            goto label_16b790;
        }
    }
    ctx->pc = 0x16B788u;
    // 0x16b788: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16B788u;
    {
        const bool branch_taken_0x16b788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B788u;
        // 0x16b78c: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b788) {
            ctx->pc = 0x16B794u;
            goto label_16b794;
        }
    }
    ctx->pc = 0x16B790u;
label_16b790:
    // 0x16b790: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x16b790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
label_16b794:
    // 0x16b794: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16b794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16b798:
    // 0x16b798: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16b798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b79c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16b79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b7a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b7a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b7a8: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16B7A8u;
    SET_GPR_U32(ctx, 31, 0x16B7B0u);
    ctx->pc = 0x16B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B7A8u;
    // 0x16b7ac: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16B7A8u, 0x16B7B0u)) {
        return;
    }
    ctx->pc = 0x16B7B0u;
label_16b7b0:
    // 0x16b7b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b7b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b7b8: 0x5460ffb9  bnel        $v1, $zero, . + 4 + (-0x47 << 2)
    ctx->pc = 0x16B7B8u;
    {
        const bool branch_taken_0x16b7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b7b8) {
            ctx->pc = 0x16B7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B7B8u;
            // 0x16b7bc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b6a0;
        }
    }
    ctx->pc = 0x16B7C0u;
    // 0x16b7c0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x16b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_16b7c4:
    // 0x16b7c4: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x16b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x16b7c8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B7C8u;
    {
        const bool branch_taken_0x16b7c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B7C8u;
        // 0x16b7cc: 0xae220088  sw          $v0, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b7c8) {
            ctx->pc = 0x16B7DCu;
            goto label_16b7dc;
        }
    }
    ctx->pc = 0x16B7D0u;
    // 0x16b7d0: 0x34620020  ori         $v0, $v1, 0x20
    ctx->pc = 0x16b7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x16b7d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16b7d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16b7d8: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x16b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_16b7dc:
    // 0x16b7dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16b7dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b7e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16b7e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b7e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16b7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x16B7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B7E8u;
        // 0x16b7ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B7F0u;
}
